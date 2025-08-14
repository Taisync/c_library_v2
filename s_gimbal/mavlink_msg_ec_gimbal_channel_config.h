#pragma once
// MESSAGE EC_GIMBAL_CHANNEL_CONFIG PACKING

#define MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG 11053


typedef struct __mavlink_ec_gimbal_channel_config_t {
 uint8_t function_mode[8]; /*<  ( based enum GIMBAL_CHENNEL_TYPE).*/
 uint8_t channel_num[8]; /*<  radio channel num:1~16.*/
} mavlink_ec_gimbal_channel_config_t;

#define MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN 16
#define MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN 16
#define MAVLINK_MSG_ID_11053_LEN 16
#define MAVLINK_MSG_ID_11053_MIN_LEN 16

#define MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_CRC 5
#define MAVLINK_MSG_ID_11053_CRC 5

#define MAVLINK_MSG_EC_GIMBAL_CHANNEL_CONFIG_FIELD_FUNCTION_MODE_LEN 8
#define MAVLINK_MSG_EC_GIMBAL_CHANNEL_CONFIG_FIELD_CHANNEL_NUM_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EC_GIMBAL_CHANNEL_CONFIG { \
    11053, \
    "EC_GIMBAL_CHANNEL_CONFIG", \
    2, \
    {  { "function_mode", NULL, MAVLINK_TYPE_UINT8_T, 8, 0, offsetof(mavlink_ec_gimbal_channel_config_t, function_mode) }, \
         { "channel_num", NULL, MAVLINK_TYPE_UINT8_T, 8, 8, offsetof(mavlink_ec_gimbal_channel_config_t, channel_num) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EC_GIMBAL_CHANNEL_CONFIG { \
    "EC_GIMBAL_CHANNEL_CONFIG", \
    2, \
    {  { "function_mode", NULL, MAVLINK_TYPE_UINT8_T, 8, 0, offsetof(mavlink_ec_gimbal_channel_config_t, function_mode) }, \
         { "channel_num", NULL, MAVLINK_TYPE_UINT8_T, 8, 8, offsetof(mavlink_ec_gimbal_channel_config_t, channel_num) }, \
         } \
}
#endif

/**
 * @brief Pack a ec_gimbal_channel_config message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param function_mode  ( based enum GIMBAL_CHENNEL_TYPE).
 * @param channel_num  radio channel num:1~16.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ec_gimbal_channel_config_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *function_mode, const uint8_t *channel_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN];

    _mav_put_uint8_t_array(buf, 0, function_mode, 8);
    _mav_put_uint8_t_array(buf, 8, channel_num, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN);
#else
    mavlink_ec_gimbal_channel_config_t packet;

    mav_array_memcpy(packet.function_mode, function_mode, sizeof(uint8_t)*8);
    mav_array_memcpy(packet.channel_num, channel_num, sizeof(uint8_t)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_CRC);
}

/**
 * @brief Pack a ec_gimbal_channel_config message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param function_mode  ( based enum GIMBAL_CHENNEL_TYPE).
 * @param channel_num  radio channel num:1~16.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ec_gimbal_channel_config_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *function_mode,const uint8_t *channel_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN];

    _mav_put_uint8_t_array(buf, 0, function_mode, 8);
    _mav_put_uint8_t_array(buf, 8, channel_num, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN);
#else
    mavlink_ec_gimbal_channel_config_t packet;

    mav_array_memcpy(packet.function_mode, function_mode, sizeof(uint8_t)*8);
    mav_array_memcpy(packet.channel_num, channel_num, sizeof(uint8_t)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_CRC);
}

/**
 * @brief Encode a ec_gimbal_channel_config struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ec_gimbal_channel_config C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ec_gimbal_channel_config_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ec_gimbal_channel_config_t* ec_gimbal_channel_config)
{
    return mavlink_msg_ec_gimbal_channel_config_pack(system_id, component_id, msg, ec_gimbal_channel_config->function_mode, ec_gimbal_channel_config->channel_num);
}

/**
 * @brief Encode a ec_gimbal_channel_config struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ec_gimbal_channel_config C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ec_gimbal_channel_config_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ec_gimbal_channel_config_t* ec_gimbal_channel_config)
{
    return mavlink_msg_ec_gimbal_channel_config_pack_chan(system_id, component_id, chan, msg, ec_gimbal_channel_config->function_mode, ec_gimbal_channel_config->channel_num);
}

/**
 * @brief Send a ec_gimbal_channel_config message
 * @param chan MAVLink channel to send the message
 *
 * @param function_mode  ( based enum GIMBAL_CHENNEL_TYPE).
 * @param channel_num  radio channel num:1~16.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ec_gimbal_channel_config_send(mavlink_channel_t chan, const uint8_t *function_mode, const uint8_t *channel_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN];

    _mav_put_uint8_t_array(buf, 0, function_mode, 8);
    _mav_put_uint8_t_array(buf, 8, channel_num, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG, buf, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_CRC);
#else
    mavlink_ec_gimbal_channel_config_t packet;

    mav_array_memcpy(packet.function_mode, function_mode, sizeof(uint8_t)*8);
    mav_array_memcpy(packet.channel_num, channel_num, sizeof(uint8_t)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG, (const char *)&packet, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_CRC);
#endif
}

/**
 * @brief Send a ec_gimbal_channel_config message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ec_gimbal_channel_config_send_struct(mavlink_channel_t chan, const mavlink_ec_gimbal_channel_config_t* ec_gimbal_channel_config)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ec_gimbal_channel_config_send(chan, ec_gimbal_channel_config->function_mode, ec_gimbal_channel_config->channel_num);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG, (const char *)ec_gimbal_channel_config, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_CRC);
#endif
}

#if MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ec_gimbal_channel_config_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *function_mode, const uint8_t *channel_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_uint8_t_array(buf, 0, function_mode, 8);
    _mav_put_uint8_t_array(buf, 8, channel_num, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG, buf, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_CRC);
#else
    mavlink_ec_gimbal_channel_config_t *packet = (mavlink_ec_gimbal_channel_config_t *)msgbuf;

    mav_array_memcpy(packet->function_mode, function_mode, sizeof(uint8_t)*8);
    mav_array_memcpy(packet->channel_num, channel_num, sizeof(uint8_t)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG, (const char *)packet, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_CRC);
#endif
}
#endif

#endif

// MESSAGE EC_GIMBAL_CHANNEL_CONFIG UNPACKING


/**
 * @brief Get field function_mode from ec_gimbal_channel_config message
 *
 * @return  ( based enum GIMBAL_CHENNEL_TYPE).
 */
static inline uint16_t mavlink_msg_ec_gimbal_channel_config_get_function_mode(const mavlink_message_t* msg, uint8_t *function_mode)
{
    return _MAV_RETURN_uint8_t_array(msg, function_mode, 8,  0);
}

/**
 * @brief Get field channel_num from ec_gimbal_channel_config message
 *
 * @return  radio channel num:1~16.
 */
static inline uint16_t mavlink_msg_ec_gimbal_channel_config_get_channel_num(const mavlink_message_t* msg, uint8_t *channel_num)
{
    return _MAV_RETURN_uint8_t_array(msg, channel_num, 8,  8);
}

/**
 * @brief Decode a ec_gimbal_channel_config message into a struct
 *
 * @param msg The message to decode
 * @param ec_gimbal_channel_config C-struct to decode the message contents into
 */
static inline void mavlink_msg_ec_gimbal_channel_config_decode(const mavlink_message_t* msg, mavlink_ec_gimbal_channel_config_t* ec_gimbal_channel_config)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ec_gimbal_channel_config_get_function_mode(msg, ec_gimbal_channel_config->function_mode);
    mavlink_msg_ec_gimbal_channel_config_get_channel_num(msg, ec_gimbal_channel_config->channel_num);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN? msg->len : MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN;
        memset(ec_gimbal_channel_config, 0, MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_LEN);
    memcpy(ec_gimbal_channel_config, _MAV_PAYLOAD(msg), len);
#endif
}
