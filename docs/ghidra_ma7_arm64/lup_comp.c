/* lup_comp @ 00242240 7364B */


/* WARNING: Removing unreachable block (ram,0x0024305c) */
/* WARNING: Removing unreachable block (ram,0x00243038) */
/* WARNING: Removing unreachable block (ram,0x0024304c) */
/* WARNING: Removing unreachable block (ram,0x00243050) */
/* WARNING: Removing unreachable block (ram,0x00243380) */
/* WARNING: Removing unreachable block (ram,0x00243964) */
/* WARNING: Removing unreachable block (ram,0x00243970) */
/* WARNING: Removing unreachable block (ram,0x0024350c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::lup_comp(unsigned char, unsigned char) */

void YAMAHA::lup_comp(uchar param_1,uchar param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  uint uVar14;
  undefined *puVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  short sVar22;
  int iVar23;
  ushort uVar24;
  uint uVar25;
  undefined2 uVar26;
  uint uVar27;
  uint auStack_174 [9];
  undefined8 local_150;
  int local_148;
  uint local_144 [6];
  undefined8 local_12c;
  undefined4 local_120;
  uchar local_11c;
  byte bStack_11b;
  undefined1 uStack_11a;
  byte bStack_119;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  char cStack_115;
  undefined1 local_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  char cStack_111;
  undefined1 local_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  char cStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  char cStack_109;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  char cStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  char cStack_101;
  undefined1 local_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  char cStack_fd;
  uint local_fc;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 local_cc;
  int local_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  uint local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uchar local_50 [8];
  uchar local_48 [8];
  uchar local_40 [8];
  uchar local_38 [8];
  uchar local_30 [16];
  uchar local_20 [24];
  long local_8;
  
  uVar24 = DAT_00764d10;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_2 == '\x02') {
    builtin_memcpy(local_20,"EFGHABCDNOPQIJKLf",0x11);
    builtin_memcpy(local_38,"\x1d\"\x1b 1/",6);
    local_48[0] = '_';
    local_48[1] = 0x61;
    local_48[2] = 0x60;
    builtin_memcpy(local_30,"9:;=>?@.3",9);
    local_50[0] = '\x1a';
    local_50[1] = 0x16;
    local_40[0] = '[';
    local_40[1] = 0x5d;
    local_40[2] = 0x5a;
  }
  if (param_1 != '\a') {
    if (7 < param_1) {
      if (param_1 < 0xe) {
        if (param_1 < 0xc) {
          if (param_1 == '\n') {
            if (param_2 == '\x02') {
              uVar25 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x31a);
              if (0x13 < *(ushort *)(PTR_lprm_00567530 + 0x31a)) {
                uVar25 = 0x13;
                *(undefined2 *)(PTR_lprm_00567530 + 0x31a) = 0x13;
              }
              puVar15 = PTR_lprm_00567530;
              sVar22 = *(short *)(&DAT_00535f80 + (long)(int)uVar25 * 2);
              iVar17 = sVar22 + 0x8000;
              iVar23 = 0;
              if (iVar17 != 0) {
                iVar23 = ((0x8000 - sVar22) * 0x8000) / iVar17;
              }
              iVar11 = 0;
              if (iVar17 != 0) {
                iVar11 = ((int)sVar22 << 0xf) / iVar17;
              }
              uVar26 = (undefined2)iVar23;
              if (iVar23 == 0x8000) {
                uVar26 = 0x7fff;
              }
              *(undefined2 *)(PTR_lprm_00567530 + 0xda) = uVar26;
              uVar26 = (undefined2)iVar11;
              if (iVar11 == 0x8000) {
                uVar26 = 0x7fff;
              }
              *(undefined2 *)(puVar15 + 0xdc) = uVar26;
              *(undefined2 *)(puVar15 + 0xe0) = uVar26;
              LSendCoef('\x03',local_40);
            }
          }
          else if (param_1 < 0xb) {
            if ((param_1 == '\b') && (param_2 == '\x01')) {
              uVar24 = *(ushort *)(PTR_lprm_00567530 + 0x336);
              if (1 < uVar24) {
                *(undefined2 *)(PTR_lprm_00567530 + 0x336) = 1;
                uVar24 = 1;
              }
              if (DAT_00764d12 != uVar24) {
                MaDevDrv_ClearDspCoef(0x107,0x107);
                machdep_Sleep(10);
                if (*(short *)(PTR_lprm_00567530 + 0x336) == 0) {
                  MaDevDrv_SetDspRamAddress(1,1);
                  puVar15 = PTR_gabProgEq2Drc_00567f10;
                  MaDevDrv_SendDspProgram(1,PTR_gabProgEq2Drc_00567f10 + 0x18,6);
                  MaDevDrv_SetDspRamAddress(0,0);
                  MaDevDrv_SetDspRamAddress(3,3);
                  MaDevDrv_SendDspProgram(3,puVar15 + 0x1e,6);
                  MaDevDrv_SetDspRamAddress(0,0);
                  MaDevDrv_SetDspRamAddress(0x2f7,0x2f8);
                  MaDevDrv_SendDspProgram(0x2f7,puVar15 + 0x24,0xc);
                  MaDevDrv_SetDspRamAddress(0,0);
                  bVar16 = MaDevDrv_ReadIntermediateReg(0xdb);
                  MaDevDrv_WriteIntermediateReg(0xdb,bVar16 & 0x7f);
                }
                else {
                  MaDevDrv_SetDspRamAddress(1,1);
                  puVar15 = PTR_gabProgEq2Drc_00567f10;
                  MaDevDrv_SendDspProgram(1,PTR_gabProgEq2Drc_00567f10,6);
                  MaDevDrv_SetDspRamAddress(0,0);
                  MaDevDrv_SetDspRamAddress(3,3);
                  MaDevDrv_SendDspProgram(3,puVar15 + 6,6);
                  MaDevDrv_SetDspRamAddress(0,0);
                  MaDevDrv_SetDspRamAddress(0x2f7,0x2f8);
                  MaDevDrv_SendDspProgram(0x2f7,puVar15 + 0xc,0xc);
                  MaDevDrv_SetDspRamAddress(0,0);
                  bVar16 = MaDevDrv_ReadIntermediateReg(0xdb);
                  MaDevDrv_WriteIntermediateReg(0xdb,bVar16 | 0x80);
                }
                local_120._0_1_ = '\x7f';
                local_120._1_1_ = 0xff;
                MaDevDrv_SendDspCoef(0x107,(uchar *)&local_120,2);
                DAT_00764d12 = *(ushort *)(PTR_lprm_00567530 + 0x336);
              }
            }
          }
          else if (param_2 == '\x02') {
            uVar25 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x31c);
            if (0xd < *(ushort *)(PTR_lprm_00567530 + 0x31c)) {
              uVar25 = 0xd;
              *(undefined2 *)(PTR_lprm_00567530 + 0x31c) = 0xd;
            }
            puVar15 = PTR_lprm_00567530;
            iVar17 = *(int *)(&DAT_00535fb0 + (long)(int)uVar25 * 4);
            sVar22 = (short)(iVar17 >> 0xf);
            *(short *)(PTR_lprm_00567530 + 0x5a) = sVar22;
            *(short *)(puVar15 + 0x52) = (short)iVar17 + sVar22 * -0x8000;
            LSendCoef('\x02',local_50);
          }
        }
        else if (param_2 == '\x02') {
          uVar24 = *(ushort *)(PTR_lprm_00567530 + 0x31e);
          if (uVar24 < 0x43) {
            iVar17 = -0x3c;
            *(undefined2 *)(PTR_lprm_00567530 + 0x31e) = 0x43;
          }
          else if (uVar24 < 0x68) {
            iVar17 = uVar24 - 0x7f;
          }
          else {
            iVar17 = -0x18;
            *(undefined2 *)(PTR_lprm_00567530 + 0x31e) = 0x67;
          }
          uVar25 = (uint)*(ushort *)(PTR_lprm_00567530 + 800);
          if (*(ushort *)(PTR_lprm_00567530 + 800) < 10) {
            uVar25 = 10;
            *(undefined2 *)(PTR_lprm_00567530 + 800) = 10;
          }
          else if (0x7f < uVar25) {
            uVar25 = 0x7f;
            *(undefined2 *)(PTR_lprm_00567530 + 800) = 0x7f;
          }
          local_e0 = 0;
          uStack_dc = 0;
          local_a0 = 0;
          iStack_9c = 0;
          local_98 = 0;
          local_94 = 0;
          local_f0 = 0;
          iStack_ec = 0;
          local_e8 = 0;
          local_e4 = 0;
          local_90 = 0;
          iStack_8c = 0;
          lcal_exp(iVar17,uVar25,&local_f0,&local_a0,&local_120,3);
          puVar15 = PTR_lprm_00567530;
          *(short *)(PTR_lprm_00567530 + 0x98) = (short)iStack_ec;
          *(short *)(puVar15 + 0x9a) = (short)local_e8;
          *(short *)(puVar15 + 0x9c) = (short)local_e4;
          *(short *)(puVar15 + 0xa0) = (short)local_a0;
          *(short *)(puVar15 + 0xa2) = (short)iStack_9c;
          *(short *)(puVar15 + 0xa4) = (short)local_98;
          *(short *)(puVar15 + 0xa6) = (short)local_94;
          *(ushort *)(puVar15 + 0x82) = CONCAT11(local_120._1_1_,(uchar)local_120);
          *(ushort *)(puVar15 + 0x8c) = CONCAT11(bStack_11b,local_11c);
          LSendCoef('\t',local_30);
        }
      }
      else if (param_1 == 0xfd) {
        if (param_2 == '\x01') {
          DAT_00764d10 = 0;
          DAT_00764d12 = 0;
        }
      }
      else if (param_1 == 0xff) {
        *PTR_lgsendoff_00567b48 = 1;
        puVar15 = PTR_lprm_00567530;
        if (param_2 == '\x02') {
          *(undefined2 *)(PTR_lprm_00567530 + 0x96) = 0x4000;
          *(undefined2 *)(puVar15 + 0x54) = 1;
          *(undefined2 *)(puVar15 + 0x5e) = 1;
          *(undefined2 *)(puVar15 + 0x68) = 1;
          *(undefined2 *)(puVar15 + 0x92) = 0x4000;
          *(undefined2 *)(puVar15 + 0x78) = 0x4000;
          *(undefined2 *)(puVar15 + 0x76) = 0x4000;
          *(undefined2 *)(puVar15 + 0x70) = 0x4000;
          *(undefined2 *)(puVar15 + 0x62) = 0x4000;
          *(undefined2 *)(puVar15 + 0x58) = 0x4000;
          *(undefined2 *)(puVar15 + 0x4e) = 0x4000;
          *(undefined2 *)(puVar15 + 0x4c) = 0x4000;
          *(undefined2 *)(puVar15 + 0x80) = 0xc000;
          *(undefined2 *)(puVar15 + 0x6e) = 0xc000;
          *(undefined2 *)(puVar15 + 0x6c) = 0xc000;
          *(undefined2 *)(puVar15 + 0x56) = 0xc000;
          *(undefined2 *)(puVar15 + 0xde) = 0x7fff;
          *(undefined2 *)(puVar15 + 0xd6) = 0x7fff;
          *(undefined2 *)(puVar15 + 0xd4) = 0x7fff;
          *(undefined2 *)(puVar15 + 0xcc) = 0x7fff;
          *(undefined2 *)(puVar15 + 0x50) = 0x7fff;
          *(undefined2 *)(puVar15 + 0xc0) = 0x80;
          *(undefined2 *)(puVar15 + 0xca) = 0x800;
          *(undefined2 *)(puVar15 + 0x9e) = 0x7fff;
          lup_comp('\0','\x02');
          lup_comp('\x01','\x02');
          lup_comp('\x02','\x02');
          lup_comp('\n','\x02');
          lup_comp('\v','\x02');
          lup_comp('\f','\x02');
        }
        else {
          DAT_00764d10 = 0;
          DAT_00764d12 = 0;
          lup_comp('\0',param_2);
          lup_comp('\x01',param_2);
          lup_comp('\x02',param_2);
          lup_comp('\x05',param_2);
          lup_comp('\b',param_2);
        }
        *PTR_lgsendoff_00567b48 = 0;
      }
      goto LAB_00242670;
    }
    if (4 < param_1) {
      if (param_1 == '\x05') {
        if ((param_2 == '\x01') && (*(short *)(PTR_lprm_00567530 + 0x330) != 0)) {
          *(undefined2 *)(PTR_lprm_00567530 + 0x330) = 0;
        }
        goto LAB_00242670;
      }
      if ((param_1 != '\x06') || (param_2 != '\x01')) goto LAB_00242670;
      uVar8 = *(ushort *)(PTR_lprm_00567530 + 0x332);
      if (uVar8 < 2) {
        if (DAT_00764d10 == uVar8) goto LAB_00242670;
        if (uVar8 == 1) goto LAB_002427e4;
        uStack_118 = 0;
        uStack_117 = 0;
        uStack_116 = 0;
        cStack_115 = '\0';
        local_114 = 0;
        uStack_113 = 0;
        uStack_112 = 0;
        cStack_111 = '\0';
        local_120._0_1_ = '\0';
        local_120._1_1_ = 0;
        local_120._2_1_ = 0;
        local_120._3_1_ = 0;
        local_11c = '\0';
        bStack_11b = 0;
        uStack_11a = 0;
        bStack_119 = 0;
        uStack_108 = 0;
        uStack_107 = 0;
        uStack_104 = 0;
        uStack_103 = 0;
        uStack_102 = 0;
        cStack_101 = '\0';
        local_110 = 0;
        uStack_10f = 0;
        uStack_10e = 0;
        cStack_10d = '\0';
        uStack_10c = 0;
        uStack_10b = 0;
        uStack_10a = 0;
        cStack_109 = '\0';
        cStack_105 = -0x80;
        local_100 = 0;
        uStack_ff = 0;
        uStack_fe = 0;
        cStack_fd = '\0';
        local_fc = local_fc & 0xffff0000;
        uStack_106 = 0;
        MaDevDrv_SendDspCoef(0xee,(uchar *)&local_120,0x26);
        puVar15 = PTR_gabProgSkipDrc_00567758;
        uVar25 = DAT_00535ff0;
        puVar1 = PTR_gabProgSkipDrc_00567758 + 6;
        puVar2 = PTR_gabProgSkipDrc_00567758 + 0xc;
        puVar3 = PTR_gabProgSkipDrc_00567758 + 0x12;
        MaDevDrv_SetDspRamAddress(DAT_00535ff0,DAT_00535ff0);
        MaDevDrv_SendDspProgram(uVar25,puVar15,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar25 = DAT_00535ff4;
        MaDevDrv_SetDspRamAddress(DAT_00535ff4,DAT_00535ff4);
        MaDevDrv_SendDspProgram(uVar25,puVar1,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar25 = DAT_00535ff8;
        MaDevDrv_SetDspRamAddress(DAT_00535ff8,DAT_00535ff8);
        MaDevDrv_SendDspProgram(uVar25,puVar2,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar25 = DAT_00535ffc;
        MaDevDrv_SetDspRamAddress(DAT_00535ffc,DAT_00535ffc);
        MaDevDrv_SendDspProgram(uVar25,puVar3,6);
        MaDevDrv_SetDspRamAddress(0,0);
        local_120._1_1_ = 0;
        local_120._0_1_ = '\x10';
        MaDevDrv_SendDspCoef(0x11e,(uchar *)&local_120,2);
        lset_adj_gain(0x8000);
      }
      else {
        *(undefined2 *)(PTR_lprm_00567530 + 0x332) = 1;
        if (uVar24 == 1) goto LAB_00242670;
LAB_002427e4:
        puVar15 = PTR_gabProgDrc_00567588;
        uVar25 = DAT_00535ff0;
        puVar1 = PTR_gabProgDrc_00567588 + 6;
        puVar2 = PTR_gabProgDrc_00567588 + 0xc;
        puVar3 = PTR_gabProgDrc_00567588 + 0x12;
        MaDevDrv_SetDspRamAddress(DAT_00535ff0,DAT_00535ff0);
        MaDevDrv_SendDspProgram(uVar25,puVar15,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar25 = DAT_00535ff4;
        MaDevDrv_SetDspRamAddress(DAT_00535ff4,DAT_00535ff4);
        MaDevDrv_SendDspProgram(uVar25,puVar1,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar25 = DAT_00535ff8;
        MaDevDrv_SetDspRamAddress(DAT_00535ff8,DAT_00535ff8);
        MaDevDrv_SendDspProgram(uVar25,puVar2,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar25 = DAT_00535ffc;
        MaDevDrv_SetDspRamAddress(DAT_00535ffc,DAT_00535ffc);
        MaDevDrv_SendDspProgram(uVar25,puVar3,6);
        MaDevDrv_SetDspRamAddress(0,0);
        lup_comp('\0','\x01');
        lup_comp('\x01','\x01');
        lup_comp('\x03','\x01');
        lup_comp('\b','\x01');
        local_120._3_1_ = 0;
        local_120._0_1_ = '\x7f';
        local_120._1_1_ = 0xff;
        local_120._2_1_ = 8;
        MaDevDrv_SendDspCoef(0xee,(uchar *)&local_120,2);
        MaDevDrv_SendDspCoef(0x100,(uchar *)((long)&local_120 + 2),2);
      }
      DAT_00764d10 = *(ushort *)(PTR_lprm_00567530 + 0x332);
      goto LAB_00242670;
    }
    if (param_1 < 2) {
      if (param_1 == '\0') {
        if (param_2 == '\x02') {
          uVar25 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x306);
          if (0x13 < uVar25) {
            uVar25 = 0x13;
            *(undefined2 *)(PTR_lprm_00567530 + 0x306) = 0x13;
          }
        }
        else {
          uVar25 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x326);
          if (0x13 < *(ushort *)(PTR_lprm_00567530 + 0x326)) {
            uVar25 = 0x13;
            *(undefined2 *)(PTR_lprm_00567530 + 0x326) = 0x13;
          }
        }
        puVar15 = PTR_lprm_00567530;
        sVar22 = *(short *)(&DAT_00535f80 + (long)(int)uVar25 * 2);
        iVar17 = sVar22 + 0x8000;
        iVar23 = 0;
        if (iVar17 != 0) {
          iVar23 = ((0x8000 - sVar22) * 0x8000) / iVar17;
        }
        if (iVar23 == 0x8000) {
          iVar23 = 0x7fff;
        }
        iVar11 = 0;
        if (iVar17 != 0) {
          iVar11 = ((int)sVar22 << 0xf) / iVar17;
        }
        if (iVar11 == 0x8000) {
          iVar11 = 0x7fff;
        }
        if (param_2 == '\x02') {
          *(short *)(PTR_lprm_00567530 + 0xe6) = (short)iVar23;
          *(short *)(puVar15 + 0xe4) = (short)iVar11;
          *(short *)(puVar15 + 0xe8) = (short)iVar11;
          LSendCoef('\x03',local_48);
        }
        else {
          local_120._0_1_ = (uchar)((uint)iVar11 >> 8);
          local_120._1_1_ = (byte)iVar11;
          local_120._2_1_ = (uchar)((uint)iVar23 >> 8);
          local_120._3_1_ = (undefined1)iVar23;
          local_11c = (uchar)local_120;
          bStack_11b = local_120._1_1_;
          MaDevDrv_SendDspCoef(0x117,(uchar *)&local_120,6);
        }
      }
      else if (param_1 == '\x01') {
        if (param_2 == '\x02') {
          uVar25 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x308);
          if (0xd < *(ushort *)(PTR_lprm_00567530 + 0x308)) {
            uVar25 = 0xd;
            *(undefined2 *)(PTR_lprm_00567530 + 0x308) = 0xd;
          }
          puVar15 = PTR_lprm_00567530;
          iVar17 = *(int *)(&DAT_00535fb0 + (long)(int)uVar25 * 4);
          sVar22 = (short)(iVar17 >> 0xf);
          *(short *)(PTR_lprm_00567530 + 0x88) = 0x3fff - sVar22;
          sVar13 = (short)iVar17 + sVar22 * -0x8000;
          *(short *)(puVar15 + 0x60) = sVar22;
          *(short *)(puVar15 + 0x6a) = sVar22;
          *(short *)(puVar15 + 0x5c) = sVar13;
          *(short *)(puVar15 + 0x66) = sVar13;
          *(short *)(puVar15 + 0x84) = 0x7fff - sVar13;
          LSendCoef('\x06',local_38);
        }
        else {
          uVar25 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x328);
          if (0xd < *(ushort *)(PTR_lprm_00567530 + 0x328)) {
            uVar25 = 0xd;
            *(undefined2 *)(PTR_lprm_00567530 + 0x328) = 0xd;
          }
          iVar23 = *(int *)(&DAT_00535fb0 + (long)(int)uVar25 * 4);
          iVar17 = iVar23 >> 0xf;
          iVar11 = iVar23 + iVar17 * -0x8000;
          local_120._0_1_ = (uchar)((uint)iVar11 >> 8);
          local_120._1_1_ = (byte)iVar11;
          local_120._2_1_ = (uchar)local_120;
          local_120._3_1_ = local_120._1_1_;
          MaDevDrv_SendDspCoef(0xcd,(uchar *)&local_120,4);
          local_120._0_1_ = (uchar)(iVar23 >> 0x17);
          local_120._1_1_ = (byte)iVar17;
          MaDevDrv_SendDspCoef(0xd5,(uchar *)&local_120,2);
          bStack_119 = ~(byte)iVar17;
          local_120._2_1_ = 0;
          local_120._3_1_ = 1;
          local_11c = 0xc0;
          bStack_11b = 0;
          uStack_11a = (undefined1)((ulong)(0x3fff - (long)iVar17) >> 8);
          MaDevDrv_SendDspCoef(0xdf,(uchar *)&local_120,8);
        }
      }
      goto LAB_00242670;
    }
  }
  if (param_2 == '\x02') {
    uVar24 = *(ushort *)(PTR_lprm_00567530 + 0x30a);
    if (uVar24 < 0x4f) {
      uVar18 = 0x2a9;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x4f;
      iVar17 = -48000;
      uVar25 = 0xed40;
    }
    else if (uVar24 < 0x7a) {
      iVar23 = uVar24 - 0x7f;
      iVar17 = iVar23 * 1000;
      uVar25 = iVar23 * 100 & 0xffff;
      uVar18 = (iVar23 * -100 + -0x1e) / 7 & 0xffff;
    }
    else {
      uVar18 = 0x51;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30a) = 0x79;
      iVar17 = -6000;
      uVar25 = 0xfda8;
    }
    uVar20 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x30c);
    if (*(ushort *)(PTR_lprm_00567530 + 0x30c) < 10) {
      uVar20 = 10;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 10;
    }
    else if (0x7f < uVar20) {
      uVar20 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30c) = 0x7f;
    }
    uVar27 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x30e);
    if (10 < *(ushort *)(PTR_lprm_00567530 + 0x30e)) {
      uVar27 = 10;
      *(undefined2 *)(PTR_lprm_00567530 + 0x30e) = 10;
    }
    sVar22 = 0;
    if (uVar20 != 0) {
      sVar22 = (short)(iVar17 / (int)uVar20);
    }
    iVar23 = (int)((int)(short)((short)uVar25 - sVar22) * uVar27) / 10;
    uVar27 = -iVar23;
    iVar17 = (int)uVar27 >> 6;
    sVar22 = (short)iVar23;
    uVar27 = uVar27 & 0x3f;
    iVar23 = (int)(short)iVar17;
  }
  else {
    uVar24 = *(ushort *)(PTR_lprm_00567530 + 0x32a);
    uVar25 = (uint)uVar24;
    if (uVar24 < 0x4f) {
      uVar25 = 0x4f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x32a) = 0x4f;
    }
    else if (0x79 < uVar24) {
      uVar25 = 0x79;
      *(undefined2 *)(PTR_lprm_00567530 + 0x32a) = 0x79;
    }
    uVar24 = *(ushort *)(PTR_lprm_00567530 + 0x32c);
    uVar20 = (uint)uVar24;
    if (uVar24 < 10) {
      uVar20 = 10;
      *(undefined2 *)(PTR_lprm_00567530 + 0x32c) = 10;
    }
    else if (0x7f < uVar24) {
      uVar20 = 0x7f;
      *(undefined2 *)(PTR_lprm_00567530 + 0x32c) = 0x7f;
    }
    uVar18 = (uint)*(ushort *)(PTR_lprm_00567530 + 0x32e);
    if (10 < *(ushort *)(PTR_lprm_00567530 + 0x32e)) {
      uVar18 = 10;
      *(undefined2 *)(PTR_lprm_00567530 + 0x32e) = 10;
    }
    if (1 < *(ushort *)(PTR_lprm_00567530 + 0x334)) {
      *(undefined2 *)(PTR_lprm_00567530 + 0x334) = 1;
    }
    if (*(short *)(PTR_lprm_00567530 + 0x332) == 1) {
      iVar23 = uVar25 - 0x7f;
      sVar22 = 0;
      if (uVar20 != 0) {
        sVar22 = (short)((iVar23 * 1000) / (int)uVar20);
      }
      uVar25 = iVar23 * 100 & 0xffff;
      iVar17 = (int)((int)(short)((short)(iVar23 * 100) - sVar22) * uVar18) / 10;
      uVar27 = -iVar17;
      sVar22 = (short)iVar17;
      iVar17 = (int)uVar27 >> 6;
      uVar27 = uVar27 & 0x3f;
      uVar18 = (iVar23 * -100 + -0x1e) / 7 & 0xffff;
      iVar23 = (int)(short)iVar17;
    }
    else {
      uVar27 = 0;
      uVar20 = 10;
      iVar23 = 0;
      iVar17 = 0;
      uVar18 = 0x51;
      sVar22 = 0;
      uVar25 = 0xfda8;
    }
  }
  puVar15 = PTR_lprm_00567530;
  iVar11 = -(int)(short)uVar25 >> 6;
  iVar6 = -(int)(short)(uVar25 - uVar18) >> 6;
  uVar5 = -(uVar25 - uVar18 & 0xffff) & 0x3f;
  uVar7 = (int)((-uVar25 & 0x3f) * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
               (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - (-uVar25 & 0x3f))) >> 5;
  uVar10 = uVar7 >> 1;
  uVar5 = (uint)((int)(uVar5 * (int)*(short *)(&DAT_00535910 + (long)(iVar6 + 1) * 2) +
                      (int)*(short *)(&DAT_00535910 + (long)iVar6 * 2) * (0x40 - uVar5)) >> 5) >> 1;
  iVar11 = (int)(short)(uVar25 + uVar18);
  auStack_174[0] = 0x8000;
  auStack_174[6] = 0x8000;
  auStack_174[7] = 0x8000;
  if (iVar11 < 0) {
    iVar11 = -iVar11 >> 6;
    uVar21 = -(uVar25 + uVar18 & 0xffff) & 0x3f;
    if (iVar11 == 0) {
      auStack_174[0] = (uint)((int)(uVar21 * -0x918 + 0x200000) >> 5) >> 1;
    }
    else {
      auStack_174[0] =
           (uint)((int)(uVar21 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
                       (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - uVar21)) >> 5) >>
           1;
    }
  }
  uVar21 = uVar25 + uVar18 * 2;
  auStack_174[1] = 0x8000;
  iVar11 = (int)(short)uVar21;
  if (iVar11 < 0) {
    iVar11 = -iVar11 >> 6;
    uVar21 = -(uVar21 & 0xffff) & 0x3f;
    if (iVar11 == 0) {
      auStack_174[1] = (uint)((int)(uVar21 * -0x918 + 0x200000) >> 5) >> 1;
    }
    else {
      auStack_174[1] =
           (uint)((int)(uVar21 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
                       (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - uVar21)) >> 5) >>
           1;
    }
  }
  uVar21 = uVar25 + uVar18 * 3;
  auStack_174[2] = 0x8000;
  iVar11 = (int)(short)uVar21;
  if (iVar11 < 0) {
    iVar11 = -iVar11 >> 6;
    uVar21 = -(uVar21 & 0xffff) & 0x3f;
    if (iVar11 == 0) {
      auStack_174[2] = (uint)((int)(uVar21 * -0x918 + 0x200000) >> 5) >> 1;
    }
    else {
      auStack_174[2] =
           (uint)((int)(uVar21 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
                       (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - uVar21)) >> 5) >>
           1;
    }
  }
  uVar21 = uVar25 + uVar18 * 4;
  auStack_174[3] = 0x8000;
  iVar11 = (int)(short)uVar21;
  if (iVar11 < 0) {
    iVar11 = -iVar11 >> 6;
    uVar21 = -(uVar21 & 0xffff) & 0x3f;
    if (iVar11 == 0) {
      auStack_174[3] = (uint)((int)(uVar21 * -0x918 + 0x200000) >> 5) >> 1;
    }
    else {
      auStack_174[3] =
           (uint)((int)(uVar21 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
                       (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - uVar21)) >> 5) >>
           1;
    }
  }
  uVar21 = uVar25 + uVar18 * 5;
  auStack_174[4] = 0x8000;
  iVar11 = (int)(short)uVar21;
  if (iVar11 < 0) {
    iVar11 = -iVar11 >> 6;
    uVar21 = -(uVar21 & 0xffff) & 0x3f;
    if (iVar11 == 0) {
      auStack_174[4] = (uint)((int)(uVar21 * -0x918 + 0x200000) >> 5) >> 1;
    }
    else {
      auStack_174[4] =
           (uint)((int)(uVar21 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
                       (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - uVar21)) >> 5) >>
           1;
    }
  }
  auStack_174[5] = 0x8000;
  uVar25 = uVar25 + uVar18 * 6;
  iVar11 = (int)(short)uVar25;
  if (iVar11 < 0) {
    iVar11 = -iVar11 >> 6;
    uVar25 = -(uVar25 & 0xffff) & 0x3f;
    if (iVar11 == 0) {
      auStack_174[5] = (uint)((int)(uVar25 * -0x918 + 0x200000) >> 5) >> 1;
    }
    else {
      auStack_174[5] =
           (uint)((int)(uVar25 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
                       (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - uVar25)) >> 5) >>
           1;
    }
  }
  if (uVar20 == 10) {
    local_12c = 0x800000008000;
    local_144[0] = auStack_174[0];
    local_144[1] = auStack_174[1];
    local_144[2] = auStack_174[2];
    local_144[3] = auStack_174[3];
    local_144[4] = auStack_174[4];
    local_144[5] = auStack_174[5];
  }
  else {
    uVar18 = uVar7 >> 8 & 0xffff;
    sVar13 = *(short *)(&UNK_00535a50 + (long)(int)uVar18 * 2);
    uVar25 = uVar10 + uVar18 * -0x80 & 0x7fff;
    sVar9 = *(short *)(&UNK_00535a50 + (long)(int)(uVar18 - 1) * 2);
    lVar19 = 0;
    do {
      uVar21 = 0x8000;
      uVar7 = *(uint *)((long)auStack_174 + lVar19);
      uVar18 = uVar7 + 0x7f;
      if (-1 < (int)uVar7) {
        uVar18 = uVar7;
      }
      uVar14 = uVar18 >> 7 & 0xffff;
      uVar18 = uVar7 + uVar14 * -0x80 & 0x7fff;
      iVar11 = 0;
      if (uVar20 != 0) {
        iVar11 = (((int)((long)((ulong)((uVar18 * 2 *
                                         (int)*(short *)(&UNK_00535a50 + (long)(int)uVar14 * 2) +
                                        (int)*(short *)(&UNK_00535a50 + (long)(int)(uVar14 - 1) * 2)
                                        * (uVar18 * -2 + 0x100)) * 5) << 0x21) >> 0x28) +
                  ((int)((uVar20 - 10) *
                        (uVar25 * 2 * (int)sVar13 + (int)sVar9 * (uVar25 * -2 + 0x100))) >> 8)) / 5)
                 / (int)uVar20;
      }
      iVar6 = (int)(short)iVar11;
      if ((iVar6 < 0) && (uVar21 = 0, -0x25e5 < iVar6)) {
        iVar6 = -iVar6 >> 6;
        uVar18 = -iVar11 & 0x3f;
        if (iVar6 == 0) {
          uVar21 = (uint)((int)(uVar18 * -0x918 + 0x200000) >> 5) >> 1;
        }
        else {
          uVar21 = (uint)((int)(uVar18 * (int)*(short *)(&DAT_00535910 + (long)(iVar6 + 1) * 2) +
                               (int)*(short *)(&DAT_00535910 + (long)iVar6 * 2) * (0x40 - uVar18))
                         >> 5) >> 1;
        }
      }
      lVar4 = lVar19 + 4;
      *(uint *)((long)local_144 + lVar19) = uVar21;
      lVar19 = lVar4;
    } while (lVar4 != 0x20);
  }
  local_120._0_1_ = '\0';
  local_120._1_1_ = 0;
  local_120._2_1_ = 0;
  local_120._3_1_ = 0;
  local_11c = '\0';
  bStack_11b = 0;
  uStack_11a = 0;
  bStack_119 = 0;
  uStack_118 = 0;
  uStack_117 = 0;
  uStack_116 = 0;
  cStack_115 = '\0';
  local_114 = 0;
  uStack_113 = 0;
  uStack_112 = 0;
  cStack_111 = '\0';
  local_110 = 0;
  uStack_10f = 0;
  uStack_10e = 0;
  cStack_10d = '\0';
  uStack_10c = 0;
  uStack_10b = 0;
  uStack_10a = 0;
  cStack_109 = '\0';
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_106 = 0;
  cStack_105 = '\0';
  uStack_104 = 0;
  uStack_103 = 0;
  uStack_102 = 0;
  cStack_101 = '\0';
  local_100 = 0;
  uStack_ff = 0;
  uStack_fe = 0;
  cStack_fd = '\0';
  if (uVar5 != uVar10) {
    iVar11 = 0;
    if (uVar10 != 0) {
      iVar11 = (int)(uVar10 << 0xf) / (int)uVar10;
    }
    iVar6 = 0;
    if (uVar5 != 0) {
      iVar6 = (int)(uVar5 << 0xf) / (int)uVar5;
    }
    iVar12 = 0;
    if (uVar10 - uVar5 != 0) {
      iVar12 = ((iVar11 - iVar6) * 0x8000) / (int)(uVar10 - uVar5);
    }
    local_11c = (uchar)iVar12;
    bStack_11b = (byte)((uint)iVar12 >> 8);
    uStack_11a = (undefined1)((uint)iVar12 >> 0x10);
    bStack_119 = (byte)((uint)iVar12 >> 0x18);
  }
  if (auStack_174[0] != uVar10) {
    iVar11 = 0;
    if (auStack_174[0] != 0) {
      iVar11 = (int)(local_144[0] << 0xf) / (int)auStack_174[0];
    }
    iVar6 = 0;
    if (uVar10 != 0) {
      iVar6 = (int)(uVar10 << 0xf) / (int)uVar10;
    }
    iVar12 = 0;
    if (auStack_174[0] - uVar10 != 0) {
      iVar12 = ((iVar11 - iVar6) * 0x8000) / (int)(auStack_174[0] - uVar10);
    }
    uStack_118 = (undefined1)iVar12;
    uStack_117 = (undefined1)((uint)iVar12 >> 8);
    uStack_116 = (undefined1)((uint)iVar12 >> 0x10);
    cStack_115 = (char)((uint)iVar12 >> 0x18);
  }
  if (auStack_174[1] != auStack_174[0]) {
    iVar11 = 0;
    if (auStack_174[1] != 0) {
      iVar11 = (int)(local_144[1] << 0xf) / (int)auStack_174[1];
    }
    iVar6 = 0;
    if (auStack_174[0] != 0) {
      iVar6 = (int)(local_144[0] << 0xf) / (int)auStack_174[0];
    }
    iVar12 = 0;
    if (auStack_174[1] - auStack_174[0] != 0) {
      iVar12 = ((iVar11 - iVar6) * 0x8000) / (int)(auStack_174[1] - auStack_174[0]);
    }
    local_114 = (undefined1)iVar12;
    uStack_113 = (undefined1)((uint)iVar12 >> 8);
    uStack_112 = (undefined1)((uint)iVar12 >> 0x10);
    cStack_111 = (char)((uint)iVar12 >> 0x18);
  }
  if (auStack_174[2] != auStack_174[1]) {
    iVar11 = 0;
    if (auStack_174[2] != 0) {
      iVar11 = (int)(local_144[2] << 0xf) / (int)auStack_174[2];
    }
    iVar6 = 0;
    if (auStack_174[1] != 0) {
      iVar6 = (int)(local_144[1] << 0xf) / (int)auStack_174[1];
    }
    iVar12 = 0;
    if (auStack_174[2] - auStack_174[1] != 0) {
      iVar12 = ((iVar11 - iVar6) * 0x8000) / (int)(auStack_174[2] - auStack_174[1]);
    }
    local_110 = (undefined1)iVar12;
    uStack_10f = (undefined1)((uint)iVar12 >> 8);
    uStack_10e = (undefined1)((uint)iVar12 >> 0x10);
    cStack_10d = (char)((uint)iVar12 >> 0x18);
  }
  if (auStack_174[3] != auStack_174[2]) {
    iVar11 = 0;
    if (auStack_174[3] != 0) {
      iVar11 = (int)(local_144[3] << 0xf) / (int)auStack_174[3];
    }
    iVar6 = 0;
    if (auStack_174[2] != 0) {
      iVar6 = (int)(local_144[2] << 0xf) / (int)auStack_174[2];
    }
    iVar12 = 0;
    if (auStack_174[3] - auStack_174[2] != 0) {
      iVar12 = ((iVar11 - iVar6) * 0x8000) / (int)(auStack_174[3] - auStack_174[2]);
    }
    uStack_10c = (undefined1)iVar12;
    uStack_10b = (undefined1)((uint)iVar12 >> 8);
    uStack_10a = (undefined1)((uint)iVar12 >> 0x10);
    cStack_109 = (char)((uint)iVar12 >> 0x18);
  }
  if (auStack_174[4] != auStack_174[3]) {
    iVar11 = 0;
    if (auStack_174[4] != 0) {
      iVar11 = (int)(local_144[4] << 0xf) / (int)auStack_174[4];
    }
    iVar6 = 0;
    if (auStack_174[3] != 0) {
      iVar6 = (int)(local_144[3] << 0xf) / (int)auStack_174[3];
    }
    iVar12 = 0;
    if (auStack_174[4] - auStack_174[3] != 0) {
      iVar12 = ((iVar11 - iVar6) * 0x8000) / (int)(auStack_174[4] - auStack_174[3]);
    }
    uStack_108 = (undefined1)iVar12;
    uStack_107 = (undefined1)((uint)iVar12 >> 8);
    uStack_106 = (undefined1)((uint)iVar12 >> 0x10);
    cStack_105 = (char)((uint)iVar12 >> 0x18);
  }
  if (auStack_174[5] != auStack_174[4]) {
    iVar11 = 0;
    if (auStack_174[5] != 0) {
      iVar11 = (int)(local_144[5] << 0xf) / (int)auStack_174[5];
    }
    iVar6 = 0;
    if (auStack_174[4] != 0) {
      iVar6 = (int)(local_144[4] << 0xf) / (int)auStack_174[4];
    }
    iVar12 = 0;
    if (auStack_174[5] - auStack_174[4] != 0) {
      iVar12 = ((iVar11 - iVar6) * 0x8000) / (int)(auStack_174[5] - auStack_174[4]);
    }
    uStack_104 = (undefined1)iVar12;
    uStack_103 = (undefined1)((uint)iVar12 >> 8);
    uStack_102 = (undefined1)((uint)iVar12 >> 0x10);
    cStack_101 = (char)((uint)iVar12 >> 0x18);
  }
  if (auStack_174[5] != 0x8000) {
    iVar11 = 0;
    if (auStack_174[5] != 0) {
      iVar11 = (int)(local_144[5] << 0xf) / (int)auStack_174[5];
    }
    iVar6 = 0;
    if (0x8000 - auStack_174[5] != 0) {
      iVar6 = ((((int)local_12c << 0xf) / 0x8000 - iVar11) * 0x8000) /
              (int)(0x8000 - auStack_174[5]);
    }
    local_100 = (undefined1)iVar6;
    uStack_ff = (undefined1)((uint)iVar6 >> 8);
    uStack_fe = (undefined1)((uint)iVar6 >> 0x10);
    cStack_fd = (char)((uint)iVar6 >> 0x18);
  }
  local_fc = 0;
  iVar6 = CONCAT13(bStack_119,CONCAT12(uStack_11a,CONCAT11(bStack_11b,local_11c)));
  iVar11 = iVar6;
  if ((char)bStack_119 < '\0') {
    if (iVar6 != -0x80000000) {
      iVar11 = -iVar6;
      goto LAB_00243070;
    }
LAB_0024356c:
    iStack_9c = 9999;
  }
  else {
LAB_00243070:
    if (0x3fffff < iVar11) goto LAB_0024356c;
    iStack_9c = iVar6 + 0xff;
    if (-1 < (char)bStack_119) {
      iStack_9c = iVar6;
    }
    iStack_9c = iStack_9c >> 8;
  }
  iVar11 = CONCAT13(cStack_115,CONCAT12(uStack_116,CONCAT11(uStack_117,uStack_118)));
  iStack_ec = -uVar5;
  if (0x7fff < uVar5) {
    iStack_ec = -0x7fff;
  }
  iVar6 = iVar11;
  if (cStack_115 < '\0') {
    if (iVar11 != -0x80000000) {
      iVar6 = -iVar11;
      goto LAB_002430bc;
    }
LAB_00243560:
    local_98 = 9999;
  }
  else {
LAB_002430bc:
    if (0x3fffff < iVar6) goto LAB_00243560;
    iVar6 = iVar11 + 0xff;
    if (-1 < cStack_115) {
      iVar6 = iVar11;
    }
    local_98 = (iVar6 >> 8) - iStack_9c;
  }
  iVar11 = CONCAT13(cStack_111,CONCAT12(uStack_112,CONCAT11(uStack_113,local_114)));
  local_e8 = -uVar10;
  if (0x7fff < uVar10) {
    local_e8 = -0x7fff;
  }
  iVar6 = iVar11;
  if (cStack_111 < '\0') {
    if (iVar11 != -0x80000000) {
      iVar6 = -iVar11;
      goto LAB_0024310c;
    }
LAB_00243554:
    local_94 = 9999;
  }
  else {
LAB_0024310c:
    if (0x3fffff < iVar6) goto LAB_00243554;
    iVar6 = iVar11 + 0xff;
    if (-1 < cStack_111) {
      iVar6 = iVar11;
    }
    local_94 = (iVar6 >> 8) - (local_98 + iStack_9c);
  }
  iVar11 = CONCAT13(cStack_10d,CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110)));
  local_148 = -auStack_174[0];
  if (0x7fff < auStack_174[0]) {
    local_148 = -0x7fff;
  }
  iVar6 = local_94 + local_98 + iStack_9c;
  iVar12 = iVar11;
  if (cStack_10d < '\0') {
    if (iVar11 != -0x80000000) {
      iVar12 = -iVar11;
      goto LAB_0024315c;
    }
LAB_00243548:
    local_90 = 9999;
  }
  else {
LAB_0024315c:
    if (0x3fffff < iVar12) goto LAB_00243548;
    iVar12 = iVar11 + 0xff;
    if (-1 < cStack_10d) {
      iVar12 = iVar11;
    }
    local_90 = (iVar12 >> 8) - iVar6;
  }
  iVar11 = CONCAT13(cStack_109,CONCAT12(uStack_10a,CONCAT11(uStack_10b,uStack_10c)));
  local_144[0] = -auStack_174[1];
  if (0x7fff < auStack_174[1]) {
    local_144[0] = 0xffff8001;
  }
  iVar6 = local_90 + iVar6;
  iVar12 = iVar11;
  if (cStack_109 < '\0') {
    if (iVar11 != -0x80000000) {
      iVar12 = -iVar11;
      goto LAB_002431ac;
    }
LAB_0024353c:
    iStack_8c = 9999;
  }
  else {
LAB_002431ac:
    if (0x3fffff < iVar12) goto LAB_0024353c;
    iVar12 = iVar11 + 0xff;
    if (-1 < cStack_109) {
      iVar12 = iVar11;
    }
    iStack_8c = ((iVar12 >> 8) - iVar6) * 0x10;
  }
  iVar11 = iStack_8c + 0xf;
  if (-1 < iStack_8c) {
    iVar11 = iStack_8c;
  }
  local_144[1] = -auStack_174[2];
  iVar12 = CONCAT13(cStack_105,CONCAT12(uStack_106,CONCAT11(uStack_107,uStack_108)));
  if (0x7fff < auStack_174[2]) {
    local_144[1] = 0xffff8001;
  }
  iVar6 = iVar6 + (iVar11 >> 4);
  iVar11 = iVar12;
  if (cStack_105 < '\0') {
    if (iVar12 != -0x80000000) {
      iVar11 = -iVar12;
      goto LAB_0024320c;
    }
LAB_00243530:
    local_88 = 9999;
  }
  else {
LAB_0024320c:
    if (0x3fffff < iVar11) goto LAB_00243530;
    iVar11 = iVar12 + 0xff;
    if (-1 < cStack_105) {
      iVar11 = iVar12;
    }
    local_88 = ((iVar11 >> 8) - iVar6) * 0x10;
  }
  iVar11 = local_88 + 0xf;
  if (-1 < local_88) {
    iVar11 = local_88;
  }
  local_144[2] = -auStack_174[3];
  iVar12 = CONCAT13(cStack_101,CONCAT12(uStack_102,CONCAT11(uStack_103,uStack_104)));
  if (0x7fff < auStack_174[3]) {
    local_144[2] = 0xffff8001;
  }
  iVar6 = iVar6 + (iVar11 >> 4);
  iVar11 = iVar12;
  if (cStack_101 < '\0') {
    if (iVar12 != -0x80000000) {
      iVar11 = -iVar12;
      goto LAB_0024326c;
    }
LAB_00243524:
    local_84 = 9999;
  }
  else {
LAB_0024326c:
    if (0x3fffff < iVar11) goto LAB_00243524;
    iVar11 = iVar12 + 0xff;
    if (-1 < cStack_101) {
      iVar11 = iVar12;
    }
    local_84 = ((iVar11 >> 8) - iVar6) * 0x10;
  }
  iVar11 = local_84 + 0xf;
  if (-1 < local_84) {
    iVar11 = local_84;
  }
  local_144[3] = -auStack_174[4];
  iVar12 = CONCAT13(cStack_fd,CONCAT12(uStack_fe,CONCAT11(uStack_ff,local_100)));
  if (0x7fff < auStack_174[4]) {
    local_144[3] = 0xffff8001;
  }
  iVar6 = iVar6 + (iVar11 >> 4);
  iVar11 = iVar12;
  if (cStack_fd < '\0') {
    if (iVar12 != -0x80000000) {
      iVar11 = -iVar12;
      goto LAB_002432cc;
    }
LAB_00243518:
    local_80 = 9999;
  }
  else {
LAB_002432cc:
    if (0x3fffff < iVar11) goto LAB_00243518;
    iVar11 = iVar12 + 0xff;
    if (-1 < cStack_fd) {
      iVar11 = iVar12;
    }
    local_80 = ((iVar11 >> 8) - iVar6) * 0x10;
  }
  iVar11 = local_80 + 0xf;
  if (-1 < local_80) {
    iVar11 = local_80;
  }
  local_144[4] = -auStack_174[5];
  if (0x7fff < auStack_174[5]) {
    auStack_174[5] = 0x7fff;
    local_144[4] = 0xffff8001;
  }
  local_7c = (iVar6 + (iVar11 >> 4)) * -0x10;
  local_150 = CONCAT44(local_e8,iStack_ec);
  local_cc = 0xffff8001;
  auStack_174[0] = local_90;
  auStack_174[1] = iStack_8c;
  auStack_174[2] = local_88;
  auStack_174[3] = local_84;
  auStack_174[4] = local_80;
  if (sVar22 < 0) {
    if (iVar17 == 0) {
      iVar17 = uVar27 * -0x918 + 0x200000;
    }
    else {
      iVar17 = uVar27 * (int)*(short *)(&DAT_00535910 + (long)(iVar23 + 1) * 2) +
               (int)*(short *)(&DAT_00535910 + (long)iVar23 * 2) * (0x40 - uVar27);
    }
    uVar18 = iVar17 >> 5;
    uVar25 = 0x1000;
    uVar26 = 0x7fff;
    if (0x2000 < uVar18) {
      uVar25 = uVar18 >> 1;
      if (uVar25 == 0x8000) {
        uVar25 = 0x7fff;
        uVar26 = 0;
        if (uVar18 != 0) {
          uVar26 = (undefined2)(0x10000000 / uVar18);
        }
      }
      else {
        uVar26 = 0;
        if (uVar18 != 0) {
          uVar26 = (undefined2)(0x10000000 / uVar18);
        }
      }
    }
  }
  else {
    uVar26 = 0x1000;
    uVar25 = 0x7fff;
  }
  local_e4 = local_148;
  local_e0 = local_144[0];
  uStack_dc = local_144[1];
  local_d8 = local_144[2];
  local_d4 = local_144[3];
  local_d0 = local_144[4];
  if (param_2 == '\x02') {
    *(short *)(PTR_lprm_00567530 + 0xb0) = (short)iStack_ec;
    *(short *)(puVar15 + 0xb2) = (short)local_e8;
    *(short *)(puVar15 + 0xb4) = (short)local_148;
    *(short *)(puVar15 + 0xb6) = (short)local_144[0];
    *(short *)(puVar15 + 0xa8) = (short)local_144[1];
    *(short *)(puVar15 + 0xaa) = (short)local_144[2];
    *(short *)(puVar15 + 0xac) = (short)local_144[3];
    *(short *)(puVar15 + 0xae) = (short)local_144[4];
    *(short *)(puVar15 + 0xc2) = (short)iStack_9c;
    *(short *)(puVar15 + 0xc4) = (short)local_98;
    *(short *)(puVar15 + 0xc6) = (short)local_94;
    *(short *)(puVar15 + 200) = (short)local_90;
    *(short *)(puVar15 + 0xb8) = (short)iStack_8c;
    *(short *)(puVar15 + 0xba) = (short)local_88;
    *(short *)(puVar15 + 0xbc) = (short)local_84;
    *(short *)(puVar15 + 0xbe) = (short)local_80;
    *(undefined2 *)(puVar15 + 0xf2) = uVar26;
    LSendCoef('\x11',local_20);
  }
  else {
    uStack_112 = (undefined1)(local_144[0] >> 8);
    local_114 = (undefined1)((uint)local_148 >> 8);
    cStack_111 = (char)local_144[0];
    local_110 = (undefined1)((uint)iStack_8c >> 8);
    uStack_10f = (undefined1)iStack_8c;
    uStack_10e = (undefined1)((uint)local_88 >> 8);
    cStack_10d = (char)local_88;
    uStack_10b = (undefined1)local_84;
    local_120._1_1_ = (byte)local_144[1];
    local_120._2_1_ = (uchar)(local_144[2] >> 8);
    uStack_10c = (undefined1)((uint)local_84 >> 8);
    local_120._3_1_ = (undefined1)local_144[2];
    local_11c = (uchar)(local_144[3] >> 8);
    bStack_11b = (byte)local_144[3];
    uStack_11a = (undefined1)(local_144[4] >> 8);
    bStack_119 = (byte)local_144[4];
    uStack_117 = (undefined1)iStack_ec;
    cStack_115 = (char)local_e8;
    uStack_113 = (undefined1)local_148;
    local_120._0_1_ = (uchar)(local_144[1] >> 8);
    uStack_118 = (undefined1)((uint)iStack_ec >> 8);
    uStack_116 = (undefined1)((uint)local_e8 >> 8);
    cStack_109 = (char)local_80;
    uStack_10a = (undefined1)((uint)local_80 >> 8);
    uStack_106 = (undefined1)((uint)iStack_9c >> 8);
    uStack_104 = (undefined1)((uint)local_98 >> 8);
    uStack_103 = (undefined1)local_98;
    uStack_102 = (undefined1)((uint)local_94 >> 8);
    cStack_105 = (char)iStack_9c;
    cStack_101 = (char)local_94;
    uStack_108 = 0;
    uStack_107 = 0x80;
    local_100 = (undefined1)(local_90 >> 8);
    uStack_ff = (undefined1)local_90;
    MaDevDrv_SendDspCoef(0xef,(uchar *)&local_120,0x22);
    local_120._0_1_ = (uchar)((ushort)uVar26 >> 8);
    local_120._1_1_ = (byte)uVar26;
    MaDevDrv_SendDspCoef(0x11e,(uchar *)&local_120,2);
    uVar18 = 0x8000;
    if ((*(short *)(PTR_lprm_00567530 + 0x334) != 0) &&
       (uVar18 = uVar25, *(short *)(PTR_lprm_00567530 + 0x332) == 0)) {
      uVar18 = 0x8000;
    }
    lset_adj_gain(uVar18);
  }
LAB_00242670:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

