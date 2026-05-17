/* ATRTMIDIMgr_DelVoiceParam @ 000dc014 300B */


/* YAMAHA::ATRTMIDIMgr_DelVoiceParam(unsigned int, _MASMW_DELSOUNDPARAM*) */

undefined4 YAMAHA::ATRTMIDIMgr_DelVoiceParam(uint param_1,_MASMW_DELSOUNDPARAM *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (*param_2 == (_MASMW_DELSOUNDPARAM)0x7c) {
    uVar4 = (uint)(byte)param_2[1];
    if (9 < uVar4) {
      return 0xffffffff;
    }
    uVar7 = (uint)(byte)param_2[2];
    if ((int)(uVar7 << 0x18) < 0) {
      return 0xffffffff;
    }
  }
  else {
    if (((*param_2 != (_MASMW_DELSOUNDPARAM)0x7d) || (9 < (byte)param_2[2])) ||
       (uVar7 = (uint)(byte)param_2[3], (int)(uVar7 << 0x18) < 0)) {
      return 0xffffffff;
    }
    uVar4 = (byte)param_2[2] + 0x10;
  }
  iVar5 = *(int *)(DAT_000dc140 + 0xdc04c);
  iVar6 = uVar7 * 5 + uVar4 * 0x280;
  iVar9 = iVar6 + 0x1420 + iVar5;
  *(undefined1 *)(uVar7 + iVar5 + uVar4 * 0x80 + 0x420) = 0;
  iVar2 = iVar5 + iVar6;
  *(undefined1 *)(iVar6 + 0x1420 + iVar5) = 0;
  iVar3 = iVar5 + iVar6;
  *(undefined1 *)(iVar9 + 1) = 0;
  iVar8 = uVar7 * 0x14 + uVar4 * 0xa00;
  iVar1 = iVar5 + iVar6;
  *(undefined1 *)(iVar9 + 2) = 0;
  *(undefined1 *)(iVar9 + 3) = 0;
  *(undefined1 *)(iVar9 + 4) = 0;
  (&DAT_00128420)[iVar5 + iVar6] = 0;
  (&DAT_00128420)[iVar2 + 1] = 0;
  (&DAT_00128420)[iVar2 + 2] = 0;
  (&DAT_00128420)[iVar2 + 3] = 0;
  (&DAT_00128420)[iVar2 + 4] = 0;
  (&DAT_0012d420)[iVar5 + iVar6] = 0;
  (&DAT_0012d420)[iVar3 + 1] = 0;
  (&DAT_0012d420)[iVar3 + 2] = 0;
  (&DAT_0012d420)[iVar3 + 3] = 0;
  (&DAT_0012d420)[iVar3 + 4] = 0;
  (&DAT_00132420)[iVar5 + iVar6] = 0;
  (&DAT_00132420)[iVar1 + 1] = 0;
  (&DAT_00132420)[iVar1 + 2] = 0;
  (&DAT_00132420)[iVar1 + 3] = 0;
  (&DAT_00132420)[iVar1 + 4] = 0;
  memset(&UNK_00137420 + iVar5 + iVar8,0,0x14);
  memset(&UNK_0014b420 + iVar5 + iVar8,0,0x14);
  iVar1 = iVar5 + iVar6;
  (&DAT_0015f420)[iVar5 + iVar6] = 0;
  (&DAT_0015f420)[iVar1 + 1] = 0;
  (&DAT_0015f420)[iVar1 + 2] = 0;
  (&DAT_0015f420)[iVar1 + 3] = 0;
  (&DAT_0015f420)[iVar1 + 4] = 0;
  return 0;
}

