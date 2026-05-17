/* MaAtRmdCnv_GetResInfo @ 001b1588 96B */


/* YAMAHA::MaAtRmdCnv_GetResInfo(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaAtRmdCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (*(int **)(param_1 + 8) == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (**(int **)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)param_1 != 0x100) {
    return 0;
  }
  if (PTR_gsAtRtmMgrInfo_00567da0[2] != '\x01') {
    return 0x1ff41;
  }
  return 0x801ff41;
}

