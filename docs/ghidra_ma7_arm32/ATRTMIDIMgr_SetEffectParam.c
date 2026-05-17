/* ATRTMIDIMgr_SetEffectParam @ 000dc5b0 286B */


/* YAMAHA::ATRTMIDIMgr_SetEffectParam(_MASMW_SETEFFECTPARAM*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetEffectParam(_MASMW_SETEFFECTPARAM *param_1)

{
  _MASMW_SETEFFECTPARAM _Var1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (((int)((uint)(byte)*param_1 << 0x18) < 0) || (0x20 < *(uint *)(param_1 + 8))) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar5 = 3;
    iVar4 = *(int *)(DAT_000dc6d0 + 0xdc5ce);
    (&UNK_00164900)[iVar4 + (uint)(byte)*param_1 * 0x20] = **(undefined1 **)(param_1 + 4);
    (&UNK_00164901)[iVar4 + (uint)(byte)*param_1 * 0x20] =
         *(undefined1 *)(*(int *)(param_1 + 4) + 1);
    (&UNK_00164902)[iVar4 + (uint)(byte)*param_1 * 0x20] =
         *(undefined1 *)(*(int *)(param_1 + 4) + 2);
    _Var1 = *param_1;
    while( true ) {
      iVar3 = iVar5 + 1;
      iVar10 = iVar5 + 3;
      iVar8 = iVar5 + 4;
      iVar7 = iVar5 + 5;
      iVar6 = iVar5 + 6;
      iVar9 = iVar5 + 2;
      (&UNK_00164900)[iVar4 + (uint)(byte)_Var1 * 0x20 + iVar5] =
           *(undefined1 *)(*(int *)(param_1 + 4) + iVar5);
      iVar5 = iVar5 + 7;
      if (iVar3 == 0x20) break;
      (&UNK_00164900)[iVar4 + (uint)(byte)*param_1 * 0x20 + iVar3] =
           *(undefined1 *)(*(int *)(param_1 + 4) + iVar3);
      (&UNK_00164900)[iVar4 + (uint)(byte)*param_1 * 0x20 + iVar9] =
           *(undefined1 *)(*(int *)(param_1 + 4) + iVar9);
      (&UNK_00164900)[iVar4 + (uint)(byte)*param_1 * 0x20 + iVar10] =
           *(undefined1 *)(*(int *)(param_1 + 4) + iVar10);
      (&UNK_00164900)[iVar4 + (uint)(byte)*param_1 * 0x20 + iVar8] =
           *(undefined1 *)(*(int *)(param_1 + 4) + iVar8);
      (&UNK_00164900)[iVar4 + (uint)(byte)*param_1 * 0x20 + iVar7] =
           *(undefined1 *)(*(int *)(param_1 + 4) + iVar7);
      (&UNK_00164900)[iVar4 + (uint)(byte)*param_1 * 0x20 + iVar6] =
           *(undefined1 *)(*(int *)(param_1 + 4) + iVar6);
      _Var1 = *param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

