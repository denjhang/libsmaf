/* ATRTMIDIMgr_DelStreamParam @ 0021d058 132B */


/* YAMAHA::ATRTMIDIMgr_DelStreamParam(unsigned char) */

undefined8 YAMAHA::ATRTMIDIMgr_DelStreamParam(uchar param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_gsAtRtmMgrInfo_00567da0;
  if ((byte)(param_1 - 1) < 0x20) {
    lVar3 = (long)(int)(uint)(byte)(param_1 - 1);
    if (*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + lVar3 * 0x20 + 0x164838) != (void *)0x0) {
      free(*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + lVar3 * 0x20 + 0x164838));
      *(undefined8 *)(puVar2 + lVar3 * 0x20 + 0x164838) = 0;
      lVar1 = lVar3 + 0xb242;
      *(undefined4 *)(puVar2 + lVar3 * 0x20 + 0x164840) = 0;
      *(undefined4 *)(puVar2 + lVar1 * 0x20 + 8) = 0;
      *(undefined4 *)(puVar2 + lVar1 * 0x20 + 0xc) = 0;
      puVar2[lVar1 * 0x20 + 0x10] = 0x40;
      return 0;
    }
  }
  return 0xffffffff;
}

