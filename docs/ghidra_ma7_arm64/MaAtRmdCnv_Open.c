/* MaAtRmdCnv_Open @ 001b150c 76B */


/* YAMAHA::MaAtRmdCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined8 YAMAHA::MaAtRmdCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  int iVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0)) {
    iVar1 = *(int *)param_2;
    **(undefined4 **)(param_1 + 8) = 1;
    if (-1 < iVar1) {
      PTR_gsAtRtmMgrInfo_00567da0[2] = 0;
      return 0;
    }
    PTR_gsAtRtmMgrInfo_00567da0[2] = 1;
    return 0;
  }
  return 0xfffffffe;
}

