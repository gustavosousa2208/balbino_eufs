// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/ConeArray.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/cone_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeArray_unknown_color_cones
{
public:
  explicit Init_ConeArray_unknown_color_cones(::eufs_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::ConeArray unknown_color_cones(::eufs_msgs::msg::ConeArray::_unknown_color_cones_type arg)
  {
    msg_.unknown_color_cones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_big_orange_cones
{
public:
  explicit Init_ConeArray_big_orange_cones(::eufs_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  Init_ConeArray_unknown_color_cones big_orange_cones(::eufs_msgs::msg::ConeArray::_big_orange_cones_type arg)
  {
    msg_.big_orange_cones = std::move(arg);
    return Init_ConeArray_unknown_color_cones(msg_);
  }

private:
  ::eufs_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_orange_cones
{
public:
  explicit Init_ConeArray_orange_cones(::eufs_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  Init_ConeArray_big_orange_cones orange_cones(::eufs_msgs::msg::ConeArray::_orange_cones_type arg)
  {
    msg_.orange_cones = std::move(arg);
    return Init_ConeArray_big_orange_cones(msg_);
  }

private:
  ::eufs_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_yellow_cones
{
public:
  explicit Init_ConeArray_yellow_cones(::eufs_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  Init_ConeArray_orange_cones yellow_cones(::eufs_msgs::msg::ConeArray::_yellow_cones_type arg)
  {
    msg_.yellow_cones = std::move(arg);
    return Init_ConeArray_orange_cones(msg_);
  }

private:
  ::eufs_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_blue_cones
{
public:
  explicit Init_ConeArray_blue_cones(::eufs_msgs::msg::ConeArray & msg)
  : msg_(msg)
  {}
  Init_ConeArray_yellow_cones blue_cones(::eufs_msgs::msg::ConeArray::_blue_cones_type arg)
  {
    msg_.blue_cones = std::move(arg);
    return Init_ConeArray_yellow_cones(msg_);
  }

private:
  ::eufs_msgs::msg::ConeArray msg_;
};

class Init_ConeArray_header
{
public:
  Init_ConeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeArray_blue_cones header(::eufs_msgs::msg::ConeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConeArray_blue_cones(msg_);
  }

private:
  ::eufs_msgs::msg::ConeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::ConeArray>()
{
  return eufs_msgs::msg::builder::Init_ConeArray_header();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ARRAY__BUILDER_HPP_
