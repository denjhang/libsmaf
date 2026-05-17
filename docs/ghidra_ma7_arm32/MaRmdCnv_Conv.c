/* MaRmdCnv_Conv @ 000c2710 26B */


/* YAMAHA::MaRmdCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined4 YAMAHA::MaRmdCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  undefined4 uVar1;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(int **)(param_1 + 4) != (int *)0x0)) &&
     (param_2 != (_MASND_CMD_PARAM *)0x0)) {
    uVar1 = 0;
    if (**(int **)(param_1 + 4) != 1) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0xfffffffe;
}

