/* Solidification of Matter_Device_Ezie.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Device_Ezie;

/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Device_Ezie_init,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(_X2D_X2D_X2D_X2D_X2D_X2D_X2D_X2D_X2DEZIE_X20Matter_X20Device_X20Init),
    /* K1   */  be_nested_str_weak(init),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[ 9]) {  /* code */
      0x60040001,  //  0000  GETGBL	R1	G1
      0x58080000,  //  0001  LDCONST	R2	K0
      0x7C040200,  //  0002  CALL	R1	1
      0x60040003,  //  0003  GETGBL	R1	G3
      0x5C080000,  //  0004  MOVE	R2	R0
      0x7C040200,  //  0005  CALL	R1	1
      0x8C040301,  //  0006  GETMET	R1	R1	K1
      0x7C040200,  //  0007  CALL	R1	1
      0x80000000,  //  0008  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: autoconf_device
********************************************************************/
be_local_closure(Matter_Device_Ezie_autoconf_device,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(_X2D_X2D_X2D_X2D_X2D_X2D_X2D_X2D_X2DEZIE_X20Matter_X20Device_X20autoconf_device),
    }),
    be_str_weak(autoconf_device),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x60040001,  //  0000  GETGBL	R1	G1
      0x58080000,  //  0001  LDCONST	R2	K0
      0x7C040200,  //  0002  CALL	R1	1
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Device_Ezie
********************************************************************/
extern const bclass be_class_Matter_Device;
be_local_class(Matter_Device_Ezie,
    0,
    &be_class_Matter_Device,
    be_nested_map(2,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(autoconf_device, -1), be_const_closure(Matter_Device_Ezie_autoconf_device_closure) },
        { be_const_key_weak(init, 0), be_const_closure(Matter_Device_Ezie_init_closure) },
    })),
    be_str_weak(Matter_Device_Ezie)
);
/*******************************************************************/

void be_load_Matter_Device_Ezie_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Device_Ezie);
    be_setglobal(vm, "Matter_Device_Ezie");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
