/* ATRTMIDIMgr_SetStreamPan @ 0021d0dc 188B */


/* YAMAHA::ATRTMIDIMgr_SetStreamPan(_MASMW_SETSTREAMAUDIO_PAN*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetStreamPan(_MASMW_SETSTREAMAUDIO_PAN *param_1)

{
  _MASMW_SETSTREAMAUDIO_PAN _Var1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = (byte)*param_1 - 1;
  if (((uVar2 & 0xff) < 0x20) && (_Var1 = param_1[1], (byte)_Var1 < 4)) {
    if (_Var1 == (_MASMW_SETSTREAMAUDIO_PAN)0x0) {
      if ((-1 < (char)param_1[2]) &&
         (*(long *)(PTR_gsAtRtmMgrInfo_00567da0 + (long)(int)uVar2 * 0x20 + 0x164838) != 0)) {
        *(_MASMW_SETSTREAMAUDIO_PAN *)
         (PTR_gsAtRtmMgrInfo_00567da0 + ((long)(int)uVar2 + 0xb242) * 0x20 + 0x10) = param_1[2];
        return 0;
      }
    }
    else if (*(long *)(PTR_gsAtRtmMgrInfo_00567da0 + (long)(int)uVar2 * 0x20 + 0x164838) != 0) {
      if (_Var1 == (_MASMW_SETSTREAMAUDIO_PAN)0x1) {
        uVar3 = 0xff;
      }
      else {
        uVar3 = 0x80;
        if (_Var1 != (_MASMW_SETSTREAMAUDIO_PAN)0x2) {
          return 0xffffffff;
        }
      }
      PTR_gsAtRtmMgrInfo_00567da0[((long)(int)uVar2 + 0xb242) * 0x20 + 0x10] = uVar3;
      return 0;
    }
  }
  return 0xffffffff;
}

