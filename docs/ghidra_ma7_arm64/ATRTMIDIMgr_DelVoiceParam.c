/* ATRTMIDIMgr_DelVoiceParam @ 0021cca4 268B */


/* YAMAHA::ATRTMIDIMgr_DelVoiceParam(unsigned int, _MASMW_DELSOUNDPARAM*) */

undefined8 YAMAHA::ATRTMIDIMgr_DelVoiceParam(uint param_1,_MASMW_DELSOUNDPARAM *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  _MASMW_DELSOUNDPARAM _Var3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_gsAtRtmMgrInfo_00567da0;
  if (*param_2 == (_MASMW_DELSOUNDPARAM)0x7c) {
    uVar5 = (ulong)(byte)param_2[1];
    if (9 < (byte)param_2[1]) {
      return 0xffffffff;
    }
    _Var3 = param_2[2];
    if ((char)_Var3 < '\0') {
      return 0xffffffff;
    }
  }
  else {
    if (((*param_2 != (_MASMW_DELSOUNDPARAM)0x7d) || (9 < (byte)param_2[2])) ||
       (_Var3 = param_2[3], (char)_Var3 < '\0')) {
      return 0xffffffff;
    }
    uVar5 = (ulong)((byte)param_2[2] + 0x10);
  }
  lVar6 = uVar5 * 0x280 + (ulong)(byte)_Var3 * 5;
  PTR_gsAtRtmMgrInfo_00567da0[(ulong)(byte)_Var3 + uVar5 * 0x80 + 0x838] = 0;
  *(undefined4 *)(puVar4 + lVar6 + 0x1838) = 0;
  lVar7 = uVar5 * 0xa00 + (ulong)(byte)_Var3 * 0x14;
  puVar4[lVar6 + 0x183c] = 0;
  *(undefined4 *)(puVar4 + lVar6 + 0x128838) = 0;
  puVar4[lVar6 + 0x12883c] = 0;
  *(undefined4 *)(puVar4 + lVar6 + 0x12d838) = 0;
  puVar4[lVar6 + 0x12d83c] = 0;
  puVar1 = (undefined8 *)(puVar4 + lVar7 + 0x137838);
  *(undefined4 *)(puVar4 + lVar6 + 0x132838) = 0;
  puVar2 = (undefined8 *)(puVar4 + lVar7 + 0x14b838);
  puVar4[lVar6 + 0x13283c] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar4 + lVar6 + 0x15f838) = 0;
  puVar4[lVar6 + 0x15f83c] = 0;
  return 0;
}

