/* ATRTMIDIMgr_DelEffectParam @ 0021d79c 64B */


/* YAMAHA::ATRTMIDIMgr_DelEffectParam(unsigned char) */

undefined8 YAMAHA::ATRTMIDIMgr_DelEffectParam(uchar param_1)

{
  undefined8 *puVar1;
  
  if (-1 < (char)param_1) {
    puVar1 = (undefined8 *)
             (PTR_gsAtRtmMgrInfo_00567da0 + (long)(&UNK_001650a0 + (ulong)param_1 * 0x20));
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return 0;
  }
  return 0xffffffff;
}

