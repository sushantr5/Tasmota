/* Solidification of ezie_home_assistant_discovery.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_ezie_home_assistant_discovery;

/********************************************************************
** Solidified function: publish_discovery_message_for_4speed_fan
********************************************************************/
be_local_closure(ezie_home_assistant_discovery_publish_discovery_message_for_4speed_fan,   /* name */
  be_nested_proto(
    17,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[57]) {     /* constants */
    /* K0   */  be_nested_str(tasmota),
    /* K1   */  be_nested_str(log),
    /* K2   */  be_nested_str(publish_discovery_message_for_4speed_fan_X28_X29),
    /* K3   */  be_nested_str(mqtt),
    /* K4   */  be_nested_str(json),
    /* K5   */  be_nested_str(cmd),
    /* K6   */  be_nested_str(Status),
    /* K7   */  be_nested_str(find),
    /* K8   */  be_nested_str(DeviceName),
    /* K9   */  be_nested_str(Topic),
    /* K10  */  be_nested_str(platform),
    /* K11  */  be_nested_str(setitem),
    /* K12  */  be_nested_str(name),
    /* K13  */  be_nested_str(device_class),
    /* K14  */  be_nested_str(fan),
    /* K15  */  be_nested_str(unique_id),
    /* K16  */  be_nested_str(command_topic),
    /* K17  */  be_nested_str(cmnd_X2F),
    /* K18  */  be_nested_str(_X2FFanSpeed),
    /* K19  */  be_nested_str(state_topic),
    /* K20  */  be_nested_str(stat_X2F),
    /* K21  */  be_nested_str(_X2FRESULT),
    /* K22  */  be_nested_str(state_value_template),
    /* K23  */  be_nested_str(_X7B_X25_X20if_X20value_json_X2EFanSpeed_X20_X3D_X3D_X200_X20_X2D_X25_X7D0_X7B_X25_X2D_X20elif_X20value_json_X2EFanSpeed_X20_X21_X3D_X200_X20_X2D_X25_X7D1_X7B_X25_X2D_X20endif_X20_X25_X7D),
    /* K24  */  be_nested_str(availability_topic),
    /* K25  */  be_nested_str(tele_X2F),
    /* K26  */  be_nested_str(_X2FLWT),
    /* K27  */  be_nested_str(payload_available),
    /* K28  */  be_nested_str(Online),
    /* K29  */  be_nested_str(payload_not_available),
    /* K30  */  be_nested_str(Offline),
    /* K31  */  be_nested_str(payload_off),
    /* K32  */  be_nested_str(0),
    /* K33  */  be_nested_str(payload_on),
    /* K34  */  be_nested_str(1),
    /* K35  */  be_nested_str(preset_modes),
    /* K36  */  be_nested_str(off),
    /* K37  */  be_nested_str(low),
    /* K38  */  be_nested_str(medium),
    /* K39  */  be_nested_str(high),
    /* K40  */  be_nested_str(full),
    /* K41  */  be_nested_str(preset_mode_command_topic),
    /* K42  */  be_nested_str(_X7B_X25_X20if_X20value_X3D_X3D_X27low_X27_X20_X25_X7D1_X7B_X25_X20elif_X20value_X3D_X3D_X27medium_X27_X20_X25_X7D2_X7B_X25_X20elif_X20value_X3D_X3D_X27high_X27_X20_X25_X7D3_X7B_X25_X20elif_X20value_X3D_X3D_X27full_X27_X25_X7D4_X7B_X25_X20else_X20_X25_X7D0_X7B_X25_X20endif_X20_X25_X7D),
    /* K43  */  be_nested_str(preset_mode_command_template),
    /* K44  */  be_nested_str(preset_mode_state_topic),
    /* K45  */  be_nested_str(percentage_command_topic),
    /* K46  */  be_nested_str(percentage_state_topic),
    /* K47  */  be_nested_str(speed_range_min),
    /* K48  */  be_const_int(1),
    /* K49  */  be_nested_str(speed_range_max),
    /* K50  */  be_nested_str(publish),
    /* K51  */  be_nested_str(homeassistant_X2Ffan_X2F),
    /* K52  */  be_nested_str(_X2F),
    /* K53  */  be_nested_str(_X2Fconfig),
    /* K54  */  be_nested_str(dump),
    /* K55  */  be_nested_str(format),
    /* K56  */  be_nested_str(ha_discovery_sent),
    }),
    &be_const_str_publish_discovery_message_for_4speed_fan,
    &be_const_str_solidified,
    ( &(const binstruction[134]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x580C0002,  //  0002  LDCONST	R3	K2
      0x54120003,  //  0003  LDINT	R4	4
      0x7C040600,  //  0004  CALL	R1	3
      0xA4060600,  //  0005  IMPORT	R1	K3
      0xA40A0800,  //  0006  IMPORT	R2	K4
      0xB80E0000,  //  0007  GETNGBL	R3	K0
      0x8C0C0705,  //  0008  GETMET	R3	R3	K5
      0x58140006,  //  0009  LDCONST	R5	K6
      0x7C0C0400,  //  000A  CALL	R3	2
      0x8C100707,  //  000B  GETMET	R4	R3	K7
      0x58180006,  //  000C  LDCONST	R6	K6
      0x7C100400,  //  000D  CALL	R4	2
      0x8C140907,  //  000E  GETMET	R5	R4	K7
      0x581C0008,  //  000F  LDCONST	R7	K8
      0x7C140400,  //  0010  CALL	R5	2
      0x8C180907,  //  0011  GETMET	R6	R4	K7
      0x58200009,  //  0012  LDCONST	R8	K9
      0x7C180400,  //  0013  CALL	R6	2
      0x601C0013,  //  0014  GETGBL	R7	G19
      0x7C1C0000,  //  0015  CALL	R7	0
      0x981E1503,  //  0016  SETIDX	R7	K10	K3
      0x8C200F0B,  //  0017  GETMET	R8	R7	K11
      0x5828000C,  //  0018  LDCONST	R10	K12
      0x5C2C0A00,  //  0019  MOVE	R11	R5
      0x7C200600,  //  001A  CALL	R8	3
      0x8C200F0B,  //  001B  GETMET	R8	R7	K11
      0x5828000D,  //  001C  LDCONST	R10	K13
      0x582C000E,  //  001D  LDCONST	R11	K14
      0x7C200600,  //  001E  CALL	R8	3
      0x8C200F0B,  //  001F  GETMET	R8	R7	K11
      0x5828000F,  //  0020  LDCONST	R10	K15
      0x5C2C0C00,  //  0021  MOVE	R11	R6
      0x7C200600,  //  0022  CALL	R8	3
      0x8C200F0B,  //  0023  GETMET	R8	R7	K11
      0x58280010,  //  0024  LDCONST	R10	K16
      0x002E2206,  //  0025  ADD	R11	K17	R6
      0x002C1712,  //  0026  ADD	R11	R11	K18
      0x7C200600,  //  0027  CALL	R8	3
      0x8C200F0B,  //  0028  GETMET	R8	R7	K11
      0x58280013,  //  0029  LDCONST	R10	K19
      0x002E2806,  //  002A  ADD	R11	K20	R6
      0x002C1715,  //  002B  ADD	R11	R11	K21
      0x7C200600,  //  002C  CALL	R8	3
      0x8C200F0B,  //  002D  GETMET	R8	R7	K11
      0x58280016,  //  002E  LDCONST	R10	K22
      0x582C0017,  //  002F  LDCONST	R11	K23
      0x7C200600,  //  0030  CALL	R8	3
      0x8C200F0B,  //  0031  GETMET	R8	R7	K11
      0x58280018,  //  0032  LDCONST	R10	K24
      0x002E3206,  //  0033  ADD	R11	K25	R6
      0x002C171A,  //  0034  ADD	R11	R11	K26
      0x7C200600,  //  0035  CALL	R8	3
      0x8C200F0B,  //  0036  GETMET	R8	R7	K11
      0x5828001B,  //  0037  LDCONST	R10	K27
      0x582C001C,  //  0038  LDCONST	R11	K28
      0x7C200600,  //  0039  CALL	R8	3
      0x8C200F0B,  //  003A  GETMET	R8	R7	K11
      0x5828001D,  //  003B  LDCONST	R10	K29
      0x582C001E,  //  003C  LDCONST	R11	K30
      0x7C200600,  //  003D  CALL	R8	3
      0x8C200F0B,  //  003E  GETMET	R8	R7	K11
      0x5828001F,  //  003F  LDCONST	R10	K31
      0x582C0020,  //  0040  LDCONST	R11	K32
      0x7C200600,  //  0041  CALL	R8	3
      0x8C200F0B,  //  0042  GETMET	R8	R7	K11
      0x58280021,  //  0043  LDCONST	R10	K33
      0x582C0022,  //  0044  LDCONST	R11	K34
      0x7C200600,  //  0045  CALL	R8	3
      0x8C200F0B,  //  0046  GETMET	R8	R7	K11
      0x58280023,  //  0047  LDCONST	R10	K35
      0x602C0012,  //  0048  GETGBL	R11	G18
      0x7C2C0000,  //  0049  CALL	R11	0
      0x40301724,  //  004A  CONNECT	R12	R11	K36
      0x40301725,  //  004B  CONNECT	R12	R11	K37
      0x40301726,  //  004C  CONNECT	R12	R11	K38
      0x40301727,  //  004D  CONNECT	R12	R11	K39
      0x40301728,  //  004E  CONNECT	R12	R11	K40
      0x7C200600,  //  004F  CALL	R8	3
      0x8C200F0B,  //  0050  GETMET	R8	R7	K11
      0x58280029,  //  0051  LDCONST	R10	K41
      0x002E2206,  //  0052  ADD	R11	K17	R6
      0x002C1712,  //  0053  ADD	R11	R11	K18
      0x7C200600,  //  0054  CALL	R8	3
      0x5820002A,  //  0055  LDCONST	R8	K42
      0x8C240F0B,  //  0056  GETMET	R9	R7	K11
      0x582C002B,  //  0057  LDCONST	R11	K43
      0x5C301000,  //  0058  MOVE	R12	R8
      0x7C240600,  //  0059  CALL	R9	3
      0x8C240F0B,  //  005A  GETMET	R9	R7	K11
      0x582C002C,  //  005B  LDCONST	R11	K44
      0x00322806,  //  005C  ADD	R12	K20	R6
      0x00301915,  //  005D  ADD	R12	R12	K21
      0x7C240600,  //  005E  CALL	R9	3
      0x8C240F0B,  //  005F  GETMET	R9	R7	K11
      0x582C002D,  //  0060  LDCONST	R11	K45
      0x00322206,  //  0061  ADD	R12	K17	R6
      0x00301912,  //  0062  ADD	R12	R12	K18
      0x7C240600,  //  0063  CALL	R9	3
      0x8C240F0B,  //  0064  GETMET	R9	R7	K11
      0x582C002E,  //  0065  LDCONST	R11	K46
      0x00322806,  //  0066  ADD	R12	K20	R6
      0x00301915,  //  0067  ADD	R12	R12	K21
      0x7C240600,  //  0068  CALL	R9	3
      0x8C240F0B,  //  0069  GETMET	R9	R7	K11
      0x582C002F,  //  006A  LDCONST	R11	K47
      0x58300030,  //  006B  LDCONST	R12	K48
      0x7C240600,  //  006C  CALL	R9	3
      0x8C240F0B,  //  006D  GETMET	R9	R7	K11
      0x582C0031,  //  006E  LDCONST	R11	K49
      0x54320003,  //  006F  LDINT	R12	4
      0x7C240600,  //  0070  CALL	R9	3
      0xB8260000,  //  0071  GETNGBL	R9	K0
      0x8C241301,  //  0072  GETMET	R9	R9	K1
      0x5C2C0E00,  //  0073  MOVE	R11	R7
      0x54320003,  //  0074  LDINT	R12	4
      0x7C240600,  //  0075  CALL	R9	3
      0x8C240332,  //  0076  GETMET	R9	R1	K50
      0x002E6606,  //  0077  ADD	R11	K51	R6
      0x002C1734,  //  0078  ADD	R11	R11	K52
      0x002C1606,  //  0079  ADD	R11	R11	R6
      0x002C1735,  //  007A  ADD	R11	R11	K53
      0x8C300536,  //  007B  GETMET	R12	R2	K54
      0x5C380E00,  //  007C  MOVE	R14	R7
      0x603C0012,  //  007D  GETGBL	R15	G18
      0x7C3C0000,  //  007E  CALL	R15	0
      0x40401F37,  //  007F  CONNECT	R16	R15	K55
      0x7C300600,  //  0080  CALL	R12	3
      0x50340200,  //  0081  LDBOOL	R13	1	0
      0x7C240800,  //  0082  CALL	R9	4
      0x50240200,  //  0083  LDBOOL	R9	1	0
      0x90027009,  //  0084  SETMBR	R0	K56	R9
      0x80000000,  //  0085  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_second
********************************************************************/
be_local_closure(ezie_home_assistant_discovery_every_second,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str(mqtt_connected),
    /* K1   */  be_nested_str(tasmota),
    /* K2   */  be_nested_str(log),
    /* K3   */  be_nested_str(waiting_X20for_X20MQTT_X20Connection_X20to_X20send_X20HA_X20Disconvery_X2E_X2E_X2E),
    /* K4   */  be_nested_str(ha_discovery_sent),
    /* K5   */  be_nested_str(send_ha_discovery_message),
    }),
    &be_const_str_every_second,
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x50080000,  //  0001  LDBOOL	R2	0	0
      0x1C040202,  //  0002  EQ	R1	R1	R2
      0x78060004,  //  0003  JMPF	R1	#0009
      0xB8060200,  //  0004  GETNGBL	R1	K1
      0x8C040302,  //  0005  GETMET	R1	R1	K2
      0x580C0003,  //  0006  LDCONST	R3	K3
      0x54120003,  //  0007  LDINT	R4	4
      0x7C040600,  //  0008  CALL	R1	3
      0x88040104,  //  0009  GETMBR	R1	R0	K4
      0x50080000,  //  000A  LDBOOL	R2	0	0
      0x1C040202,  //  000B  EQ	R1	R1	R2
      0x78060005,  //  000C  JMPF	R1	#0013
      0x88040100,  //  000D  GETMBR	R1	R0	K0
      0x50080200,  //  000E  LDBOOL	R2	1	0
      0x1C040202,  //  000F  EQ	R1	R1	R2
      0x78060001,  //  0010  JMPF	R1	#0013
      0x8C040105,  //  0011  GETMET	R1	R0	K5
      0x7C040200,  //  0012  CALL	R1	1
      0x80000000,  //  0013  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_ha_discovery_message
********************************************************************/
be_local_closure(ezie_home_assistant_discovery_send_ha_discovery_message,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[15]) {     /* constants */
    /* K0   */  be_nested_str(tasmota),
    /* K1   */  be_nested_str(log),
    /* K2   */  be_nested_str(send_ha_discovery_message_X28_X29),
    /* K3   */  be_nested_str(cmd),
    /* K4   */  be_nested_str(mqtthost),
    /* K5   */  be_nested_str(find),
    /* K6   */  be_nested_str(MqttHost),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str(Sending_X20HA_X20Discovery_X20Message_X2E_X2E_X2E),
    /* K9   */  be_nested_str(mqtt_connected),
    /* K10  */  be_nested_str(device_type),
    /* K11  */  be_const_int(1),
    /* K12  */  be_nested_str(publish_discovery_message_for_4P_switch),
    /* K13  */  be_const_int(2),
    /* K14  */  be_nested_str(publish_discovery_message_for_4speed_fan),
    }),
    &be_const_str_send_ha_discovery_message,
    &be_const_str_solidified,
    ( &(const binstruction[37]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x580C0002,  //  0002  LDCONST	R3	K2
      0x54120003,  //  0003  LDINT	R4	4
      0x7C040600,  //  0004  CALL	R1	3
      0xB8060000,  //  0005  GETNGBL	R1	K0
      0x8C040303,  //  0006  GETMET	R1	R1	K3
      0x580C0004,  //  0007  LDCONST	R3	K4
      0x7C040400,  //  0008  CALL	R1	2
      0x8C080305,  //  0009  GETMET	R2	R1	K5
      0x58100006,  //  000A  LDCONST	R4	K6
      0x7C080400,  //  000B  CALL	R2	2
      0x600C000C,  //  000C  GETGBL	R3	G12
      0x5C100400,  //  000D  MOVE	R4	R2
      0x7C0C0200,  //  000E  CALL	R3	1
      0x1C0C0707,  //  000F  EQ	R3	R3	K7
      0x780E0000,  //  0010  JMPF	R3	#0012
      0x80000600,  //  0011  RET	0
      0xB80E0000,  //  0012  GETNGBL	R3	K0
      0x8C0C0701,  //  0013  GETMET	R3	R3	K1
      0x58140008,  //  0014  LDCONST	R5	K8
      0x541A0003,  //  0015  LDINT	R6	4
      0x7C0C0600,  //  0016  CALL	R3	3
      0x500C0200,  //  0017  LDBOOL	R3	1	0
      0x90021203,  //  0018  SETMBR	R0	K9	R3
      0x880C010A,  //  0019  GETMBR	R3	R0	K10
      0x1C0C070B,  //  001A  EQ	R3	R3	K11
      0x780E0002,  //  001B  JMPF	R3	#001F
      0x8C0C010C,  //  001C  GETMET	R3	R0	K12
      0x7C0C0200,  //  001D  CALL	R3	1
      0x70020004,  //  001E  JMP		#0024
      0x880C010A,  //  001F  GETMBR	R3	R0	K10
      0x1C0C070D,  //  0020  EQ	R3	R3	K13
      0x780E0001,  //  0021  JMPF	R3	#0024
      0x8C0C010E,  //  0022  GETMET	R3	R0	K14
      0x7C0C0200,  //  0023  CALL	R3	1
      0x80000000,  //  0024  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(ezie_home_assistant_discovery_init,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 1]) {
      be_nested_proto(
        4,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 5]) {     /* constants */
        /* K0   */  be_nested_str(send_ha_discovery_message),
        /* K1   */  be_nested_str(tasmota),
        /* K2   */  be_nested_str(remove_rule),
        /* K3   */  be_nested_str(Mqtt_X23Connected),
        /* K4   */  be_nested_str(ha_discovery_sent),
        }),
        &be_const_str__anonymous_,
        &be_const_str_solidified,
        ( &(const binstruction[ 9]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0xB8020200,  //  0003  GETNGBL	R0	K1
          0x8C000102,  //  0004  GETMET	R0	R0	K2
          0x58080003,  //  0005  LDCONST	R2	K3
          0x580C0004,  //  0006  LDCONST	R3	K4
          0x7C000600,  //  0007  CALL	R0	3
          0x80000000,  //  0008  RET	0
        })
      ),
    }),
    1,                          /* has constants */
    ( &(const bvalue[ 9]) {     /* constants */
    /* K0   */  be_nested_str(ha_discovery_sent),
    /* K1   */  be_nested_str(mqtt_connected),
    /* K2   */  be_nested_str(device_type),
    /* K3   */  be_const_int(0),
    /* K4   */  be_nested_str(send_ha_discovery_message),
    /* K5   */  be_nested_str(tasmota),
    /* K6   */  be_nested_str(add_rule),
    /* K7   */  be_nested_str(Mqtt_X23Connected),
    /* K8   */  be_nested_str(add_driver),
    }),
    &be_const_str_init,
    &be_const_str_solidified,
    ( &(const binstruction[24]) {  /* code */
      0x50080000,  //  0000  LDBOOL	R2	0	0
      0x90020002,  //  0001  SETMBR	R0	K0	R2
      0x50080000,  //  0002  LDBOOL	R2	0	0
      0x90020202,  //  0003  SETMBR	R0	K1	R2
      0x4C080000,  //  0004  LDNIL	R2
      0x20080202,  //  0005  NE	R2	R1	R2
      0x780A0001,  //  0006  JMPF	R2	#0009
      0x90020401,  //  0007  SETMBR	R0	K2	R1
      0x70020000,  //  0008  JMP		#000A
      0x90020503,  //  0009  SETMBR	R0	K2	K3
      0x8C080104,  //  000A  GETMET	R2	R0	K4
      0x7C080200,  //  000B  CALL	R2	1
      0xB80A0A00,  //  000C  GETNGBL	R2	K5
      0x8C080506,  //  000D  GETMET	R2	R2	K6
      0x58100007,  //  000E  LDCONST	R4	K7
      0x84140000,  //  000F  CLOSURE	R5	P0
      0x58180000,  //  0010  LDCONST	R6	K0
      0x7C080800,  //  0011  CALL	R2	4
      0xB80A0A00,  //  0012  GETNGBL	R2	K5
      0x8C080508,  //  0013  GETMET	R2	R2	K8
      0x5C100000,  //  0014  MOVE	R4	R0
      0x7C080400,  //  0015  CALL	R2	2
      0xA0000000,  //  0016  CLOSE	R0
      0x80000000,  //  0017  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: publish_discovery_message_for_4P_switch
********************************************************************/
be_local_closure(ezie_home_assistant_discovery_publish_discovery_message_for_4P_switch,   /* name */
  be_nested_proto(
    17,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[51]) {     /* constants */
    /* K0   */  be_nested_str(tasmota),
    /* K1   */  be_nested_str(log),
    /* K2   */  be_nested_str(publish_discovery_message_for_4P_switch_X28_X29),
    /* K3   */  be_nested_str(mqtt),
    /* K4   */  be_nested_str(json),
    /* K5   */  be_nested_str(cmd),
    /* K6   */  be_nested_str(Status),
    /* K7   */  be_nested_str(find),
    /* K8   */  be_nested_str(DeviceName),
    /* K9   */  be_nested_str(FriendlyName),
    /* K10  */  be_nested_str(Topic),
    /* K11  */  be_nested_str(platform),
    /* K12  */  be_const_int(0),
    /* K13  */  be_nested_str(setitem),
    /* K14  */  be_nested_str(name),
    /* K15  */  be_nested_str(_1),
    /* K16  */  be_nested_str(device_class),
    /* K17  */  be_nested_str(switch),
    /* K18  */  be_nested_str(unique_id),
    /* K19  */  be_nested_str(command_topic),
    /* K20  */  be_nested_str(cmnd_X2F),
    /* K21  */  be_nested_str(_X2FPOWER1),
    /* K22  */  be_nested_str(state_topic),
    /* K23  */  be_nested_str(stat_X2F),
    /* K24  */  be_nested_str(availability_topic),
    /* K25  */  be_nested_str(tele_X2F),
    /* K26  */  be_nested_str(_X2FLWT),
    /* K27  */  be_nested_str(payload_available),
    /* K28  */  be_nested_str(Online),
    /* K29  */  be_nested_str(payload_not_available),
    /* K30  */  be_nested_str(Offline),
    /* K31  */  be_nested_str(payload_off),
    /* K32  */  be_nested_str(OFF),
    /* K33  */  be_nested_str(payload_on),
    /* K34  */  be_nested_str(ON),
    /* K35  */  be_nested_str(publish),
    /* K36  */  be_nested_str(homeassistant_X2Fswitch_X2F),
    /* K37  */  be_nested_str(_X2F),
    /* K38  */  be_nested_str(_X2Fconfig),
    /* K39  */  be_nested_str(dump),
    /* K40  */  be_nested_str(format),
    /* K41  */  be_const_int(1),
    /* K42  */  be_nested_str(_2),
    /* K43  */  be_nested_str(_X2FPOWER2),
    /* K44  */  be_const_int(2),
    /* K45  */  be_nested_str(_3),
    /* K46  */  be_nested_str(_X2FPOWER3),
    /* K47  */  be_const_int(3),
    /* K48  */  be_nested_str(_4),
    /* K49  */  be_nested_str(_X2FPOWER4),
    /* K50  */  be_nested_str(ha_discovery_sent),
    }),
    &be_const_str_publish_discovery_message_for_4P_switch,
    &be_const_str_solidified,
    ( &(const binstruction[218]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x580C0002,  //  0002  LDCONST	R3	K2
      0x54120003,  //  0003  LDINT	R4	4
      0x7C040600,  //  0004  CALL	R1	3
      0xA4060600,  //  0005  IMPORT	R1	K3
      0xA40A0800,  //  0006  IMPORT	R2	K4
      0xB80E0000,  //  0007  GETNGBL	R3	K0
      0x8C0C0705,  //  0008  GETMET	R3	R3	K5
      0x58140006,  //  0009  LDCONST	R5	K6
      0x7C0C0400,  //  000A  CALL	R3	2
      0x8C100707,  //  000B  GETMET	R4	R3	K7
      0x58180006,  //  000C  LDCONST	R6	K6
      0x7C100400,  //  000D  CALL	R4	2
      0x8C140907,  //  000E  GETMET	R5	R4	K7
      0x581C0008,  //  000F  LDCONST	R7	K8
      0x7C140400,  //  0010  CALL	R5	2
      0x8C180907,  //  0011  GETMET	R6	R4	K7
      0x58200009,  //  0012  LDCONST	R8	K9
      0x7C180400,  //  0013  CALL	R6	2
      0x8C1C0907,  //  0014  GETMET	R7	R4	K7
      0x5824000A,  //  0015  LDCONST	R9	K10
      0x7C1C0400,  //  0016  CALL	R7	2
      0x60200013,  //  0017  GETGBL	R8	G19
      0x7C200000,  //  0018  CALL	R8	0
      0x98221703,  //  0019  SETIDX	R8	K11	K3
      0x94240D0C,  //  001A  GETIDX	R9	R6	K12
      0x4C280000,  //  001B  LDNIL	R10
      0x2024120A,  //  001C  NE	R9	R9	R10
      0x78260004,  //  001D  JMPF	R9	#0023
      0x8C24110D,  //  001E  GETMET	R9	R8	K13
      0x582C000E,  //  001F  LDCONST	R11	K14
      0x94300D0C,  //  0020  GETIDX	R12	R6	K12
      0x7C240600,  //  0021  CALL	R9	3
      0x70020003,  //  0022  JMP		#0027
      0x8C24110D,  //  0023  GETMET	R9	R8	K13
      0x582C000E,  //  0024  LDCONST	R11	K14
      0x00300B0F,  //  0025  ADD	R12	R5	K15
      0x7C240600,  //  0026  CALL	R9	3
      0x8C24110D,  //  0027  GETMET	R9	R8	K13
      0x582C0010,  //  0028  LDCONST	R11	K16
      0x58300011,  //  0029  LDCONST	R12	K17
      0x7C240600,  //  002A  CALL	R9	3
      0x8C24110D,  //  002B  GETMET	R9	R8	K13
      0x582C0012,  //  002C  LDCONST	R11	K18
      0x00300F0F,  //  002D  ADD	R12	R7	K15
      0x7C240600,  //  002E  CALL	R9	3
      0x8C24110D,  //  002F  GETMET	R9	R8	K13
      0x582C0013,  //  0030  LDCONST	R11	K19
      0x00322807,  //  0031  ADD	R12	K20	R7
      0x00301915,  //  0032  ADD	R12	R12	K21
      0x7C240600,  //  0033  CALL	R9	3
      0x8C24110D,  //  0034  GETMET	R9	R8	K13
      0x582C0016,  //  0035  LDCONST	R11	K22
      0x00322E07,  //  0036  ADD	R12	K23	R7
      0x00301915,  //  0037  ADD	R12	R12	K21
      0x7C240600,  //  0038  CALL	R9	3
      0x8C24110D,  //  0039  GETMET	R9	R8	K13
      0x582C0018,  //  003A  LDCONST	R11	K24
      0x00323207,  //  003B  ADD	R12	K25	R7
      0x0030191A,  //  003C  ADD	R12	R12	K26
      0x7C240600,  //  003D  CALL	R9	3
      0x8C24110D,  //  003E  GETMET	R9	R8	K13
      0x582C001B,  //  003F  LDCONST	R11	K27
      0x5830001C,  //  0040  LDCONST	R12	K28
      0x7C240600,  //  0041  CALL	R9	3
      0x8C24110D,  //  0042  GETMET	R9	R8	K13
      0x582C001D,  //  0043  LDCONST	R11	K29
      0x5830001E,  //  0044  LDCONST	R12	K30
      0x7C240600,  //  0045  CALL	R9	3
      0x8C24110D,  //  0046  GETMET	R9	R8	K13
      0x582C001F,  //  0047  LDCONST	R11	K31
      0x58300020,  //  0048  LDCONST	R12	K32
      0x7C240600,  //  0049  CALL	R9	3
      0x8C24110D,  //  004A  GETMET	R9	R8	K13
      0x582C0021,  //  004B  LDCONST	R11	K33
      0x58300022,  //  004C  LDCONST	R12	K34
      0x7C240600,  //  004D  CALL	R9	3
      0x8C240323,  //  004E  GETMET	R9	R1	K35
      0x002E4807,  //  004F  ADD	R11	K36	R7
      0x002C1725,  //  0050  ADD	R11	R11	K37
      0x002C1607,  //  0051  ADD	R11	R11	R7
      0x002C170F,  //  0052  ADD	R11	R11	K15
      0x002C1726,  //  0053  ADD	R11	R11	K38
      0x8C300527,  //  0054  GETMET	R12	R2	K39
      0x5C381000,  //  0055  MOVE	R14	R8
      0x603C0012,  //  0056  GETGBL	R15	G18
      0x7C3C0000,  //  0057  CALL	R15	0
      0x40401F28,  //  0058  CONNECT	R16	R15	K40
      0x7C300600,  //  0059  CALL	R12	3
      0x50340200,  //  005A  LDBOOL	R13	1	0
      0x7C240800,  //  005B  CALL	R9	4
      0x94240D29,  //  005C  GETIDX	R9	R6	K41
      0x4C280000,  //  005D  LDNIL	R10
      0x2024120A,  //  005E  NE	R9	R9	R10
      0x78260004,  //  005F  JMPF	R9	#0065
      0x8C24110D,  //  0060  GETMET	R9	R8	K13
      0x582C000E,  //  0061  LDCONST	R11	K14
      0x94300D29,  //  0062  GETIDX	R12	R6	K41
      0x7C240600,  //  0063  CALL	R9	3
      0x70020003,  //  0064  JMP		#0069
      0x8C24110D,  //  0065  GETMET	R9	R8	K13
      0x582C000E,  //  0066  LDCONST	R11	K14
      0x00300B2A,  //  0067  ADD	R12	R5	K42
      0x7C240600,  //  0068  CALL	R9	3
      0x8C24110D,  //  0069  GETMET	R9	R8	K13
      0x582C0012,  //  006A  LDCONST	R11	K18
      0x00300F2A,  //  006B  ADD	R12	R7	K42
      0x7C240600,  //  006C  CALL	R9	3
      0x8C24110D,  //  006D  GETMET	R9	R8	K13
      0x582C0013,  //  006E  LDCONST	R11	K19
      0x00322807,  //  006F  ADD	R12	K20	R7
      0x0030192B,  //  0070  ADD	R12	R12	K43
      0x7C240600,  //  0071  CALL	R9	3
      0x8C24110D,  //  0072  GETMET	R9	R8	K13
      0x582C0016,  //  0073  LDCONST	R11	K22
      0x00322E07,  //  0074  ADD	R12	K23	R7
      0x0030192B,  //  0075  ADD	R12	R12	K43
      0x7C240600,  //  0076  CALL	R9	3
      0x8C240323,  //  0077  GETMET	R9	R1	K35
      0x002E4807,  //  0078  ADD	R11	K36	R7
      0x002C1725,  //  0079  ADD	R11	R11	K37
      0x002C1607,  //  007A  ADD	R11	R11	R7
      0x002C172A,  //  007B  ADD	R11	R11	K42
      0x002C1726,  //  007C  ADD	R11	R11	K38
      0x8C300527,  //  007D  GETMET	R12	R2	K39
      0x5C381000,  //  007E  MOVE	R14	R8
      0x603C0012,  //  007F  GETGBL	R15	G18
      0x7C3C0000,  //  0080  CALL	R15	0
      0x40401F28,  //  0081  CONNECT	R16	R15	K40
      0x7C300600,  //  0082  CALL	R12	3
      0x50340200,  //  0083  LDBOOL	R13	1	0
      0x7C240800,  //  0084  CALL	R9	4
      0x94240D2C,  //  0085  GETIDX	R9	R6	K44
      0x4C280000,  //  0086  LDNIL	R10
      0x2024120A,  //  0087  NE	R9	R9	R10
      0x78260004,  //  0088  JMPF	R9	#008E
      0x8C24110D,  //  0089  GETMET	R9	R8	K13
      0x582C000E,  //  008A  LDCONST	R11	K14
      0x94300D2C,  //  008B  GETIDX	R12	R6	K44
      0x7C240600,  //  008C  CALL	R9	3
      0x70020003,  //  008D  JMP		#0092
      0x8C24110D,  //  008E  GETMET	R9	R8	K13
      0x582C000E,  //  008F  LDCONST	R11	K14
      0x00300B2D,  //  0090  ADD	R12	R5	K45
      0x7C240600,  //  0091  CALL	R9	3
      0x8C24110D,  //  0092  GETMET	R9	R8	K13
      0x582C0012,  //  0093  LDCONST	R11	K18
      0x00300F2D,  //  0094  ADD	R12	R7	K45
      0x7C240600,  //  0095  CALL	R9	3
      0x8C24110D,  //  0096  GETMET	R9	R8	K13
      0x582C0013,  //  0097  LDCONST	R11	K19
      0x00322807,  //  0098  ADD	R12	K20	R7
      0x0030192E,  //  0099  ADD	R12	R12	K46
      0x7C240600,  //  009A  CALL	R9	3
      0x8C24110D,  //  009B  GETMET	R9	R8	K13
      0x582C0016,  //  009C  LDCONST	R11	K22
      0x00322E07,  //  009D  ADD	R12	K23	R7
      0x0030192E,  //  009E  ADD	R12	R12	K46
      0x7C240600,  //  009F  CALL	R9	3
      0x8C240323,  //  00A0  GETMET	R9	R1	K35
      0x002E4807,  //  00A1  ADD	R11	K36	R7
      0x002C1725,  //  00A2  ADD	R11	R11	K37
      0x002C1607,  //  00A3  ADD	R11	R11	R7
      0x002C172D,  //  00A4  ADD	R11	R11	K45
      0x002C1726,  //  00A5  ADD	R11	R11	K38
      0x8C300527,  //  00A6  GETMET	R12	R2	K39
      0x5C381000,  //  00A7  MOVE	R14	R8
      0x603C0012,  //  00A8  GETGBL	R15	G18
      0x7C3C0000,  //  00A9  CALL	R15	0
      0x40401F28,  //  00AA  CONNECT	R16	R15	K40
      0x7C300600,  //  00AB  CALL	R12	3
      0x50340200,  //  00AC  LDBOOL	R13	1	0
      0x7C240800,  //  00AD  CALL	R9	4
      0x94240D2F,  //  00AE  GETIDX	R9	R6	K47
      0x4C280000,  //  00AF  LDNIL	R10
      0x2024120A,  //  00B0  NE	R9	R9	R10
      0x78260004,  //  00B1  JMPF	R9	#00B7
      0x8C24110D,  //  00B2  GETMET	R9	R8	K13
      0x582C000E,  //  00B3  LDCONST	R11	K14
      0x94300D2F,  //  00B4  GETIDX	R12	R6	K47
      0x7C240600,  //  00B5  CALL	R9	3
      0x70020003,  //  00B6  JMP		#00BB
      0x8C24110D,  //  00B7  GETMET	R9	R8	K13
      0x582C000E,  //  00B8  LDCONST	R11	K14
      0x00300B30,  //  00B9  ADD	R12	R5	K48
      0x7C240600,  //  00BA  CALL	R9	3
      0x8C24110D,  //  00BB  GETMET	R9	R8	K13
      0x582C0012,  //  00BC  LDCONST	R11	K18
      0x00300F30,  //  00BD  ADD	R12	R7	K48
      0x7C240600,  //  00BE  CALL	R9	3
      0x8C24110D,  //  00BF  GETMET	R9	R8	K13
      0x582C0013,  //  00C0  LDCONST	R11	K19
      0x00322807,  //  00C1  ADD	R12	K20	R7
      0x00301931,  //  00C2  ADD	R12	R12	K49
      0x7C240600,  //  00C3  CALL	R9	3
      0x8C24110D,  //  00C4  GETMET	R9	R8	K13
      0x582C0016,  //  00C5  LDCONST	R11	K22
      0x00322E07,  //  00C6  ADD	R12	K23	R7
      0x00301931,  //  00C7  ADD	R12	R12	K49
      0x7C240600,  //  00C8  CALL	R9	3
      0x8C240323,  //  00C9  GETMET	R9	R1	K35
      0x002E4807,  //  00CA  ADD	R11	K36	R7
      0x002C1725,  //  00CB  ADD	R11	R11	K37
      0x002C1607,  //  00CC  ADD	R11	R11	R7
      0x002C1730,  //  00CD  ADD	R11	R11	K48
      0x002C1726,  //  00CE  ADD	R11	R11	K38
      0x8C300527,  //  00CF  GETMET	R12	R2	K39
      0x5C381000,  //  00D0  MOVE	R14	R8
      0x603C0012,  //  00D1  GETGBL	R15	G18
      0x7C3C0000,  //  00D2  CALL	R15	0
      0x40401F28,  //  00D3  CONNECT	R16	R15	K40
      0x7C300600,  //  00D4  CALL	R12	3
      0x50340200,  //  00D5  LDBOOL	R13	1	0
      0x7C240800,  //  00D6  CALL	R9	4
      0x50240200,  //  00D7  LDBOOL	R9	1	0
      0x90026409,  //  00D8  SETMBR	R0	K50	R9
      0x80000000,  //  00D9  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: ezie_home_assistant_discovery
********************************************************************/
extern const bclass be_class_Driver;
be_local_class(ezie_home_assistant_discovery,
    3,
    &be_class_Driver,
    be_nested_map(8,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key(mqtt_connected, -1), be_const_var(1) },
        { be_const_key(every_second, -1), be_const_closure(ezie_home_assistant_discovery_every_second_closure) },
        { be_const_key(send_ha_discovery_message, -1), be_const_closure(ezie_home_assistant_discovery_send_ha_discovery_message_closure) },
        { be_const_key(publish_discovery_message_for_4speed_fan, 5), be_const_closure(ezie_home_assistant_discovery_publish_discovery_message_for_4speed_fan_closure) },
        { be_const_key(device_type, -1), be_const_var(2) },
        { be_const_key(init, 0), be_const_closure(ezie_home_assistant_discovery_init_closure) },
        { be_const_key(ha_discovery_sent, -1), be_const_var(0) },
        { be_const_key(publish_discovery_message_for_4P_switch, -1), be_const_closure(ezie_home_assistant_discovery_publish_discovery_message_for_4P_switch_closure) },
    })),
    (bstring*) &be_const_str_ezie_home_assistant_discovery
);
/*******************************************************************/

void be_load_ezie_home_assistant_discovery_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_ezie_home_assistant_discovery);
    be_setglobal(vm, "ezie_home_assistant_discovery");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
