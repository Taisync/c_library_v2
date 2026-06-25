#pragma once
// MESSAGE EFI_STATUS PACKING

#define MAVLINK_MSG_ID_EFI_STATUS 225


typedef struct __mavlink_efi_status_t {
 float cylinder_head_temperature; /*< [C] */
 float engine_load; /*<  */
 float fuel_consumed; /*< [L] */
 float fuel_flow; /*< [L/h] */
 float rpm; /*< [rpm] */
} mavlink_efi_status_t;

#define MAVLINK_MSG_ID_EFI_STATUS_LEN 20
#define MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN 20
#define MAVLINK_MSG_ID_225_LEN 20
#define MAVLINK_MSG_ID_225_MIN_LEN 20

#define MAVLINK_MSG_ID_EFI_STATUS_CRC 49
#define MAVLINK_MSG_ID_225_CRC 49



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EFI_STATUS { \
    225, \
    "EFI_STATUS", \
    5, \
    {  { "cylinder_head_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_efi_status_t, cylinder_head_temperature) }, \
         { "engine_load", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_efi_status_t, engine_load) }, \
         { "fuel_consumed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_efi_status_t, fuel_consumed) }, \
         { "fuel_flow", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_efi_status_t, fuel_flow) }, \
         { "rpm", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_efi_status_t, rpm) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EFI_STATUS { \
    "EFI_STATUS", \
    5, \
    {  { "cylinder_head_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_efi_status_t, cylinder_head_temperature) }, \
         { "engine_load", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_efi_status_t, engine_load) }, \
         { "fuel_consumed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_efi_status_t, fuel_consumed) }, \
         { "fuel_flow", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_efi_status_t, fuel_flow) }, \
         { "rpm", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_efi_status_t, rpm) }, \
         } \
}
#endif

/**
 * @brief Pack a efi_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cylinder_head_temperature [C] 
 * @param engine_load  
 * @param fuel_consumed [L] 
 * @param fuel_flow [L/h] 
 * @param rpm [rpm] 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_efi_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float cylinder_head_temperature, float engine_load, float fuel_consumed, float fuel_flow, float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EFI_STATUS_LEN];
    _mav_put_float(buf, 0, cylinder_head_temperature);
    _mav_put_float(buf, 4, engine_load);
    _mav_put_float(buf, 8, fuel_consumed);
    _mav_put_float(buf, 12, fuel_flow);
    _mav_put_float(buf, 16, rpm);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EFI_STATUS_LEN);
#else
    mavlink_efi_status_t packet;
    packet.cylinder_head_temperature = cylinder_head_temperature;
    packet.engine_load = engine_load;
    packet.fuel_consumed = fuel_consumed;
    packet.fuel_flow = fuel_flow;
    packet.rpm = rpm;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EFI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EFI_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN, MAVLINK_MSG_ID_EFI_STATUS_CRC);
}

/**
 * @brief Pack a efi_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cylinder_head_temperature [C] 
 * @param engine_load  
 * @param fuel_consumed [L] 
 * @param fuel_flow [L/h] 
 * @param rpm [rpm] 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_efi_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float cylinder_head_temperature, float engine_load, float fuel_consumed, float fuel_flow, float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EFI_STATUS_LEN];
    _mav_put_float(buf, 0, cylinder_head_temperature);
    _mav_put_float(buf, 4, engine_load);
    _mav_put_float(buf, 8, fuel_consumed);
    _mav_put_float(buf, 12, fuel_flow);
    _mav_put_float(buf, 16, rpm);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EFI_STATUS_LEN);
#else
    mavlink_efi_status_t packet;
    packet.cylinder_head_temperature = cylinder_head_temperature;
    packet.engine_load = engine_load;
    packet.fuel_consumed = fuel_consumed;
    packet.fuel_flow = fuel_flow;
    packet.rpm = rpm;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EFI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EFI_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN, MAVLINK_MSG_ID_EFI_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN);
#endif
}

/**
 * @brief Pack a efi_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cylinder_head_temperature [C] 
 * @param engine_load  
 * @param fuel_consumed [L] 
 * @param fuel_flow [L/h] 
 * @param rpm [rpm] 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_efi_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float cylinder_head_temperature,float engine_load,float fuel_consumed,float fuel_flow,float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EFI_STATUS_LEN];
    _mav_put_float(buf, 0, cylinder_head_temperature);
    _mav_put_float(buf, 4, engine_load);
    _mav_put_float(buf, 8, fuel_consumed);
    _mav_put_float(buf, 12, fuel_flow);
    _mav_put_float(buf, 16, rpm);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EFI_STATUS_LEN);
#else
    mavlink_efi_status_t packet;
    packet.cylinder_head_temperature = cylinder_head_temperature;
    packet.engine_load = engine_load;
    packet.fuel_consumed = fuel_consumed;
    packet.fuel_flow = fuel_flow;
    packet.rpm = rpm;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EFI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EFI_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN, MAVLINK_MSG_ID_EFI_STATUS_CRC);
}

/**
 * @brief Encode a efi_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param efi_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_efi_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_efi_status_t* efi_status)
{
    return mavlink_msg_efi_status_pack(system_id, component_id, msg, efi_status->cylinder_head_temperature, efi_status->engine_load, efi_status->fuel_consumed, efi_status->fuel_flow, efi_status->rpm);
}

/**
 * @brief Encode a efi_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param efi_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_efi_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_efi_status_t* efi_status)
{
    return mavlink_msg_efi_status_pack_chan(system_id, component_id, chan, msg, efi_status->cylinder_head_temperature, efi_status->engine_load, efi_status->fuel_consumed, efi_status->fuel_flow, efi_status->rpm);
}

/**
 * @brief Encode a efi_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param efi_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_efi_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_efi_status_t* efi_status)
{
    return mavlink_msg_efi_status_pack_status(system_id, component_id, _status, msg,  efi_status->cylinder_head_temperature, efi_status->engine_load, efi_status->fuel_consumed, efi_status->fuel_flow, efi_status->rpm);
}

/**
 * @brief Send a efi_status message
 * @param chan MAVLink channel to send the message
 *
 * @param cylinder_head_temperature [C] 
 * @param engine_load  
 * @param fuel_consumed [L] 
 * @param fuel_flow [L/h] 
 * @param rpm [rpm] 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_efi_status_send(mavlink_channel_t chan, float cylinder_head_temperature, float engine_load, float fuel_consumed, float fuel_flow, float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EFI_STATUS_LEN];
    _mav_put_float(buf, 0, cylinder_head_temperature);
    _mav_put_float(buf, 4, engine_load);
    _mav_put_float(buf, 8, fuel_consumed);
    _mav_put_float(buf, 12, fuel_flow);
    _mav_put_float(buf, 16, rpm);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EFI_STATUS, buf, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN, MAVLINK_MSG_ID_EFI_STATUS_CRC);
#else
    mavlink_efi_status_t packet;
    packet.cylinder_head_temperature = cylinder_head_temperature;
    packet.engine_load = engine_load;
    packet.fuel_consumed = fuel_consumed;
    packet.fuel_flow = fuel_flow;
    packet.rpm = rpm;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EFI_STATUS, (const char *)&packet, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN, MAVLINK_MSG_ID_EFI_STATUS_CRC);
#endif
}

/**
 * @brief Send a efi_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_efi_status_send_struct(mavlink_channel_t chan, const mavlink_efi_status_t* efi_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_efi_status_send(chan, efi_status->cylinder_head_temperature, efi_status->engine_load, efi_status->fuel_consumed, efi_status->fuel_flow, efi_status->rpm);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EFI_STATUS, (const char *)efi_status, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN, MAVLINK_MSG_ID_EFI_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_EFI_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_efi_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float cylinder_head_temperature, float engine_load, float fuel_consumed, float fuel_flow, float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, cylinder_head_temperature);
    _mav_put_float(buf, 4, engine_load);
    _mav_put_float(buf, 8, fuel_consumed);
    _mav_put_float(buf, 12, fuel_flow);
    _mav_put_float(buf, 16, rpm);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EFI_STATUS, buf, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN, MAVLINK_MSG_ID_EFI_STATUS_CRC);
#else
    mavlink_efi_status_t *packet = (mavlink_efi_status_t *)msgbuf;
    packet->cylinder_head_temperature = cylinder_head_temperature;
    packet->engine_load = engine_load;
    packet->fuel_consumed = fuel_consumed;
    packet->fuel_flow = fuel_flow;
    packet->rpm = rpm;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EFI_STATUS, (const char *)packet, MAVLINK_MSG_ID_EFI_STATUS_MIN_LEN, MAVLINK_MSG_ID_EFI_STATUS_LEN, MAVLINK_MSG_ID_EFI_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE EFI_STATUS UNPACKING


/**
 * @brief Get field cylinder_head_temperature from efi_status message
 *
 * @return [C] 
 */
static inline float mavlink_msg_efi_status_get_cylinder_head_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field engine_load from efi_status message
 *
 * @return  
 */
static inline float mavlink_msg_efi_status_get_engine_load(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field fuel_consumed from efi_status message
 *
 * @return [L] 
 */
static inline float mavlink_msg_efi_status_get_fuel_consumed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field fuel_flow from efi_status message
 *
 * @return [L/h] 
 */
static inline float mavlink_msg_efi_status_get_fuel_flow(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rpm from efi_status message
 *
 * @return [rpm] 
 */
static inline float mavlink_msg_efi_status_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a efi_status message into a struct
 *
 * @param msg The message to decode
 * @param efi_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_efi_status_decode(const mavlink_message_t* msg, mavlink_efi_status_t* efi_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    efi_status->cylinder_head_temperature = mavlink_msg_efi_status_get_cylinder_head_temperature(msg);
    efi_status->engine_load = mavlink_msg_efi_status_get_engine_load(msg);
    efi_status->fuel_consumed = mavlink_msg_efi_status_get_fuel_consumed(msg);
    efi_status->fuel_flow = mavlink_msg_efi_status_get_fuel_flow(msg);
    efi_status->rpm = mavlink_msg_efi_status_get_rpm(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EFI_STATUS_LEN? msg->len : MAVLINK_MSG_ID_EFI_STATUS_LEN;
        memset(efi_status, 0, MAVLINK_MSG_ID_EFI_STATUS_LEN);
    memcpy(efi_status, _MAV_PAYLOAD(msg), len);
#endif
}
