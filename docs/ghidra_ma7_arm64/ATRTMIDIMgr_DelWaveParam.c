/* ATRTMIDIMgr_DelWaveParam @ 0021ce38 68B */


/* YAMAHA::ATRTMIDIMgr_DelWaveParam(unsigned char) */

undefined8 YAMAHA::ATRTMIDIMgr_DelWaveParam(uchar param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_gsAtRtmMgrInfo_00567da0;
  if (*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + (ulong)param_1 * 0x10 + 8) == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    free(*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + (ulong)param_1 * 0x10 + 8));
    *(undefined8 *)(puVar1 + (ulong)param_1 * 0x10 + 8) = 0;
    *(undefined4 *)(puVar1 + (ulong)param_1 * 0x10 + 0x10) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

