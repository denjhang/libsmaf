/* MaAtRmdCnv_ReqVoice @ 001b43e0 60B */


/* YAMAHA::MaAtRmdCnv_ReqVoice(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaAtRmdCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(int **)(param_1 + 8) != (int *)0x0)) {
    if (**(int **)(param_1 + 8) == 1) {
      uVar1 = 0;
      if (*(int *)param_1 == 0x100) {
        uVar1 = 0x4000;
      }
      return uVar1;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

