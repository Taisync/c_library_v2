#pragma once
// MESSAGE EC_GIMBAL_CALIBRATION PACKING

#define MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION 11051


typedef struct __mavlink_ec_gimbal_calibration_t {
 uint8_t cali_all; /*<  (cali_all:1,calibration all auto, else not).*/
 uint8_t axis; /*<  (based enum GIMBAL_AXIS,).*/
 uint8_t type; /*<  (based enum GIMBAL_CALIBRATION_TYPE).*/
} mavlink_ec_gimbal_calibration_t;

#define MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN 3
#define MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN 3

#define MAVLINK_MSG_ID_11051_LEN 3
#define MAVLINK_MSG_ID_11051_MIN_LEN 3

#define MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_CRC 55
#define MAVLINK_MSG_ID_11051_CRC 55



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EC_GIMBAL_CALIBRATION { \
    11051, \
    "EC_GIMBAL_CALIBRATION", \
    3, \
    {  { "cali_all", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ec_gimbal_calibration_t, cali_all) }, \
         { "axis", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ec_gimbal_calibration_t, axis) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ec_gimbal_calibration_t, type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EC_GIMBAL_CALIBRATION { \
    "EC_GIMBAL_CALIBRATION", \
    3, \
    {  { "cali_all", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ec_gimbal_calibration_t, cali_all) }, \
         { "axis", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ec_gimbal_calibration_t, axis) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ec_gimbal_calibration_t, type) }, \
         } \
}
#endif

/**
 * @brief Pack a ec_gimbal_calibration message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cali_all  (cali_all:1,calibration all auto, else not).
 * @param axis  (based enum GIMBAL_AXIS,).
 * @param type  (based enum GIMBAL_CALIBRATION_TYPE).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ec_gimbal_calibration_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cali_all, uint8_t axis, uint8_t type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN];
    _mav_put_uint8_t(buf, 0, cali_all);
    _mav_put_uint8_t(buf, 1, axis);
    _mav_put_uint8_t(buf, 2, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN);
#else
    mavlink_ec_gimbal_calibration_t packet;
    packet.cali_all = cali_all;
    packet.axis = axis;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_CRC);
}

/**
 * @brief Pack a ec_gimbal_calibration message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cali_all  (cali_all:1,calibration all auto, else not).
 * @param axis  (based enum GIMBAL_AXIS,).
 * @param type  (based enum GIMBAL_CALIBRATION_TYPE).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ec_gimbal_calibration_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cali_all,uint8_t axis,uint8_t type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN];
    _mav_put_uint8_t(buf, 0, cali_all);
    _mav_put_uint8_t(buf, 1, axis);
    _mav_put_uint8_t(buf, 2, type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN);
#else
    mavlink_ec_gimbal_calibration_t packet;
    packet.cali_all = cali_all;
    packet.axis = axis;
    packet.type = type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_CRC);
}

/**
 * @brief Encode a ec_gimbal_calibration struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ec_gimbal_calibration C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ec_gimbal_calibration_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ec_gimbal_calibration_t* ec_gimbal_calibration)
{
    return mavlink_msg_ec_gimbal_calibration_pack(system_id, component_id, msg, ec_gimbal_calibration->cali_all, ec_gimbal_calibration->axis, ec_gimbal_calibration->type);
}

/**
 * @brief Encode a ec_gimbal_calibration struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ec_gimbal_calibration C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ec_gimbal_calibration_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ec_gimbal_calibration_t* ec_gimbal_calibration)
{
    return mavlink_msg_ec_gimbal_calibration_pack_chan(system_id, component_id, chan, msg, ec_gimbal_calibration->cali_all, ec_gimbal_calibration->axis, ec_gimbal_calibration->type);
}

/**
 * @brief Send a ec_gimbal_calibration message
 * @param chan MAVLink channel to send the message
 *
 * @param cali_all  (cali_all:1,calibration all auto, else not).
 * @param axis  (based enum GIMBAL_AXIS,).
 * @param type  (based enum GIMBAL_CALIBRATION_TYPE).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ec_gimbal_calibration_send(mavlink_channel_t chan, uint8_t cali_all, uint8_t axis, uint8_t type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN];
    _mav_put_uint8_t(buf, 0, cali_all);
    _mav_put_uint8_t(buf, 1, axis);
    _mav_put_uint8_t(buf, 2, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION, buf, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_CRC);
#else
    mavlink_ec_gimbal_calibration_t packet;
    packet.cali_all = cali_all;
    packet.axis = axis;
    packet.type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION, (const char *)&packet, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_CRC);
#endif
}

/**
 * @brief Send a ec_gimbal_calibration message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ec_gimbal_calibration_send_struct(mavlink_channel_t chan, const mavlink_ec_gimbal_calibration_t* ec_gimbal_calibration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ec_gimbal_calibration_send(chan, ec_gimbal_calibration->cali_all, ec_gimbal_calibration->axis, ec_gimbal_calibration->type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION, (const char *)ec_gimbal_calibration, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ec_gimbal_calibration_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cali_all, uint8_t axis, uint8_t type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, cali_all);
    _mav_put_uint8_t(buf, 1, axis);
    _mav_put_uint8_t(buf, 2, type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION, buf, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_CRC);
#else
    mavlink_ec_gimbal_calibration_t *packet = (mavlink_ec_gimbal_calibration_t *)msgbuf;
    packet->cali_all = cali_all;
    packet->axis = axis;
    packet->type = type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION, (const char *)packet, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_CRC);
#endif
}
#endif

#endif

// MESSAGE EC_GIMBAL_CALIBRATION UNPACKING


/**
 * @brief Get field cali_all from ec_gimbal_calibration message
 *
 * @return  (cali_all:1,calibration all auto, else not).
 */
static inline uint8_t mavlink_msg_ec_gimbal_calibration_get_cali_all(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field axis from ec_gimbal_calibration message
 *
 * @return  (based enum GIMBAL_AXIS,).
 */
static inline uint8_t mavlink_msg_ec_gimbal_calibration_get_axis(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field type from ec_gimbal_calibration message
 *
 * @return  (based enum GIMBAL_CALIBRATION_TYPE).
 */
static inline uint8_t mavlink_msg_ec_gimbal_calibration_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a ec_gimbal_calibration message into a struct
 *
 * @param msg The message to decode
 * @param ec_gimbal_calibration C-struct to decode the message contents into
 */
static inline void mavlink_msg_ec_gimbal_calibration_decode(const mavlink_message_t* msg, mavlink_ec_gimbal_calibration_t* ec_gimbal_calibration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ec_gimbal_calibration->cali_all = mavlink_msg_ec_gimbal_calibration_get_cali_all(msg);
    ec_gimbal_calibration->axis = mavlink_msg_ec_gimbal_calibration_get_axis(msg);
    ec_gimbal_calibration->type = mavlink_msg_ec_gimbal_calibration_get_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN? msg->len : MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN;
        memset(ec_gimbal_calibration, 0, MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_LEN);
    memcpy(ec_gimbal_calibration, _MAV_PAYLOAD(msg), len);
#endif
}
