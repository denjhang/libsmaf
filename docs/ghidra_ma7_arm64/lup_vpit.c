/* lup_vpit @ 0024c584 1368B */


/* YAMAHA::lup_vpit(unsigned char) */

void YAMAHA::lup_vpit(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ushort uVar12;
  undefined2 uVar13;
  uint uVar14;
  undefined2 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  puVar10 = PTR_lgsendoff_00567b48;
  puVar9 = PTR_lprm_00567530;
  if (param_1 == '\t') {
    if (*(ushort *)(PTR_lprm_00567530 + 0x318) == 0) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 1;
    }
    else if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x318)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x318) = 0x7f;
    }
LAB_0024c914:
    if (*(ushort *)(PTR_lprm_00567530 + 0x31a) == 0) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 1;
    }
    else if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x31a)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 0x7f;
    }
LAB_0024c708:
    if (0x7f < *(ushort *)(PTR_lprm_00567530 + 0x31c)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x31c) = 0x7f;
    }
  }
  else {
    if (param_1 < 10) {
      if (param_1 != '\x02') {
        if (2 < param_1) {
          if (param_1 != '\x03') {
            if (param_1 != '\x04') {
              return;
            }
            uVar12 = *(ushort *)(PTR_lprm_00567530 + 0x30e);
            if (uVar12 == 0) {
              uVar12 = 1;
              *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 1;
            }
            else if (0x7f < uVar12) {
              uVar12 = 0x7f;
              *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 0x7f;
            }
            puVar10 = PTR_ltavpi_fb_00567900;
            bVar3 = *PTR_ltavpi_fb_00567900;
            bVar2 = PTR_ltavpi_fb_00567900[1];
            uVar13 = lcal_fb(uVar12);
            puVar9 = PTR_lprm_00567530;
            *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar13;
            *(undefined2 *)(puVar9 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar13;
            LSendCoef('\x02',puVar10);
            return;
          }
          uVar12 = *(ushort *)(PTR_lprm_00567530 + 0x30a);
          goto LAB_0024c96c;
        }
        if (param_1 != '\0') {
          if (param_1 != '\x01') {
            return;
          }
          if (*(short *)(PTR_lprm_00567530 + 0x308) != 0) {
            *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0;
          }
          lcal_pwdly1(0);
          lcal_pwdly2(*(short *)(PTR_lprm_00567530 + 0x308));
          return;
        }
        if (*(ushort *)(PTR_lprm_00567530 + 0x306) < 0x34) {
          *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x34;
        }
        else if (0x4c < *(ushort *)(PTR_lprm_00567530 + 0x306)) {
          *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x4c;
        }
      }
      uVar12 = *(ushort *)(PTR_lprm_00567530 + 0x30a);
      if (uVar12 < 0xe) {
        uVar12 = 0xe;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0xe;
      }
      else if (0x72 < uVar12) {
        uVar12 = 0x72;
        *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x72;
      }
LAB_0024c96c:
      if (*(ushort *)(PTR_lprm_00567530 + 0x30c) < 0xe) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 0xe;
      }
      else if (0x72 < *(ushort *)(PTR_lprm_00567530 + 0x30c)) {
        *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 0x72;
      }
      lset_pitch('\0',uVar12);
      puVar9 = PTR_lprm_00567530;
      lset_pitch('\x01',*(ushort *)(PTR_lprm_00567530 + 0x30c));
      if (*(ushort *)(puVar9 + 0x306) == 0x40) {
        bVar3 = PTR_ltavpi_frq_00567c08[1];
        uVar15 = 0x40f;
        uVar13 = 0x40f;
        if (*(ushort *)(puVar9 + 0x30a) < 0x41) {
          uVar13 = 0x3d4;
        }
        if (*(ushort *)(puVar9 + 0x30c) < 0x41) {
          uVar15 = 0x3d4;
        }
        *(undefined2 *)(puVar9 + (ulong)(byte)*PTR_ltavpi_frq_00567c08 * 2 + 0x26) = uVar13;
        *(undefined2 *)(puVar9 + (ulong)bVar3 * 2 + 0x26) = uVar15;
      }
      else {
        bVar3 = *PTR_ltavpi_frq_00567c08;
        uVar13 = *(undefined2 *)
                  (PTR_ltb_pi_fq_00567a40 + (long)(int)(*(ushort *)(puVar9 + 0x306) - 0x28) * 2);
        *(undefined2 *)(puVar9 + (ulong)(byte)PTR_ltavpi_frq_00567c08[1] * 2 + 0x26) = uVar13;
        *(undefined2 *)(puVar9 + (long)(int)(uint)bVar3 * 2 + 0x26) = uVar13;
      }
      LSendCoef('\x02',PTR_ltavpi_frq_00567c08);
      return;
    }
    if (param_1 != '\f') {
      if (0xc < param_1) {
        if (param_1 != '\r') {
          if (param_1 != 0xff) {
            return;
          }
          *PTR_lgsendoff_00567b48 = 1;
          *(undefined2 *)(puVar9 + 0xb4) = 0x8000;
          *(undefined2 *)(puVar9 + 0xb0) = 0x8000;
          *(undefined2 *)(puVar9 + 0x8a) = 0x8000;
          *(undefined2 *)(puVar9 + 0x86) = 0x8000;
          *(undefined2 *)(puVar9 + 0x54) = 0x8000;
          *(undefined2 *)(puVar9 + 0x52) = 0x8000;
          *(undefined2 *)(puVar9 + 0xe2) = 0x7fff;
          *(undefined2 *)(puVar9 + 0xdc) = 0x7fff;
          *(undefined2 *)(puVar9 + 0xd6) = 0x7fff;
          *(undefined2 *)(puVar9 + 0xc0) = 0x7fff;
          *(undefined2 *)(puVar9 + 0xba) = 0x7fff;
          *(undefined2 *)(puVar9 + 0xac) = 0x7fff;
          *(undefined2 *)(puVar9 + 100) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x5e) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x6e) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x58) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x7c) = 0xc000;
          *(undefined2 *)(puVar9 + 0x74) = 0xc000;
          *(undefined2 *)(puVar9 + 0x6a) = 0xc000;
          *(undefined2 *)(puVar9 + 0x8e) = 0xc000;
          *(undefined2 *)(puVar9 + 0x90) = 0xc000;
          *(undefined2 *)(puVar9 + 0x5a) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x50) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x62) = 0x2000;
          *(undefined2 *)(puVar9 + 0x60) = 0x2000;
          *(undefined2 *)(puVar9 + 0x68) = 0x2000;
          *(undefined2 *)(puVar9 + 0x66) = 0x2000;
          *(undefined2 *)(puVar9 + 0x84) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x82) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x72) = 0x7fff;
          *(undefined2 *)(puVar9 + 0x70) = 0x7fff;
          *(undefined2 *)(puVar9 + 0xf6) = 0x7fff;
          *(undefined2 *)(puVar9 + 0xf2) = 0x7fff;
          lup_vpit('\0');
          lup_vpit('\x01');
          lup_vpit('\x04');
          lup_vpit('\t');
          *puVar10 = 0;
          return;
        }
        uVar19 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x31e);
        iVar18 = 0x80 - uVar19;
        goto LAB_0024c73c;
      }
      if (param_1 == '\n') goto LAB_0024c914;
      if (param_1 != '\v') {
        return;
      }
      goto LAB_0024c708;
    }
  }
  uVar12 = *(ushort *)(PTR_lprm_00567530 + 0x31e);
  uVar19 = (uint)uVar12;
  if (uVar12 == 0) {
    iVar18 = 0x7f;
    *(undefined2 *)(PTR_lprm_00567530 + 0x31e) = 1;
    uVar19 = 1;
  }
  else if (uVar12 < 0x80) {
    iVar18 = 0x80 - (uint)uVar12;
  }
  else {
    iVar18 = 1;
    *(undefined2 *)(PTR_lprm_00567530 + 0x31e) = 0x7f;
    uVar19 = 0x7f;
  }
LAB_0024c73c:
  uVar14 = (uint)*(ushort *)(PTR_lprm_00567530 + 800);
  if (0x7f < *(ushort *)(PTR_lprm_00567530 + 800)) {
    uVar14 = 0x7f;
    *(undefined2 *)(PTR_lprm_00567530 + 800) = 0x7f;
  }
  puVar11 = PTR_ltavpi_mix_00567e78;
  puVar10 = PTR_ltb_wet_00567b98;
  puVar9 = PTR_lprm_00567530;
  if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
    iVar17 = (int)*(short *)(PTR_lprm_00567530 + 0x318);
    iVar16 = 0x80 - *(short *)(PTR_lprm_00567530 + 0x318);
  }
  else {
    iVar16 = 1;
    iVar17 = 0x7f;
  }
  uVar12 = *(ushort *)(PTR_lprm_00567530 + 0x31a);
  sVar5 = *(short *)(PTR_ltb_wet_00567b98 + (long)iVar16 * 2);
  bVar3 = *PTR_ltavpi_mix_00567e78;
  uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x31c);
  sVar6 = *(short *)(PTR_ltb_wet_00567b98 + (long)iVar17 * 2);
  *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavpi_mix_00567e78[1] * 2 + 0x26) = sVar5 >> 2;
  *(short *)(puVar9 + (long)(int)(uint)bVar3 * 2 + 0x26) = sVar5 >> 2;
  sVar5 = *(short *)(puVar10 + (long)(int)(uint)uVar12 * 2);
  sVar7 = *(short *)(puVar10 + (long)(int)uVar19 * 2);
  sVar8 = *(short *)(puVar10 + (long)iVar18 * 2);
  bVar3 = puVar11[5];
  iVar18 = ((int)sVar6 >> 2) * *(int *)(PTR_ltb_vol_00567a08 + (long)(int)(uint)uVar4 * 4) >> 0xf;
  bVar2 = puVar11[4];
  bVar1 = puVar11[3];
  iVar16 = ((int)sVar6 >> 2) * *(int *)(PTR_ltb_vol_00567a08 + (long)(int)uVar14 * 4) >> 0xf;
  *(short *)(puVar9 + (ulong)(byte)puVar11[2] * 2 + 0x26) =
       (short)(*(short *)(puVar10 + (long)(int)(0x80 - (uint)uVar12) * 2) * iVar18 >> 0xf);
  *(short *)(puVar9 + (ulong)bVar3 * 2 + 0x26) = (short)(sVar5 * iVar18 >> 0xf);
  *(short *)(puVar9 + (ulong)bVar2 * 2 + 0x26) = (short)(sVar8 * iVar16 >> 0xf);
  *(short *)(puVar9 + (ulong)bVar1 * 2 + 0x26) = (short)(sVar7 * iVar16 >> 0xf);
  LSendCoef('\x06',puVar11);
  return;
}

