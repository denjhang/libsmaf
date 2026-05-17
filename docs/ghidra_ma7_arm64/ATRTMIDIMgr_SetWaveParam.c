/* ATRTMIDIMgr_SetWaveParam @ 0021cdb0 136B */


/* YAMAHA::ATRTMIDIMgr_SetWaveParam(_MASMW_SETWAVEPARAM*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetWaveParam(_MASMW_SETWAVEPARAM *param_1)

{
  uint uVar1;
  _MASMW_SETWAVEPARAM _Var2;
  undefined *puVar3;
  void *__dest;
  void *__src;
  ulong __size;
  
  puVar3 = PTR_gsAtRtmMgrInfo_00567da0;
  _Var2 = *param_1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((-1 < (char)_Var2) && (uVar1 != 0)) &&
     (*(long *)(PTR_gsAtRtmMgrInfo_00567da0 + (long)(int)(uint)(byte)_Var2 * 0x10 + 8) == 0)) {
    __size = (ulong)uVar1;
    __dest = malloc(__size);
    __src = *(void **)(param_1 + 8);
    if (__dest == (void *)0x0) {
      uVar1 = 0;
    }
    *(uint *)(puVar3 + (long)(int)(uint)(byte)_Var2 * 0x10 + 0x10) = uVar1;
    *(void **)(puVar3 + (long)(int)(uint)(byte)_Var2 * 0x10 + 8) = __dest;
    memcpy(__dest,__src,__size);
    return 1;
  }
  return 0xffffffff;
}

