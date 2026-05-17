/* ATRTMIDIMgr_DelHVParam @ 0021d428 64B */


/* YAMAHA::ATRTMIDIMgr_DelHVParam() */

undefined8 YAMAHA::ATRTMIDIMgr_DelHVParam(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_gsAtRtmMgrInfo_00567da0;
  if (*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090) == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    free(*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090));
    *(undefined8 *)(puVar1 + 0x165090) = 0;
    *(undefined4 *)(puVar1 + 0x165098) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

