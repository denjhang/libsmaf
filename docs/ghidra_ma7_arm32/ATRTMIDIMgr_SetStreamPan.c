/* ATRTMIDIMgr_SetStreamPan @ 000dc31c 132B */


/* YAMAHA::ATRTMIDIMgr_SetStreamPan(_MASMW_SETSTREAMAUDIO_PAN*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetStreamPan(_MASMW_SETSTREAMAUDIO_PAN *param_1)

{
  int iVar1;
  _MASMW_SETSTREAMAUDIO_PAN _Var2;
  uint uVar3;
  
  uVar3 = (byte)*param_1 - 1;
  if (((uVar3 & 0xff) < 0x20) && (_Var2 = param_1[1], (byte)_Var2 < 4)) {
    if (_Var2 == (_MASMW_SETSTREAMAUDIO_PAN)0x0) {
      _Var2 = param_1[2];
      if ((-1 < (int)((uint)(byte)_Var2 << 0x18)) &&
         (iVar1 = *(int *)(DAT_000dc3a4 + 0xdc37e),
         *(int *)(&UNK_00164420 + uVar3 * 0x14 + iVar1) != 0)) goto LAB_000dc35a;
    }
    else {
      iVar1 = *(int *)(DAT_000dc3a0 + 0xdc342);
      if (*(int *)(&UNK_00164420 + iVar1 + uVar3 * 0x14) != 0) {
        if (_Var2 == (_MASMW_SETSTREAMAUDIO_PAN)0x1) {
          _Var2 = (_MASMW_SETSTREAMAUDIO_PAN)0xff;
        }
        else {
          if (_Var2 != (_MASMW_SETSTREAMAUDIO_PAN)0x2) {
            return 0xffffffff;
          }
          _Var2 = (_MASMW_SETSTREAMAUDIO_PAN)0x80;
        }
LAB_000dc35a:
        *(_MASMW_SETSTREAMAUDIO_PAN *)(&UNK_00164430 + iVar1 + uVar3 * 0x14) = _Var2;
        return 0;
      }
    }
  }
  return 0xffffffff;
}

