/* Solidification of Matter_Plugin_Fan.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Fan;

/********************************************************************
** Solidified function: invoke_request
********************************************************************/
be_local_closure(Matter_Plugin_Fan_invoke_request,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[17]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(command),
    /* K4   */  be_const_int(0),
    /* K5   */  be_nested_str_weak(findsubval),
    /* K6   */  be_nested_str_weak(tasmota),
    /* K7   */  be_nested_str_weak(scale_uint),
    /* K8   */  be_nested_str_weak(cmd),
    /* K9   */  be_nested_str_weak(fanspeed_X20),
    /* K10  */  be_nested_str_weak(update_shadow),
    /* K11  */  be_nested_str_weak(log),
    /* K12  */  be_nested_str_weak(speed_X3A),
    /* K13  */  be_const_int(1),
    /* K14  */  be_const_int(2),
    /* K15  */  be_const_int(3),
    /* K16  */  be_nested_str_weak(invoke_request),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[105]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140702,  //  0002  GETMBR	R5	R3	K2
      0x88180703,  //  0003  GETMBR	R6	R3	K3
      0x541E0007,  //  0004  LDINT	R7	8
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0057,  //  0006  JMPF	R7	#005F
      0x1C1C0D04,  //  0007  EQ	R7	R6	K4
      0x781E0018,  //  0008  JMPF	R7	#0022
      0x8C1C0505,  //  0009  GETMET	R7	R2	K5
      0x58240004,  //  000A  LDCONST	R9	K4
      0x7C1C0400,  //  000B  CALL	R7	2
      0xB8220C00,  //  000C  GETNGBL	R8	K6
      0x8C201107,  //  000D  GETMET	R8	R8	K7
      0x5C280E00,  //  000E  MOVE	R10	R7
      0x582C0004,  //  000F  LDCONST	R11	K4
      0x54320003,  //  0010  LDINT	R12	4
      0x58340004,  //  0011  LDCONST	R13	K4
      0x543A0003,  //  0012  LDINT	R14	4
      0x7C200C00,  //  0013  CALL	R8	6
      0xB8260C00,  //  0014  GETNGBL	R9	K6
      0x8C241308,  //  0015  GETMET	R9	R9	K8
      0x002E1208,  //  0016  ADD	R11	K9	R8
      0x7C240400,  //  0017  CALL	R9	2
      0x8C24010A,  //  0018  GETMET	R9	R0	K10
      0x7C240200,  //  0019  CALL	R9	1
      0x60240008,  //  001A  GETGBL	R9	G8
      0x5C280E00,  //  001B  MOVE	R10	R7
      0x7C240200,  //  001C  CALL	R9	1
      0x00261809,  //  001D  ADD	R9	K12	R9
      0x900E1609,  //  001E  SETMBR	R3	K11	R9
      0x50240200,  //  001F  LDBOOL	R9	1	0
      0x80041200,  //  0020  RET	1	R9
      0x7002003B,  //  0021  JMP		#005E
      0x1C1C0D0D,  //  0022  EQ	R7	R6	K13
      0x781E0002,  //  0023  JMPF	R7	#0027
      0x501C0200,  //  0024  LDBOOL	R7	1	0
      0x80040E00,  //  0025  RET	1	R7
      0x70020036,  //  0026  JMP		#005E
      0x1C1C0D0E,  //  0027  EQ	R7	R6	K14
      0x781E0002,  //  0028  JMPF	R7	#002C
      0x501C0200,  //  0029  LDBOOL	R7	1	0
      0x80040E00,  //  002A  RET	1	R7
      0x70020031,  //  002B  JMP		#005E
      0x1C1C0D0F,  //  002C  EQ	R7	R6	K15
      0x781E0002,  //  002D  JMPF	R7	#0031
      0x501C0200,  //  002E  LDBOOL	R7	1	0
      0x80040E00,  //  002F  RET	1	R7
      0x7002002C,  //  0030  JMP		#005E
      0x541E0003,  //  0031  LDINT	R7	4
      0x1C1C0C07,  //  0032  EQ	R7	R6	R7
      0x781E0018,  //  0033  JMPF	R7	#004D
      0x8C1C0505,  //  0034  GETMET	R7	R2	K5
      0x58240004,  //  0035  LDCONST	R9	K4
      0x7C1C0400,  //  0036  CALL	R7	2
      0xB8220C00,  //  0037  GETNGBL	R8	K6
      0x8C201107,  //  0038  GETMET	R8	R8	K7
      0x5C280E00,  //  0039  MOVE	R10	R7
      0x582C0004,  //  003A  LDCONST	R11	K4
      0x54320003,  //  003B  LDINT	R12	4
      0x58340004,  //  003C  LDCONST	R13	K4
      0x543A0003,  //  003D  LDINT	R14	4
      0x7C200C00,  //  003E  CALL	R8	6
      0xB8260C00,  //  003F  GETNGBL	R9	K6
      0x8C241308,  //  0040  GETMET	R9	R9	K8
      0x002E1208,  //  0041  ADD	R11	K9	R8
      0x7C240400,  //  0042  CALL	R9	2
      0x8C24010A,  //  0043  GETMET	R9	R0	K10
      0x7C240200,  //  0044  CALL	R9	1
      0x60240008,  //  0045  GETGBL	R9	G8
      0x5C280E00,  //  0046  MOVE	R10	R7
      0x7C240200,  //  0047  CALL	R9	1
      0x00261809,  //  0048  ADD	R9	K12	R9
      0x900E1609,  //  0049  SETMBR	R3	K11	R9
      0x50240200,  //  004A  LDBOOL	R9	1	0
      0x80041200,  //  004B  RET	1	R9
      0x70020010,  //  004C  JMP		#005E
      0x541E0004,  //  004D  LDINT	R7	5
      0x1C1C0C07,  //  004E  EQ	R7	R6	R7
      0x781E0002,  //  004F  JMPF	R7	#0053
      0x501C0200,  //  0050  LDBOOL	R7	1	0
      0x80040E00,  //  0051  RET	1	R7
      0x7002000A,  //  0052  JMP		#005E
      0x541E0005,  //  0053  LDINT	R7	6
      0x1C1C0C07,  //  0054  EQ	R7	R6	R7
      0x781E0002,  //  0055  JMPF	R7	#0059
      0x501C0200,  //  0056  LDBOOL	R7	1	0
      0x80040E00,  //  0057  RET	1	R7
      0x70020004,  //  0058  JMP		#005E
      0x541E0006,  //  0059  LDINT	R7	7
      0x1C1C0C07,  //  005A  EQ	R7	R6	R7
      0x781E0001,  //  005B  JMPF	R7	#005E
      0x501C0200,  //  005C  LDBOOL	R7	1	0
      0x80040E00,  //  005D  RET	1	R7
      0x70020008,  //  005E  JMP		#0068
      0x601C0003,  //  005F  GETGBL	R7	G3
      0x5C200000,  //  0060  MOVE	R8	R0
      0x7C1C0200,  //  0061  CALL	R7	1
      0x8C1C0F10,  //  0062  GETMET	R7	R7	K16
      0x5C240200,  //  0063  MOVE	R9	R1
      0x5C280400,  //  0064  MOVE	R10	R2
      0x5C2C0600,  //  0065  MOVE	R11	R3
      0x7C1C0800,  //  0066  CALL	R7	4
      0x80040E00,  //  0067  RET	1	R7
      0x80000000,  //  0068  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_shadow
********************************************************************/
be_local_closure(Matter_Plugin_Fan_update_shadow,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota),
    /* K1   */  be_nested_str_weak(cmd),
    /* K2   */  be_nested_str_weak(fanspeed),
    /* K3   */  be_nested_str_weak(find),
    /* K4   */  be_nested_str_weak(attribute_updated),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(update_shadow),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[29]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x580C0002,  //  0002  LDCONST	R3	K2
      0x7C040400,  //  0003  CALL	R1	2
      0x8C080303,  //  0004  GETMET	R2	R1	K3
      0x58100002,  //  0005  LDCONST	R4	K2
      0x7C080400,  //  0006  CALL	R2	2
      0x600C0009,  //  0007  GETGBL	R3	G9
      0x5C100400,  //  0008  MOVE	R4	R2
      0x7C0C0200,  //  0009  CALL	R3	1
      0x4C100000,  //  000A  LDNIL	R4
      0x1C100604,  //  000B  EQ	R4	R3	R4
      0x78120000,  //  000C  JMPF	R4	#000E
      0x880C0102,  //  000D  GETMBR	R3	R0	K2
      0x88100102,  //  000E  GETMBR	R4	R0	K2
      0x20100604,  //  000F  NE	R4	R3	R4
      0x78120005,  //  0010  JMPF	R4	#0017
      0x8C100104,  //  0011  GETMET	R4	R0	K4
      0x4C180000,  //  0012  LDNIL	R6
      0x541E0007,  //  0013  LDINT	R7	8
      0x58200005,  //  0014  LDCONST	R8	K5
      0x7C100800,  //  0015  CALL	R4	4
      0x90020403,  //  0016  SETMBR	R0	K2	R3
      0x60100003,  //  0017  GETGBL	R4	G3
      0x5C140000,  //  0018  MOVE	R5	R0
      0x7C100200,  //  0019  CALL	R4	1
      0x8C100906,  //  001A  GETMET	R4	R4	K6
      0x7C100200,  //  001B  CALL	R4	1
      0x80000000,  //  001C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_Fan_init,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(init),
    /* K1   */  be_nested_str_weak(fanspeed),
    /* K2   */  be_const_int(0),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[ 9]) {  /* code */
      0x600C0003,  //  0000  GETGBL	R3	G3
      0x5C100000,  //  0001  MOVE	R4	R0
      0x7C0C0200,  //  0002  CALL	R3	1
      0x8C0C0700,  //  0003  GETMET	R3	R3	K0
      0x5C140200,  //  0004  MOVE	R5	R1
      0x5C180400,  //  0005  MOVE	R6	R2
      0x7C0C0600,  //  0006  CALL	R3	3
      0x90020302,  //  0007  SETMBR	R0	K1	K2
      0x80000000,  //  0008  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Fan_read_attribute,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[14]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(create_TLV),
    /* K7   */  be_nested_str_weak(U1),
    /* K8   */  be_nested_str_weak(fanspeed),
    /* K9   */  be_const_int(2),
    /* K10  */  be_const_int(3),
    /* K11  */  be_nested_str_weak(U4),
    /* K12  */  be_const_int(1),
    /* K13  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[77]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xB8120200,  //  0001  GETNGBL	R4	K1
      0x88100902,  //  0002  GETMBR	R4	R4	K2
      0x88140503,  //  0003  GETMBR	R5	R2	K3
      0x88180504,  //  0004  GETMBR	R6	R2	K4
      0x541E0007,  //  0005  LDINT	R7	8
      0x1C1C0A07,  //  0006  EQ	R7	R5	R7
      0x781E003B,  //  0007  JMPF	R7	#0044
      0x1C1C0D05,  //  0008  EQ	R7	R6	K5
      0x781E0005,  //  0009  JMPF	R7	#0010
      0x8C1C0906,  //  000A  GETMET	R7	R4	K6
      0x88240907,  //  000B  GETMBR	R9	R4	K7
      0x88280108,  //  000C  GETMBR	R10	R0	K8
      0x7C1C0600,  //  000D  CALL	R7	3
      0x80040E00,  //  000E  RET	1	R7
      0x70020032,  //  000F  JMP		#0043
      0x1C1C0D09,  //  0010  EQ	R7	R6	K9
      0x781E0005,  //  0011  JMPF	R7	#0018
      0x8C1C0906,  //  0012  GETMET	R7	R4	K6
      0x88240907,  //  0013  GETMBR	R9	R4	K7
      0x58280005,  //  0014  LDCONST	R10	K5
      0x7C1C0600,  //  0015  CALL	R7	3
      0x80040E00,  //  0016  RET	1	R7
      0x7002002A,  //  0017  JMP		#0043
      0x1C1C0D0A,  //  0018  EQ	R7	R6	K10
      0x781E0005,  //  0019  JMPF	R7	#0020
      0x8C1C0906,  //  001A  GETMET	R7	R4	K6
      0x88240907,  //  001B  GETMBR	R9	R4	K7
      0x542A0003,  //  001C  LDINT	R10	4
      0x7C1C0600,  //  001D  CALL	R7	3
      0x80040E00,  //  001E  RET	1	R7
      0x70020022,  //  001F  JMP		#0043
      0x541E000E,  //  0020  LDINT	R7	15
      0x1C1C0C07,  //  0021  EQ	R7	R6	R7
      0x781E0005,  //  0022  JMPF	R7	#0029
      0x8C1C0906,  //  0023  GETMET	R7	R4	K6
      0x88240907,  //  0024  GETMBR	R9	R4	K7
      0x58280005,  //  0025  LDCONST	R10	K5
      0x7C1C0600,  //  0026  CALL	R7	3
      0x80040E00,  //  0027  RET	1	R7
      0x70020019,  //  0028  JMP		#0043
      0x541E0010,  //  0029  LDINT	R7	17
      0x1C1C0C07,  //  002A  EQ	R7	R6	R7
      0x781E0005,  //  002B  JMPF	R7	#0032
      0x8C1C0906,  //  002C  GETMET	R7	R4	K6
      0x88240907,  //  002D  GETMBR	R9	R4	K7
      0x88280108,  //  002E  GETMBR	R10	R0	K8
      0x7C1C0600,  //  002F  CALL	R7	3
      0x80040E00,  //  0030  RET	1	R7
      0x70020010,  //  0031  JMP		#0043
      0x541EFFFB,  //  0032  LDINT	R7	65532
      0x1C1C0C07,  //  0033  EQ	R7	R6	R7
      0x781E0005,  //  0034  JMPF	R7	#003B
      0x8C1C0906,  //  0035  GETMET	R7	R4	K6
      0x8824090B,  //  0036  GETMBR	R9	R4	K11
      0x5828000C,  //  0037  LDCONST	R10	K12
      0x7C1C0600,  //  0038  CALL	R7	3
      0x80040E00,  //  0039  RET	1	R7
      0x70020007,  //  003A  JMP		#0043
      0x541EFFFC,  //  003B  LDINT	R7	65533
      0x1C1C0C07,  //  003C  EQ	R7	R6	R7
      0x781E0004,  //  003D  JMPF	R7	#0043
      0x8C1C0906,  //  003E  GETMET	R7	R4	K6
      0x8824090B,  //  003F  GETMBR	R9	R4	K11
      0x542A0004,  //  0040  LDINT	R10	5
      0x7C1C0600,  //  0041  CALL	R7	3
      0x80040E00,  //  0042  RET	1	R7
      0x70020007,  //  0043  JMP		#004C
      0x601C0003,  //  0044  GETGBL	R7	G3
      0x5C200000,  //  0045  MOVE	R8	R0
      0x7C1C0200,  //  0046  CALL	R7	1
      0x8C1C0F0D,  //  0047  GETMET	R7	R7	K13
      0x5C240200,  //  0048  MOVE	R9	R1
      0x5C280400,  //  0049  MOVE	R10	R2
      0x7C1C0600,  //  004A  CALL	R7	3
      0x80040E00,  //  004B  RET	1	R7
      0x80000000,  //  004C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Fan
********************************************************************/
extern const bclass be_class_Matter_Plugin;
be_local_class(Matter_Plugin_Fan,
    1,
    &be_class_Matter_Plugin,
    be_nested_map(7,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(invoke_request, 1), be_const_closure(Matter_Plugin_Fan_invoke_request_closure) },
        { be_const_key_weak(read_attribute, 4), be_const_closure(Matter_Plugin_Fan_read_attribute_closure) },
        { be_const_key_weak(fanspeed, -1), be_const_var(0) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(43, -1), be_const_int(2) },
    }))    ) } )) },
        { be_const_key_weak(CLUSTERS, 6), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(5,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(5, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(8,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
        be_const_int(5),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(6, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(3, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(4,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(8, 2), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(5,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(15),
        be_const_int(17),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(4, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(init, -1), be_const_closure(Matter_Plugin_Fan_init_closure) },
        { be_const_key_weak(update_shadow, -1), be_const_closure(Matter_Plugin_Fan_update_shadow_closure) },
    })),
    be_str_weak(Matter_Plugin_Fan)
);
/*******************************************************************/

void be_load_Matter_Plugin_Fan_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Fan);
    be_setglobal(vm, "Matter_Plugin_Fan");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
