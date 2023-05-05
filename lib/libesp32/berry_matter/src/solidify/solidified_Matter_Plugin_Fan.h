/* Solidification of Matter_Plugin_Fan.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Fan;

/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_Fan_init,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    4,                          /* argc */
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
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100900,  //  0003  GETMET	R4	R4	K0
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x7C100600,  //  0006  CALL	R4	3
      0x90020302,  //  0007  SETMBR	R0	K1	K2
      0x80000000,  //  0008  RET	0
    })
  )
);
/*******************************************************************/


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
    ( &(const binstruction[111]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140702,  //  0002  GETMBR	R5	R3	K2
      0x88180703,  //  0003  GETMBR	R6	R3	K3
      0x541E0201,  //  0004  LDINT	R7	514
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E005D,  //  0006  JMPF	R7	#0065
      0x1C1C0D04,  //  0007  EQ	R7	R6	K4
      0x781E001B,  //  0008  JMPF	R7	#0025
      0x8C1C0505,  //  0009  GETMET	R7	R2	K5
      0x58240004,  //  000A  LDCONST	R9	K4
      0x7C1C0400,  //  000B  CALL	R7	2
      0xB8220C00,  //  000C  GETNGBL	R8	K6
      0x8C201107,  //  000D  GETMET	R8	R8	K7
      0x5C280E00,  //  000E  MOVE	R10	R7
      0x582C0004,  //  000F  LDCONST	R11	K4
      0x543200FD,  //  0010  LDINT	R12	254
      0x58340004,  //  0011  LDCONST	R13	K4
      0x543A0003,  //  0012  LDINT	R14	4
      0x7C200C00,  //  0013  CALL	R8	6
      0xB8260C00,  //  0014  GETNGBL	R9	K6
      0x8C241308,  //  0015  GETMET	R9	R9	K8
      0x602C0008,  //  0016  GETGBL	R11	G8
      0x5C301000,  //  0017  MOVE	R12	R8
      0x7C2C0200,  //  0018  CALL	R11	1
      0x002E120B,  //  0019  ADD	R11	K9	R11
      0x7C240400,  //  001A  CALL	R9	2
      0x8C24010A,  //  001B  GETMET	R9	R0	K10
      0x7C240200,  //  001C  CALL	R9	1
      0x60240008,  //  001D  GETGBL	R9	G8
      0x5C280E00,  //  001E  MOVE	R10	R7
      0x7C240200,  //  001F  CALL	R9	1
      0x00261809,  //  0020  ADD	R9	K12	R9
      0x900E1609,  //  0021  SETMBR	R3	K11	R9
      0x50240200,  //  0022  LDBOOL	R9	1	0
      0x80041200,  //  0023  RET	1	R9
      0x7002003E,  //  0024  JMP		#0064
      0x1C1C0D0D,  //  0025  EQ	R7	R6	K13
      0x781E0002,  //  0026  JMPF	R7	#002A
      0x501C0200,  //  0027  LDBOOL	R7	1	0
      0x80040E00,  //  0028  RET	1	R7
      0x70020039,  //  0029  JMP		#0064
      0x1C1C0D0E,  //  002A  EQ	R7	R6	K14
      0x781E0002,  //  002B  JMPF	R7	#002F
      0x501C0200,  //  002C  LDBOOL	R7	1	0
      0x80040E00,  //  002D  RET	1	R7
      0x70020034,  //  002E  JMP		#0064
      0x1C1C0D0F,  //  002F  EQ	R7	R6	K15
      0x781E0002,  //  0030  JMPF	R7	#0034
      0x501C0200,  //  0031  LDBOOL	R7	1	0
      0x80040E00,  //  0032  RET	1	R7
      0x7002002F,  //  0033  JMP		#0064
      0x541E0003,  //  0034  LDINT	R7	4
      0x1C1C0C07,  //  0035  EQ	R7	R6	R7
      0x781E001B,  //  0036  JMPF	R7	#0053
      0x8C1C0505,  //  0037  GETMET	R7	R2	K5
      0x58240004,  //  0038  LDCONST	R9	K4
      0x7C1C0400,  //  0039  CALL	R7	2
      0xB8220C00,  //  003A  GETNGBL	R8	K6
      0x8C201107,  //  003B  GETMET	R8	R8	K7
      0x5C280E00,  //  003C  MOVE	R10	R7
      0x582C0004,  //  003D  LDCONST	R11	K4
      0x543200FD,  //  003E  LDINT	R12	254
      0x58340004,  //  003F  LDCONST	R13	K4
      0x543A0003,  //  0040  LDINT	R14	4
      0x7C200C00,  //  0041  CALL	R8	6
      0xB8260C00,  //  0042  GETNGBL	R9	K6
      0x8C241308,  //  0043  GETMET	R9	R9	K8
      0x602C0008,  //  0044  GETGBL	R11	G8
      0x5C301000,  //  0045  MOVE	R12	R8
      0x7C2C0200,  //  0046  CALL	R11	1
      0x002E120B,  //  0047  ADD	R11	K9	R11
      0x7C240400,  //  0048  CALL	R9	2
      0x8C24010A,  //  0049  GETMET	R9	R0	K10
      0x7C240200,  //  004A  CALL	R9	1
      0x60240008,  //  004B  GETGBL	R9	G8
      0x5C280E00,  //  004C  MOVE	R10	R7
      0x7C240200,  //  004D  CALL	R9	1
      0x00261809,  //  004E  ADD	R9	K12	R9
      0x900E1609,  //  004F  SETMBR	R3	K11	R9
      0x50240200,  //  0050  LDBOOL	R9	1	0
      0x80041200,  //  0051  RET	1	R9
      0x70020010,  //  0052  JMP		#0064
      0x541E0004,  //  0053  LDINT	R7	5
      0x1C1C0C07,  //  0054  EQ	R7	R6	R7
      0x781E0002,  //  0055  JMPF	R7	#0059
      0x501C0200,  //  0056  LDBOOL	R7	1	0
      0x80040E00,  //  0057  RET	1	R7
      0x7002000A,  //  0058  JMP		#0064
      0x541E0005,  //  0059  LDINT	R7	6
      0x1C1C0C07,  //  005A  EQ	R7	R6	R7
      0x781E0002,  //  005B  JMPF	R7	#005F
      0x501C0200,  //  005C  LDBOOL	R7	1	0
      0x80040E00,  //  005D  RET	1	R7
      0x70020004,  //  005E  JMP		#0064
      0x541E0006,  //  005F  LDINT	R7	7
      0x1C1C0C07,  //  0060  EQ	R7	R6	R7
      0x781E0001,  //  0061  JMPF	R7	#0064
      0x501C0200,  //  0062  LDBOOL	R7	1	0
      0x80040E00,  //  0063  RET	1	R7
      0x70020008,  //  0064  JMP		#006E
      0x601C0003,  //  0065  GETGBL	R7	G3
      0x5C200000,  //  0066  MOVE	R8	R0
      0x7C1C0200,  //  0067  CALL	R7	1
      0x8C1C0F10,  //  0068  GETMET	R7	R7	K16
      0x5C240200,  //  0069  MOVE	R9	R1
      0x5C280400,  //  006A  MOVE	R10	R2
      0x5C2C0600,  //  006B  MOVE	R11	R3
      0x7C1C0800,  //  006C  CALL	R7	4
      0x80040E00,  //  006D  RET	1	R7
      0x80000000,  //  006E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Fan_read_attribute,   /* name */
  be_nested_proto(
    14,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[17]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(TLV),
    /* K3   */  be_nested_str_weak(cluster),
    /* K4   */  be_nested_str_weak(attribute),
    /* K5   */  be_nested_str_weak(update_shadow_lazy),
    /* K6   */  be_const_int(0),
    /* K7   */  be_nested_str_weak(tasmota),
    /* K8   */  be_nested_str_weak(scale_uint),
    /* K9   */  be_nested_str_weak(fanspeed),
    /* K10  */  be_nested_str_weak(create_TLV),
    /* K11  */  be_nested_str_weak(U1),
    /* K12  */  be_const_int(2),
    /* K13  */  be_const_int(3),
    /* K14  */  be_nested_str_weak(U4),
    /* K15  */  be_const_int(1),
    /* K16  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[87]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0xB8120200,  //  0001  GETNGBL	R4	K1
      0x88100902,  //  0002  GETMBR	R4	R4	K2
      0x88140503,  //  0003  GETMBR	R5	R2	K3
      0x88180504,  //  0004  GETMBR	R6	R2	K4
      0x541E0201,  //  0005  LDINT	R7	514
      0x1C1C0A07,  //  0006  EQ	R7	R5	R7
      0x781E0045,  //  0007  JMPF	R7	#004E
      0x8C1C0105,  //  0008  GETMET	R7	R0	K5
      0x7C1C0200,  //  0009  CALL	R7	1
      0x1C1C0D06,  //  000A  EQ	R7	R6	K6
      0x781E000D,  //  000B  JMPF	R7	#001A
      0xB81E0E00,  //  000C  GETNGBL	R7	K7
      0x8C1C0F08,  //  000D  GETMET	R7	R7	K8
      0x88240109,  //  000E  GETMBR	R9	R0	K9
      0x58280006,  //  000F  LDCONST	R10	K6
      0x542E0003,  //  0010  LDINT	R11	4
      0x58300006,  //  0011  LDCONST	R12	K6
      0x543600FD,  //  0012  LDINT	R13	254
      0x7C1C0C00,  //  0013  CALL	R7	6
      0x8C20090A,  //  0014  GETMET	R8	R4	K10
      0x8828090B,  //  0015  GETMBR	R10	R4	K11
      0x5C2C0E00,  //  0016  MOVE	R11	R7
      0x7C200600,  //  0017  CALL	R8	3
      0x80041000,  //  0018  RET	1	R8
      0x70020032,  //  0019  JMP		#004D
      0x1C1C0D0C,  //  001A  EQ	R7	R6	K12
      0x781E0005,  //  001B  JMPF	R7	#0022
      0x8C1C090A,  //  001C  GETMET	R7	R4	K10
      0x8824090B,  //  001D  GETMBR	R9	R4	K11
      0x58280006,  //  001E  LDCONST	R10	K6
      0x7C1C0600,  //  001F  CALL	R7	3
      0x80040E00,  //  0020  RET	1	R7
      0x7002002A,  //  0021  JMP		#004D
      0x1C1C0D0D,  //  0022  EQ	R7	R6	K13
      0x781E0005,  //  0023  JMPF	R7	#002A
      0x8C1C090A,  //  0024  GETMET	R7	R4	K10
      0x8824090B,  //  0025  GETMBR	R9	R4	K11
      0x542A00FD,  //  0026  LDINT	R10	254
      0x7C1C0600,  //  0027  CALL	R7	3
      0x80040E00,  //  0028  RET	1	R7
      0x70020022,  //  0029  JMP		#004D
      0x541E000E,  //  002A  LDINT	R7	15
      0x1C1C0C07,  //  002B  EQ	R7	R6	R7
      0x781E0005,  //  002C  JMPF	R7	#0033
      0x8C1C090A,  //  002D  GETMET	R7	R4	K10
      0x8824090B,  //  002E  GETMBR	R9	R4	K11
      0x58280006,  //  002F  LDCONST	R10	K6
      0x7C1C0600,  //  0030  CALL	R7	3
      0x80040E00,  //  0031  RET	1	R7
      0x70020019,  //  0032  JMP		#004D
      0x541E0010,  //  0033  LDINT	R7	17
      0x1C1C0C07,  //  0034  EQ	R7	R6	R7
      0x781E0005,  //  0035  JMPF	R7	#003C
      0x8C1C090A,  //  0036  GETMET	R7	R4	K10
      0x8824090B,  //  0037  GETMBR	R9	R4	K11
      0x542A003B,  //  0038  LDINT	R10	60
      0x7C1C0600,  //  0039  CALL	R7	3
      0x80040E00,  //  003A  RET	1	R7
      0x70020010,  //  003B  JMP		#004D
      0x541EFFFB,  //  003C  LDINT	R7	65532
      0x1C1C0C07,  //  003D  EQ	R7	R6	R7
      0x781E0005,  //  003E  JMPF	R7	#0045
      0x8C1C090A,  //  003F  GETMET	R7	R4	K10
      0x8824090E,  //  0040  GETMBR	R9	R4	K14
      0x5828000F,  //  0041  LDCONST	R10	K15
      0x7C1C0600,  //  0042  CALL	R7	3
      0x80040E00,  //  0043  RET	1	R7
      0x70020007,  //  0044  JMP		#004D
      0x541EFFFC,  //  0045  LDINT	R7	65533
      0x1C1C0C07,  //  0046  EQ	R7	R6	R7
      0x781E0004,  //  0047  JMPF	R7	#004D
      0x8C1C090A,  //  0048  GETMET	R7	R4	K10
      0x8824090E,  //  0049  GETMBR	R9	R4	K14
      0x542A0004,  //  004A  LDINT	R10	5
      0x7C1C0600,  //  004B  CALL	R7	3
      0x80040E00,  //  004C  RET	1	R7
      0x70020007,  //  004D  JMP		#0056
      0x601C0003,  //  004E  GETGBL	R7	G3
      0x5C200000,  //  004F  MOVE	R8	R0
      0x7C1C0200,  //  0050  CALL	R7	1
      0x8C1C0F10,  //  0051  GETMET	R7	R7	K16
      0x5C240200,  //  0052  MOVE	R9	R1
      0x5C280400,  //  0053  MOVE	R10	R2
      0x7C1C0600,  //  0054  CALL	R7	3
      0x80040E00,  //  0055  RET	1	R7
      0x80000000,  //  0056  RET	0
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
    ( &(const binstruction[32]) {  /* code */
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
      0x78120003,  //  0010  JMPF	R4	#0015
      0x60100009,  //  0011  GETGBL	R4	G9
      0x5C140600,  //  0012  MOVE	R5	R3
      0x7C100200,  //  0013  CALL	R4	1
      0x90020404,  //  0014  SETMBR	R0	K2	R4
      0x8C100104,  //  0015  GETMET	R4	R0	K4
      0x4C180000,  //  0016  LDNIL	R6
      0x541E0201,  //  0017  LDINT	R7	514
      0x58200005,  //  0018  LDCONST	R8	K5
      0x7C100800,  //  0019  CALL	R4	4
      0x60100003,  //  001A  GETGBL	R4	G3
      0x5C140000,  //  001B  MOVE	R5	R0
      0x7C100200,  //  001C  CALL	R4	1
      0x8C100906,  //  001D  GETMET	R4	R4	K6
      0x7C100200,  //  001E  CALL	R4	1
      0x80000000,  //  001F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Fan
********************************************************************/
extern const bclass be_class_Matter_Plugin_Device;
be_local_class(Matter_Plugin_Fan,
    1,
    &be_class_Matter_Plugin_Device,
    be_nested_map(9,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(fanspeed, 8), be_const_var(0) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(fan) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(43, -1), be_const_int(2) },
    }))    ) } )) },
        { be_const_key_weak(NAME, -1), be_nested_str_weak(Fan) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(514, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(7,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(2),
        be_const_int(3),
        be_const_int(15),
        be_const_int(17),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(invoke_request, -1), be_const_closure(Matter_Plugin_Fan_invoke_request_closure) },
        { be_const_key_weak(init, 0), be_const_closure(Matter_Plugin_Fan_init_closure) },
        { be_const_key_weak(update_shadow, -1), be_const_closure(Matter_Plugin_Fan_update_shadow_closure) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(Matter_Plugin_Fan_read_attribute_closure) },
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
