/* ATRTMIDIMgr_SetVoiceParam @ 000db9b0 1626B */


/* YAMAHA::ATRTMIDIMgr_SetVoiceParam(unsigned int, _MASMW_SETSOUNDPARAM*) */

undefined4 YAMAHA::ATRTMIDIMgr_SetVoiceParam(uint param_1,_MASMW_SETSOUNDPARAM *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint __c;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*param_2 == (_MASMW_SETSOUNDPARAM)0x7c) {
    uVar8 = (uint)(byte)param_2[1];
    if (9 < uVar8) {
      return 0xffffffff;
    }
    uVar7 = (uint)(byte)param_2[2];
    if ((int)(uVar7 << 0x18) < 0) {
      return 0xffffffff;
    }
    if ((char)param_2[3] < '\0') {
      iVar6 = *(int *)(DAT_000dc010 + 0xdbe30);
      iVar4 = iVar6 + uVar8 * 0x80 + uVar7;
      bVar1 = *(byte *)(iVar4 + 0x420);
      uVar9 = (uint)bVar1;
      if (4 < uVar9) {
        return 0xffffffff;
      }
      *(byte *)(iVar4 + 0x420) = bVar1 + 1;
      goto LAB_000db9f8;
    }
  }
  else {
    if (*param_2 != (_MASMW_SETSOUNDPARAM)0x7d) {
      return 0xffffffff;
    }
    if (9 < (byte)param_2[2]) {
      return 0xffffffff;
    }
    uVar7 = (uint)(byte)param_2[3];
    if ((int)(uVar7 << 0x18) < 0) {
      return 0xffffffff;
    }
    uVar8 = (byte)param_2[2] + 0x10;
  }
  iVar6 = *(int *)(DAT_000dc00c + 0xdb9e6);
  if (*(char *)(iVar6 + uVar8 * 0x80 + uVar7 + 0x420) != '\0') {
    return 0xffffffff;
  }
  uVar9 = 0;
LAB_000db9f8:
  iVar5 = uVar7 * 5 + uVar8 * 0x280;
  iVar4 = iVar6 + iVar5 + uVar9;
  *(_MASMW_SETSOUNDPARAM *)(iVar4 + 0x1420) = param_2[5];
  if ((int)((uint)(byte)param_2[5] << 0x1f) < 0) {
    iVar5 = iVar5 + uVar9;
    *(uint *)(iVar6 + (iVar5 + 0x4dd08) * 4) =
         (uint)(*(byte **)(param_2 + 8))[1] + (uint)**(byte **)(param_2 + 8) * 0x100;
    *(uint *)(iVar6 + (iVar5 + 0x52d08) * 4) = (uint)*(byte *)(*(int *)(param_2 + 8) + 0x10);
    iVar5 = uVar9 * 0x3a + uVar7 * 0x122 + uVar8 * 0x9100 + iVar6;
    *(undefined1 *)(iVar5 + 0x6420) = *(undefined1 *)(*(int *)(param_2 + 8) + 2);
    *(undefined1 *)(iVar5 + 0x6421) = *(undefined1 *)(*(int *)(param_2 + 8) + 3);
    *(undefined1 *)(iVar5 + 0x6422) = *(undefined1 *)(*(int *)(param_2 + 8) + 4);
    *(undefined1 *)(iVar5 + 0x6423) = *(undefined1 *)(*(int *)(param_2 + 8) + 5);
    *(undefined1 *)(iVar5 + 0x6424) = *(undefined1 *)(*(int *)(param_2 + 8) + 6);
    *(undefined1 *)(iVar5 + 0x6425) = *(undefined1 *)(*(int *)(param_2 + 8) + 7);
    *(undefined1 *)(iVar5 + 0x6426) = *(undefined1 *)(*(int *)(param_2 + 8) + 8);
    *(undefined1 *)(iVar5 + 0x6427) = *(undefined1 *)(*(int *)(param_2 + 8) + 9);
    *(undefined1 *)(iVar5 + 0x6428) = *(undefined1 *)(*(int *)(param_2 + 8) + 10);
    *(undefined1 *)(iVar5 + 0x6429) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xb);
    *(undefined1 *)(iVar5 + 0x642a) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xc);
    *(undefined1 *)(iVar5 + 0x642b) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xd);
    *(undefined1 *)(iVar5 + 0x642c) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xe);
    *(undefined1 *)(iVar5 + 0x642d) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xf);
    iVar4 = *(int *)(param_2 + 8);
    __c = *(byte *)(iVar4 + 3) & 8;
    if ((*(byte *)(iVar4 + 3) & 8) == 0) {
      if ((int)((uint)*(byte *)(iVar4 + 4) << 0x1d) < 0) {
        memset((void *)(uVar7 * 0x122 + uVar8 * 0x9100 + uVar9 * 0x3a + 0x642e + iVar6),__c,0x10);
        uVar3 = 0x28;
        *(undefined1 *)(iVar5 + 0x643e) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x11);
        *(undefined1 *)(iVar5 + 0x643f) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x12);
        *(undefined1 *)(iVar5 + 0x6440) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x13);
        *(undefined1 *)(iVar5 + 0x6441) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x14);
        *(undefined1 *)(iVar5 + 0x6442) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x15);
        *(undefined1 *)(iVar5 + 0x6443) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x16);
        *(undefined1 *)(iVar5 + 0x6444) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x17);
        *(undefined1 *)(iVar5 + 0x6445) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x18);
        uVar2 = *(undefined1 *)(*(int *)(param_2 + 8) + 0x19);
        *(char *)(iVar5 + 0x6447) = (char)__c;
        *(undefined1 *)(iVar5 + 0x6446) = uVar2;
      }
      else {
        uVar3 = 0xe;
      }
    }
    else {
      *(undefined1 *)(iVar5 + 0x642e) = *(undefined1 *)(iVar4 + 0x11);
      *(undefined1 *)(iVar5 + 0x642f) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x12);
      *(undefined1 *)(iVar5 + 0x6430) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x13);
      *(undefined1 *)(iVar5 + 0x6431) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x14);
      *(undefined1 *)(iVar5 + 0x6432) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x15);
      *(undefined1 *)(iVar5 + 0x6433) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x16);
      *(undefined1 *)(iVar5 + 0x6434) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x17);
      *(undefined1 *)(iVar5 + 0x6435) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x18);
      *(undefined1 *)(iVar5 + 0x6436) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x19);
      *(undefined1 *)(iVar5 + 0x6437) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1a);
      *(undefined1 *)(iVar5 + 0x6438) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1b);
      *(undefined1 *)(iVar5 + 0x6439) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1c);
      *(undefined1 *)(iVar5 + 0x643a) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1d);
      *(undefined1 *)(iVar5 + 0x643b) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1e);
      *(undefined1 *)(iVar5 + 0x643c) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1f);
      *(undefined1 *)(iVar5 + 0x643d) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x20);
      if ((int)((uint)*(byte *)(*(int *)(param_2 + 8) + 4) << 0x1d) < 0) {
        uVar3 = 0x28;
        *(undefined1 *)(iVar5 + 0x643e) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x21);
        *(undefined1 *)(iVar5 + 0x643f) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x22);
        *(undefined1 *)(iVar5 + 0x6440) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x23);
        *(undefined1 *)(iVar5 + 0x6441) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x24);
        *(undefined1 *)(iVar5 + 0x6442) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x25);
        *(undefined1 *)(iVar5 + 0x6443) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x26);
        *(undefined1 *)(iVar5 + 0x6444) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x27);
        *(undefined1 *)(iVar5 + 0x6445) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x28);
        uVar2 = *(undefined1 *)(*(int *)(param_2 + 8) + 0x29);
        *(undefined1 *)(iVar5 + 0x6447) = 0;
        *(undefined1 *)(iVar5 + 0x6446) = uVar2;
      }
      else {
        uVar3 = 0x1e;
      }
    }
    (&DAT_00128420)[uVar7 * 5 + uVar8 * 0x280 + iVar6 + uVar9] = uVar3;
  }
  else {
    (&DAT_0015f420)[iVar4] = **(undefined1 **)(param_2 + 8);
    iVar4 = uVar8 * 0x9100 + uVar9 * 0x3a + uVar7 * 0x122 + iVar6;
    *(undefined1 *)(iVar4 + 0x6420) = *(undefined1 *)(*(int *)(param_2 + 8) + 1);
    *(undefined1 *)(iVar4 + 0x6421) = *(undefined1 *)(*(int *)(param_2 + 8) + 2);
    *(undefined1 *)(iVar4 + 0x6422) = *(undefined1 *)(*(int *)(param_2 + 8) + 3);
    *(undefined1 *)(iVar4 + 0x6423) = *(undefined1 *)(*(int *)(param_2 + 8) + 4);
    *(undefined1 *)(iVar4 + 0x6424) = *(undefined1 *)(*(int *)(param_2 + 8) + 5);
    *(undefined1 *)(iVar4 + 0x6425) = *(undefined1 *)(*(int *)(param_2 + 8) + 6);
    *(undefined1 *)(iVar4 + 0x6426) = *(undefined1 *)(*(int *)(param_2 + 8) + 7);
    *(undefined1 *)(iVar4 + 0x6427) = *(undefined1 *)(*(int *)(param_2 + 8) + 8);
    *(undefined1 *)(iVar4 + 0x6428) = *(undefined1 *)(*(int *)(param_2 + 8) + 9);
    *(undefined1 *)(iVar4 + 0x6429) = *(undefined1 *)(*(int *)(param_2 + 8) + 10);
    *(undefined1 *)(iVar4 + 0x642a) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xb);
    *(undefined1 *)(iVar4 + 0x642b) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xc);
    *(undefined1 *)(iVar4 + 0x642c) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xd);
    *(undefined1 *)(iVar4 + 0x642d) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xe);
    *(undefined1 *)(iVar4 + 0x642e) = *(undefined1 *)(*(int *)(param_2 + 8) + 0xf);
    *(undefined1 *)(iVar4 + 0x642f) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x10);
    *(undefined1 *)(iVar4 + 0x6430) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x11);
    *(undefined1 *)(iVar4 + 0x6431) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x12);
    *(undefined1 *)(iVar4 + 0x6432) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x13);
    *(undefined1 *)(iVar4 + 0x6433) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x14);
    *(undefined1 *)(iVar4 + 0x6434) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x15);
    *(undefined1 *)(iVar4 + 0x6435) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x16);
    iVar5 = *(int *)(param_2 + 8);
    bVar1 = *(byte *)(iVar5 + 2);
    if ((bVar1 & 7) == 1 || (bVar1 & 7) == 0) {
      if ((int)((uint)bVar1 << 0x1c) < 0) {
        uVar3 = 0x26;
        *(undefined1 *)(iVar4 + 0x6436) = *(undefined1 *)(iVar5 + 0x17);
        *(undefined1 *)(iVar4 + 0x6437) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x18);
        *(undefined1 *)(iVar4 + 0x6438) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x19);
        *(undefined1 *)(iVar4 + 0x6439) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1a);
        *(undefined1 *)(iVar4 + 0x643a) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1b);
        *(undefined1 *)(iVar4 + 0x643b) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1c);
        *(undefined1 *)(iVar4 + 0x643c) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1d);
        *(undefined1 *)(iVar4 + 0x643d) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1e);
        *(undefined1 *)(iVar4 + 0x643e) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1f);
        *(undefined1 *)(iVar4 + 0x643f) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x20);
        *(undefined1 *)(iVar4 + 0x6440) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x21);
        *(undefined1 *)(iVar4 + 0x6441) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x22);
        *(undefined1 *)(iVar4 + 0x6442) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x23);
        *(undefined1 *)(iVar4 + 0x6443) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x24);
        *(undefined1 *)(iVar4 + 0x6444) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x25);
        *(undefined1 *)(iVar4 + 0x6445) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x26);
      }
      else {
        uVar3 = 0x16;
      }
    }
    else {
      *(undefined1 *)(iVar4 + 0x6436) = *(undefined1 *)(iVar5 + 0x17);
      *(undefined1 *)(iVar4 + 0x6437) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x18);
      *(undefined1 *)(iVar4 + 0x6438) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x19);
      *(undefined1 *)(iVar4 + 0x6439) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1a);
      *(undefined1 *)(iVar4 + 0x643a) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1b);
      *(undefined1 *)(iVar4 + 0x643b) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1c);
      *(undefined1 *)(iVar4 + 0x643c) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1d);
      *(undefined1 *)(iVar4 + 0x643d) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1e);
      *(undefined1 *)(iVar4 + 0x643e) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x1f);
      *(undefined1 *)(iVar4 + 0x643f) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x20);
      *(undefined1 *)(iVar4 + 0x6440) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x21);
      *(undefined1 *)(iVar4 + 0x6441) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x22);
      *(undefined1 *)(iVar4 + 0x6442) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x23);
      *(undefined1 *)(iVar4 + 0x6443) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x24);
      *(undefined1 *)(iVar4 + 0x6444) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x25);
      *(undefined1 *)(iVar4 + 0x6445) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x26);
      *(undefined1 *)(iVar4 + 0x6446) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x27);
      *(undefined1 *)(iVar4 + 0x6447) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x28);
      *(undefined1 *)(iVar4 + 0x6448) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x29);
      *(undefined1 *)(iVar4 + 0x6449) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x2a);
      uVar3 = 0x3a;
      if ((int)((uint)*(byte *)(*(int *)(param_2 + 8) + 2) << 0x1c) < 0) {
        *(undefined1 *)(iVar4 + 0x644a) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x2b);
        *(undefined1 *)(iVar4 + 0x644b) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x2c);
        *(undefined1 *)(iVar4 + 0x644c) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x2d);
        *(undefined1 *)(iVar4 + 0x644d) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x2e);
        *(undefined1 *)(iVar4 + 0x644e) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x2f);
        *(undefined1 *)(iVar4 + 0x644f) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x30);
        *(undefined1 *)(iVar4 + 0x6450) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x31);
        *(undefined1 *)(iVar4 + 0x6451) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x32);
        *(undefined1 *)(iVar4 + 0x6452) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x33);
        *(undefined1 *)(iVar4 + 0x6453) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x34);
        *(undefined1 *)(iVar4 + 0x6454) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x35);
        *(undefined1 *)(iVar4 + 0x6455) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x36);
        *(undefined1 *)(iVar4 + 0x6456) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x37);
        *(undefined1 *)(iVar4 + 0x6457) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x38);
        *(undefined1 *)(iVar4 + 0x6458) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x39);
        *(undefined1 *)(iVar4 + 0x6459) = *(undefined1 *)(*(int *)(param_2 + 8) + 0x3a);
      }
      else {
        uVar3 = 0x2a;
      }
    }
    (&DAT_00128420)[uVar7 * 5 + uVar8 * 0x280 + iVar6 + uVar9] = uVar3;
  }
  if ((int)((uint)(byte)param_2[3] << 0x18) < 0) {
    iVar4 = uVar9 + iVar6 + uVar7 * 5 + uVar8 * 0x280;
    (&DAT_0012d420)[iVar4] = (byte)param_2[3] & 0x7f;
    (&DAT_00132420)[iVar4] = (byte)param_2[4] & 0x7f;
  }
  return 0;
}

