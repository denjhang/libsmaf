/* ATRTMIDIMgr_SetHVScript @ 0021d1f0 348B */


/* YAMAHA::ATRTMIDIMgr_SetHVScript(_MASMW_SETHVSCRIPT*, unsigned char*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetHVScript(_MASMW_SETHVSCRIPT *param_1,uchar *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 *__dest;
  uint uVar3;
  _MASMW_SETHVSCRIPT _Var4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  void *__src;
  
  puVar5 = PTR_gsAtRtmMgrInfo_00567da0;
  _Var4 = *param_1;
  if ((((byte)_Var4 < 0x40) && (__src = *(void **)(param_1 + 8), __src != (void *)0x0)) &&
     (uVar3 = *(uint *)(param_1 + 0x10), uVar3 != 0)) {
    lVar2 = (long)(int)(uint)(byte)_Var4 + 0x164c8;
    if (*(long *)(PTR_gsAtRtmMgrInfo_00567da0 + lVar2 * 0x10 + 0x10) == 0) {
      uVar1 = uVar3 + 8;
      puVar7 = malloc((ulong)uVar1);
      __dest = puVar7 + 8;
      if (puVar7 == (undefined1 *)0x0) {
        uVar1 = 0;
      }
      *(undefined1 **)(puVar5 + lVar2 * 0x10 + 0x10) = puVar7;
      *(uint *)(puVar5 + lVar2 * 0x10 + 0x18) = uVar1;
      *puVar7 = 0x4d;
      puVar7[1] = 0x73;
      *(_MASMW_SETHVSCRIPT *)(puVar7 + 3) = _Var4;
      puVar7[2] = 99;
      puVar7[4] = (char)(uVar3 >> 0x18);
      puVar7[5] = (char)(uVar3 >> 0x10);
      puVar7[6] = (char)(uVar3 >> 8);
      puVar7[7] = (char)uVar3;
      memcpy(__dest,__src,(ulong)uVar3);
      iVar6 = memcmp(__dest,&DAT_00496300,4);
      if (iVar6 == 0) {
        *(undefined4 *)(puVar5 + 0x164c8c) = 1;
      }
      else {
        iVar6 = memcmp(__dest,&DAT_00496310,4);
        if (iVar6 == 0) {
          *(undefined4 *)(puVar5 + 0x164c8c) = 2;
        }
        else {
          *(undefined4 *)(puVar5 + 0x164c8c) = 0;
        }
      }
      *param_2 = (uchar)_Var4;
      return 1;
    }
  }
  return 0xffffffff;
}

