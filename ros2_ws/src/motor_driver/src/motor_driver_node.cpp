#include "motor_driver/motor_driver_node.hpp"

using namespace std::chrono_literals;

MotorDriverNode::MotorDriverNode(const rclcpp::NodeOptions & options)
: rclcpp_lifecycle::LifecycleNode("motor_driver_node", options)
{
    // 파라미터 선언은 생성자에서 수행
    this->declare_parameter<std::string>("can_device", "can0");
    this->declare_parameter<double>("control_frequency", 50.0);
    this->declare_parameter<std::vector<int64_t>>("node_ids", {1, 2});
}

// 'Configuring' 상태로 전환될 때 호출: 리소스 할당 및 초기화
CallbackReturn MotorDriverNode::on_configure(const rclcpp_lifecycle::State &)
{
    RCLCPP_INFO(this->get_logger(), "Configuring motor driver...");

    // 파라미터 가져오기
    std::string can_device = this->get_parameter("can_device").as_string();
    double control_frequency = this->get_parameter("control_frequency").as_double();
    auto node_ids_long = this->get_parameter("node_ids").as_integer_array();
    
    node_ids_.clear();
    for(const auto& id : node_ids_long) {
        node_ids_.push_back(static_cast<uint8_t>(id));
    }

    // 모터 컨트롤러 객체 생성 및 CAN 초기화
    controller_ = std::make_shared<MotorController>();
    controller_->init(can_device, node_ids_);

    // 각 노드 ID에 대해 Subscriber와 Publisher, Service 생성
    for (const auto& node_id : node_ids_) {
        std::string id_str = std::to_string(node_id);
        
        target_vel_subs_[node_id] = this->create_subscription<std_msgs::msg::Float32>(
            "/motor" + id_str + "/targetVel", 10,
            [this, node_id](const std_msgs::msg::Float32::SharedPtr msg) {
                // 노드가 Active 상태일 때만 명령을 전달
                if (this->get_current_state().id() == lifecycle_msgs::msg::State::PRIMARY_STATE_ACTIVE) {
                    this->controller_->set_target_velocity(node_id, msg->data);
                }
            });

        feed_vel_pubs_[node_id] = this->create_publisher<std_msgs::msg::Float32>("/motor" + id_str + "/feedVel", 10);
        status_pubs_[node_id] = this->create_publisher<motor_driver::msg::MotorStatus>("/motor" + id_str + "/status", 10);
    }
    
    // 알람 퍼블리셔 생성
    alarm_pub_ = this->create_publisher<motor_driver::msg::MotorAlarm>("/alarm/motor", 10);
    
    diag_service_ = this->create_service<motor_driver::srv::GetDiagnostics>(
        "/diagnostics/motor",
        [this](const std::shared_ptr<motor_driver::srv::GetDiagnostics::Request> request,
               std::shared_ptr<motor_driver::srv::GetDiagnostics::Response> response) {
            (void)request;
            if (!node_ids_.empty()) {
                response->status = this->controller_->get_status(node_ids_[0]);
                response->success = true;
            } else {
                response->success = false;
            }
        });
        
    // 제어 루프 타이머 생성 (아직 시작하지 않음)
    auto period = std::chrono::duration<double>(1.0 / control_frequency);
    control_timer_ = this->create_wall_timer(
        std::chrono::duration_cast<std::chrono::nanoseconds>(period),
        std::bind(&MotorDriverNode::control_loop, this));
    
    // 타이머는 activate 상태가 될 때까지 비활성화
    control_timer_->cancel();

    RCLCPP_INFO(this->get_logger(), "Configuration successful.");
    return CallbackReturn::SUCCESS;
}

// 'Activating' 상태로 전환될 때 호출: 하드웨어 활성화 및 데이터 처리 시작
CallbackReturn MotorDriverNode::on_activate(const rclcpp_lifecycle::State &)
{
    RCLCPP_INFO(this->get_logger(), "Activating motor driver...");

    // Lifecycle Publisher 활성화
    for(auto const& [node_id, pub] : feed_vel_pubs_) {
        pub->on_activate();
    }
    for(auto const& [node_id, pub] : status_pubs_) {
        pub->on_activate();
    }
    alarm_pub_->on_activate(); // 알람 퍼블리셔 활성화

    // 모터 활성화 (Servo ON)
    controller_->enable_motor();

    // 제어 루프 타이머 시작
    control_timer_->reset();

    RCLCPP_INFO(this->get_logger(), "Activation successful. Motors are now active.");
    return CallbackReturn::SUCCESS;
}

// 'Deactivating' 상태로 전환될 때 호출: 하드웨어 비활성화 및 데이터 처리 중지
CallbackReturn MotorDriverNode::on_deactivate(const rclcpp_lifecycle::State &)
{
    RCLCPP_INFO(this->get_logger(), "Deactivating motor driver...");
    
    // 제어 루프 타이머 정지
    control_timer_->cancel();

    // 모터 비활성화 (Servo OFF)
    controller_->disable_motor();

    // Lifecycle Publisher 비활성화
    for(auto const& [node_id, pub] : feed_vel_pubs_) {
        pub->on_deactivate();
    }
    for(auto const& [node_id, pub] : status_pubs_) {
        pub->on_deactivate();
    }
    alarm_pub_->on_deactivate(); // 알람 퍼블리셔 비활성화

    RCLCPP_INFO(this->get_logger(), "Deactivation successful. Motors are now inactive.");
    return CallbackReturn::SUCCESS;
}

// 'CleaningUp' 상태로 전환될 때 호출: 할당된 리소스 해제
CallbackReturn MotorDriverNode::on_cleanup(const rclcpp_lifecycle::State &)
{
    RCLCPP_INFO(this->get_logger(), "Cleaning up motor driver...");

    // 모든 리소스 해제
    control_timer_.reset();
    diag_service_.reset();
    target_vel_subs_.clear();
    feed_vel_pubs_.clear();
    status_pubs_.clear();
    alarm_pub_.reset();
    controller_.reset();

    RCLCPP_INFO(this->get_logger(), "Cleanup successful.");
    return CallbackReturn::SUCCESS;
}

// 'ShuttingDown' 상태로 전환될 때 호출
CallbackReturn MotorDriverNode::on_shutdown(const rclcpp_lifecycle::State &)
{
    RCLCPP_INFO(this->get_logger(), "Shutting down motor driver...");
    
    // 모든 리소스 해제
    control_timer_.reset();
    diag_service_.reset();
    target_vel_subs_.clear();
    feed_vel_pubs_.clear();
    status_pubs_.clear();
    alarm_pub_.reset();
    controller_.reset();

    RCLCPP_INFO(this->get_logger(), "Shutdown successful.");
    return CallbackReturn::SUCCESS;
}

void MotorDriverNode::control_loop()
{
    for (const auto& node_id : node_ids_) {
        auto feed_vel_msg = std_msgs::msg::Float32();
        feed_vel_msg.data = controller_->get_feedback_velocity(node_id);
        if (feed_vel_pubs_[node_id]->is_activated()) {
            feed_vel_pubs_[node_id]->publish(feed_vel_msg);
        }
        
        auto status_msg = controller_->get_status(node_id);
        status_msg.header.stamp = this->now();
        status_msg.header.frame_id = "motor" + std::to_string(node_id) + "_status";
        if (status_pubs_[node_id]->is_activated()) {
            status_pubs_[node_id]->publish(status_msg);
        }

        // 알람 확인 및 발행
        auto alarm_msg = controller_->get_alarm(node_id);
        if (alarm_msg && alarm_pub_->is_activated()) {
            alarm_msg->header.stamp = this->now();
            alarm_msg->header.frame_id = "motor" + std::to_string(node_id) + "_alarm";
            alarm_pub_->publish(*alarm_msg);
        }
    }
}

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::executors::SingleThreadedExecutor executor;
    rclcpp::NodeOptions options;
    auto node = std::make_shared<MotorDriverNode>(options);
    executor.add_node(node->get_node_base_interface());
    executor.spin();
    rclcpp::shutdown();
    return 0;
}

