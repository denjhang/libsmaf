/* ATRTMIDIMgr_SetHVChannel @ 000dc3a8 58B */


/* YAMAHA::ATRTMIDIMgr_SetHVChannel(_MASMW_SETHVCHANNEL*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetHVChannel(_MASMW_SETHVCHANNEL *param_1)

{
  if (param_1[1] == (_MASMW_SETHVCHANNEL)0x0) {
    (&UNK_001646f0)[*(int *)(DAT_000dc3e8 + 0xdc3d8)] = 0xff;
    return 0;
  }
  if ((param_1[1] == (_MASMW_SETHVCHANNEL)0x1) && ((byte)*param_1 < 0x20)) {
    *(_MASMW_SETHVCHANNEL *)(&UNK_001646f0 + *(int *)(DAT_000dc3e4 + 0xdc3be)) = *param_1;
    return 0;
  }
  return 0xffffffff;
}

