/* ATRTMIDIMgr_SetFmParam @ 0021ce7c 192B */


/* YAMAHA::ATRTMIDIMgr_SetFmParam(_MASMW_SETFMPARAM*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetFmParam(_MASMW_SETFMPARAM *param_1)

{
  uint uVar1;
  _MASMW_SETFMPARAM _Var2;
  undefined *puVar3;
  void *__dest;
  int iVar4;
  
  puVar3 = PTR_gsAtRtmMgrInfo_00567da0;
  _Var2 = *param_1;
  if (_Var2 == (_MASMW_SETFMPARAM)0x17) {
    iVar4 = 1;
  }
  else if (_Var2 == (_MASMW_SETFMPARAM)0x1f) {
    iVar4 = 2;
  }
  else {
    if (_Var2 != (_MASMW_SETFMPARAM)0xf) {
      return 0xffffffff;
    }
    iVar4 = 0;
  }
  if (*(long *)(PTR_gsAtRtmMgrInfo_00567da0 + (long)iVar4 * 0x10 + 0x808) == 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    __dest = malloc((ulong)uVar1);
    *(void **)(puVar3 + (long)iVar4 * 0x10 + 0x808) = __dest;
    if (__dest == (void *)0x0) {
      *(undefined4 *)(puVar3 + (long)iVar4 * 0x10 + 0x810) = 0;
    }
    else {
      *(uint *)(puVar3 + (long)iVar4 * 0x10 + 0x810) = uVar1;
      if (uVar1 != 0) {
        memcpy(__dest,*(void **)(param_1 + 8),(ulong)uVar1);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

