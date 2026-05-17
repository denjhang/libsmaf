/* lup_vpit @ 000fed64 1026B */


/* YAMAHA::lup_vpit(unsigned char) */

void YAMAHA::lup_vpit(uchar param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uchar uVar9;
  ushort uVar10;
  undefined2 uVar11;
  int in_r1;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  int unaff_r9;
  undefined2 uVar19;
  uint uVar20;
  bool bVar21;
  int local_2c;
  
  iVar14 = DAT_000ff16c;
  iVar13 = DAT_000ff168 + 0xfed72;
  if (param_1 == '\t') {
    iVar14 = *(int *)(iVar13 + DAT_000ff16c);
    if (*(ushort *)(iVar14 + 0x318) == 0) {
      *(undefined2 *)(iVar14 + 0x318) = 1;
    }
    else if (0x7f < *(ushort *)(iVar14 + 0x318)) {
      *(undefined2 *)(iVar14 + 0x318) = 0x7f;
    }
LAB_000ff028:
    if (*(ushort *)(iVar14 + 0x31a) == 0) {
      *(undefined2 *)(iVar14 + 0x31a) = 1;
    }
    else if (0x7f < *(ushort *)(iVar14 + 0x31a)) {
      *(undefined2 *)(iVar14 + 0x31a) = 0x7f;
    }
LAB_000fedca:
    if (0x7f < *(ushort *)(iVar14 + 0x31c)) {
      *(undefined2 *)(iVar14 + 0x31c) = 0x7f;
    }
LAB_000fedd8:
    uVar17 = (uint)*(ushort *)(iVar14 + 0x31e);
    if (uVar17 == 0) {
      uVar17 = 1;
      *(undefined2 *)(iVar14 + 0x31e) = 1;
      local_2c = 0x7f;
    }
    else if (uVar17 < 0x80) {
      local_2c = 0x80 - uVar17;
    }
    else {
      uVar17 = 0x7f;
      local_2c = 1;
      *(undefined2 *)(iVar14 + 0x31e) = 0x7f;
    }
  }
  else {
    if (param_1 < 10) {
      if (param_1 == '\x02') {
        iVar14 = *(int *)(iVar13 + DAT_000ff16c);
      }
      else {
        if (2 < param_1) {
          if (param_1 == '\x03') {
            iVar14 = *(int *)(iVar13 + DAT_000ff16c);
            uVar10 = *(ushort *)(iVar14 + 0x30a);
            goto LAB_000ff056;
          }
          if (param_1 != '\x04') {
            return;
          }
          iVar14 = *(int *)(iVar13 + DAT_000ff16c);
          uVar10 = *(ushort *)(iVar14 + 0x30e);
          if (uVar10 == 0) {
            uVar10 = 1;
            *(undefined2 *)(iVar14 + 0x30e) = 1;
          }
          else if (0x7f < uVar10) {
            uVar10 = 0x7f;
            *(undefined2 *)(iVar14 + 0x30e) = 0x7f;
          }
          pbVar12 = *(byte **)(iVar13 + DAT_000ff17c);
          bVar4 = *pbVar12;
          bVar3 = pbVar12[1];
          uVar11 = lcal_fb(uVar10);
          uVar9 = '\x02';
          *(undefined2 *)(iVar14 + (uint)bVar3 * 2 + 0x26) = uVar11;
          *(undefined2 *)(iVar14 + (uint)bVar4 * 2 + 0x26) = uVar11;
          goto LAB_000feed8;
        }
        if (param_1 != '\0') {
          if (param_1 != '\x01') {
            return;
          }
          iVar14 = *(int *)(iVar13 + DAT_000ff16c);
          if (*(short *)(iVar14 + 0x308) != 0) {
            *(undefined2 *)(iVar14 + 0x308) = 0;
          }
          lcal_pwdly1(0);
          lcal_pwdly2(*(short *)(iVar14 + 0x308));
          return;
        }
        iVar14 = *(int *)(iVar13 + DAT_000ff16c);
        if (*(ushort *)(iVar14 + 0x306) < 0x34) {
          *(undefined2 *)(iVar14 + 0x306) = 0x34;
        }
        else if (0x4c < *(ushort *)(iVar14 + 0x306)) {
          *(undefined2 *)(iVar14 + 0x306) = 0x4c;
        }
      }
      uVar10 = *(ushort *)(iVar14 + 0x30a);
      if (uVar10 < 0xe) {
        uVar10 = 0xe;
        *(undefined2 *)(iVar14 + 0x30a) = 0xe;
      }
      else if (0x72 < uVar10) {
        uVar10 = 0x72;
        *(undefined2 *)(iVar14 + 0x30a) = 0x72;
      }
LAB_000ff056:
      if (*(ushort *)(iVar14 + 0x30c) < 0xe) {
        *(undefined2 *)(iVar14 + 0x30c) = 0xe;
      }
      else if (0x72 < *(ushort *)(iVar14 + 0x30c)) {
        *(undefined2 *)(iVar14 + 0x30c) = 0x72;
      }
      lset_pitch('\0',uVar10);
      lset_pitch('\x01',*(ushort *)(iVar14 + 0x30c));
      if (*(ushort *)(iVar14 + 0x306) == 0x40) {
        pbVar12 = *(byte **)(iVar13 + DAT_000ff184);
        uVar11 = 0x40f;
        if (*(ushort *)(iVar14 + 0x30a) < 0x41) {
          uVar19 = 0x3d4;
        }
        else {
          uVar19 = 0x40f;
        }
        bVar4 = pbVar12[1];
        if (*(ushort *)(iVar14 + 0x30c) < 0x41) {
          uVar11 = 0x3d4;
        }
        *(undefined2 *)(iVar14 + (uint)*pbVar12 * 2 + 0x26) = uVar19;
        *(undefined2 *)(iVar14 + (uint)bVar4 * 2 + 0x26) = uVar11;
      }
      else {
        pbVar12 = *(byte **)(iVar13 + DAT_000ff184);
        bVar4 = *pbVar12;
        uVar11 = *(undefined2 *)
                  (*(int *)(iVar13 + DAT_000ff188) + (*(ushort *)(iVar14 + 0x306) - 0x28) * 2);
        *(undefined2 *)(iVar14 + (uint)pbVar12[1] * 2 + 0x26) = uVar11;
        *(undefined2 *)(iVar14 + (uint)bVar4 * 2 + 0x26) = uVar11;
      }
      LSendCoef('\x02',pbVar12);
      return;
    }
    if (param_1 == '\f') {
      iVar14 = *(int *)(iVar13 + DAT_000ff16c);
      goto LAB_000fedd8;
    }
    if (param_1 < 0xd) {
      if (param_1 == '\n') {
        iVar14 = *(int *)(iVar13 + DAT_000ff16c);
        goto LAB_000ff028;
      }
      if (param_1 != '\v') {
        return;
      }
      iVar14 = *(int *)(iVar13 + DAT_000ff16c);
      goto LAB_000fedca;
    }
    if (param_1 != '\r') {
      if (param_1 == 0xff) {
        puVar18 = *(undefined1 **)(iVar13 + DAT_000ff180);
        *puVar18 = 1;
        iVar14 = *(int *)(iVar13 + iVar14);
        *(undefined2 *)(iVar14 + 0xb4) = 0x8000;
        *(undefined2 *)(iVar14 + 0xb0) = 0x8000;
        *(undefined2 *)(iVar14 + 0x8a) = 0x8000;
        *(undefined2 *)(iVar14 + 0x86) = 0x8000;
        *(undefined2 *)(iVar14 + 0x54) = 0x8000;
        *(undefined2 *)(iVar14 + 0x52) = 0x8000;
        *(undefined2 *)(iVar14 + 0x7c) = 0xc000;
        *(undefined2 *)(iVar14 + 0x74) = 0xc000;
        *(undefined2 *)(iVar14 + 0x6a) = 0xc000;
        *(undefined2 *)(iVar14 + 0x8e) = 0xc000;
        *(undefined2 *)(iVar14 + 0x90) = 0xc000;
        *(undefined2 *)(iVar14 + 0xe2) = 0x7fff;
        *(undefined2 *)(iVar14 + 0xdc) = 0x7fff;
        *(undefined2 *)(iVar14 + 0xd6) = 0x7fff;
        *(undefined2 *)(iVar14 + 0xc0) = 0x7fff;
        *(undefined2 *)(iVar14 + 0xba) = 0x7fff;
        *(undefined2 *)(iVar14 + 0xac) = 0x7fff;
        *(undefined2 *)(iVar14 + 100) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x5e) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x6e) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x58) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x5a) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x50) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x84) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x82) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x72) = 0x7fff;
        *(undefined2 *)(iVar14 + 0x62) = 0x2000;
        *(undefined2 *)(iVar14 + 0x60) = 0x2000;
        *(undefined2 *)(iVar14 + 0x68) = 0x2000;
        *(undefined2 *)(iVar14 + 0x66) = 0x2000;
        *(undefined2 *)(iVar14 + 0x70) = 0x7fff;
        *(undefined2 *)(iVar14 + 0xf6) = 0x7fff;
        *(undefined2 *)(iVar14 + 0xf2) = 0x7fff;
        lup_vpit('\0');
        lup_vpit('\x01');
        lup_vpit('\x04');
        lup_vpit('\t');
        *puVar18 = 0;
      }
      return;
    }
    iVar14 = *(int *)(iVar13 + DAT_000ff16c);
    uVar17 = (uint)*(ushort *)(iVar14 + 0x31e);
    local_2c = 0x80 - uVar17;
  }
  iVar1 = DAT_000ff174;
  iVar16 = DAT_000ff170;
  uVar20 = (uint)*(ushort *)(iVar14 + 800);
  uVar9 = '\x06';
  if (0x7f < uVar20) {
    uVar20 = 0x7f;
    *(undefined2 *)(iVar14 + 800) = 0x7f;
  }
  iVar8 = DAT_000ff178;
  bVar21 = (int)((uint)*(ushort *)(iVar14 + 0x358) << 0x1f) < 0;
  pbVar12 = *(byte **)(iVar13 + iVar16);
  iVar16 = *(int *)(iVar13 + iVar1);
  if (bVar21) {
    in_r1 = 1;
  }
  else {
    unaff_r9 = (int)*(short *)(iVar14 + 0x318);
  }
  bVar4 = *pbVar12;
  if (bVar21) {
    unaff_r9 = 0x7f;
  }
  if (!bVar21) {
    in_r1 = 0x80 - unaff_r9;
  }
  uVar10 = *(ushort *)(iVar14 + 0x31c);
  sVar5 = *(short *)(iVar16 + unaff_r9 * 2);
  uVar11 = (undefined2)((uint)((int)*(short *)(iVar16 + in_r1 * 2) << 0xe) >> 0x10);
  *(undefined2 *)(iVar14 + (uint)pbVar12[1] * 2 + 0x26) = uVar11;
  *(undefined2 *)(iVar14 + (uint)bVar4 * 2 + 0x26) = uVar11;
  iVar1 = (int)sVar5 >> 2;
  sVar5 = *(short *)(iVar16 + local_2c * 2);
  sVar6 = *(short *)(iVar16 + uVar17 * 2);
  bVar3 = pbVar12[4];
  sVar7 = *(short *)(iVar16 + (uint)*(ushort *)(iVar14 + 0x31a) * 2);
  iVar15 = *(int *)(*(int *)(iVar13 + iVar8) + uVar20 * 4) * iVar1 >> 0xf;
  bVar2 = pbVar12[5];
  bVar4 = pbVar12[3];
  iVar13 = *(int *)(*(int *)(iVar13 + iVar8) + (uint)uVar10 * 4) * iVar1 >> 0xf;
  *(short *)(iVar14 + (uint)pbVar12[2] * 2 + 0x26) =
       (short)(iVar13 * *(short *)(iVar16 + (0x80 - (uint)*(ushort *)(iVar14 + 0x31a)) * 2) >> 0xf);
  *(short *)(iVar14 + (uint)bVar2 * 2 + 0x26) = (short)(iVar13 * sVar7 >> 0xf);
  *(short *)(iVar14 + (uint)bVar3 * 2 + 0x26) = (short)(iVar15 * sVar5 >> 0xf);
  *(short *)(iVar14 + (uint)bVar4 * 2 + 0x26) = (short)(iVar15 * sVar6 >> 0xf);
LAB_000feed8:
  LSendCoef(uVar9,pbVar12);
  return;
}

