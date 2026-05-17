/* ATRTMIDIMgr_DelFmParam @ 0021cf3c 124B */


/* YAMAHA::ATRTMIDIMgr_DelFmParam(unsigned char) */

undefined8 YAMAHA::ATRTMIDIMgr_DelFmParam(uchar param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_gsAtRtmMgrInfo_00567da0;
  if (param_1 == '\x17') {
    iVar2 = 1;
  }
  else if (param_1 == '\x1f') {
    iVar2 = 2;
  }
  else {
    if (param_1 != '\x0f') {
      return 0xffffffff;
    }
    iVar2 = 0;
  }
  if (*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + (long)iVar2 * 0x10 + 0x808) == (void *)0x0) {
    return 0xffffffff;
  }
  free(*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + (long)iVar2 * 0x10 + 0x808));
  *(undefined8 *)(puVar1 + (long)iVar2 * 0x10 + 0x808) = 0;
  *(undefined4 *)(puVar1 + (long)iVar2 * 0x10 + 0x810) = 0;
  return 0;
}

