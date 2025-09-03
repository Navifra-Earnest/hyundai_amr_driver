// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_driver:msg/MotorAlarm.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__STRUCT_HPP_
#define MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__STRUCT_HPP_

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
# define DEPRECATED__motor_driver__msg__MotorAlarm __attribute__((deprecated))
#else
# define DEPRECATED__motor_driver__msg__MotorAlarm __declspec(deprecated)
#endif

namespace motor_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorAlarm_
{
  using Type = MotorAlarm_<ContainerAllocator>;

  explicit MotorAlarm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
      this->message = "";
    }
  }

  explicit MotorAlarm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
      this->message = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_driver::msg::MotorAlarm_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_driver::msg::MotorAlarm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_driver::msg::MotorAlarm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_driver::msg::MotorAlarm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_driver::msg::MotorAlarm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_driver::msg::MotorAlarm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_driver::msg::MotorAlarm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_driver::msg::MotorAlarm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_driver::msg::MotorAlarm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_driver::msg::MotorAlarm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_driver__msg__MotorAlarm
    std::shared_ptr<motor_driver::msg::MotorAlarm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_driver__msg__MotorAlarm
    std::shared_ptr<motor_driver::msg::MotorAlarm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorAlarm_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorAlarm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorAlarm_

// alias to use template instance with default allocator
using MotorAlarm =
  motor_driver::msg::MotorAlarm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_driver

#endif  // MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__STRUCT_HPP_
