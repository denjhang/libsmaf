/* MaCmd_NoteOnMa2 @ 000ebe50 1296B */


/* YAMAHA::MaCmd_NoteOnMa2(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   char*) */

int YAMAHA::MaCmd_NoteOnMa2
              (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uchar uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  uchar local_34;
  int local_30;
  ushort local_2c;
  char local_2a;
  
  uVar10 = param_3 & 0xf;
  uVar12 = param_4 & 0x7f;
  iVar8 = DAT_000ec360 + 0xebe78 + param_1 * 0x65d0 + uVar10 * 0x1e;
  uVar13 = param_5 & 0x7f;
  iVar3 = MaCmd_GetVoiceInfo(param_1,uVar10,uVar12,(_MASNDVOICE *)&local_30);
  if (iVar3 < 0) {
    iVar3 = MaCmd_Nop(param_2,0,param_6);
    return iVar3;
  }
  bVar5 = (char)uVar10 + (char)param_1 * '\b';
  cVar6 = *(char *)(iVar8 + 2) + '\x01';
  *(char *)(iVar8 + 2) = cVar6;
  cVar2 = *(char *)(iVar8 + 4);
  if (((cVar6 == '\x01') || (iVar3 != 1)) || (cVar2 < '\0')) {
    *(ushort *)(iVar8 + 0x1c) = local_2c;
    uVar1 = local_2c;
  }
  else {
    uVar1 = *(ushort *)(iVar8 + 0x1c);
  }
  if (local_2a == '\0') {
    iVar3 = param_1 * 0x65d0 + uVar10 * 0x1e + DAT_000ec364 + 0xebed6;
    uVar10 = (uint)*(byte *)(iVar3 + 4);
    uVar14 = (uint)*(byte *)(iVar3 + 5);
    if (uVar10 < 0x80) {
      if (*(char *)(param_1 * 0x65d0 + DAT_000ec364 + 0xebed6 + 0x3c5) == '\x05') {
        uVar1 = *(ushort *)
                 (DAT_000ec3a8 +
                  (uVar12 + (uint)*(byte *)(uVar14 + DAT_000ec3a4 + 0xec3d0) * 0x80) * 2 + 0xecc4c);
      }
      else {
        uVar1 = *(ushort *)
                 (DAT_000ec36c +
                  (uVar12 + (uint)*(byte *)(uVar14 + DAT_000ec368 + (uVar10 & 0xffffff80) + 0xebf58)
                            * 0x80) * 2 + 0xec854);
      }
    }
    else {
      uVar1 = *(ushort *)
               (DAT_000ec38c +
                ((uVar1 & 0x7f) + (uint)*(byte *)(uVar14 + DAT_000ec388 + 0xec150) * 0x80) * 2 +
               0xec9cc);
    }
    bVar11 = (byte)uVar1;
    if (cVar2 < '\0') {
      local_34 = (uchar)((uVar1 & 0x1fff) >> 7);
      uVar1 = *(ushort *)(DAT_000ec370 + (local_2c & 0x7f) * 2 + 0xec092);
      uVar9 = (uchar)((uVar1 & 0x1fff) >> 7);
      bVar16 = (byte)uVar1 & 0x7f;
      goto joined_r0x000ec0b6;
    }
    local_34 = (uchar)((uVar1 & 0x1fff) >> 7);
  }
  else {
    if (-1 < param_2) {
      uVar13 = (uint)*(byte *)(uVar13 + DAT_000ec374 + 0xebeac);
      if (uVar13 < 0x18) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar13 - 0x18;
        if (0xbf < uVar13) {
          uVar13 = 0xc0;
        }
      }
      uVar13 = (uint)*(byte *)(uVar13 + DAT_000ec378 + 0xebf42);
    }
    iVar3 = param_1 * 0x65d0 + uVar10 * 0x1e + DAT_000ec37c + 0xebfd2;
    uVar14 = (uint)*(byte *)(iVar3 + 4);
    uVar10 = (uint)*(byte *)(iVar3 + 5);
    if (uVar14 < 0x80) {
      if (*(char *)(param_1 * 0x65d0 + DAT_000ec37c + 0xebfd2 + 0x3c5) == '\x05') {
        uVar10 = *(int *)(DAT_000ec39c + 0xec2b8 +
                          (uVar12 + (uint)*(byte *)(uVar10 + DAT_000ec39c + 0xec2b8 + 0xd4) * 0x80)
                          * 4 + 0x154) * ((uint)((ulonglong)uVar1 * 0x57619f10000 >> 0x29) + 1 >> 1)
        ;
        if ((int)uVar10 < 0) {
          bVar11 = 0;
          local_34 = '(';
        }
        else {
          if (0x4000000 < uVar10) {
            iVar3 = DAT_000ec3a0 + 0xec2f0;
            goto LAB_000ec250;
          }
          bVar11 = 1;
          local_34 = '\0';
        }
      }
      else {
        uVar10 = *(int *)(DAT_000ec380 + 0xec002 +
                          (uVar12 + (uint)*(byte *)(uVar10 + DAT_000ec380 + 0xec002 +
                                                    (uVar14 & 0xffffff80) + 0x54) * 0x80) * 4 +
                         0x154) * ((uint)((ulonglong)uVar1 * 0x57619f10000 >> 0x29) + 1 >> 1);
        if ((int)uVar10 < 0) goto LAB_000ec310;
        if (uVar10 < 0x4000001) goto LAB_000ec31a;
        uVar14 = *(uint *)(DAT_000ec384 + (uVar10 + 0x8000 >> 0x1a) * 4 + 0xec0a2);
        uVar10 = ((uVar10 + 0x8000 >> 0x10) >> (uVar14 & 0xff) & 0x3ff) + uVar14 * 0x400;
        if (uVar10 == 0) goto LAB_000ec26c;
        local_34 = (uchar)((uVar10 & 0x1fff) >> 7);
        bVar11 = (byte)uVar10;
      }
    }
    else {
      uVar10 = *(int *)(DAT_000ec394 + 0xec222 +
                        (uint)*(byte *)(uVar10 + DAT_000ec394 + 0xec222 + (uVar14 & 0xffffff80) +
                                       0x54) * 0x200 + 0x244) *
               ((uint)((ulonglong)uVar1 * 0x57619f10000 >> 0x29) + 1 >> 1);
      if ((int)uVar10 < 0) {
LAB_000ec310:
        bVar11 = 0;
        local_34 = '(';
      }
      else if (uVar10 < 0x4000001) {
LAB_000ec31a:
        bVar11 = 1;
        local_34 = '\0';
      }
      else {
        iVar3 = DAT_000ec398 + 0xec252;
LAB_000ec250:
        uVar14 = *(uint *)(iVar3 + (uVar10 + 0x8000 >> 0x1a) * 4 + 0x5c);
        uVar10 = ((uVar10 + 0x8000 >> 0x10) >> (uVar14 & 0xff) & 0x3ff) + uVar14 * 0x400;
        if (uVar10 == 0) {
LAB_000ec26c:
          local_34 = '\0';
          bVar11 = 1;
        }
        else {
          local_34 = (uchar)((uVar10 & 0x1fff) >> 7);
          bVar11 = (byte)uVar10;
        }
      }
    }
    bVar5 = bVar5 | 0x40;
    if (cVar2 < '\0') {
      bVar16 = 0x70;
      uVar9 = '\a';
      goto joined_r0x000ec0b6;
    }
  }
  uVar1 = *(ushort *)(DAT_000ec390 + uVar12 * 2 + 0xec202);
  uVar9 = (uchar)((uVar1 & 0x1fff) >> 7);
  bVar16 = (byte)uVar1 & 0x7f;
joined_r0x000ec0b6:
  if (param_2 < 0) {
    iVar3 = 2;
    iVar4 = 1;
    iVar7 = 0;
  }
  else {
    if (param_2 < 0x80) {
      iVar3 = 3;
      iVar4 = 2;
      iVar7 = 1;
      uVar10 = 0;
      iVar15 = param_2;
    }
    else {
      uVar12 = 0;
      iVar3 = param_2;
      do {
        param_6[uVar12] = (byte)iVar3 & 0x7f;
        uVar10 = uVar12 + 1;
        iVar15 = iVar3 >> 7;
        if (iVar15 < 0x80 || 1 < uVar10) break;
        param_6[uVar10] = (byte)iVar15 & 0x7f;
        uVar10 = uVar12 + 2;
        iVar15 = iVar3 >> 0xe;
        if (iVar15 < 0x80 || 1 < uVar10) break;
        param_6[uVar10] = (byte)iVar15 & 0x7f;
        uVar10 = uVar12 + 3;
        iVar15 = iVar3 >> 0x15;
        if (iVar15 < 0x80 || 1 < uVar10) break;
        param_6[uVar10] = (byte)iVar15 & 0x7f;
        uVar12 = uVar12 + 4;
        iVar3 = iVar3 >> 0x1c;
        uVar10 = uVar12;
        iVar15 = iVar3;
      } while (0x7f < iVar3 && uVar12 < 2);
      iVar4 = uVar10 + 2;
      iVar3 = uVar10 + 3;
      iVar7 = uVar10 + 1;
    }
    param_6[uVar10] = (byte)iVar15 | 0x80;
    cVar2 = *(char *)(iVar8 + 4);
  }
  if (cVar2 < '\0') {
    param_6[iVar7] = 0x80;
    param_6[iVar4] = *(byte *)(iVar8 + 3) | 0x80;
    if (param_2 < 0) {
      param_6[iVar3] = 0x8a;
      param_6[iVar7 + 3] = 0x90;
      iVar7 = iVar7 + 4;
    }
    else {
      param_6[iVar3] = 0x80;
      param_6[iVar7 + 5] = 0x80;
      param_6[iVar7 + 3] = 0x8a;
      param_6[iVar7 + 4] = 0x90;
      iVar7 = iVar7 + 6;
    }
    iVar3 = iVar7 + 2;
    iVar4 = iVar7 + 1;
    *(undefined1 *)(iVar8 + 2) = 1;
  }
  param_6[iVar7] = 0x80;
  param_6[iVar4] = bVar5 | 0x80;
  if (*(char *)(iVar8 + 2) != '\x01') {
    if (-1 < param_2) {
      param_6[iVar3] = 0x80;
      iVar3 = iVar7 + 3;
    }
    param_6[iVar3] = 0x84;
    param_6[iVar3 + 3] = (byte)uVar13 & 0x7c;
    param_6[iVar3 + 1] = uVar9;
    param_6[iVar3 + 2] = bVar16;
    param_6[iVar3 + 4] = local_34;
    param_6[iVar3 + 5] = bVar11 | 0x80;
    return iVar3 + 6;
  }
  if (-1 < param_2) {
    param_6[iVar3] = 0x80;
    iVar3 = iVar7 + 3;
  }
  param_6[iVar3] = 0x81;
  param_6[iVar3 + 4] = uVar9;
  param_6[iVar3 + 6] = (byte)uVar13 & 0x7c;
  param_6[iVar3 + 5] = bVar16;
  param_6[iVar3 + 7] = local_34;
  param_6[iVar3 + 3] = (byte)local_30 >> 1;
  param_6[iVar3 + 8] = bVar11 & 0x7f;
  param_6[iVar3 + 1] = (byte)((uint)(local_30 << 0xf) >> 0x1e);
  param_6[iVar3 + 2] = (byte)((uint)(local_30 << 0x11) >> 0x19);
  param_6[iVar3 + 9] = *(uchar *)(iVar8 + 0xf);
  param_6[iVar3 + 10] = *(byte *)(iVar8 + 1) | 0xc0;
  *(byte *)(iVar8 + 3) = bVar5;
  return iVar3 + 0xb;
}

