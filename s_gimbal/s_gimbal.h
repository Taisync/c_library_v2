/** @file
 *  @brief MAVLink comm protocol generated from s_gimbal.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_S_GIMBAL_H
#define MAVLINK_S_GIMBAL_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_S_GIMBAL.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{11047, 38, 1, 1, 0, 0, 0}, {11048, 214, 1, 1, 0, 0, 0}, {11050, 64, 10, 10, 0, 0, 0}, {11051, 55, 3, 3, 0, 0, 0}, {11052, 219, 10, 10, 0, 0, 0}, {11053, 5, 16, 16, 0, 0, 0}}
#endif

#include "protocol.h"

#define MAVLINK_ENABLED_S_GIMBAL

// ENUM DEFINITIONS


// /** @brief  */
// #ifndef HAVE_ENUM_MAV_STATUS_GIMBAL
// #define HAVE_ENUM_MAV_STATUS_GIMBAL
// typedef enum MAV_STATUS_GIMBAL
// {
//    MAV_MODE_GIMBAL_UNINITIALIZED=0, /* Gimbal is powered on but has not started initializing yet. | */
//    MAV_MODE_GIMBAL_BOOTING=1, /* Gimbal is is booting up.. | */
//    MAV_MODE_GIMBAL_STANDBY=2, /* Gimbal is standby, waiting for start. | */
//    MAV_MODE_GIMBAL_ACTIVE_FOLLOW=3, /* Gimbal is actively stabilizing. | */
//    MAV_MODE_GIMBAL_ACTIVE_GLOBAL=4, /* Gimbal is actively stabilizing. | */
//    MAV_MODE_GIMBAL_CALIBRATING=5, /* Gimbal is currently running calibration on  axis. | */
//    MAV_MODE_GIMBAL_CALIBRATION_FINISHED=6, /* Gimbal calibration is finished on axis. | */
//    MAV_MODE_GIMBAL_NO_IMU=7, /* Gimbal has no imu detected. | */
//    MAV_MODE_GIMBAL_NO_MAG_ROLL=8, /* Gimbal has no roll encoder detected. | */
//    MAV_MODE_GIMBAL_NO_MAG_PITCH=9, /* Gimbal has no pitch encoder detected. | */
//    MAV_MODE_GIMBAL_NO_MAG_YAW=10, /* Gimbal has no yaw encoder detected. | */
//    GIMBAL_ROLL_CALIBRATION_REQUIRED=11, /* This roll axis need calibration. | */
//    GIMBAL_PITCH_CALIBRATION_REQUIRED=12, /* This pitch axis haven't calibration. | */
//    GIMBAL_YAW_CALIBRATION_REQUIRED=13, /* This yaw axis need calibration. | */
//    MAV_STATUS_GIMBAL_ENUM_END=14, /*  | */
// } MAV_STATUS_GIMBAL;
// #endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS
#define HAVE_ENUM_GIMBAL_AXIS
typedef enum GIMBAL_AXIS
{
   GIMBAL_AXIS_PITCH=0, /* Gimbal yaw axis. | */
   GIMBAL_AXIS_ROLL=1, /* Gimbal pitch axis. | */
   GIMBAL_AXIS_YAW=2, /* Gimbal roll axis. | */
   GIMBAL_AXIS_ENUM_END=3, /*  | */
} GIMBAL_AXIS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_CALIBRATION_TYPE
#define HAVE_ENUM_GIMBAL_CALIBRATION_TYPE
typedef enum GIMBAL_CALIBRATION_TYPE
{
   GIMBAL_ZERO_POINT_CALIBRATION=0, /* encoder zero point calibration. | */
   GIMBAL_PREFRONT_POINT_CALIBRATION=1, /* encoder pre front point calibration. | */
   GIMBAL_FRONT_POINT_CALIBRATION=2, /* encoder front point calibration. | */
   GIMBAL_LINEAR_CALIBRATION=3, /* encoder linear calibration. | */
   GIMBAL_IMU_HEXAHEDRON_CALIBRATION=4, /* imu accelerometer six faces calibration. | */
   GIMBAL_IMU_TEMPERATURE_CALIBRATION=5, /* imu temperature calibration. | */
   GIMBAL_CALIBRATION_TYPE_ENUM_END=6, /*  | */
} GIMBAL_CALIBRATION_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_CHENNEL_TYPE
#define HAVE_ENUM_GIMBAL_CHENNEL_TYPE
typedef enum GIMBAL_CHENNEL_TYPE
{
   PITCH_FUNCTION=0, /* pitch control function. | */
   YAW_FUNCTION=1, /* yaw control function. | */
   PITCH_MODE_FUNCTION=2, /* pitch control mode function. | */
   YAW_MODE_FUNCTION=3, /* yaw control mode function. | */
   CAMERA_ZOOM_FUNCTION=4, /* camera zoom function. | */
   TAKE_PHOTO_FUNCTION=5, /* take photo function. | */
   VIDEO_RECORD_FUNCTION=6, /* video record function. | */
   OBJECT_TRACKER_FUNCTION=7, /* object tracker function. | */
   GIMBAL_CHENNEL_TYPE_ENUM_END=8, /*  | */
} GIMBAL_CHENNEL_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_REQUEST_CMD_TYPES
#define HAVE_ENUM_REQUEST_CMD_TYPES
typedef enum REQUEST_CMD_TYPES
{
   NONE_REQUEST=0, /* none clear request. | */
   CONNECT_REQUEST=1, /* connection request, used in uart and ethernet connect. | */
   UPGRADE_REQUEST=2, /* upgrade program request . | */
   VERSION_REQUEST=3, /* version request. | */
   CHANNEL_REQUEST=4, /* control channel request. | */
   REQUEST_CMD_TYPES_ENUM_END=5, /*  | */
} REQUEST_CMD_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_CAMERA_STATUS_TYPES
#define HAVE_ENUM_CAMERA_STATUS_TYPES
typedef enum CAMERA_STATUS_TYPES
{
   CAMERA_STATUS_TYPE_HEARTBEAT=0, /* Camera heartbeat, announce camera component ID at 1Hz. | */
   CAMERA_STATUS_TYPE_TRIGGER=1, /* Camera image triggered. | */
   CAMERA_STATUS_TYPE_DISCONNECT=2, /* Camera connection lost. | */
   CAMERA_STATUS_TYPE_ERROR=3, /* Camera unknown error. | */
   CAMERA_STATUS_TYPE_LOWBATT=4, /* Camera battery low. Parameter p1 shows reported voltage. | */
   CAMERA_STATUS_TYPE_LOWSTORE=5, /* Camera storage low. Parameter p1 shows reported shots remaining. | */
   CAMERA_STATUS_TYPE_LOWSTOREV=6, /* Camera storage low. Parameter p1 shows reported video minutes remaining. | */
   CAMERA_STATUS_TYPES_ENUM_END=7, /*  | */
} CAMERA_STATUS_TYPES;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ec_request.h"
#include "./mavlink_msg_ec_version.h"
#include "./mavlink_msg_ec_gimbal_control.h"
#include "./mavlink_msg_ec_gimbal_calibration.h"
#include "./mavlink_msg_ec_gimbal_report.h"
#include "./mavlink_msg_ec_gimbal_channel_config.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2152362362362

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_EC_REQUEST, MAVLINK_MESSAGE_INFO_EC_VERSION, MAVLINK_MESSAGE_INFO_EC_GIMBAL_CONTROL, MAVLINK_MESSAGE_INFO_EC_GIMBAL_CALIBRATION, MAVLINK_MESSAGE_INFO_EC_GIMBAL_REPORT, MAVLINK_MESSAGE_INFO_EC_GIMBAL_CHANNEL_CONFIG}
# define MAVLINK_MESSAGE_NAMES {{ "EC_GIMBAL_CALIBRATION", 11051 }, { "EC_GIMBAL_CHANNEL_CONFIG", 11053 }, { "EC_GIMBAL_CONTROL", 11050 }, { "EC_GIMBAL_REPORT", 11052 }, { "EC_REQUEST", 11047 }, { "EC_VERSION", 11048 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_S_GIMBAL_H
