/* ATRTMIDIMgr_SetHVScript @ 000dc3ec 266B */


/* YAMAHA::ATRTMIDIMgr_SetHVScript(_MASMW_SETHVSCRIPT*, unsigned char*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetHVScript(_MASMW_SETHVSCRIPT *param_1,uchar *param_2)

{
  _MASMW_SETHVSCRIPT _Var1;
  void *pvVar2;
  int iVar3;
  size_t __size;
  int iVar4;
  int iVar5;
  size_t __n;
  
  iVar3 = DAT_000dc4fc;
  _Var1 = *param_1;
  if ((((byte)_Var1 < 0x40) && (*(int *)(param_1 + 4) != 0)) &&
     (__n = *(size_t *)(param_1 + 8), __n != 0)) {
    iVar5 = (byte)_Var1 + 0x2c8df;
    iVar4 = *(int *)(DAT_000dc4f8 + 0xdc418);
    if (*(int *)(iVar4 + iVar5 * 8) == 0) {
      __size = __n + 8;
      pvVar2 = malloc(__size);
      *(void **)(iVar4 + iVar5 * 8) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        __size = 0;
      }
      *(size_t *)(iVar4 + iVar5 * 8 + 4) = __size;
      **(undefined1 **)(iVar4 + iVar5 * 8) = 0x4d;
      *(undefined1 *)(*(int *)(iVar4 + iVar5 * 8) + 1) = 0x73;
      *(undefined1 *)(*(int *)(iVar4 + iVar5 * 8) + 2) = 99;
      *(_MASMW_SETHVSCRIPT *)(*(int *)(iVar4 + iVar5 * 8) + 3) = _Var1;
      *(char *)(*(int *)(iVar4 + iVar5 * 8) + 4) = (char)(__n >> 0x18);
      *(char *)(*(int *)(iVar4 + iVar5 * 8) + 5) = (char)(__n >> 0x10);
      *(char *)(*(int *)(iVar4 + iVar5 * 8) + 6) = (char)(__n >> 8);
      *(char *)(*(int *)(iVar4 + iVar5 * 8) + 7) = (char)__n;
      memcpy((void *)(*(int *)(iVar4 + iVar5 * 8) + 8),*(void **)(param_1 + 4),__n);
      pvVar2 = (void *)(*(int *)(iVar4 + iVar5 * 8) + 8);
      iVar5 = memcmp(pvVar2,(void *)(iVar3 + 0xdc440),4);
      if (iVar5 == 0) {
        *(undefined4 *)(&UNK_001646f4 + iVar4) = 1;
      }
      else {
        iVar3 = memcmp(pvVar2,(void *)(iVar3 + 0xdc444),4);
        if (iVar3 == 0) {
          *(undefined4 *)(&UNK_001646f4 + iVar4) = 2;
        }
        else {
          *(undefined4 *)(&UNK_001646f4 + iVar4) = 0;
        }
      }
      *param_2 = (uchar)_Var1;
      return 1;
    }
  }
  return 0xffffffff;
}

