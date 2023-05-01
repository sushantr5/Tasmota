/* Solidification of Matter_Plugin_OnOff.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_OnOff;

/********************************************************************
** Solidified function: <lambda>
********************************************************************/
be_local_closure(Matter_Plugin_OnOff__X3Clambda_X3E,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(_X3Clambda_X3E),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x60040009,  //  0000  GETGBL	R1	G9
      0x5C080000,  //  0001  MOVE	R2	R0
      0x7C040200,  //  0002  CALL	R1	1
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: invoke_request
********************************************************************/
be_local_closure(Matter_Plugin_OnOff_invoke_request,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[11]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(command),
    /* K4   */  be_nested_str_weak(update_shadow_lazy),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(set_onoff),
    /* K7   */  be_nested_str_weak(update_shadow),
    /* K8   */  be_const_int(1),
    /* K9   */  be_const_int(2),
    /* K10  */  be_nested_str_weak(shadow_onoff),
    }),
    be_str_weak(invoke_request),
    &be_const_str_solidified,
    ( &(const binstruction[42]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140702,  //  0002  GETMBR	R5	R3	K2
      0x88180703,  //  0003  GETMBR	R6	R3	K3
      0x541E0005,  //  0004  LDINT	R7	6
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E0021,  //  0006  JMPF	R7	#0029
      0x8C1C0104,  //  0007  GETMET	R7	R0	K4
      0x7C1C0200,  //  0008  CALL	R7	1
      0x1C1C0D05,  //  0009  EQ	R7	R6	K5
      0x781E0007,  //  000A  JMPF	R7	#0013
      0x8C1C0106,  //  000B  GETMET	R7	R0	K6
      0x50240000,  //  000C  LDBOOL	R9	0	0
      0x7C1C0400,  //  000D  CALL	R7	2
      0x8C1C0107,  //  000E  GETMET	R7	R0	K7
      0x7C1C0200,  //  000F  CALL	R7	1
      0x501C0200,  //  0010  LDBOOL	R7	1	0
      0x80040E00,  //  0011  RET	1	R7
      0x70020015,  //  0012  JMP		#0029
      0x1C1C0D08,  //  0013  EQ	R7	R6	K8
      0x781E0007,  //  0014  JMPF	R7	#001D
      0x8C1C0106,  //  0015  GETMET	R7	R0	K6
      0x50240200,  //  0016  LDBOOL	R9	1	0
      0x7C1C0400,  //  0017  CALL	R7	2
      0x8C1C0107,  //  0018  GETMET	R7	R0	K7
      0x7C1C0200,  //  0019  CALL	R7	1
      0x501C0200,  //  001A  LDBOOL	R7	1	0
      0x80040E00,  //  001B  RET	1	R7
      0x7002000B,  //  001C  JMP		#0029
      0x1C1C0D09,  //  001D  EQ	R7	R6	K9
      0x781E0009,  //  001E  JMPF	R7	#0029
      0x8C1C0106,  //  001F  GETMET	R7	R0	K6
      0x8824010A,  //  0020  GETMBR	R9	R0	K10
      0x78260000,  //  0021  JMPF	R9	#0023
      0x50240001,  //  0022  LDBOOL	R9	0	1
      0x50240200,  //  0023  LDBOOL	R9	1	0
      0x7C1C0400,  //  0024  CALL	R7	2
      0x8C1C0107,  //  0025  GETMET	R7	R0	K7
      0x7C1C0200,  //  0026  CALL	R7	1
      0x501C0200,  //  0027  LDBOOL	R7	1	0
      0x80040E00,  //  0028  RET	1	R7
      0x80000000,  //  0029  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Plugin_OnOff_init,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 6]) {     /* constants */
    /* K0   */  be_nested_str_weak(init),
    /* K1   */  be_nested_str_weak(shadow_onoff),
    /* K2   */  be_nested_str_weak(tasmota_relay_index),
    /* K3   */  be_nested_str_weak(find),
    /* K4   */  be_nested_str_weak(ARG),
    /* K5   */  be_const_int(0),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x60100003,  //  0000  GETGBL	R4	G3
      0x5C140000,  //  0001  MOVE	R5	R0
      0x7C100200,  //  0002  CALL	R4	1
      0x8C100900,  //  0003  GETMET	R4	R4	K0
      0x5C180200,  //  0004  MOVE	R6	R1
      0x5C1C0400,  //  0005  MOVE	R7	R2
      0x5C200600,  //  0006  MOVE	R8	R3
      0x7C100800,  //  0007  CALL	R4	4
      0x50100000,  //  0008  LDBOOL	R4	0	0
      0x90020204,  //  0009  SETMBR	R0	K1	R4
      0x8C100703,  //  000A  GETMET	R4	R3	K3
      0x88180104,  //  000B  GETMBR	R6	R0	K4
      0x7C100400,  //  000C  CALL	R4	2
      0x90020404,  //  000D  SETMBR	R0	K2	R4
      0x88100102,  //  000E  GETMBR	R4	R0	K2
      0x4C140000,  //  000F  LDNIL	R5
      0x1C100805,  //  0010  EQ	R4	R4	R5
      0x78120000,  //  0011  JMPF	R4	#0013
      0x90020505,  //  0012  SETMBR	R0	K2	K5
      0x80000000,  //  0013  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_shadow
********************************************************************/
be_local_closure(Matter_Plugin_OnOff_update_shadow,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str_weak(_X23_X23_X23UPDATE_X20SHADOW),
    /* K1   */  be_nested_str_weak(tasmota),
    /* K2   */  be_nested_str_weak(get_power),
    /* K3   */  be_nested_str_weak(tasmota_relay_index),
    /* K4   */  be_nested_str_weak(shadow_onoff),
    /* K5   */  be_nested_str_weak(attribute_updated),
    /* K6   */  be_const_int(0),
    /* K7   */  be_nested_str_weak(update_shadow),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[31]) {  /* code */
      0x60040001,  //  0000  GETGBL	R1	G1
      0x58080000,  //  0001  LDCONST	R2	K0
      0x7C040200,  //  0002  CALL	R1	1
      0xB8060200,  //  0003  GETNGBL	R1	K1
      0x8C040302,  //  0004  GETMET	R1	R1	K2
      0x880C0103,  //  0005  GETMBR	R3	R0	K3
      0x7C040400,  //  0006  CALL	R1	2
      0x4C080000,  //  0007  LDNIL	R2
      0x20080202,  //  0008  NE	R2	R1	R2
      0x780A000E,  //  0009  JMPF	R2	#0019
      0x88080104,  //  000A  GETMBR	R2	R0	K4
      0x4C0C0000,  //  000B  LDNIL	R3
      0x20080403,  //  000C  NE	R2	R2	R3
      0x780A0009,  //  000D  JMPF	R2	#0018
      0x88080104,  //  000E  GETMBR	R2	R0	K4
      0x600C0017,  //  000F  GETGBL	R3	G23
      0x5C100200,  //  0010  MOVE	R4	R1
      0x7C0C0200,  //  0011  CALL	R3	1
      0x20080403,  //  0012  NE	R2	R2	R3
      0x780A0003,  //  0013  JMPF	R2	#0018
      0x8C080105,  //  0014  GETMET	R2	R0	K5
      0x54120005,  //  0015  LDINT	R4	6
      0x58140006,  //  0016  LDCONST	R5	K6
      0x7C080600,  //  0017  CALL	R2	3
      0x90020801,  //  0018  SETMBR	R0	K4	R1
      0x60080003,  //  0019  GETGBL	R2	G3
      0x5C0C0000,  //  001A  MOVE	R3	R0
      0x7C080200,  //  001B  CALL	R2	1
      0x8C080507,  //  001C  GETMET	R2	R2	K7
      0x7C080200,  //  001D  CALL	R2	1
      0x80000000,  //  001E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_onoff
********************************************************************/
be_local_closure(Matter_Plugin_OnOff_set_onoff,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota),
    /* K1   */  be_nested_str_weak(set_power),
    /* K2   */  be_nested_str_weak(tasmota_relay_index),
    /* K3   */  be_nested_str_weak(update_shadow),
    }),
    be_str_weak(set_onoff),
    &be_const_str_solidified,
    ( &(const binstruction[10]) {  /* code */
      0xB80A0000,  //  0000  GETNGBL	R2	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x60140017,  //  0003  GETGBL	R5	G23
      0x5C180200,  //  0004  MOVE	R6	R1
      0x7C140200,  //  0005  CALL	R5	1
      0x7C080600,  //  0006  CALL	R2	3
      0x8C080103,  //  0007  GETMET	R2	R0	K3
      0x7C080200,  //  0008  CALL	R2	1
      0x80000000,  //  0009  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_OnOff_read_attribute,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str_weak(_X23_X23_X23READ_X20ATTRIBUTE),
    /* K1   */  be_nested_str_weak(string),
    /* K2   */  be_nested_str_weak(matter),
    /* K3   */  be_nested_str_weak(TLV),
    /* K4   */  be_nested_str_weak(cluster),
    /* K5   */  be_nested_str_weak(attribute),
    /* K6   */  be_nested_str_weak(update_shadow_lazy),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str_weak(create_TLV),
    /* K9   */  be_nested_str_weak(BOOL),
    /* K10  */  be_nested_str_weak(shadow_onoff),
    /* K11  */  be_nested_str_weak(U4),
    /* K12  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[48]) {  /* code */
      0x600C0001,  //  0000  GETGBL	R3	G1
      0x58100000,  //  0001  LDCONST	R4	K0
      0x7C0C0200,  //  0002  CALL	R3	1
      0xA40E0200,  //  0003  IMPORT	R3	K1
      0xB8120400,  //  0004  GETNGBL	R4	K2
      0x88100903,  //  0005  GETMBR	R4	R4	K3
      0x88140504,  //  0006  GETMBR	R5	R2	K4
      0x88180505,  //  0007  GETMBR	R6	R2	K5
      0x541E0005,  //  0008  LDINT	R7	6
      0x1C1C0A07,  //  0009  EQ	R7	R5	R7
      0x781E001B,  //  000A  JMPF	R7	#0027
      0x8C1C0106,  //  000B  GETMET	R7	R0	K6
      0x7C1C0200,  //  000C  CALL	R7	1
      0x1C1C0D07,  //  000D  EQ	R7	R6	K7
      0x781E0005,  //  000E  JMPF	R7	#0015
      0x8C1C0908,  //  000F  GETMET	R7	R4	K8
      0x88240909,  //  0010  GETMBR	R9	R4	K9
      0x8828010A,  //  0011  GETMBR	R10	R0	K10
      0x7C1C0600,  //  0012  CALL	R7	3
      0x80040E00,  //  0013  RET	1	R7
      0x70020010,  //  0014  JMP		#0026
      0x541EFFFB,  //  0015  LDINT	R7	65532
      0x1C1C0C07,  //  0016  EQ	R7	R6	R7
      0x781E0005,  //  0017  JMPF	R7	#001E
      0x8C1C0908,  //  0018  GETMET	R7	R4	K8
      0x8824090B,  //  0019  GETMBR	R9	R4	K11
      0x58280007,  //  001A  LDCONST	R10	K7
      0x7C1C0600,  //  001B  CALL	R7	3
      0x80040E00,  //  001C  RET	1	R7
      0x70020007,  //  001D  JMP		#0026
      0x541EFFFC,  //  001E  LDINT	R7	65533
      0x1C1C0C07,  //  001F  EQ	R7	R6	R7
      0x781E0004,  //  0020  JMPF	R7	#0026
      0x8C1C0908,  //  0021  GETMET	R7	R4	K8
      0x8824090B,  //  0022  GETMBR	R9	R4	K11
      0x542A0003,  //  0023  LDINT	R10	4
      0x7C1C0600,  //  0024  CALL	R7	3
      0x80040E00,  //  0025  RET	1	R7
      0x70020007,  //  0026  JMP		#002F
      0x601C0003,  //  0027  GETGBL	R7	G3
      0x5C200000,  //  0028  MOVE	R8	R0
      0x7C1C0200,  //  0029  CALL	R7	1
      0x8C1C0F0C,  //  002A  GETMET	R7	R7	K12
      0x5C240200,  //  002B  MOVE	R9	R1
      0x5C280400,  //  002C  MOVE	R10	R2
      0x7C1C0600,  //  002D  CALL	R7	3
      0x80040E00,  //  002E  RET	1	R7
      0x80000000,  //  002F  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_OnOff
********************************************************************/
extern const bclass be_class_Matter_Plugin_Device;
be_local_class(Matter_Plugin_OnOff,
    2,
    &be_class_Matter_Plugin_Device,
    be_nested_map(13,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(ARG, 4), be_nested_str_weak(relay) },
        { be_const_key_weak(tasmota_relay_index, -1), be_const_var(0) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(relay) },
        { be_const_key_weak(ARG_TYPE, -1), be_const_static_closure(Matter_Plugin_OnOff__X3Clambda_X3E_closure) },
        { be_const_key_weak(shadow_onoff, -1), be_const_var(1) },
        { be_const_key_weak(invoke_request, -1), be_const_closure(Matter_Plugin_OnOff_invoke_request_closure) },
        { be_const_key_weak(init, -1), be_const_closure(Matter_Plugin_OnOff_init_closure) },
        { be_const_key_weak(update_shadow, -1), be_const_closure(Matter_Plugin_OnOff_update_shadow_closure) },
        { be_const_key_weak(read_attribute, -1), be_const_closure(Matter_Plugin_OnOff_read_attribute_closure) },
        { be_const_key_weak(NAME, -1), be_nested_str_weak(Relay) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(6, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(set_onoff, 8), be_const_closure(Matter_Plugin_OnOff_set_onoff_closure) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(266, -1), be_const_int(2) },
    }))    ) } )) },
    })),
    be_str_weak(Matter_Plugin_OnOff)
);
/*******************************************************************/

void be_load_Matter_Plugin_OnOff_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_OnOff);
    be_setglobal(vm, "Matter_Plugin_OnOff");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
