// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_driver/srv/get_diagnostics.hpp"


#ifndef MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__STRUCT_HPP_
#define MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_driver__srv__GetDiagnostics_Request __attribute__((deprecated))
#else
# define DEPRECATED__motor_driver__srv__GetDiagnostics_Request __declspec(deprecated)
#endif

namespace motor_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDiagnostics_Request_
{
  using Type = GetDiagnostics_Request_<ContainerAllocator>;

  explicit GetDiagnostics_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetDiagnostics_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_driver__srv__GetDiagnostics_Request
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_driver__srv__GetDiagnostics_Request
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDiagnostics_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDiagnostics_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDiagnostics_Request_

// alias to use template instance with default allocator
using GetDiagnostics_Request =
  motor_driver::srv::GetDiagnostics_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motor_driver


// Include directives for member types
// Member 'status'
#include "motor_driver/msg/detail/motor_status__struct.hpp"
// Member 'alarms'
#include "motor_driver/msg/detail/motor_alarm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_driver__srv__GetDiagnostics_Response __attribute__((deprecated))
#else
# define DEPRECATED__motor_driver__srv__GetDiagnostics_Response __declspec(deprecated)
#endif

namespace motor_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDiagnostics_Response_
{
  using Type = GetDiagnostics_Response_<ContainerAllocator>;

  explicit GetDiagnostics_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GetDiagnostics_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_type =
    motor_driver::msg::MotorStatus_<ContainerAllocator>;
  _status_type status;
  using _alarms_type =
    std::vector<motor_driver::msg::MotorAlarm_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motor_driver::msg::MotorAlarm_<ContainerAllocator>>>;
  _alarms_type alarms;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status(
    const motor_driver::msg::MotorStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__alarms(
    const std::vector<motor_driver::msg::MotorAlarm_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motor_driver::msg::MotorAlarm_<ContainerAllocator>>> & _arg)
  {
    this->alarms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_driver__srv__GetDiagnostics_Response
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_driver__srv__GetDiagnostics_Response
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDiagnostics_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->alarms != other.alarms) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDiagnostics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDiagnostics_Response_

// alias to use template instance with default allocator
using GetDiagnostics_Response =
  motor_driver::srv::GetDiagnostics_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motor_driver


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_driver__srv__GetDiagnostics_Event __attribute__((deprecated))
#else
# define DEPRECATED__motor_driver__srv__GetDiagnostics_Event __declspec(deprecated)
#endif

namespace motor_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDiagnostics_Event_
{
  using Type = GetDiagnostics_Event_<ContainerAllocator>;

  explicit GetDiagnostics_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetDiagnostics_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motor_driver::srv::GetDiagnostics_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motor_driver::srv::GetDiagnostics_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_driver__srv__GetDiagnostics_Event
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_driver__srv__GetDiagnostics_Event
    std::shared_ptr<motor_driver::srv::GetDiagnostics_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDiagnostics_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDiagnostics_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDiagnostics_Event_

// alias to use template instance with default allocator
using GetDiagnostics_Event =
  motor_driver::srv::GetDiagnostics_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motor_driver

namespace motor_driver
{

namespace srv
{

struct GetDiagnostics
{
  using Request = motor_driver::srv::GetDiagnostics_Request;
  using Response = motor_driver::srv::GetDiagnostics_Response;
  using Event = motor_driver::srv::GetDiagnostics_Event;
};

}  // namespace srv

}  // namespace motor_driver

#endif  // MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__STRUCT_HPP_
