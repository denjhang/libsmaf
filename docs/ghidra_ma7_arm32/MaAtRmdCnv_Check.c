/* MaAtRmdCnv_Check @ 000908e8 20B */


/* YAMAHA::MaAtRmdCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

undefined4 YAMAHA::MaAtRmdCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0))
     && (param_2 != (_MACNV_CHECK_PARAM *)0x0)) {
    **(undefined4 **)(param_1 + 4) = 0;
    return 0;
  }
  return 0xfffffffe;
}

