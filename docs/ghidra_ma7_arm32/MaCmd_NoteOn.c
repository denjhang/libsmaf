/* MaCmd_NoteOn @ 000ec76c 1658B */


/* YAMAHA::MaCmd_NoteOn(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned char*)
    */

int YAMAHA::MaCmd_NoteOn
              (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  ushort uVar1;
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  byte local_50;
  uchar local_4c;
  int local_48;
  uint local_44;
  int local_40;
  ushort local_3c;
  char local_3a;
  uint local_38;
  byte local_34;
  byte local_30;
  
  uVar7 = param_3 & 0xf;
  uVar10 = param_4 & 0x7f;
  iVar13 = DAT_000ecde8 + 0xec79a;
  iVar8 = param_1 * 0x65d0 + uVar7 * 0x1e + iVar13;
  local_44 = param_5 & 0x7f;
  iVar2 = MaCmd_GetVoiceInfo(param_1,uVar7,uVar10,(_MASNDVOICE *)&local_40);
  if (iVar2 < 0) {
    iVar2 = MaCmd_Nop(param_2,0,param_6);
    return iVar2;
  }
  iVar13 = param_1 * 0x65d0 + iVar13;
  uVar9 = param_2;
  if (*(char *)(iVar8 + 4) < '\0') {
    uVar4 = (uint)*(byte *)(iVar13 + 0x3c5);
    if (uVar4 == 4) {
      uVar4 = MaDva_GetAlt3Slot(uVar10);
      if ((int)uVar4 < 0) {
        uVar4 = (uint)*(byte *)(iVar13 + 0x3c5);
        uVar6 = 2;
        local_48 = 0;
      }
      else {
        uVar9 = param_2 & param_2 >> 0x1f;
        local_48 = MaCmd_NoteOff(param_1,param_2,uVar4 & 0xf,(uVar4 & 0x1fff) >> 6,param_6);
        uVar4 = (uint)*(byte *)(iVar13 + 0x3c5);
        uVar6 = 2;
      }
    }
    else {
      local_48 = 0;
      uVar6 = 2;
    }
  }
  else {
    uVar6 = (uint)*(byte *)(iVar8 + 6);
    uVar4 = (uint)*(byte *)(iVar13 + 0x3c5);
    local_48 = 0;
  }
  if (local_3a == '\0') {
    if ((uVar4 == 3) && (*(byte *)(param_1 * 0x65d0 + DAT_000ecdec + 0xecbb7) == uVar7)) {
      if (*(char *)(iVar8 + 4) < '\0') {
        *(undefined1 *)(iVar8 + 2) = 0;
      }
      else {
        if (*(char *)(iVar8 + 2) == '\0') {
          uVar4 = 3;
        }
        else {
          uVar4 = 2;
        }
        *(char *)(iVar8 + 2) = *(char *)(iVar8 + 2) + '\x01';
      }
      local_34 = 0x1f;
      local_30 = 0x5f;
      *(undefined1 *)(param_1 * 0x65d0 + DAT_000ece20 + 0xed02c) = 0x1f;
    }
    else {
      MaDva_GetFmSlot(param_1,uVar7,uVar10,uVar6,(_MADVA_GETSLOTINFO *)&local_38);
      local_30 = local_30 | 0x40;
      uVar4 = local_38;
    }
    if ((uVar4 == 2) && (iVar2 == 1)) {
      uVar1 = *(ushort *)(iVar8 + 0x1c);
    }
    else {
      *(ushort *)(iVar8 + 0x1c) = local_3c;
      uVar1 = local_3c;
    }
    iVar2 = DAT_000ecdf0 + 0xec832 + param_1 * 0x65d0 + uVar7 * 0x1e;
    uVar7 = (uint)*(byte *)(iVar2 + 4);
    uVar6 = (uint)*(byte *)(iVar2 + 5);
    if (uVar7 < 0x80) {
      uVar1 = *(ushort *)
               (DAT_000ecdf8 +
                (uVar10 + (uint)*(byte *)(uVar6 + DAT_000ecdf4 + (uVar7 & 0xffffff80) + 0xec8a8) *
                          0x80) * 2 + 0xed1a4);
      local_4c = (uchar)((uVar1 & 0x1fff) >> 7);
      local_50 = (byte)uVar1;
    }
    else {
      uVar1 = *(ushort *)
               (DAT_000ece1c +
                ((uVar1 & 0x7f) + (uint)*(byte *)(uVar6 + DAT_000ece18 + 0xeccd6) * 0x80) * 2 +
               0xed554);
      local_4c = (uchar)((uVar1 & 0x1fff) >> 7);
      local_50 = (byte)uVar1;
    }
LAB_000ec874:
    if (-1 < *(char *)(iVar8 + 4)) goto LAB_000ec87e;
LAB_000ecb04:
    bVar11 = 0x70;
    bVar12 = 7;
    if (local_3a == '\0') {
      uVar1 = *(ushort *)(DAT_000ece14 + (local_3c & 0x7f) * 2 + 0xecc82);
      bVar12 = (byte)(((uint)uVar1 << 0x13) >> 0x1a);
      bVar11 = (byte)uVar1 & 0x7f;
    }
  }
  else {
    if ((uVar4 == 3) && (*(byte *)(param_1 * 0x65d0 + DAT_000ece00 + 0xecddb) == uVar7)) {
      if (*(char *)(iVar8 + 4) < '\0') {
        *(undefined1 *)(iVar8 + 2) = 0;
      }
      else {
        if (*(char *)(iVar8 + 2) == '\0') {
          uVar4 = 3;
        }
        else {
          uVar4 = 2;
        }
        *(char *)(iVar8 + 2) = *(char *)(iVar8 + 2) + '\x01';
      }
      local_34 = 0x5f;
      local_30 = 0x1f;
      *(undefined1 *)(param_1 * 0x65d0 + DAT_000ece24 + 0xed068) = 0x5f;
    }
    else {
      MaDva_GetWtSlot(param_1,uVar7,uVar10,uVar6,(_MADVA_GETSLOTINFO *)&local_38);
      local_34 = local_34 | 0x40;
      uVar4 = local_38;
    }
    if (*(char *)((int)&DAT_000ece08 + param_1 * 0x65d0 + DAT_000ece04 + 1) == '\x01') {
      uVar6 = (uint)*(byte *)(DAT_000ece30 + local_44 + 0xecc50);
      if (uVar6 < 0x18) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 - 0x18;
        if (0xbf < uVar6) {
          uVar6 = 0xc0;
        }
      }
      local_44 = (uint)*(byte *)(DAT_000ece34 + uVar6 + 0xeccee);
    }
    if ((uVar4 == 2) && (iVar2 == 1)) {
      uVar1 = *(ushort *)(iVar8 + 0x1c);
    }
    else {
      *(ushort *)(iVar8 + 0x1c) = local_3c;
      uVar1 = local_3c;
    }
    iVar2 = DAT_000ece08 + 0xeca6e + param_1 * 0x65d0 + uVar7 * 0x1e;
    uVar7 = (uint)*(byte *)(iVar2 + 4);
    uVar6 = (uint)*(byte *)(iVar2 + 5);
    if (uVar7 < 0x80) {
      uVar7 = *(int *)(DAT_000ece28 + 0xeccc0 +
                       (uVar10 + (uint)*(byte *)((uVar7 & 0xffffff80) +
                                                 uVar6 + DAT_000ece28 + 0xeccc0 + 0x54) * 0x80) * 4
                      + 0x154) * (((uint)uVar1 << 0x10) / 24000 + 1 >> 1);
      if ((int)uVar7 < 0) goto LAB_000ecd7c;
      if (uVar7 < 0x4000001) goto LAB_000ecc24;
      uVar6 = *(uint *)(DAT_000ece2c + (uVar7 + 0x8000 >> 0x1a) * 4 + 0xecd5c);
      uVar7 = ((uVar7 + 0x8000 >> 0x10) >> (uVar6 & 0xff) & 0x3ff) + uVar6 * 0x400;
      if (uVar7 == 0) {
        local_50 = 1;
        local_4c = '\0';
      }
      else {
        local_4c = (uchar)((uVar7 & 0x1fff) >> 7);
        local_50 = (byte)uVar7;
      }
      goto LAB_000ec874;
    }
    uVar7 = *(int *)(DAT_000ece0c + 0xeca98 +
                     (uint)*(byte *)((uVar7 & 0xffffff80) + uVar6 + DAT_000ece0c + 0xeca98 + 0x54) *
                     0x200 + 0x244) * (((uint)uVar1 << 0x10) / 24000 + 1 >> 1);
    if ((int)uVar7 < 0) {
LAB_000ecd7c:
      local_50 = 0;
      local_4c = '(';
      goto LAB_000ec874;
    }
    if (uVar7 < 0x4000001) {
LAB_000ecc24:
      local_50 = 1;
      local_4c = '\0';
      goto LAB_000ec874;
    }
    uVar6 = *(uint *)(DAT_000ece10 + (uVar7 + 0x8000 >> 0x1a) * 4 + 0xecb30);
    uVar7 = ((uVar7 + 0x8000 >> 0x10) >> (uVar6 & 0xff) & 0x3ff) + uVar6 * 0x400;
    if (uVar7 == 0) {
      local_50 = 1;
      local_4c = '\0';
    }
    else {
      local_4c = (uchar)((uVar7 & 0x1fff) >> 7);
      local_50 = (byte)uVar7;
    }
    if (*(char *)(iVar8 + 4) < '\0') goto LAB_000ecb04;
LAB_000ec87e:
    uVar1 = *(ushort *)(DAT_000ecdfc + uVar10 * 2 + 0xec9e2);
    bVar12 = (byte)(((uint)uVar1 << 0x13) >> 0x1a);
    bVar11 = (byte)uVar1 & 0x7f;
  }
  if ((int)uVar9 < 0) {
    iVar2 = 0;
  }
  else {
    if ((int)uVar9 < 0x80) {
      iVar2 = 1;
      uVar10 = 0;
      uVar7 = uVar9;
    }
    else {
      uVar5 = 0;
      uVar6 = uVar9;
      do {
        param_6[uVar5 + local_48] = (byte)uVar6 & 0x7f;
        uVar10 = uVar5 + 1;
        uVar7 = (int)uVar6 >> 7;
        if ((int)uVar7 < 0x80 || 1 < uVar10) break;
        param_6[uVar10 + local_48] = (byte)uVar7 & 0x7f;
        uVar10 = uVar5 + 2;
        uVar7 = (int)uVar6 >> 0xe;
        if ((int)uVar7 < 0x80 || 1 < uVar10) break;
        param_6[uVar10 + local_48] = (byte)uVar7 & 0x7f;
        uVar10 = uVar5 + 3;
        uVar7 = (int)uVar6 >> 0x15;
        if ((int)uVar7 < 0x80 || 1 < uVar10) break;
        param_6[uVar10 + local_48] = (byte)uVar7 & 0x7f;
        uVar5 = uVar5 + 4;
        uVar6 = (int)uVar6 >> 0x1c;
        uVar10 = uVar5;
        uVar7 = uVar6;
      } while (0x7f < (int)uVar6 && uVar5 < 2);
      iVar2 = uVar10 + 1;
    }
    param_6[uVar10 + local_48] = (byte)uVar7 | 0x80;
  }
  iVar2 = iVar2 + local_48;
  if (uVar4 == 1) {
    puVar3 = param_6 + iVar2;
    iVar13 = iVar2 + 2;
    param_6[iVar2] = 0x80;
    puVar3[1] = local_34 | 0x80;
    if ((int)uVar9 < 0) goto LAB_000ecb50;
  }
  else {
    if (uVar4 != 3) {
      iVar8 = iVar2 + 2;
      param_6[iVar2] = 0x80;
      param_6[iVar2 + 1] = local_34 | 0x80;
      if (-1 < (int)uVar9) {
        param_6[iVar8] = 0x80;
        iVar8 = iVar2 + 3;
      }
      param_6[iVar8] = 0x84;
      param_6[iVar8 + 3] = (byte)local_44 & 0x7c;
      param_6[iVar8 + 1] = bVar12;
      param_6[iVar8 + 2] = bVar11;
      param_6[iVar8 + 4] = local_4c;
      param_6[iVar8 + 5] = local_50 | 0x80;
      return iVar8 + 6;
    }
    param_6[iVar2] = 0x80;
    param_6[iVar2 + 1] = local_30 | 0x80;
    if ((int)uVar9 < 0) {
      iVar13 = iVar2 + 6;
      param_6[iVar2 + 2] = 0x8a;
      param_6[iVar2 + 5] = local_34 | 0x80;
      param_6[iVar2 + 4] = 0x80;
      param_6[iVar2 + 3] = 0xa0;
LAB_000ecb50:
      param_6[iVar13] = 0x8a;
      iVar2 = iVar13 + 2;
      param_6[iVar13 + 1] = 0x90;
      goto LAB_000ec9a2;
    }
    iVar14 = iVar2 + 6;
    iVar13 = iVar2 + 8;
    puVar3 = param_6 + iVar14;
    param_6[iVar2 + 2] = 0x80;
    param_6[iVar2 + 5] = 0x80;
    param_6[iVar2 + 3] = 0x8a;
    param_6[iVar2 + 4] = 0xa0;
    param_6[iVar14] = 0x80;
    param_6[iVar2 + 7] = local_34 | 0x80;
    iVar2 = iVar14;
  }
  iVar2 = iVar2 + 6;
  param_6[iVar13] = 0x80;
  puVar3[5] = 0x80;
  puVar3[3] = 0x8a;
  puVar3[4] = 0x90;
LAB_000ec9a2:
  param_6[iVar2] = 0x81;
  param_6[iVar2 + 6] = (byte)local_44 & 0x7c;
  param_6[iVar2 + 4] = bVar12;
  param_6[iVar2 + 5] = bVar11;
  param_6[iVar2 + 7] = local_4c;
  param_6[iVar2 + 8] = local_50 & 0x7f;
  param_6[iVar2 + 1] = (byte)((uint)(local_40 << 0xf) >> 0x1e);
  param_6[iVar2 + 2] = (byte)((uint)(local_40 << 0x11) >> 0x19);
  param_6[iVar2 + 3] = (byte)local_40 >> 1;
  param_6[iVar2 + 9] = *(uchar *)(iVar8 + 0xf);
  param_6[iVar2 + 10] = *(byte *)(iVar8 + 1) | 0xc0;
  return iVar2 + 0xb;
}

