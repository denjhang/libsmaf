/* ATRTMIDIMgr_SetStreamParam @ 0021cfb8 160B */


/* YAMAHA::ATRTMIDIMgr_SetStreamParam(_MASMW_SETSTREAMAUDIO*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetStreamParam(_MASMW_SETSTREAMAUDIO *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  void *__dest;
  void *__src;
  ulong __size;
  
  puVar3 = PTR_gsAtRtmMgrInfo_00567da0;
  uVar1 = *(uint *)(param_1 + 0x10);
  bVar2 = (char)*param_1 - 1;
  if (((bVar2 < 0x20) && (uVar1 != 0)) &&
     (*(long *)(PTR_gsAtRtmMgrInfo_00567da0 + (ulong)bVar2 * 0x20 + 0x164838) == 0)) {
    __size = (ulong)uVar1;
    __dest = malloc(__size);
    __src = *(void **)(param_1 + 8);
    if (__dest == (void *)0x0) {
      uVar1 = 0;
    }
    *(uint *)(puVar3 + (ulong)bVar2 * 0x20 + 0x164840) = uVar1;
    *(void **)(puVar3 + (ulong)bVar2 * 0x20 + 0x164838) = __dest;
    memcpy(__dest,__src,__size);
    return 1;
  }
  return 0xffffffff;
}

