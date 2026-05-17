/* ATRTMIDIMgr_DelHVScript @ 0021d34c 84B */


/* YAMAHA::ATRTMIDIMgr_DelHVScript(unsigned char) */

undefined8 YAMAHA::ATRTMIDIMgr_DelHVScript(uchar param_1)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_gsAtRtmMgrInfo_00567da0;
  if (param_1 < 0x40) {
    lVar1 = (ulong)param_1 + 0x164c8;
    if (*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + lVar1 * 0x10 + 0x10) != (void *)0x0) {
      free(*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + lVar1 * 0x10 + 0x10));
      *(undefined8 *)(puVar2 + lVar1 * 0x10 + 0x10) = 0;
      *(undefined4 *)(puVar2 + lVar1 * 0x10 + 0x18) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}

