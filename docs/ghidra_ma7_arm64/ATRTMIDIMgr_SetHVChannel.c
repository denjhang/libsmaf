/* ATRTMIDIMgr_SetHVChannel @ 0021d198 88B */


/* YAMAHA::ATRTMIDIMgr_SetHVChannel(_MASMW_SETHVCHANNEL*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetHVChannel(_MASMW_SETHVCHANNEL *param_1)

{
  if (param_1[1] == (_MASMW_SETHVCHANNEL)0x0) {
    PTR_gsAtRtmMgrInfo_00567da0[0x164c88] = 0xff;
    return 0;
  }
  if ((param_1[1] == (_MASMW_SETHVCHANNEL)0x1) && ((byte)*param_1 < 0x20)) {
    *(_MASMW_SETHVCHANNEL *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x164c88) = *param_1;
    return 0;
  }
  return 0xffffffff;
}

