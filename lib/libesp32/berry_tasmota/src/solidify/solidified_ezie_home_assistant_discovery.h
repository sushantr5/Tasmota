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
    ( &(const bvalue[55]) {     /* constants */
    /* K0   */  be_nested_str_weak(mqtt),
    /* K1   */  be_nested_str_weak(json),
    /* K2   */  be_nested_str_weak(tasmota),
    /* K3   */  be_nested_str_weak(cmd),
    /* K4   */  be_nested_str_weak(Status),
    /* K5   */  be_nested_str_weak(find),
    /* K6   */  be_nested_str_weak(DeviceName),
    /* K7   */  be_nested_str_weak(Topic),
    /* K8   */  be_nested_str_weak(platform),
    /* K9   */  be_nested_str_weak(setitem),
    /* K10  */  be_nested_str_weak(name),
    /* K11  */  be_nested_str_weak(device_class),
    /* K12  */  be_nested_str_weak(fan),
    /* K13  */  be_nested_str_weak(unique_id),
    /* K14  */  be_nested_str_weak(command_topic),
    /* K15  */  be_nested_str_weak(cmnd_X2F),
    /* K16  */  be_nested_str_weak(_X2FFanSpeed),
    /* K17  */  be_nested_str_weak(state_topic),
    /* K18  */  be_nested_str_weak(stat_X2F),
    /* K19  */  be_nested_str_weak(_X2FRESULT),
    /* K20  */  be_nested_str_weak(state_value_template),
    /* K21  */  be_nested_str_weak(_X7B_X25_X20if_X20value_json_X2EFanSpeed_X20_X3D_X3D_X200_X20_X2D_X25_X7D0_X7B_X25_X2D_X20elif_X20value_json_X2EFanSpeed_X20_X21_X3D_X200_X20_X2D_X25_X7D1_X7B_X25_X2D_X20endif_X20_X25_X7D),
    /* K22  */  be_nested_str_weak(availability_topic),
    /* K23  */  be_nested_str_weak(tele_X2F),
    /* K24  */  be_nested_str_weak(_X2FLWT),
    /* K25  */  be_nested_str_weak(payload_available),
    /* K26  */  be_nested_str_weak(Online),
    /* K27  */  be_nested_str_weak(payload_not_available),
    /* K28  */  be_nested_str_weak(Offline),
    /* K29  */  be_nested_str_weak(payload_off),
    /* K30  */  be_nested_str_weak(0),
    /* K31  */  be_nested_str_weak(payload_on),
    /* K32  */  be_nested_str_weak(1),
    /* K33  */  be_nested_str_weak(preset_modes),
    /* K34  */  be_nested_str_weak(off),
    /* K35  */  be_nested_str_weak(low),
    /* K36  */  be_nested_str_weak(medium),
    /* K37  */  be_nested_str_weak(high),
    /* K38  */  be_nested_str_weak(full),
    /* K39  */  be_nested_str_weak(preset_mode_command_topic),
    /* K40  */  be_nested_str_weak(_X7B_X25_X20if_X20value_X3D_X3D_X27low_X27_X20_X25_X7D1_X7B_X25_X20elif_X20value_X3D_X3D_X27medium_X27_X20_X25_X7D2_X7B_X25_X20elif_X20value_X3D_X3D_X27high_X27_X20_X25_X7D3_X7B_X25_X20elif_X20value_X3D_X3D_X27full_X27_X25_X7D4_X7B_X25_X20else_X20_X25_X7D0_X7B_X25_X20endif_X20_X25_X7D),
    /* K41  */  be_nested_str_weak(preset_mode_command_template),
    /* K42  */  be_nested_str_weak(preset_mode_state_topic),
    /* K43  */  be_nested_str_weak(percentage_command_topic),
    /* K44  */  be_nested_str_weak(percentage_state_topic),
    /* K45  */  be_nested_str_weak(speed_range_min),
    /* K46  */  be_const_int(1),
    /* K47  */  be_nested_str_weak(speed_range_max),
    /* K48  */  be_nested_str_weak(publish),
    /* K49  */  be_nested_str_weak(homeassistant_X2Ffan_X2F),
    /* K50  */  be_nested_str_weak(_X2F),
    /* K51  */  be_nested_str_weak(_X2Fconfig),
    /* K52  */  be_nested_str_weak(dump),
    /* K53  */  be_nested_str_weak(format),
    /* K54  */  be_nested_str_weak(ha_discovery_sent),
    }),
    be_str_weak(publish_discovery_message_for_4speed_fan),
    &be_const_str_solidified,
    ( &(const binstruction[127]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0xB80E0400,  //  0002  GETNGBL	R3	K2
      0x8C0C0703,  //  0003  GETMET	R3	R3	K3
      0x58140004,  //  0004  LDCONST	R5	K4
      0x7C0C0400,  //  0005  CALL	R3	2
      0x8C100705,  //  0006  GETMET	R4	R3	K5
      0x58180004,  //  0007  LDCONST	R6	K4
      0x7C100400,  //  0008  CALL	R4	2
      0x8C140905,  //  0009  GETMET	R5	R4	K5
      0x581C0006,  //  000A  LDCONST	R7	K6
      0x7C140400,  //  000B  CALL	R5	2
      0x8C180905,  //  000C  GETMET	R6	R4	K5
      0x58200007,  //  000D  LDCONST	R8	K7
      0x7C180400,  //  000E  CALL	R6	2
      0x601C0013,  //  000F  GETGBL	R7	G19
      0x7C1C0000,  //  0010  CALL	R7	0
      0x981E1100,  //  0011  SETIDX	R7	K8	K0
      0x8C200F09,  //  0012  GETMET	R8	R7	K9
      0x5828000A,  //  0013  LDCONST	R10	K10
      0x5C2C0A00,  //  0014  MOVE	R11	R5
      0x7C200600,  //  0015  CALL	R8	3
      0x8C200F09,  //  0016  GETMET	R8	R7	K9
      0x5828000B,  //  0017  LDCONST	R10	K11
      0x582C000C,  //  0018  LDCONST	R11	K12
      0x7C200600,  //  0019  CALL	R8	3
      0x8C200F09,  //  001A  GETMET	R8	R7	K9
      0x5828000D,  //  001B  LDCONST	R10	K13
      0x5C2C0C00,  //  001C  MOVE	R11	R6
      0x7C200600,  //  001D  CALL	R8	3
      0x8C200F09,  //  001E  GETMET	R8	R7	K9
      0x5828000E,  //  001F  LDCONST	R10	K14
      0x002E1E06,  //  0020  ADD	R11	K15	R6
      0x002C1710,  //  0021  ADD	R11	R11	K16
      0x7C200600,  //  0022  CALL	R8	3
      0x8C200F09,  //  0023  GETMET	R8	R7	K9
      0x58280011,  //  0024  LDCONST	R10	K17
      0x002E2406,  //  0025  ADD	R11	K18	R6
      0x002C1713,  //  0026  ADD	R11	R11	K19
      0x7C200600,  //  0027  CALL	R8	3
      0x8C200F09,  //  0028  GETMET	R8	R7	K9
      0x58280014,  //  0029  LDCONST	R10	K20
      0x582C0015,  //  002A  LDCONST	R11	K21
      0x7C200600,  //  002B  CALL	R8	3
      0x8C200F09,  //  002C  GETMET	R8	R7	K9
      0x58280016,  //  002D  LDCONST	R10	K22
      0x002E2E06,  //  002E  ADD	R11	K23	R6
      0x002C1718,  //  002F  ADD	R11	R11	K24
      0x7C200600,  //  0030  CALL	R8	3
      0x8C200F09,  //  0031  GETMET	R8	R7	K9
      0x58280019,  //  0032  LDCONST	R10	K25
      0x582C001A,  //  0033  LDCONST	R11	K26
      0x7C200600,  //  0034  CALL	R8	3
      0x8C200F09,  //  0035  GETMET	R8	R7	K9
      0x5828001B,  //  0036  LDCONST	R10	K27
      0x582C001C,  //  0037  LDCONST	R11	K28
      0x7C200600,  //  0038  CALL	R8	3
      0x8C200F09,  //  0039  GETMET	R8	R7	K9
      0x5828001D,  //  003A  LDCONST	R10	K29
      0x582C001E,  //  003B  LDCONST	R11	K30
      0x7C200600,  //  003C  CALL	R8	3
      0x8C200F09,  //  003D  GETMET	R8	R7	K9
      0x5828001F,  //  003E  LDCONST	R10	K31
      0x582C0020,  //  003F  LDCONST	R11	K32
      0x7C200600,  //  0040  CALL	R8	3
      0x8C200F09,  //  0041  GETMET	R8	R7	K9
      0x58280021,  //  0042  LDCONST	R10	K33
      0x602C0012,  //  0043  GETGBL	R11	G18
      0x7C2C0000,  //  0044  CALL	R11	0
      0x40301722,  //  0045  CONNECT	R12	R11	K34
      0x40301723,  //  0046  CONNECT	R12	R11	K35
      0x40301724,  //  0047  CONNECT	R12	R11	K36
      0x40301725,  //  0048  CONNECT	R12	R11	K37
      0x40301726,  //  0049  CONNECT	R12	R11	K38
      0x7C200600,  //  004A  CALL	R8	3
      0x8C200F09,  //  004B  GETMET	R8	R7	K9
      0x58280027,  //  004C  LDCONST	R10	K39
      0x002E1E06,  //  004D  ADD	R11	K15	R6
      0x002C1710,  //  004E  ADD	R11	R11	K16
      0x7C200600,  //  004F  CALL	R8	3
      0x58200028,  //  0050  LDCONST	R8	K40
      0x8C240F09,  //  0051  GETMET	R9	R7	K9
      0x582C0029,  //  0052  LDCONST	R11	K41
      0x5C301000,  //  0053  MOVE	R12	R8
      0x7C240600,  //  0054  CALL	R9	3
      0x8C240F09,  //  0055  GETMET	R9	R7	K9
      0x582C002A,  //  0056  LDCONST	R11	K42
      0x00322406,  //  0057  ADD	R12	K18	R6
      0x00301913,  //  0058  ADD	R12	R12	K19
      0x7C240600,  //  0059  CALL	R9	3
      0x8C240F09,  //  005A  GETMET	R9	R7	K9
      0x582C002B,  //  005B  LDCONST	R11	K43
      0x00321E06,  //  005C  ADD	R12	K15	R6
      0x00301910,  //  005D  ADD	R12	R12	K16
      0x7C240600,  //  005E  CALL	R9	3
      0x8C240F09,  //  005F  GETMET	R9	R7	K9
      0x582C002C,  //  0060  LDCONST	R11	K44
      0x00322406,  //  0061  ADD	R12	K18	R6
      0x00301913,  //  0062  ADD	R12	R12	K19
      0x7C240600,  //  0063  CALL	R9	3
      0x8C240F09,  //  0064  GETMET	R9	R7	K9
      0x582C002D,  //  0065  LDCONST	R11	K45
      0x5830002E,  //  0066  LDCONST	R12	K46
      0x7C240600,  //  0067  CALL	R9	3
      0x8C240F09,  //  0068  GETMET	R9	R7	K9
      0x582C002F,  //  0069  LDCONST	R11	K47
      0x54320003,  //  006A  LDINT	R12	4
      0x7C240600,  //  006B  CALL	R9	3
      0x60240001,  //  006C  GETGBL	R9	G1
      0x5C280E00,  //  006D  MOVE	R10	R7
      0x7C240200,  //  006E  CALL	R9	1
      0x8C240330,  //  006F  GETMET	R9	R1	K48
      0x002E6206,  //  0070  ADD	R11	K49	R6
      0x002C1732,  //  0071  ADD	R11	R11	K50
      0x002C1606,  //  0072  ADD	R11	R11	R6
      0x002C1733,  //  0073  ADD	R11	R11	K51
      0x8C300534,  //  0074  GETMET	R12	R2	K52
      0x5C380E00,  //  0075  MOVE	R14	R7
      0x603C0012,  //  0076  GETGBL	R15	G18
      0x7C3C0000,  //  0077  CALL	R15	0
      0x40401F35,  //  0078  CONNECT	R16	R15	K53
      0x7C300600,  //  0079  CALL	R12	3
      0x50340200,  //  007A  LDBOOL	R13	1	0
      0x7C240800,  //  007B  CALL	R9	4
      0x50240200,  //  007C  LDBOOL	R9	1	0
      0x90026C09,  //  007D  SETMBR	R0	K54	R9
      0x80000000,  //  007E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: every_second
********************************************************************/
be_local_closure(ezie_home_assistant_discovery_every_second,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(ha_discovery_sent),
    /* K1   */  be_nested_str_weak(mqtt_connected),
    /* K2   */  be_nested_str_weak(send_ha_discovery_message),
    }),
    be_str_weak(every_second),
    &be_const_str_solidified,
    ( &(const binstruction[11]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x50080000,  //  0001  LDBOOL	R2	0	0
      0x1C040202,  //  0002  EQ	R1	R1	R2
      0x78060005,  //  0003  JMPF	R1	#000A
      0x88040101,  //  0004  GETMBR	R1	R0	K1
      0x50080200,  //  0005  LDBOOL	R2	1	0
      0x1C040202,  //  0006  EQ	R1	R1	R2
      0x78060001,  //  0007  JMPF	R1	#000A
      0x8C040102,  //  0008  GETMET	R1	R0	K2
      0x7C040200,  //  0009  CALL	R1	1
      0x80000000,  //  000A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_ha_discovery_message
********************************************************************/
be_local_closure(ezie_home_assistant_discovery_send_ha_discovery_message,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota),
    /* K1   */  be_nested_str_weak(cmd),
    /* K2   */  be_nested_str_weak(mqtthost),
    /* K3   */  be_nested_str_weak(find),
    /* K4   */  be_nested_str_weak(MqttHost),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(Sending_X20HA_X20Discovery_X20Message_X2E_X2E_X2E),
    /* K7   */  be_nested_str_weak(mqtt_connected),
    /* K8   */  be_nested_str_weak(device_type),
    /* K9   */  be_const_int(1),
    /* K10  */  be_nested_str_weak(publish_discovery_message_for_4P_switch),
    /* K11  */  be_const_int(2),
    /* K12  */  be_nested_str_weak(publish_discovery_message_for_4speed_fan),
    }),
    be_str_weak(send_ha_discovery_message),
    &be_const_str_solidified,
    ( &(const binstruction[30]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x580C0002,  //  0002  LDCONST	R3	K2
      0x7C040400,  //  0003  CALL	R1	2
      0x8C080303,  //  0004  GETMET	R2	R1	K3
      0x58100004,  //  0005  LDCONST	R4	K4
      0x7C080400,  //  0006  CALL	R2	2
      0x600C000C,  //  0007  GETGBL	R3	G12
      0x5C100400,  //  0008  MOVE	R4	R2
      0x7C0C0200,  //  0009  CALL	R3	1
      0x1C0C0705,  //  000A  EQ	R3	R3	K5
      0x780E0000,  //  000B  JMPF	R3	#000D
      0x80000600,  //  000C  RET	0
      0x600C0001,  //  000D  GETGBL	R3	G1
      0x58100006,  //  000E  LDCONST	R4	K6
      0x7C0C0200,  //  000F  CALL	R3	1
      0x500C0200,  //  0010  LDBOOL	R3	1	0
      0x90020E03,  //  0011  SETMBR	R0	K7	R3
      0x880C0108,  //  0012  GETMBR	R3	R0	K8
      0x1C0C0709,  //  0013  EQ	R3	R3	K9
      0x780E0002,  //  0014  JMPF	R3	#0018
      0x8C0C010A,  //  0015  GETMET	R3	R0	K10
      0x7C0C0200,  //  0016  CALL	R3	1
      0x70020004,  //  0017  JMP		#001D
      0x880C0108,  //  0018  GETMBR	R3	R0	K8
      0x1C0C070B,  //  0019  EQ	R3	R3	K11
      0x780E0001,  //  001A  JMPF	R3	#001D
      0x8C0C010C,  //  001B  GETMET	R3	R0	K12
      0x7C0C0200,  //  001C  CALL	R3	1
      0x80000000,  //  001D  RET	0
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
        /* K0   */  be_nested_str_weak(send_ha_discovery_message),
        /* K1   */  be_nested_str_weak(tasmota),
        /* K2   */  be_nested_str_weak(remove_rule),
        /* K3   */  be_nested_str_weak(Mqtt_X23Connected),
        /* K4   */  be_nested_str_weak(ha_discovery_sent),
        }),
        be_str_weak(_anonymous_),
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
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str_weak(ha_discovery_sent),
    /* K1   */  be_nested_str_weak(mqtt_connected),
    /* K2   */  be_nested_str_weak(device_type),
    /* K3   */  be_const_int(0),
    /* K4   */  be_nested_str_weak(tasmota),
    /* K5   */  be_nested_str_weak(add_rule),
    /* K6   */  be_nested_str_weak(Mqtt_X23Connected),
    /* K7   */  be_nested_str_weak(add_driver),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[22]) {  /* code */
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
      0xB80A0800,  //  000A  GETNGBL	R2	K4
      0x8C080505,  //  000B  GETMET	R2	R2	K5
      0x58100006,  //  000C  LDCONST	R4	K6
      0x84140000,  //  000D  CLOSURE	R5	P0
      0x58180000,  //  000E  LDCONST	R6	K0
      0x7C080800,  //  000F  CALL	R2	4
      0xB80A0800,  //  0010  GETNGBL	R2	K4
      0x8C080507,  //  0011  GETMET	R2	R2	K7
      0x5C100000,  //  0012  MOVE	R4	R0
      0x7C080400,  //  0013  CALL	R2	2
      0xA0000000,  //  0014  CLOSE	R0
      0x80000000,  //  0015  RET	0
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
    ( &(const bvalue[48]) {     /* constants */
    /* K0   */  be_nested_str_weak(mqtt),
    /* K1   */  be_nested_str_weak(json),
    /* K2   */  be_nested_str_weak(tasmota),
    /* K3   */  be_nested_str_weak(cmd),
    /* K4   */  be_nested_str_weak(Status),
    /* K5   */  be_nested_str_weak(find),
    /* K6   */  be_nested_str_weak(DeviceName),
    /* K7   */  be_nested_str_weak(FriendlyName),
    /* K8   */  be_nested_str_weak(Topic),
    /* K9   */  be_nested_str_weak(platform),
    /* K10  */  be_const_int(0),
    /* K11  */  be_nested_str_weak(setitem),
    /* K12  */  be_nested_str_weak(name),
    /* K13  */  be_nested_str_weak(_1),
    /* K14  */  be_nested_str_weak(device_class),
    /* K15  */  be_nested_str_weak(switch),
    /* K16  */  be_nested_str_weak(unique_id),
    /* K17  */  be_nested_str_weak(command_topic),
    /* K18  */  be_nested_str_weak(cmnd_X2F),
    /* K19  */  be_nested_str_weak(_X2FPOWER1),
    /* K20  */  be_nested_str_weak(state_topic),
    /* K21  */  be_nested_str_weak(stat_X2F),
    /* K22  */  be_nested_str_weak(availability_topic),
    /* K23  */  be_nested_str_weak(tele_X2F),
    /* K24  */  be_nested_str_weak(_X2FLWT),
    /* K25  */  be_nested_str_weak(payload_available),
    /* K26  */  be_nested_str_weak(Online),
    /* K27  */  be_nested_str_weak(payload_not_available),
    /* K28  */  be_nested_str_weak(Offline),
    /* K29  */  be_nested_str_weak(payload_off),
    /* K30  */  be_nested_str_weak(OFF),
    /* K31  */  be_nested_str_weak(payload_on),
    /* K32  */  be_nested_str_weak(ON),
    /* K33  */  be_nested_str_weak(publish),
    /* K34  */  be_nested_str_weak(homeassistant_X2Fswitch_X2F),
    /* K35  */  be_nested_str_weak(_X2Fconfig),
    /* K36  */  be_nested_str_weak(dump),
    /* K37  */  be_nested_str_weak(format),
    /* K38  */  be_const_int(1),
    /* K39  */  be_nested_str_weak(_2),
    /* K40  */  be_nested_str_weak(_X2FPOWER2),
    /* K41  */  be_const_int(2),
    /* K42  */  be_nested_str_weak(_3),
    /* K43  */  be_nested_str_weak(_X2FPOWER3),
    /* K44  */  be_const_int(3),
    /* K45  */  be_nested_str_weak(_4),
    /* K46  */  be_nested_str_weak(_X2FPOWER4),
    /* K47  */  be_nested_str_weak(ha_discovery_sent),
    }),
    be_str_weak(publish_discovery_message_for_4P_switch),
    &be_const_str_solidified,
    ( &(const binstruction[205]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0xA40A0200,  //  0001  IMPORT	R2	K1
      0xB80E0400,  //  0002  GETNGBL	R3	K2
      0x8C0C0703,  //  0003  GETMET	R3	R3	K3
      0x58140004,  //  0004  LDCONST	R5	K4
      0x7C0C0400,  //  0005  CALL	R3	2
      0x8C100705,  //  0006  GETMET	R4	R3	K5
      0x58180004,  //  0007  LDCONST	R6	K4
      0x7C100400,  //  0008  CALL	R4	2
      0x8C140905,  //  0009  GETMET	R5	R4	K5
      0x581C0006,  //  000A  LDCONST	R7	K6
      0x7C140400,  //  000B  CALL	R5	2
      0x8C180905,  //  000C  GETMET	R6	R4	K5
      0x58200007,  //  000D  LDCONST	R8	K7
      0x7C180400,  //  000E  CALL	R6	2
      0x8C1C0905,  //  000F  GETMET	R7	R4	K5
      0x58240008,  //  0010  LDCONST	R9	K8
      0x7C1C0400,  //  0011  CALL	R7	2
      0x60200013,  //  0012  GETGBL	R8	G19
      0x7C200000,  //  0013  CALL	R8	0
      0x98221300,  //  0014  SETIDX	R8	K9	K0
      0x94240D0A,  //  0015  GETIDX	R9	R6	K10
      0x4C280000,  //  0016  LDNIL	R10
      0x2024120A,  //  0017  NE	R9	R9	R10
      0x78260004,  //  0018  JMPF	R9	#001E
      0x8C24110B,  //  0019  GETMET	R9	R8	K11
      0x582C000C,  //  001A  LDCONST	R11	K12
      0x94300D0A,  //  001B  GETIDX	R12	R6	K10
      0x7C240600,  //  001C  CALL	R9	3
      0x70020003,  //  001D  JMP		#0022
      0x8C24110B,  //  001E  GETMET	R9	R8	K11
      0x582C000C,  //  001F  LDCONST	R11	K12
      0x00300B0D,  //  0020  ADD	R12	R5	K13
      0x7C240600,  //  0021  CALL	R9	3
      0x8C24110B,  //  0022  GETMET	R9	R8	K11
      0x582C000E,  //  0023  LDCONST	R11	K14
      0x5830000F,  //  0024  LDCONST	R12	K15
      0x7C240600,  //  0025  CALL	R9	3
      0x8C24110B,  //  0026  GETMET	R9	R8	K11
      0x582C0010,  //  0027  LDCONST	R11	K16
      0x00300F0D,  //  0028  ADD	R12	R7	K13
      0x7C240600,  //  0029  CALL	R9	3
      0x8C24110B,  //  002A  GETMET	R9	R8	K11
      0x582C0011,  //  002B  LDCONST	R11	K17
      0x00322407,  //  002C  ADD	R12	K18	R7
      0x00301913,  //  002D  ADD	R12	R12	K19
      0x7C240600,  //  002E  CALL	R9	3
      0x8C24110B,  //  002F  GETMET	R9	R8	K11
      0x582C0014,  //  0030  LDCONST	R11	K20
      0x00322A07,  //  0031  ADD	R12	K21	R7
      0x00301913,  //  0032  ADD	R12	R12	K19
      0x7C240600,  //  0033  CALL	R9	3
      0x8C24110B,  //  0034  GETMET	R9	R8	K11
      0x582C0016,  //  0035  LDCONST	R11	K22
      0x00322E07,  //  0036  ADD	R12	K23	R7
      0x00301918,  //  0037  ADD	R12	R12	K24
      0x7C240600,  //  0038  CALL	R9	3
      0x8C24110B,  //  0039  GETMET	R9	R8	K11
      0x582C0019,  //  003A  LDCONST	R11	K25
      0x5830001A,  //  003B  LDCONST	R12	K26
      0x7C240600,  //  003C  CALL	R9	3
      0x8C24110B,  //  003D  GETMET	R9	R8	K11
      0x582C001B,  //  003E  LDCONST	R11	K27
      0x5830001C,  //  003F  LDCONST	R12	K28
      0x7C240600,  //  0040  CALL	R9	3
      0x8C24110B,  //  0041  GETMET	R9	R8	K11
      0x582C001D,  //  0042  LDCONST	R11	K29
      0x5830001E,  //  0043  LDCONST	R12	K30
      0x7C240600,  //  0044  CALL	R9	3
      0x8C24110B,  //  0045  GETMET	R9	R8	K11
      0x582C001F,  //  0046  LDCONST	R11	K31
      0x58300020,  //  0047  LDCONST	R12	K32
      0x7C240600,  //  0048  CALL	R9	3
      0x8C240321,  //  0049  GETMET	R9	R1	K33
      0x002E4407,  //  004A  ADD	R11	K34	R7
      0x002C170D,  //  004B  ADD	R11	R11	K13
      0x002C1723,  //  004C  ADD	R11	R11	K35
      0x8C300524,  //  004D  GETMET	R12	R2	K36
      0x5C381000,  //  004E  MOVE	R14	R8
      0x603C0012,  //  004F  GETGBL	R15	G18
      0x7C3C0000,  //  0050  CALL	R15	0
      0x40401F25,  //  0051  CONNECT	R16	R15	K37
      0x7C300600,  //  0052  CALL	R12	3
      0x50340200,  //  0053  LDBOOL	R13	1	0
      0x7C240800,  //  0054  CALL	R9	4
      0x94240D26,  //  0055  GETIDX	R9	R6	K38
      0x4C280000,  //  0056  LDNIL	R10
      0x2024120A,  //  0057  NE	R9	R9	R10
      0x78260004,  //  0058  JMPF	R9	#005E
      0x8C24110B,  //  0059  GETMET	R9	R8	K11
      0x582C000C,  //  005A  LDCONST	R11	K12
      0x94300D26,  //  005B  GETIDX	R12	R6	K38
      0x7C240600,  //  005C  CALL	R9	3
      0x70020003,  //  005D  JMP		#0062
      0x8C24110B,  //  005E  GETMET	R9	R8	K11
      0x582C000C,  //  005F  LDCONST	R11	K12
      0x00300B27,  //  0060  ADD	R12	R5	K39
      0x7C240600,  //  0061  CALL	R9	3
      0x8C24110B,  //  0062  GETMET	R9	R8	K11
      0x582C0010,  //  0063  LDCONST	R11	K16
      0x00300F27,  //  0064  ADD	R12	R7	K39
      0x7C240600,  //  0065  CALL	R9	3
      0x8C24110B,  //  0066  GETMET	R9	R8	K11
      0x582C0011,  //  0067  LDCONST	R11	K17
      0x00322407,  //  0068  ADD	R12	K18	R7
      0x00301928,  //  0069  ADD	R12	R12	K40
      0x7C240600,  //  006A  CALL	R9	3
      0x8C24110B,  //  006B  GETMET	R9	R8	K11
      0x582C0014,  //  006C  LDCONST	R11	K20
      0x00322A07,  //  006D  ADD	R12	K21	R7
      0x00301928,  //  006E  ADD	R12	R12	K40
      0x7C240600,  //  006F  CALL	R9	3
      0x8C240321,  //  0070  GETMET	R9	R1	K33
      0x002E4407,  //  0071  ADD	R11	K34	R7
      0x002C1727,  //  0072  ADD	R11	R11	K39
      0x002C1723,  //  0073  ADD	R11	R11	K35
      0x8C300524,  //  0074  GETMET	R12	R2	K36
      0x5C381000,  //  0075  MOVE	R14	R8
      0x603C0012,  //  0076  GETGBL	R15	G18
      0x7C3C0000,  //  0077  CALL	R15	0
      0x40401F25,  //  0078  CONNECT	R16	R15	K37
      0x7C300600,  //  0079  CALL	R12	3
      0x50340200,  //  007A  LDBOOL	R13	1	0
      0x7C240800,  //  007B  CALL	R9	4
      0x94240D29,  //  007C  GETIDX	R9	R6	K41
      0x4C280000,  //  007D  LDNIL	R10
      0x2024120A,  //  007E  NE	R9	R9	R10
      0x78260004,  //  007F  JMPF	R9	#0085
      0x8C24110B,  //  0080  GETMET	R9	R8	K11
      0x582C000C,  //  0081  LDCONST	R11	K12
      0x94300D29,  //  0082  GETIDX	R12	R6	K41
      0x7C240600,  //  0083  CALL	R9	3
      0x70020003,  //  0084  JMP		#0089
      0x8C24110B,  //  0085  GETMET	R9	R8	K11
      0x582C000C,  //  0086  LDCONST	R11	K12
      0x00300B2A,  //  0087  ADD	R12	R5	K42
      0x7C240600,  //  0088  CALL	R9	3
      0x8C24110B,  //  0089  GETMET	R9	R8	K11
      0x582C0010,  //  008A  LDCONST	R11	K16
      0x00300F2A,  //  008B  ADD	R12	R7	K42
      0x7C240600,  //  008C  CALL	R9	3
      0x8C24110B,  //  008D  GETMET	R9	R8	K11
      0x582C0011,  //  008E  LDCONST	R11	K17
      0x00322407,  //  008F  ADD	R12	K18	R7
      0x0030192B,  //  0090  ADD	R12	R12	K43
      0x7C240600,  //  0091  CALL	R9	3
      0x8C24110B,  //  0092  GETMET	R9	R8	K11
      0x582C0014,  //  0093  LDCONST	R11	K20
      0x00322A07,  //  0094  ADD	R12	K21	R7
      0x0030192B,  //  0095  ADD	R12	R12	K43
      0x7C240600,  //  0096  CALL	R9	3
      0x8C240321,  //  0097  GETMET	R9	R1	K33
      0x002E4407,  //  0098  ADD	R11	K34	R7
      0x002C172A,  //  0099  ADD	R11	R11	K42
      0x002C1723,  //  009A  ADD	R11	R11	K35
      0x8C300524,  //  009B  GETMET	R12	R2	K36
      0x5C381000,  //  009C  MOVE	R14	R8
      0x603C0012,  //  009D  GETGBL	R15	G18
      0x7C3C0000,  //  009E  CALL	R15	0
      0x40401F25,  //  009F  CONNECT	R16	R15	K37
      0x7C300600,  //  00A0  CALL	R12	3
      0x50340200,  //  00A1  LDBOOL	R13	1	0
      0x7C240800,  //  00A2  CALL	R9	4
      0x94240D2C,  //  00A3  GETIDX	R9	R6	K44
      0x4C280000,  //  00A4  LDNIL	R10
      0x2024120A,  //  00A5  NE	R9	R9	R10
      0x78260004,  //  00A6  JMPF	R9	#00AC
      0x8C24110B,  //  00A7  GETMET	R9	R8	K11
      0x582C000C,  //  00A8  LDCONST	R11	K12
      0x94300D2C,  //  00A9  GETIDX	R12	R6	K44
      0x7C240600,  //  00AA  CALL	R9	3
      0x70020003,  //  00AB  JMP		#00B0
      0x8C24110B,  //  00AC  GETMET	R9	R8	K11
      0x582C000C,  //  00AD  LDCONST	R11	K12
      0x00300B2D,  //  00AE  ADD	R12	R5	K45
      0x7C240600,  //  00AF  CALL	R9	3
      0x8C24110B,  //  00B0  GETMET	R9	R8	K11
      0x582C0010,  //  00B1  LDCONST	R11	K16
      0x00300F2D,  //  00B2  ADD	R12	R7	K45
      0x7C240600,  //  00B3  CALL	R9	3
      0x8C24110B,  //  00B4  GETMET	R9	R8	K11
      0x582C0011,  //  00B5  LDCONST	R11	K17
      0x00322407,  //  00B6  ADD	R12	K18	R7
      0x0030192E,  //  00B7  ADD	R12	R12	K46
      0x7C240600,  //  00B8  CALL	R9	3
      0x8C24110B,  //  00B9  GETMET	R9	R8	K11
      0x582C0014,  //  00BA  LDCONST	R11	K20
      0x00322A07,  //  00BB  ADD	R12	K21	R7
      0x0030192E,  //  00BC  ADD	R12	R12	K46
      0x7C240600,  //  00BD  CALL	R9	3
      0x8C240321,  //  00BE  GETMET	R9	R1	K33
      0x002E4407,  //  00BF  ADD	R11	K34	R7
      0x002C172D,  //  00C0  ADD	R11	R11	K45
      0x002C1723,  //  00C1  ADD	R11	R11	K35
      0x8C300524,  //  00C2  GETMET	R12	R2	K36
      0x5C381000,  //  00C3  MOVE	R14	R8
      0x603C0012,  //  00C4  GETGBL	R15	G18
      0x7C3C0000,  //  00C5  CALL	R15	0
      0x40401F25,  //  00C6  CONNECT	R16	R15	K37
      0x7C300600,  //  00C7  CALL	R12	3
      0x50340200,  //  00C8  LDBOOL	R13	1	0
      0x7C240800,  //  00C9  CALL	R9	4
      0x50240200,  //  00CA  LDBOOL	R9	1	0
      0x90025E09,  //  00CB  SETMBR	R0	K47	R9
      0x80000000,  //  00CC  RET	0
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
        { be_const_key_weak(mqtt_connected, -1), be_const_var(1) },
        { be_const_key_weak(every_second, -1), be_const_closure(ezie_home_assistant_discovery_every_second_closure) },
        { be_const_key_weak(send_ha_discovery_message, -1), be_const_closure(ezie_home_assistant_discovery_send_ha_discovery_message_closure) },
        { be_const_key_weak(publish_discovery_message_for_4speed_fan, 5), be_const_closure(ezie_home_assistant_discovery_publish_discovery_message_for_4speed_fan_closure) },
        { be_const_key_weak(device_type, -1), be_const_var(2) },
        { be_const_key_weak(init, 0), be_const_closure(ezie_home_assistant_discovery_init_closure) },
        { be_const_key_weak(ha_discovery_sent, -1), be_const_var(0) },
        { be_const_key_weak(publish_discovery_message_for_4P_switch, -1), be_const_closure(ezie_home_assistant_discovery_publish_discovery_message_for_4P_switch_closure) },
    })),
    be_str_weak(ezie_home_assistant_discovery)
);
/*******************************************************************/

void be_load_ezie_home_assistant_discovery_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_ezie_home_assistant_discovery);
    be_setglobal(vm, "ezie_home_assistant_discovery");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
