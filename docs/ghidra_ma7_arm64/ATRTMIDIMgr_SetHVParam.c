/* ATRTMIDIMgr_SetHVParam @ 0021d3a0 136B */


/* YAMAHA::ATRTMIDIMgr_SetHVParam(_MASMW_SETHVPARAM*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetHVParam(_MASMW_SETHVPARAM *param_1)

{
  uint uVar1;
  undefined *puVar2;
  void *__dest;
  void *__src;
  ulong __size;
  
  puVar2 = PTR_gsAtRtmMgrInfo_00567da0;
  __src = *(void **)param_1;
  if ((__src != (void *)0x0) && (uVar1 = *(uint *)(param_1 + 8), uVar1 != 0)) {
    if (*(long *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090) == 0) {
      __size = (ulong)uVar1;
      __dest = malloc(__size);
      if (__dest == (void *)0x0) {
        uVar1 = 0;
      }
      *(uint *)(puVar2 + 0x165098) = uVar1;
      *(void **)(puVar2 + 0x165090) = __dest;
      memcpy(__dest,__src,__size);
      return 0;
    }
  }
  return 0xffffffff;
}

