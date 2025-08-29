// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_driver:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_driver/msg/motor_status.hpp"


#ifndef MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_driver__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__motor_driver__msg__MotorStatus __declspec(deprecated)
#endif

namespace motor_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature_c = 0.0f;
      this->current_a = 0.0f;
      this->status_flags = 0;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature_c = 0.0f;
      this->current_a = 0.0f;
      this->status_flags = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _temperature_c_type =
    float;
  _temperature_c_type temperature_c;
  using _current_a_type =
    float;
  _current_a_type current_a;
  using _status_flags_type =
    uint16_t;
  _status_flags_type status_flags;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__temperature_c(
    const float & _arg)
  {
    this->temperature_c = _arg;
    return *this;
  }
  Type & set__current_a(
    const float & _arg)
  {
    this->current_a = _arg;
    return *this;
  }
  Type & set__status_flags(
    const uint16_t & _arg)
  {
    this->status_flags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_driver::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_driver::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_driver::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_driver::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_driver::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_driver::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_driver::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_driver::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_driver::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_driver::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_driver__msg__MotorStatus
    std::shared_ptr<motor_driver::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_driver__msg__MotorStatus
    std::shared_ptr<motor_driver::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->temperature_c != other.temperature_c) {
      return false;
    }
    if (this->current_a != other.current_a) {
      return false;
    }
    if (this->status_flags != other.status_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  motor_driver::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_driver

#endif  // MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
