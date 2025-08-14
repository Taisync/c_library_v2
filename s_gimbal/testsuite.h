/** @file
 *    @brief MAVLink comm protocol testsuite generated from s_gimbal.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef S_GIMBAL_TESTSUITE_H
#define S_GIMBAL_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_s_gimbal(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_s_gimbal(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_ec_request(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_EC_REQUEST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ec_request_t packet_in = {
        5
    };
    mavlink_ec_request_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.request = packet_in.request;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_EC_REQUEST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_EC_REQUEST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_request_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ec_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_request_pack(system_id, component_id, &msg , packet1.request );
    mavlink_msg_ec_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_request_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.request );
    mavlink_msg_ec_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ec_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_request_send(MAVLINK_COMM_1 , packet1.request );
    mavlink_msg_ec_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ec_version(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_EC_VERSION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ec_version_t packet_in = {
        5
    };
    mavlink_ec_version_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.gimbal_mainboard_version = packet_in.gimbal_mainboard_version;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_EC_VERSION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_EC_VERSION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_version_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ec_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_version_pack(system_id, component_id, &msg , packet1.gimbal_mainboard_version );
    mavlink_msg_ec_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_version_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gimbal_mainboard_version );
    mavlink_msg_ec_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ec_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_version_send(MAVLINK_COMM_1 , packet1.gimbal_mainboard_version );
    mavlink_msg_ec_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ec_gimbal_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_EC_GIMBAL_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ec_gimbal_control_t packet_in = {
        17235,17339,17443,17547,29,96
    };
    mavlink_ec_gimbal_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pitch_angle = packet_in.pitch_angle;
        packet1.yaw_angle = packet_in.yaw_angle;
        packet1.pitch_rate = packet_in.pitch_rate;
        packet1.yaw_rate = packet_in.yaw_rate;
        packet1.stab_pitch = packet_in.stab_pitch;
        packet1.stab_yaw = packet_in.stab_yaw;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_EC_GIMBAL_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_EC_GIMBAL_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ec_gimbal_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_control_pack(system_id, component_id, &msg , packet1.stab_pitch , packet1.stab_yaw , packet1.pitch_angle , packet1.yaw_angle , packet1.pitch_rate , packet1.yaw_rate );
    mavlink_msg_ec_gimbal_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.stab_pitch , packet1.stab_yaw , packet1.pitch_angle , packet1.yaw_angle , packet1.pitch_rate , packet1.yaw_rate );
    mavlink_msg_ec_gimbal_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ec_gimbal_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_control_send(MAVLINK_COMM_1 , packet1.stab_pitch , packet1.stab_yaw , packet1.pitch_angle , packet1.yaw_angle , packet1.pitch_rate , packet1.yaw_rate );
    mavlink_msg_ec_gimbal_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ec_gimbal_calibration(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ec_gimbal_calibration_t packet_in = {
        5,72,139
    };
    mavlink_ec_gimbal_calibration_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.cali_all = packet_in.cali_all;
        packet1.axis = packet_in.axis;
        packet1.type = packet_in.type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_EC_GIMBAL_CALIBRATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_calibration_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ec_gimbal_calibration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_calibration_pack(system_id, component_id, &msg , packet1.cali_all , packet1.axis , packet1.type );
    mavlink_msg_ec_gimbal_calibration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_calibration_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cali_all , packet1.axis , packet1.type );
    mavlink_msg_ec_gimbal_calibration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ec_gimbal_calibration_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_calibration_send(MAVLINK_COMM_1 , packet1.cali_all , packet1.axis , packet1.type );
    mavlink_msg_ec_gimbal_calibration_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ec_gimbal_report(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_EC_GIMBAL_REPORT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ec_gimbal_report_t packet_in = {
        17235,17339,17443,17547,29,96
    };
    mavlink_ec_gimbal_report_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pitch_angle = packet_in.pitch_angle;
        packet1.roll_angle = packet_in.roll_angle;
        packet1.yaw_angle = packet_in.yaw_angle;
        packet1.temperature = packet_in.temperature;
        packet1.status = packet_in.status;
        packet1.zoom_image_mode = packet_in.zoom_image_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_EC_GIMBAL_REPORT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_EC_GIMBAL_REPORT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_report_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ec_gimbal_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_report_pack(system_id, component_id, &msg , packet1.status , packet1.pitch_angle , packet1.roll_angle , packet1.yaw_angle , packet1.zoom_image_mode , packet1.temperature );
    mavlink_msg_ec_gimbal_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_report_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.status , packet1.pitch_angle , packet1.roll_angle , packet1.yaw_angle , packet1.zoom_image_mode , packet1.temperature );
    mavlink_msg_ec_gimbal_report_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ec_gimbal_report_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_report_send(MAVLINK_COMM_1 , packet1.status , packet1.pitch_angle , packet1.roll_angle , packet1.yaw_angle , packet1.zoom_image_mode , packet1.temperature );
    mavlink_msg_ec_gimbal_report_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ec_gimbal_channel_config(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ec_gimbal_channel_config_t packet_in = {
        { 5, 6, 7, 8, 9, 10, 11, 12 },{ 29, 30, 31, 32, 33, 34, 35, 36 }
    };
    mavlink_ec_gimbal_channel_config_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.function_mode, packet_in.function_mode, sizeof(uint8_t)*8);
        mav_array_memcpy(packet1.channel_num, packet_in.channel_num, sizeof(uint8_t)*8);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_EC_GIMBAL_CHANNEL_CONFIG_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_channel_config_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ec_gimbal_channel_config_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_channel_config_pack(system_id, component_id, &msg , packet1.function_mode , packet1.channel_num );
    mavlink_msg_ec_gimbal_channel_config_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_channel_config_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.function_mode , packet1.channel_num );
    mavlink_msg_ec_gimbal_channel_config_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ec_gimbal_channel_config_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ec_gimbal_channel_config_send(MAVLINK_COMM_1 , packet1.function_mode , packet1.channel_num );
    mavlink_msg_ec_gimbal_channel_config_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_s_gimbal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ec_request(system_id, component_id, last_msg);
    mavlink_test_ec_version(system_id, component_id, last_msg);
    mavlink_test_ec_gimbal_control(system_id, component_id, last_msg);
    mavlink_test_ec_gimbal_calibration(system_id, component_id, last_msg);
    mavlink_test_ec_gimbal_report(system_id, component_id, last_msg);
    mavlink_test_ec_gimbal_channel_config(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // S_GIMBAL_TESTSUITE_H
