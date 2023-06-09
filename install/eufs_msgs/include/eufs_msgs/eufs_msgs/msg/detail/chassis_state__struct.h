// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/ChassisState.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CHASSIS_STATE__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__CHASSIS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'steering_commander'
// Member 'throttle_commander'
// Member 'front_brake_commander'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChassisState in the package eufs_msgs.
typedef struct eufs_msgs__msg__ChassisState
{
  std_msgs__msg__Header header;
  bool throttle_relay_enabled;
  bool autonomous_enabled;
  bool runstop_motion_enabled;
  rosidl_runtime_c__String steering_commander;
  double steering;
  rosidl_runtime_c__String throttle_commander;
  double throttle;
  rosidl_runtime_c__String front_brake_commander;
  double front_brake;
} eufs_msgs__msg__ChassisState;

// Struct for a sequence of eufs_msgs__msg__ChassisState.
typedef struct eufs_msgs__msg__ChassisState__Sequence
{
  eufs_msgs__msg__ChassisState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__ChassisState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__CHASSIS_STATE__STRUCT_H_
