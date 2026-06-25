#pragma once
// MESSAGE GENERATOR_STATUS PACKING

#define MAVLINK_MSG_ID_GENERATOR_STATUS 373


typedef struct __mavlink_generator_status_t {
 float battery_current; /*< [A] */
 float bus_voltage; /*< [V] */
 float load_current; /*< [A] */
 float power_generated; /*< [W] */
} mavlink_generator_status_t;

#define MAVLINK_MSG_ID_GENERATOR_STATUS_LEN 16
#define MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN 16
#define MAVLINK_MSG_ID_373_LEN 16
#define MAVLINK_MSG_ID_373_MIN_LEN 16

#define MAVLINK_MSG_ID_GENERATOR_STATUS_CRC 59
#define MAVLINK_MSG_ID_373_CRC 59



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GENERATOR_STATUS { \
    373, \
    "GENERATOR_STATUS", \
    4, \
    {  { "battery_current", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_generator_status_t, battery_current) }, \
         { "bus_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_generator_status_t, bus_voltage) }, \
         { "load_current", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_generator_status_t, load_current) }, \
         { "power_generated", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_generator_status_t, power_generated) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GENERATOR_STATUS { \
    "GENERATOR_STATUS", \
    4, \
    {  { "battery_current", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_generator_status_t, battery_current) }, \
         { "bus_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_generator_status_t, bus_voltage) }, \
         { "load_current", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_generator_status_t, load_current) }, \
         { "power_generated", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_generator_status_t, power_generated) }, \
         } \
}
#endif

/**
 * @brief Pack a generator_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_current [A] 
 * @param bus_voltage [V] 
 * @param load_current [A] 
 * @param power_generated [W] 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_generator_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float battery_current, float bus_voltage, float load_current, float power_generated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GENERATOR_STATUS_LEN];
    _mav_put_float(buf, 0, battery_current);
    _mav_put_float(buf, 4, bus_voltage);
    _mav_put_float(buf, 8, load_current);
    _mav_put_float(buf, 12, power_generated);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN);
#else
    mavlink_generator_status_t packet;
    packet.battery_current = battery_current;
    packet.bus_voltage = bus_voltage;
    packet.load_current = load_current;
    packet.power_generated = power_generated;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GENERATOR_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_CRC);
}

/**
 * @brief Pack a generator_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_current [A] 
 * @param bus_voltage [V] 
 * @param load_current [A] 
 * @param power_generated [W] 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_generator_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float battery_current, float bus_voltage, float load_current, float power_generated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GENERATOR_STATUS_LEN];
    _mav_put_float(buf, 0, battery_current);
    _mav_put_float(buf, 4, bus_voltage);
    _mav_put_float(buf, 8, load_current);
    _mav_put_float(buf, 12, power_generated);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN);
#else
    mavlink_generator_status_t packet;
    packet.battery_current = battery_current;
    packet.bus_voltage = bus_voltage;
    packet.load_current = load_current;
    packet.power_generated = power_generated;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GENERATOR_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN);
#endif
}

/**
 * @brief Pack a generator_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_current [A] 
 * @param bus_voltage [V] 
 * @param load_current [A] 
 * @param power_generated [W] 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_generator_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float battery_current,float bus_voltage,float load_current,float power_generated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GENERATOR_STATUS_LEN];
    _mav_put_float(buf, 0, battery_current);
    _mav_put_float(buf, 4, bus_voltage);
    _mav_put_float(buf, 8, load_current);
    _mav_put_float(buf, 12, power_generated);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN);
#else
    mavlink_generator_status_t packet;
    packet.battery_current = battery_current;
    packet.bus_voltage = bus_voltage;
    packet.load_current = load_current;
    packet.power_generated = power_generated;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GENERATOR_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_CRC);
}

/**
 * @brief Encode a generator_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param generator_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_generator_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_generator_status_t* generator_status)
{
    return mavlink_msg_generator_status_pack(system_id, component_id, msg, generator_status->battery_current, generator_status->bus_voltage, generator_status->load_current, generator_status->power_generated);
}

/**
 * @brief Encode a generator_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param generator_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_generator_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_generator_status_t* generator_status)
{
    return mavlink_msg_generator_status_pack_chan(system_id, component_id, chan, msg, generator_status->battery_current, generator_status->bus_voltage, generator_status->load_current, generator_status->power_generated);
}

/**
 * @brief Encode a generator_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param generator_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_generator_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_generator_status_t* generator_status)
{
    return mavlink_msg_generator_status_pack_status(system_id, component_id, _status, msg,  generator_status->battery_current, generator_status->bus_voltage, generator_status->load_current, generator_status->power_generated);
}

/**
 * @brief Send a generator_status message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_current [A] 
 * @param bus_voltage [V] 
 * @param load_current [A] 
 * @param power_generated [W] 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_generator_status_send(mavlink_channel_t chan, float battery_current, float bus_voltage, float load_current, float power_generated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GENERATOR_STATUS_LEN];
    _mav_put_float(buf, 0, battery_current);
    _mav_put_float(buf, 4, bus_voltage);
    _mav_put_float(buf, 8, load_current);
    _mav_put_float(buf, 12, power_generated);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERATOR_STATUS, buf, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_CRC);
#else
    mavlink_generator_status_t packet;
    packet.battery_current = battery_current;
    packet.bus_voltage = bus_voltage;
    packet.load_current = load_current;
    packet.power_generated = power_generated;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERATOR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_CRC);
#endif
}

/**
 * @brief Send a generator_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_generator_status_send_struct(mavlink_channel_t chan, const mavlink_generator_status_t* generator_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_generator_status_send(chan, generator_status->battery_current, generator_status->bus_voltage, generator_status->load_current, generator_status->power_generated);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERATOR_STATUS, (const char *)generator_status, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GENERATOR_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_generator_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float battery_current, float bus_voltage, float load_current, float power_generated)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, battery_current);
    _mav_put_float(buf, 4, bus_voltage);
    _mav_put_float(buf, 8, load_current);
    _mav_put_float(buf, 12, power_generated);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERATOR_STATUS, buf, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_CRC);
#else
    mavlink_generator_status_t *packet = (mavlink_generator_status_t *)msgbuf;
    packet->battery_current = battery_current;
    packet->bus_voltage = bus_voltage;
    packet->load_current = load_current;
    packet->power_generated = power_generated;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERATOR_STATUS, (const char *)packet, MAVLINK_MSG_ID_GENERATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN, MAVLINK_MSG_ID_GENERATOR_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE GENERATOR_STATUS UNPACKING


/**
 * @brief Get field battery_current from generator_status message
 *
 * @return [A] 
 */
static inline float mavlink_msg_generator_status_get_battery_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field bus_voltage from generator_status message
 *
 * @return [V] 
 */
static inline float mavlink_msg_generator_status_get_bus_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field load_current from generator_status message
 *
 * @return [A] 
 */
static inline float mavlink_msg_generator_status_get_load_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field power_generated from generator_status message
 *
 * @return [W] 
 */
static inline float mavlink_msg_generator_status_get_power_generated(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a generator_status message into a struct
 *
 * @param msg The message to decode
 * @param generator_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_generator_status_decode(const mavlink_message_t* msg, mavlink_generator_status_t* generator_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    generator_status->battery_current = mavlink_msg_generator_status_get_battery_current(msg);
    generator_status->bus_voltage = mavlink_msg_generator_status_get_bus_voltage(msg);
    generator_status->load_current = mavlink_msg_generator_status_get_load_current(msg);
    generator_status->power_generated = mavlink_msg_generator_status_get_power_generated(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GENERATOR_STATUS_LEN? msg->len : MAVLINK_MSG_ID_GENERATOR_STATUS_LEN;
        memset(generator_status, 0, MAVLINK_MSG_ID_GENERATOR_STATUS_LEN);
    memcpy(generator_status, _MAV_PAYLOAD(msg), len);
#endif
}
