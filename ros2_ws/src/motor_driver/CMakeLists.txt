cmake_minimum_required(VERSION 3.8)
project(motor_driver)

# 필요한 모든 패키지를 찾음
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED) # Lifecycle 노드를 위해 추가
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(Boost REQUIRED COMPONENTS thread)

# 사용자 정의 인터페이스로부터 코드 생성
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MotorStatus.msg"
  "msg/MotorAlarm.msg"
  "srv/GetDiagnostics.srv"
  DEPENDENCIES std_msgs
)

# 실행 파일 정의 (헤더 파일 분리에 따라 motor_driver_node.hpp 포함)
add_executable(motor_driver_node
  src/motor_driver_node.cpp
  src/can_interface.cpp
  src/motor_controller.cpp
)

# ROS 2 패키지 의존성 연결
ament_target_dependencies(
  motor_driver_node
  rclcpp
  rclcpp_lifecycle
  std_msgs
)

# 생성된 메시지/서비스의 C++ 타입을 가져오기
rosidl_get_typesupport_target(
  motor_driver_cpp_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_cpp"
)

# 컴파일러가 헤더 파일을 찾을 수 있도록 경로를 명시적으로 추가
target_include_directories(motor_driver_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

# 외부 라이브러리(Boost)와 생성된 메시지 타입을 연결
target_link_libraries(motor_driver_node
  ${motor_driver_cpp_typesupport_target}
  Boost::thread
)

# 실행 파일을 설치하도록 규칙 추가
install(
  TARGETS motor_driver_node
  DESTINATION lib/${PROJECT_NAME}
)

# ament_package()는 마지막에 인자 없이 호출
ament_package()
