/* ATRTMIDIMgr_SetVoiceParam @ 0021c438 2156B */


/* YAMAHA::ATRTMIDIMgr_SetVoiceParam(unsigned int, _MASMW_SETSOUNDPARAM*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetVoiceParam(uint param_1,_MASMW_SETSOUNDPARAM *param_2)

{
  _MASMW_SETSOUNDPARAM _Var1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  
  if (*param_2 == (_MASMW_SETSOUNDPARAM)0x7c) {
    if (9 < (byte)param_2[1]) {
      return 0xffffffff;
    }
    _Var1 = param_2[2];
    uVar6 = (ulong)(byte)_Var1;
    uVar5 = (uint)(byte)_Var1;
    if ((char)_Var1 < '\0') {
      return 0xffffffff;
    }
    uVar4 = (uint)(byte)param_2[1];
    if (-1 < (char)param_2[3]) goto LAB_0021c468;
    uVar12 = (ulong)uVar4;
    lVar11 = uVar6 + uVar12 * 0x80;
    bVar2 = PTR_gsAtRtmMgrInfo_00567da0[lVar11 + 0x838];
    if (4 < bVar2) {
      return 0xffffffff;
    }
    PTR_gsAtRtmMgrInfo_00567da0[lVar11 + 0x838] = bVar2 + 1;
  }
  else {
    if (*param_2 != (_MASMW_SETSOUNDPARAM)0x7d) {
      return 0xffffffff;
    }
    if (9 < (byte)param_2[2]) {
      return 0xffffffff;
    }
    uVar5 = (uint)(byte)param_2[3];
    if ((char)param_2[3] < '\0') {
      return 0xffffffff;
    }
    uVar4 = (byte)param_2[2] + 0x10;
LAB_0021c468:
    uVar12 = (ulong)uVar4;
    uVar6 = (ulong)uVar5;
    bVar2 = 0;
    if (PTR_gsAtRtmMgrInfo_00567da0[uVar6 + uVar12 * 0x80 + 0x838] != '\0') {
      return 0xffffffff;
    }
  }
  puVar3 = PTR_gsAtRtmMgrInfo_00567da0;
  uVar7 = (ulong)bVar2;
  lVar11 = uVar6 * 5 + uVar12 * 0x280;
  lVar8 = uVar7 + lVar11;
  *(_MASMW_SETSOUNDPARAM *)(PTR_gsAtRtmMgrInfo_00567da0 + lVar8 + 0x1838) = param_2[5];
  if (((byte)param_2[5] & 1) == 0) {
    puVar3[lVar8 + 0x15f838] = **(undefined1 **)(param_2 + 8);
    lVar11 = uVar6 * 0x122 + uVar7 * 0x3a + uVar12 * 0x9100;
    puVar3[lVar11 + 0x6838] = *(undefined1 *)(*(long *)(param_2 + 8) + 1);
    puVar3[lVar11 + 0x6839] = *(undefined1 *)(*(long *)(param_2 + 8) + 2);
    puVar3[lVar11 + 0x683a] = *(undefined1 *)(*(long *)(param_2 + 8) + 3);
    puVar3[lVar11 + 0x683b] = *(undefined1 *)(*(long *)(param_2 + 8) + 4);
    puVar3[lVar11 + 0x683c] = *(undefined1 *)(*(long *)(param_2 + 8) + 5);
    puVar3[lVar11 + 0x683d] = *(undefined1 *)(*(long *)(param_2 + 8) + 6);
    puVar3[lVar11 + 0x683e] = *(undefined1 *)(*(long *)(param_2 + 8) + 7);
    puVar3[lVar11 + 0x683f] = *(undefined1 *)(*(long *)(param_2 + 8) + 8);
    puVar3[lVar11 + 0x6840] = *(undefined1 *)(*(long *)(param_2 + 8) + 9);
    puVar3[lVar11 + 0x6841] = *(undefined1 *)(*(long *)(param_2 + 8) + 10);
    puVar3[lVar11 + 0x6842] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xb);
    puVar3[lVar11 + 0x6843] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xc);
    puVar3[lVar11 + 0x6844] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xd);
    puVar3[lVar11 + 0x6845] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xe);
    puVar3[lVar11 + 0x6846] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xf);
    puVar3[lVar11 + 0x6847] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x10);
    puVar3[lVar11 + 0x6848] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x11);
    puVar3[lVar11 + 0x6849] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x12);
    puVar3[lVar11 + 0x684a] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x13);
    puVar3[lVar11 + 0x684b] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x14);
    puVar3[lVar11 + 0x684c] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x15);
    puVar3[lVar11 + 0x684d] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x16);
    lVar8 = *(long *)(param_2 + 8);
    if ((*(byte *)(lVar8 + 2) & 7) < 2) {
      uVar9 = 0x16;
      if ((*(byte *)(lVar8 + 2) >> 3 & 1) != 0) {
        uVar9 = 0x26;
        puVar3[lVar11 + 0x684e] = *(undefined1 *)(lVar8 + 0x17);
        puVar3[lVar11 + 0x684f] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x18);
        puVar3[lVar11 + 0x6850] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x19);
        puVar3[lVar11 + 0x6851] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1a);
        puVar3[lVar11 + 0x6852] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1b);
        puVar3[lVar11 + 0x6853] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1c);
        puVar3[lVar11 + 0x6854] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1d);
        puVar3[lVar11 + 0x6855] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1e);
        puVar3[lVar11 + 0x6856] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1f);
        puVar3[lVar11 + 0x6857] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x20);
        puVar3[lVar11 + 0x6858] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x21);
        puVar3[lVar11 + 0x6859] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x22);
        puVar3[lVar11 + 0x685a] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x23);
        puVar3[lVar11 + 0x685b] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x24);
        puVar3[lVar11 + 0x685c] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x25);
        puVar3[lVar11 + 0x685d] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x26);
      }
    }
    else {
      uVar9 = 0x2a;
      puVar3[lVar11 + 0x684e] = *(undefined1 *)(lVar8 + 0x17);
      puVar3[lVar11 + 0x684f] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x18);
      puVar3[lVar11 + 0x6850] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x19);
      puVar3[lVar11 + 0x6851] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1a);
      puVar3[lVar11 + 0x6852] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1b);
      puVar3[lVar11 + 0x6853] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1c);
      puVar3[lVar11 + 0x6854] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1d);
      puVar3[lVar11 + 0x6855] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1e);
      puVar3[lVar11 + 0x6856] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1f);
      puVar3[lVar11 + 0x6857] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x20);
      puVar3[lVar11 + 0x6858] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x21);
      puVar3[lVar11 + 0x6859] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x22);
      puVar3[lVar11 + 0x685a] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x23);
      puVar3[lVar11 + 0x685b] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x24);
      puVar3[lVar11 + 0x685c] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x25);
      puVar3[lVar11 + 0x685d] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x26);
      puVar3[lVar11 + 0x685e] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x27);
      puVar3[lVar11 + 0x685f] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x28);
      puVar3[lVar11 + 0x6860] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x29);
      puVar3[lVar11 + 0x6861] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x2a);
      if ((*(byte *)(*(long *)(param_2 + 8) + 2) >> 3 & 1) != 0) {
        uVar9 = 0x3a;
        puVar3[lVar11 + 0x6862] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x2b);
        puVar3[lVar11 + 0x6863] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x2c);
        puVar3[lVar11 + 0x6864] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x2d);
        puVar3[lVar11 + 0x6865] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x2e);
        puVar3[lVar11 + 0x6866] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x2f);
        puVar3[lVar11 + 0x6867] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x30);
        puVar3[lVar11 + 0x6868] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x31);
        puVar3[lVar11 + 0x6869] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x32);
        puVar3[lVar11 + 0x686a] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x33);
        puVar3[lVar11 + 0x686b] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x34);
        puVar3[lVar11 + 0x686c] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x35);
        puVar3[lVar11 + 0x686d] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x36);
        puVar3[lVar11 + 0x686e] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x37);
        puVar3[lVar11 + 0x686f] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x38);
        puVar3[lVar11 + 0x6870] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x39);
        puVar3[lVar11 + 0x6871] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x3a);
      }
    }
    PTR_gsAtRtmMgrInfo_00567da0[uVar7 + uVar6 * 5 + uVar12 * 0x280 + 0x128838] = uVar9;
    _Var1 = param_2[3];
    puVar3 = PTR_gsAtRtmMgrInfo_00567da0;
    goto joined_r0x0021c9b0;
  }
  pbVar10 = *(byte **)(param_2 + 8);
  lVar11 = lVar11 + uVar7;
  *(uint *)(puVar3 + (lVar11 + 0x4d000) * 4 + 0x3838) = (uint)pbVar10[1] + (uint)*pbVar10 * 0x100;
  lVar8 = uVar6 * 0x122 + uVar7 * 0x3a + uVar12 * 0x9100;
  *(uint *)(puVar3 + (lVar11 + 0x52000) * 4 + 0x3838) = (uint)pbVar10[0x10];
  puVar3[lVar8 + 0x6838] = pbVar10[2];
  puVar3[lVar8 + 0x6839] = *(undefined1 *)(*(long *)(param_2 + 8) + 3);
  puVar3[lVar8 + 0x683a] = *(undefined1 *)(*(long *)(param_2 + 8) + 4);
  puVar3[lVar8 + 0x683b] = *(undefined1 *)(*(long *)(param_2 + 8) + 5);
  puVar3[lVar8 + 0x683c] = *(undefined1 *)(*(long *)(param_2 + 8) + 6);
  puVar3[lVar8 + 0x683d] = *(undefined1 *)(*(long *)(param_2 + 8) + 7);
  puVar3[lVar8 + 0x683e] = *(undefined1 *)(*(long *)(param_2 + 8) + 8);
  puVar3[lVar8 + 0x683f] = *(undefined1 *)(*(long *)(param_2 + 8) + 9);
  puVar3[lVar8 + 0x6840] = *(undefined1 *)(*(long *)(param_2 + 8) + 10);
  puVar3[lVar8 + 0x6841] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xb);
  puVar3[lVar8 + 0x6842] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xc);
  puVar3[lVar8 + 0x6843] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xd);
  puVar3[lVar8 + 0x6844] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xe);
  puVar3[lVar8 + 0x6845] = *(undefined1 *)(*(long *)(param_2 + 8) + 0xf);
  lVar11 = *(long *)(param_2 + 8);
  if ((*(byte *)(lVar11 + 3) & 8) == 0) {
    uVar9 = 0xe;
    if ((*(byte *)(lVar11 + 4) >> 2 & 1) == 0) goto LAB_0021c704;
    *(undefined8 *)(puVar3 + (ulong)uVar5 * 0x122 + uVar7 * 0x3a + (ulong)uVar4 * 0x9100 + 0x6846) =
         0;
    *(undefined8 *)
     ((long)(puVar3 + (ulong)uVar5 * 0x122 + uVar7 * 0x3a + (ulong)uVar4 * 0x9100 + 0x6846) + 8) = 0
    ;
    puVar3[lVar8 + 0x6856] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x11);
    puVar3[lVar8 + 0x6857] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x12);
    puVar3[lVar8 + 0x6858] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x13);
    puVar3[lVar8 + 0x6859] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x14);
    puVar3[lVar8 + 0x685a] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x15);
    puVar3[lVar8 + 0x685b] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x16);
    puVar3[lVar8 + 0x685c] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x17);
    puVar3[lVar8 + 0x685d] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x18);
    puVar3[lVar8 + 0x685e] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x19);
    puVar3[lVar8 + 0x685f] = 0;
    PTR_gsAtRtmMgrInfo_00567da0[uVar7 + uVar6 * 5 + uVar12 * 0x280 + 0x128838] = 0x28;
  }
  else {
    uVar9 = 0x1e;
    puVar3[lVar8 + 0x6846] = *(undefined1 *)(lVar11 + 0x11);
    puVar3[lVar8 + 0x6847] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x12);
    puVar3[lVar8 + 0x6848] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x13);
    puVar3[lVar8 + 0x6849] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x14);
    puVar3[lVar8 + 0x684a] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x15);
    puVar3[lVar8 + 0x684b] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x16);
    puVar3[lVar8 + 0x684c] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x17);
    puVar3[lVar8 + 0x684d] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x18);
    puVar3[lVar8 + 0x684e] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x19);
    puVar3[lVar8 + 0x684f] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1a);
    puVar3[lVar8 + 0x6850] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1b);
    puVar3[lVar8 + 0x6851] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1c);
    puVar3[lVar8 + 0x6852] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1d);
    puVar3[lVar8 + 0x6853] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1e);
    puVar3[lVar8 + 0x6854] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1f);
    puVar3[lVar8 + 0x6855] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x20);
    if ((*(byte *)(*(long *)(param_2 + 8) + 4) >> 2 & 1) != 0) {
      uVar9 = 0x28;
      puVar3[lVar8 + 0x6856] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x21);
      puVar3[lVar8 + 0x6857] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x22);
      puVar3[lVar8 + 0x6858] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x23);
      puVar3[lVar8 + 0x6859] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x24);
      puVar3[lVar8 + 0x685a] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x25);
      puVar3[lVar8 + 0x685b] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x26);
      puVar3[lVar8 + 0x685c] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x27);
      puVar3[lVar8 + 0x685d] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x28);
      puVar3[lVar8 + 0x685e] = *(undefined1 *)(*(long *)(param_2 + 8) + 0x29);
      puVar3[lVar8 + 0x685f] = 0;
    }
LAB_0021c704:
    PTR_gsAtRtmMgrInfo_00567da0[uVar7 + uVar6 * 5 + uVar12 * 0x280 + 0x128838] = uVar9;
  }
  _Var1 = param_2[3];
  puVar3 = PTR_gsAtRtmMgrInfo_00567da0;
joined_r0x0021c9b0:
  if ((char)_Var1 < '\0') {
    lVar11 = uVar7 + uVar6 * 5 + uVar12 * 0x280;
    PTR_gsAtRtmMgrInfo_00567da0 = puVar3;
    puVar3[lVar11 + 0x12d838] = (byte)_Var1 & 0x7f;
    puVar3[lVar11 + 0x132838] = (byte)param_2[4] & 0x7f;
    return 0;
  }
  PTR_gsAtRtmMgrInfo_00567da0 = puVar3;
  return 0;
}

