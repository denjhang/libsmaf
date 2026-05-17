/* lup_comp @ 000f715c 4858B */


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* YAMAHA::lup_comp(unsigned char, unsigned char) */

void YAMAHA::lup_comp(uchar param_1,uchar param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  byte bVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uchar *puVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  int unaff_r10;
  uint uVar23;
  int unaff_r11;
  uint uVar24;
  int iVar25;
  bool bVar26;
  undefined8 uVar27;
  uint local_1ac;
  uint local_1a0;
  uint local_19c;
  uchar local_198 [8];
  uchar local_190 [8];
  uchar local_188 [8];
  uchar local_180 [8];
  uint local_178 [12];
  uint local_148;
  uint local_144;
  uint local_140 [2];
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  int local_f0;
  uint local_ec [6];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_a0;
  uint local_9c [6];
  undefined4 uStack_84;
  undefined4 uStack_80;
  uchar local_50 [16];
  uchar local_40 [20];
  int local_2c;
  
  iVar11 = DAT_000f84b4;
  iVar25 = DAT_000f84a8;
  iVar8 = DAT_000f7da0;
  iVar21 = DAT_000f7d9c;
  iVar18 = DAT_000f7d88;
  iVar13 = DAT_000f7d80;
  iVar16 = DAT_000f7d5c + 0xf7172;
  piVar10 = *(int **)(iVar16 + DAT_000f7d60);
  local_2c = *piVar10;
  if (param_2 == '\x02') {
    builtin_memcpy(local_180,"\x1d\"\x1b 1/",6);
    local_190[0] = '_';
    local_190[1] = 0x61;
    local_190[2] = 0x60;
    builtin_memcpy(local_40,"EFGHABCDNOPQIJKLf",0x11);
    builtin_memcpy(local_50,"9:;=>?@.3",9);
    local_198[0] = '\x1a';
    local_198[1] = 0x16;
    local_188[0] = '[';
    local_188[1] = 0x5d;
    local_188[2] = 0x5a;
  }
  if (param_1 != '\a') {
    if (7 < param_1) {
      if (param_1 < 0xe) {
        if (param_1 < 0xc) {
          if (param_1 == '\n') {
            if (param_2 == '\x02') {
              iVar13 = *(int *)(iVar16 + DAT_000f7d64);
              uVar15 = (uint)*(ushort *)(iVar13 + 0x31a);
              if (0x13 < uVar15) {
                uVar15 = 0x13;
                *(undefined2 *)(iVar13 + 0x31a) = 0x13;
              }
              iVar21 = (int)*(short *)(iVar21 + uVar15 * 2 + 0xf7e70);
              iVar18 = __divsi3((0x8000 - iVar21) * 0x8000,iVar21 + 0x8000);
              iVar21 = __divsi3(iVar21 << 0xf,iVar21 + 0x8000);
              if (iVar18 == 0x8000) {
                uVar7 = 0x7fff;
              }
              else {
                uVar7 = (undefined2)iVar18;
              }
              *(undefined2 *)(iVar13 + 0xda) = uVar7;
              if (iVar21 == 0x8000) {
                uVar7 = 0x7fff;
              }
              else {
                uVar7 = (undefined2)iVar21;
              }
              *(undefined2 *)(iVar13 + 0xdc) = uVar7;
              *(undefined2 *)(iVar13 + 0xe0) = uVar7;
              LSendCoef('\x03',local_188);
            }
          }
          else if (param_1 < 0xb) {
            if ((param_1 == '\b') && (param_2 == '\x01')) {
              iVar13 = *(int *)(iVar16 + DAT_000f7d64);
              uVar1 = *(ushort *)(DAT_000f7d68 + 0xf71ba);
              uVar14 = *(ushort *)(iVar13 + 0x336);
              if (1 < uVar14) {
                *(undefined2 *)(iVar13 + 0x336) = 1;
                uVar14 = 1;
              }
              if (uVar1 != uVar14) {
                MaDevDrv_ClearDspCoef(0x107,0x107);
                machdep_Sleep(10);
                iVar18 = DAT_000f7d6c;
                if (*(short *)(iVar13 + 0x336) == 0) {
                  MaDevDrv_SetDspRamAddress(1,1);
                  iVar18 = *(int *)(iVar16 + DAT_000f84b8);
                  MaDevDrv_SendDspProgram(1,(uchar *)(iVar18 + 0x18),6);
                  MaDevDrv_SetDspRamAddress(0,0);
                  MaDevDrv_SetDspRamAddress(3,3);
                  MaDevDrv_SendDspProgram(3,(uchar *)(iVar18 + 0x1e),6);
                  MaDevDrv_SetDspRamAddress(0,0);
                  MaDevDrv_SetDspRamAddress(0x2f7,0x2f8);
                  MaDevDrv_SendDspProgram(0x2f7,(uchar *)(iVar18 + 0x24),0xc);
                  MaDevDrv_SetDspRamAddress(0,0);
                  bVar5 = MaDevDrv_ReadIntermediateReg(0xdb);
                  MaDevDrv_WriteIntermediateReg(0xdb,bVar5 & 0x7f);
                }
                else {
                  MaDevDrv_SetDspRamAddress(1,1);
                  puVar19 = *(uchar **)(iVar16 + iVar18);
                  MaDevDrv_SendDspProgram(1,puVar19,6);
                  MaDevDrv_SetDspRamAddress(0,0);
                  MaDevDrv_SetDspRamAddress(3,3);
                  MaDevDrv_SendDspProgram(3,puVar19 + 6,6);
                  MaDevDrv_SetDspRamAddress(0,0);
                  MaDevDrv_SetDspRamAddress(0x2f7,0x2f8);
                  MaDevDrv_SendDspProgram(0x2f7,puVar19 + 0xc,0xc);
                  MaDevDrv_SetDspRamAddress(0,0);
                  bVar5 = MaDevDrv_ReadIntermediateReg(0xdb);
                  MaDevDrv_WriteIntermediateReg(0xdb,bVar5 | 0x80);
                }
                local_120 = CONCAT22(local_120._2_2_,0xff7f);
                MaDevDrv_SendDspCoef(0x107,(uchar *)&local_120,2);
                *(undefined2 *)(DAT_000f7d70 + 0xf7282) = *(undefined2 *)(iVar13 + 0x336);
              }
            }
          }
          else if (param_2 == '\x02') {
            iVar18 = *(int *)(iVar16 + DAT_000f7d64);
            uVar15 = (uint)*(ushort *)(iVar18 + 0x31c);
            if (0xd < uVar15) {
              uVar15 = 0xd;
              *(undefined2 *)(iVar18 + 0x31c) = 0xd;
            }
            iVar13 = *(int *)(iVar13 + uVar15 * 4 + 0xf7b5a);
            iVar21 = iVar13 >> 0xf;
            *(short *)(iVar18 + 0x5a) = (short)iVar21;
            *(short *)(iVar18 + 0x52) = (short)iVar13 - (short)(iVar21 << 0xf);
            LSendCoef('\x02',local_198);
          }
        }
        else if (param_2 == '\x02') {
          iVar13 = *(int *)(iVar16 + DAT_000f7d64);
          uVar15 = (uint)*(ushort *)(iVar13 + 0x31e);
          if (uVar15 < 0x43) {
            iVar18 = -0x3c;
            *(undefined2 *)(iVar13 + 0x31e) = 0x43;
          }
          else if (uVar15 < 0x68) {
            iVar18 = uVar15 - 0x7f;
          }
          else {
            iVar18 = -0x18;
            *(undefined2 *)(iVar13 + 0x31e) = 0x67;
          }
          uVar15 = (uint)*(ushort *)(iVar13 + 800);
          if (uVar15 < 10) {
            uVar15 = 10;
            *(undefined2 *)(iVar13 + 800) = 10;
          }
          else if (0x7f < uVar15) {
            uVar15 = 0x7f;
            *(undefined2 *)(iVar13 + 800) = 0x7f;
          }
          local_f0 = 0;
          local_ec[0] = 0;
          local_ec[1] = 0;
          local_ec[2] = 0;
          local_ec[3] = 0;
          local_ec[4] = 0;
          local_a0 = 0;
          local_9c[0] = 0;
          local_9c[1] = 0;
          local_9c[2] = 0;
          local_9c[3] = 0;
          local_9c[4] = 0;
          lcal_exp(iVar18,uVar15,&local_f0,&local_a0,&local_120,3);
          *(short *)(iVar13 + 0x98) = (short)local_ec[0];
          *(short *)(iVar13 + 0x9c) = (short)local_ec[2];
          *(short *)(iVar13 + 0xa0) = (short)local_a0;
          *(short *)(iVar13 + 0xa4) = (short)local_9c[1];
          *(short *)(iVar13 + 0x9a) = (short)local_ec[1];
          *(short *)(iVar13 + 0xa2) = (short)local_9c[0];
          *(short *)(iVar13 + 0xa6) = (short)local_9c[2];
          *(short *)(iVar13 + 0x82) = (short)local_120;
          *(short *)(iVar13 + 0x8c) = (short)local_11c;
          LSendCoef('\t',local_50);
        }
      }
      else if (param_1 == 0xfd) {
        if (param_2 == '\x01') {
          *(undefined2 *)(DAT_000f7da0 + 0xf7932) = 0;
          *(undefined2 *)(iVar8 + 0xf7934) = 0;
        }
      }
      else if (param_1 == 0xff) {
        puVar20 = *(undefined1 **)(iVar16 + DAT_000f7d78);
        *puVar20 = 1;
        iVar13 = DAT_000f7d7c;
        if (param_2 == '\x02') {
          iVar13 = *(int *)(iVar16 + DAT_000f84b0);
          *(undefined2 *)(iVar13 + 0x54) = 1;
          *(undefined2 *)(iVar13 + 0x5e) = 1;
          *(undefined2 *)(iVar13 + 0x68) = 1;
          *(undefined2 *)(iVar13 + 0xc0) = 0x80;
          *(undefined2 *)(iVar13 + 0xca) = 0x800;
          *(undefined2 *)(iVar13 + 0x96) = 0x4000;
          *(undefined2 *)(iVar13 + 0x92) = 0x4000;
          *(undefined2 *)(iVar13 + 0x78) = 0x4000;
          *(undefined2 *)(iVar13 + 0x76) = 0x4000;
          *(undefined2 *)(iVar13 + 0x70) = 0x4000;
          *(undefined2 *)(iVar13 + 0x62) = 0x4000;
          *(undefined2 *)(iVar13 + 0x58) = 0x4000;
          *(undefined2 *)(iVar13 + 0x4e) = 0x4000;
          *(undefined2 *)(iVar13 + 0x4c) = 0x4000;
          *(undefined2 *)(iVar13 + 0x80) = 0xc000;
          *(undefined2 *)(iVar13 + 0x6e) = 0xc000;
          *(undefined2 *)(iVar13 + 0x6c) = 0xc000;
          *(undefined2 *)(iVar13 + 0x56) = 0xc000;
          *(undefined2 *)(iVar13 + 0xde) = 0x7fff;
          *(undefined2 *)(iVar13 + 0xd6) = 0x7fff;
          *(undefined2 *)(iVar13 + 0xd4) = 0x7fff;
          *(undefined2 *)(iVar13 + 0xcc) = 0x7fff;
          *(undefined2 *)(iVar13 + 0x50) = 0x7fff;
          *(undefined2 *)(iVar13 + 0x9e) = 0x7fff;
          lup_comp('\0','\x02');
          lup_comp('\x01','\x02');
          lup_comp('\x02','\x02');
          lup_comp('\n','\x02');
          lup_comp('\v','\x02');
          lup_comp('\f','\x02');
        }
        else {
          *(undefined2 *)(DAT_000f7d7c + 0xf7480) = 0;
          *(undefined2 *)(iVar13 + 0xf7482) = 0;
          lup_comp('\0',param_2);
          lup_comp('\x01',param_2);
          lup_comp('\x02',param_2);
          lup_comp('\x05',param_2);
          lup_comp('\b',param_2);
        }
        *puVar20 = 0;
      }
      goto LAB_000f74ae;
    }
    if (4 < param_1) {
      if (param_1 == '\x05') {
        if ((param_2 == '\x01') && (*(short *)(*(int *)(iVar16 + DAT_000f7d64) + 0x330) != 0)) {
          *(undefined2 *)(*(int *)(iVar16 + DAT_000f7d64) + 0x330) = 0;
        }
        goto LAB_000f74ae;
      }
      if ((param_1 != '\x06') || (param_2 != '\x01')) goto LAB_000f74ae;
      iVar13 = *(int *)(iVar16 + DAT_000f7d64);
      uVar1 = *(ushort *)(iVar13 + 0x332);
      if (uVar1 < 2) {
        if (*(ushort *)(DAT_000f84a4 + 0xf7f36) == uVar1) goto LAB_000f74ae;
        if (uVar1 == 1) goto LAB_000f75c2;
        local_120 = 0;
        local_11c = 0;
        local_118 = 0;
        local_114 = 0;
        local_110 = 0;
        local_10c = 0;
        local_104 = 0;
        local_100 = 0;
        local_fc = local_fc & 0xffff0000;
        local_108 = 0x80000000;
        MaDevDrv_SendDspCoef(0xee,(uchar *)&local_120,0x26);
        uVar15 = *(uint *)(iVar25 + 0xf8612);
        puVar19 = *(uchar **)(iVar16 + DAT_000f84ac);
        MaDevDrv_SetDspRamAddress(uVar15,uVar15);
        MaDevDrv_SendDspProgram(uVar15,puVar19,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar15 = *(uint *)(iVar25 + 0xf8616);
        MaDevDrv_SetDspRamAddress(uVar15,uVar15);
        MaDevDrv_SendDspProgram(uVar15,puVar19 + 6,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar15 = *(uint *)(iVar25 + 0xf861a);
        MaDevDrv_SetDspRamAddress(uVar15,uVar15);
        MaDevDrv_SendDspProgram(uVar15,puVar19 + 0xc,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar15 = *(uint *)(iVar25 + 0xf861e);
        MaDevDrv_SetDspRamAddress(uVar15,uVar15);
        MaDevDrv_SendDspProgram(uVar15,puVar19 + 0x12,6);
        MaDevDrv_SetDspRamAddress(0,0);
        local_120._1_3_ = (uint3)(local_120 >> 8) & 0xffff00;
        local_120 = CONCAT31(local_120._1_3_,0x10);
        MaDevDrv_SendDspCoef(0x11e,(uchar *)&local_120,2);
        lset_adj_gain(0x8000);
      }
      else {
        *(undefined2 *)(iVar13 + 0x332) = 1;
        if (*(short *)(iVar18 + 0xf75bc) == 1) goto LAB_000f74ae;
LAB_000f75c2:
        iVar18 = DAT_000f7d8c;
        uVar15 = *(uint *)(DAT_000f7d8c + 0xf7c88);
        puVar19 = *(uchar **)(iVar16 + DAT_000f7d90);
        MaDevDrv_SetDspRamAddress(uVar15,uVar15);
        MaDevDrv_SendDspProgram(uVar15,puVar19,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar15 = *(uint *)(iVar18 + 0xf7c8c);
        MaDevDrv_SetDspRamAddress(uVar15,uVar15);
        MaDevDrv_SendDspProgram(uVar15,puVar19 + 6,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar15 = *(uint *)(iVar18 + 0xf7c90);
        MaDevDrv_SetDspRamAddress(uVar15,uVar15);
        MaDevDrv_SendDspProgram(uVar15,puVar19 + 0xc,6);
        MaDevDrv_SetDspRamAddress(0,0);
        uVar15 = *(uint *)(iVar18 + 0xf7c94);
        MaDevDrv_SetDspRamAddress(uVar15,uVar15);
        MaDevDrv_SendDspProgram(uVar15,puVar19 + 0x12,6);
        MaDevDrv_SetDspRamAddress(0,0);
        lup_comp('\0','\x01');
        lup_comp('\x01','\x01');
        lup_comp('\x03','\x01');
        lup_comp('\b','\x01');
        local_120 = 0x8ff7f;
        MaDevDrv_SendDspCoef(0xee,(uchar *)&local_120,2);
        MaDevDrv_SendDspCoef(0x100,(uchar *)((int)&local_120 + 2),2);
      }
      *(undefined2 *)(DAT_000f7d94 + 0xf76b2) = *(undefined2 *)(iVar13 + 0x332);
      goto LAB_000f74ae;
    }
    if (param_1 < 2) {
      if (param_1 == '\0') {
        iVar13 = *(int *)(iVar16 + DAT_000f7d64);
        if (param_2 == '\x02') {
          uVar15 = (uint)*(ushort *)(iVar13 + 0x306);
          if (0x13 < uVar15) {
            uVar15 = 0x13;
            *(undefined2 *)(iVar13 + 0x306) = 0x13;
          }
        }
        else {
          uVar15 = (uint)*(ushort *)(iVar13 + 0x326);
          if (0x13 < uVar15) {
            uVar15 = 0x13;
            *(undefined2 *)(iVar13 + 0x326) = 0x13;
          }
        }
        iVar21 = (int)*(short *)(DAT_000f7d84 + uVar15 * 2 + 0xf7b80);
        iVar18 = __divsi3((0x8000 - iVar21) * 0x8000,iVar21 + 0x8000);
        iVar21 = __divsi3(iVar21 << 0xf,iVar21 + 0x8000);
        if (iVar18 == 0x8000) {
          iVar18 = 0x7fff;
        }
        iVar8 = 0x7fff;
        if (iVar21 != 0x8000) {
          iVar8 = iVar21;
        }
        if (param_2 == '\x02') {
          *(short *)(iVar13 + 0xe6) = (short)iVar18;
          *(short *)(iVar13 + 0xe4) = (short)iVar8;
          *(short *)(iVar13 + 0xe8) = (short)iVar8;
          LSendCoef('\x03',local_190);
        }
        else {
          uVar2 = (undefined1)((uint)iVar8 >> 8);
          local_120._0_2_ = CONCAT11((char)iVar8,uVar2);
          local_120 = CONCAT22(CONCAT11((char)iVar18,(char)((uint)iVar18 >> 8)),(ushort)local_120);
          local_11c._0_2_ = CONCAT11((char)iVar8,uVar2);
          MaDevDrv_SendDspCoef(0x117,(uchar *)&local_120,6);
        }
      }
      else if (param_1 == '\x01') {
        iVar13 = *(int *)(iVar16 + DAT_000f7d64);
        if (param_2 == '\x02') {
          uVar15 = (uint)*(ushort *)(iVar13 + 0x308);
          if (0xd < uVar15) {
            uVar15 = 0xd;
            *(undefined2 *)(iVar13 + 0x308) = 0xd;
          }
          iVar18 = *(int *)(iVar11 + uVar15 * 4 + 0xf87aa);
          sVar6 = (short)(iVar18 >> 0xf);
          sVar4 = (short)iVar18 + sVar6 * -0x8000;
          *(short *)(iVar13 + 0x88) = 0x3fff - sVar6;
          *(short *)(iVar13 + 0x84) = 0x7fff - sVar4;
          *(short *)(iVar13 + 0x5c) = sVar4;
          *(short *)(iVar13 + 0x66) = sVar4;
          *(short *)(iVar13 + 0x60) = sVar6;
          *(short *)(iVar13 + 0x6a) = sVar6;
          LSendCoef('\x06',local_180);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar13 + 0x328);
          uVar15 = uVar17;
          if (0xd < uVar17) {
            uVar15 = 0xd;
          }
          iVar18 = DAT_000f7d74 + uVar15 * 4;
          if (0xd < uVar17) {
            *(short *)(iVar13 + 0x328) = (short)uVar15;
          }
          iVar18 = *(int *)(iVar18 + 0xf793e);
          iVar13 = iVar18 >> 0xf;
          iVar21 = iVar18 + iVar13 * -0x8000;
          uVar2 = (undefined1)((uint)iVar21 >> 8);
          uVar3 = (undefined1)iVar21;
          local_120._0_2_ = CONCAT11(uVar3,uVar2);
          local_120 = CONCAT13(uVar3,CONCAT12(uVar2,(ushort)local_120));
          MaDevDrv_SendDspCoef(0xcd,(uchar *)&local_120,4);
          local_120 = CONCAT31(CONCAT21(local_120._2_2_,(byte)iVar13),(char)(iVar18 >> 0x17));
          MaDevDrv_SendDspCoef(0xd5,(uchar *)&local_120,2);
          local_120._0_3_ = (uint3)(ushort)local_120;
          local_120 = CONCAT13(1,(uint3)local_120);
          local_11c = CONCAT31((int3)(((uint)CONCAT11(~(byte)iVar13,
                                                      (char)((uint)(0x3fff - iVar13) >> 8)) << 0x10)
                                     >> 8),0xc0);
          MaDevDrv_SendDspCoef(0xdf,(uchar *)&local_120,8);
        }
      }
      goto LAB_000f74ae;
    }
  }
  iVar13 = *(int *)(iVar16 + DAT_000f7d64);
  if (param_2 == '\x02') {
    uVar15 = (uint)*(ushort *)(iVar13 + 0x30a);
    if (uVar15 < 0x4f) {
      iVar18 = -48000;
      uVar17 = 0x2a9;
      uVar15 = 0xed40;
      *(undefined2 *)(iVar13 + 0x30a) = 0x4f;
    }
    else if (uVar15 < 0x7a) {
      iVar21 = uVar15 - 0x7f;
      uVar15 = iVar21 * 100 & 0xffff;
      iVar18 = iVar21 * 1000;
      uVar17 = (iVar21 * -100 + -0x1e) / 7 & 0xffff;
    }
    else {
      iVar18 = -6000;
      uVar17 = 0x51;
      uVar15 = 0xfda8;
      *(undefined2 *)(iVar13 + 0x30a) = 0x79;
      unaff_r11 = iVar13;
    }
    uVar22 = (uint)*(ushort *)(iVar13 + 0x30c);
    if (uVar22 < 10) {
      *(undefined2 *)(iVar13 + 0x30c) = 10;
      uVar24 = 10;
    }
    else {
      uVar24 = uVar22;
      if (0x7f < uVar22) {
        uVar24 = 0x7f;
        unaff_r11 = iVar13;
      }
      if (0x7f < uVar22) {
        *(short *)(unaff_r11 + 0x30c) = (short)uVar24;
      }
    }
    uVar22 = (uint)*(ushort *)(iVar13 + 0x30e);
    if (10 < uVar22) {
      uVar22 = 10;
      *(undefined2 *)(iVar13 + 0x30e) = 10;
    }
    sVar6 = __divsi3(iVar18,uVar24);
    local_1a0 = (int)(uVar22 * (int)(short)((short)uVar15 - sVar6)) / 10;
    local_1ac = -local_1a0;
    local_1a0 = local_1a0 & 0xffff;
    local_19c = (local_1ac & 0x3fffff) >> 6;
    local_1ac = local_1ac & 0x3f;
  }
  else {
    uVar15 = (uint)*(ushort *)(iVar13 + 0x32a);
    if (uVar15 < 0x4f) {
      uVar17 = 0x4f;
      *(undefined2 *)(iVar13 + 0x32a) = 0x4f;
    }
    else {
      uVar17 = uVar15;
      if (0x79 < uVar15) {
        uVar17 = 0x79;
        unaff_r10 = iVar13;
      }
      if (0x79 < uVar15) {
        *(short *)(unaff_r10 + 0x32a) = (short)uVar17;
      }
    }
    uVar15 = (uint)*(ushort *)(iVar13 + 0x32c);
    if (uVar15 < 10) {
      uVar24 = 10;
      *(undefined2 *)(iVar13 + 0x32c) = 10;
    }
    else {
      uVar24 = uVar15;
      if (0x7f < uVar15) {
        uVar24 = 0x7f;
        unaff_r10 = iVar13;
      }
      if (0x7f < uVar15) {
        *(short *)(unaff_r10 + 0x32c) = (short)uVar24;
      }
    }
    uVar22 = (uint)*(ushort *)(iVar13 + 0x32e);
    if (10 < uVar22) {
      uVar22 = 10;
      *(undefined2 *)(iVar13 + 0x32e) = 10;
    }
    if (1 < *(ushort *)(iVar13 + 0x334)) {
      *(undefined2 *)(iVar13 + 0x334) = 1;
    }
    if (*(short *)(iVar13 + 0x332) == 1) {
      iVar18 = uVar17 - 0x7f;
      uVar15 = iVar18 * 100 & 0xffff;
      sVar6 = __divsi3(iVar18 * 1000,uVar24);
      uVar17 = (iVar18 * -100 + -0x1e) / 7 & 0xffff;
      local_1a0 = (int)(uVar22 * (int)(short)((short)(iVar18 * 100) - sVar6)) / 10;
      local_1ac = -local_1a0;
      local_1a0 = local_1a0 & 0xffff;
      local_19c = (local_1ac & 0x3fffff) >> 6;
      local_1ac = local_1ac & 0x3f;
    }
    else {
      uVar17 = 0x51;
      uVar24 = 10;
      uVar15 = 0xfda8;
      local_1ac = 0;
      local_19c = 0;
      local_1a0 = 0;
    }
  }
  uVar22 = uVar15 - uVar17;
  uVar15 = uVar17 - uVar15;
  local_178[0] = 1;
  local_178[1] = 0x8000;
  local_178[2] = 0x8000;
  local_178[3] = 0x8000;
  local_178[4] = 0x8000;
  local_178[5] = 0x8000;
  local_178[6] = 0x8000;
  local_178[7] = 0x8000;
  local_178[8] = 0x8000;
  local_178[9] = 0x8000;
  local_178[10] = 0x8000;
  puVar12 = local_178;
  do {
    iVar18 = (int)(short)uVar22;
    if (iVar18 < 0) {
      if (iVar18 < -0x25e4) {
        uVar23 = 0;
      }
      else {
        uVar23 = uVar15 & 0x3f;
        if ((-iVar18 & 0x3fffffU) >> 6 == 0) {
          uVar23 = (uint)((int)((short)uVar23 * 0x76e8 + (0x40 - uVar23) * 0x8000) >> 5) >> 1;
        }
        else {
          iVar18 = DAT_000f7d98 + 0xf7760 + (short)((uint)(iVar18 * -0x400) >> 0x10) * 2;
          uVar23 = (uint)((int)((0x40 - uVar23) * (int)*(short *)(iVar18 + 0x18) +
                               (int)(short)uVar23 * (int)*(short *)(iVar18 + 0x1a)) >> 5) >> 1;
        }
      }
    }
    else {
      uVar23 = 0x8000;
    }
    uVar22 = (uVar22 & 0xffff) + uVar17;
    uVar15 = (uVar15 & 0xffff) - uVar17;
    puVar12 = puVar12 + 1;
    *puVar12 = uVar23;
  } while (puVar12 != local_178 + 8);
  local_178[0xb] = 1;
  local_148 = local_178[1];
  local_144 = local_178[2];
  if (uVar24 == 10) {
    local_140[0] = local_178[3];
    local_140[1] = local_178[4];
    local_138 = local_178[5];
    local_134 = local_178[6];
    local_130 = local_178[7];
    local_12c = local_178[8];
    local_128 = 0x8000;
    local_124 = 0x8000;
  }
  else {
    uVar15 = local_178[2] + 0x7f & (int)local_178[2] >> 0x20;
    if (uVar24 < 10) {
      uVar15 = local_178[2];
    }
    uVar15 = (uVar15 & 0x7fffff) >> 7;
    iVar18 = DAT_000f7da4 + 0xf7994;
    uVar17 = local_178[2] + uVar15 * -0x80;
    iVar21 = iVar18 + uVar15 * 2;
    bVar26 = (uVar17 & 0x80000000) != 0;
    sVar6 = *(short *)(iVar21 + 0x14c);
    sVar4 = *(short *)(iVar21 + 0x14a);
    uVar17 = uVar17 * 2 & 0xffff;
    uVar15 = 0;
    do {
      uVar23 = *(uint *)((int)local_178 + uVar15 + 0xc);
      uVar22 = uVar23 + 0x7f & (int)uVar23 >> 0x20;
      if (!bVar26) {
        uVar22 = uVar23;
      }
      uVar22 = (uVar22 & 0x7fffff) >> 7;
      iVar21 = iVar18 + uVar22 * 2;
      uVar22 = (uVar23 + uVar22 * -0x80) * 2 & 0xffff;
      iVar21 = __divsi3((((int)(((0x100 - uVar22) * (int)*(short *)(iVar21 + 0x14a) +
                                (int)*(short *)(iVar21 + 0x14c) * uVar22) * 10) >> 8) +
                        ((int)(((0x100 - uVar17) * (int)sVar4 + (int)sVar6 * uVar17) * (uVar24 - 10)
                              ) >> 8)) / 5,uVar24);
      iVar8 = (int)(short)iVar21;
      if (iVar8 < 0) {
        if (iVar8 < -0x25e4) {
          uVar22 = 0;
        }
        else {
          uVar22 = -iVar21 & 0x3f;
          if ((-iVar8 & 0x3fffffU) >> 6 == 0) {
            uVar22 = (uint)((int)((short)uVar22 * 0x76e8 + (0x40 - uVar22) * 0x8000) >> 5) >> 1;
          }
          else {
            iVar21 = iVar18 + (short)((uint)(iVar8 * -0x400) >> 0x10) * 2;
            uVar22 = (uint)((int)((0x40 - uVar22) * (int)*(short *)(iVar21 + 0x18) +
                                 (int)(short)uVar22 * (int)*(short *)(iVar21 + 0x1a)) >> 5) >> 1;
          }
        }
      }
      else {
        uVar22 = 0x8000;
      }
      uVar23 = uVar15 + 4;
      bVar26 = 0x1f < uVar23;
      *(uint *)((int)local_140 + uVar15) = uVar22;
      uVar15 = uVar23;
    } while (uVar23 != 0x20);
  }
  uVar17 = local_178[2];
  uVar15 = local_178[1];
  local_120 = 0;
  local_11c = 0;
  if (local_178[1] != local_178[2]) {
    iVar18 = __divsi3(local_144 << 0xf,local_178[2]);
    iVar21 = __divsi3(local_148 << 0xf,uVar15);
    local_11c = __divsi3((iVar18 - iVar21) * 0x8000,uVar17 - uVar15);
  }
  uVar15 = local_178[3];
  local_118 = 0;
  if (local_178[3] != uVar17) {
    iVar18 = __divsi3(local_140[0] << 0xf,local_178[3]);
    iVar21 = __divsi3(local_144 << 0xf,uVar17);
    local_118 = __divsi3((iVar18 - iVar21) * 0x8000,uVar15 - uVar17);
  }
  uVar17 = local_178[4];
  local_114 = 0;
  if (local_178[4] != uVar15) {
    iVar18 = __divsi3(local_140[1] << 0xf,local_178[4]);
    iVar21 = __divsi3(local_140[0] << 0xf,uVar15);
    local_114 = __divsi3((iVar18 - iVar21) * 0x8000,uVar17 - uVar15);
  }
  uVar15 = local_178[5];
  local_110 = 0;
  if (local_178[5] != uVar17) {
    iVar18 = __divsi3(local_138 << 0xf,local_178[5]);
    iVar21 = __divsi3(local_140[1] << 0xf,uVar17);
    local_110 = __divsi3((iVar18 - iVar21) * 0x8000,uVar15 - uVar17);
  }
  uVar17 = local_178[6];
  local_10c = 0;
  if (local_178[6] != uVar15) {
    iVar18 = __divsi3(local_134 << 0xf,local_178[6]);
    iVar21 = __divsi3(local_138 << 0xf,uVar15);
    local_10c = __divsi3((iVar18 - iVar21) * 0x8000,uVar17 - uVar15);
  }
  uVar15 = local_178[7];
  local_108 = 0;
  if (local_178[7] != uVar17) {
    iVar18 = __divsi3(local_130 << 0xf,local_178[7]);
    iVar21 = __divsi3(local_134 << 0xf,uVar17);
    local_108 = __divsi3((iVar18 - iVar21) * 0x8000,uVar15 - uVar17);
  }
  uVar17 = local_178[8];
  local_104 = 0;
  if (local_178[8] != uVar15) {
    iVar18 = __divsi3(local_12c << 0xf,local_178[8]);
    iVar21 = __divsi3(local_130 << 0xf,uVar15);
    local_104 = __divsi3((iVar18 - iVar21) * 0x8000,uVar17 - uVar15);
  }
  uVar15 = local_178[9];
  local_100 = 0;
  if (local_178[9] != uVar17) {
    iVar18 = __divsi3(local_128 << 0xf,local_178[9]);
    iVar21 = __divsi3(local_12c << 0xf,uVar17);
    local_100 = __divsi3((iVar18 - iVar21) * 0x8000,uVar15 - uVar17);
  }
  uVar17 = local_178[10];
  local_fc = 0;
  if (local_178[10] != uVar15) {
    iVar18 = __divsi3(local_124 << 0xf,local_178[10]);
    iVar21 = __divsi3(local_128 << 0xf,uVar15);
    local_fc = __divsi3((iVar18 - iVar21) * 0x8000,uVar17 - uVar15);
  }
  iVar8 = 1;
  iVar25 = 0;
  puVar12 = &local_120;
  iVar21 = 1;
  iVar18 = 0;
LAB_000f7d22:
  uVar17 = puVar12[1];
  uVar15 = uVar17;
  if ((int)uVar17 < 0) {
    if (uVar17 != 0x80000000) {
      uVar15 = -uVar17;
      goto LAB_000f7d30;
    }
LAB_000f7d34:
    *(undefined4 *)((int)local_9c + iVar18) = 9999;
  }
  else {
LAB_000f7d30:
    if (0x3fffff < (int)uVar15) goto LAB_000f7d34;
    uVar15 = uVar17 & ~((int)uVar17 >> 0x20);
    if ((int)uVar17 < 0) {
      uVar15 = uVar17 + 0xff;
    }
    *(int *)((int)local_9c + iVar18) = iVar21 * (((int)uVar15 >> 8) - iVar25);
  }
  uVar27 = __divsi3();
  uVar9 = (undefined4)((ulonglong)uVar27 >> 0x20);
  iVar21 = *(int *)((int)local_178 + iVar18 + 4);
  if (iVar21 < 0x8000) {
    iVar11 = -iVar21;
  }
  else {
    uVar9 = 0x7fff;
    iVar11 = -0x7fff;
  }
  *(int *)((int)local_ec + iVar18) = iVar11;
  if (0x7fff < iVar21) {
    *(undefined4 *)((int)local_178 + iVar18 + 4) = uVar9;
  }
  iVar25 = iVar25 + (int)uVar27;
  if (iVar8 + 1 != 10) {
    puVar12 = puVar12 + 2;
    uVar15 = *puVar12;
    if (iVar8 + 1 < 5) {
      iVar21 = 1;
    }
    else {
      iVar21 = 0x10;
    }
    iVar11 = iVar18 + 8;
    uVar17 = uVar15;
    if ((int)uVar15 < 0) {
      if (uVar15 != 0x80000000) {
        uVar17 = -uVar15;
        goto LAB_000f7cd8;
      }
LAB_000f7d46:
      *(undefined4 *)((int)local_9c + iVar18 + 4) = 9999;
    }
    else {
LAB_000f7cd8:
      if (0x3fffff < (int)uVar17) goto LAB_000f7d46;
      uVar17 = uVar15 & ~((int)uVar15 >> 0x20);
      if ((int)uVar15 < 0) {
        uVar17 = uVar15 + 0xff;
      }
      *(int *)((int)local_9c + iVar18 + 4) = iVar21 * (((int)uVar17 >> 8) - iVar25);
    }
    uVar27 = __divsi3();
    uVar9 = (undefined4)((ulonglong)uVar27 >> 0x20);
    iVar21 = *(int *)((int)local_178 + iVar11);
    iVar8 = iVar8 + 2;
    if (iVar21 < 0x8000) {
      iVar16 = -iVar21;
    }
    else {
      uVar9 = 0x7fff;
      iVar16 = -0x7fff;
    }
    *(int *)((int)local_ec + iVar18 + 4) = iVar16;
    if (0x7fff < iVar21) {
      *(undefined4 *)((int)local_178 + iVar11) = uVar9;
    }
    iVar25 = iVar25 + (int)uVar27;
    iVar18 = iVar11;
    if (iVar8 < 5) {
      iVar21 = 1;
    }
    else {
      iVar21 = 0x10;
    }
    goto LAB_000f7d22;
  }
  local_178[0] = local_9c[0];
  local_178[1] = local_9c[1];
  local_178[2] = local_9c[2];
  local_178[3] = local_9c[3];
  local_178[4] = local_9c[4];
  local_178[5] = local_9c[5];
  local_178[6] = uStack_84;
  local_178[7] = uStack_80;
  local_178[0xb] = local_ec[0];
  local_148._0_2_ = (undefined2)local_ec[1];
  local_144 = local_ec[2];
  local_140[0]._0_2_ = (undefined2)local_ec[3];
  local_140[1] = local_ec[4];
  local_138._0_2_ = (undefined2)local_ec[5];
  local_134 = uStack_d4;
  local_130._0_2_ = (undefined2)uStack_d0;
  if ((local_1a0 & 0x8000) == 0) {
    uVar7 = 0x1000;
    uVar15 = 0x7fff;
  }
  else {
    if (local_19c == 0) {
      iVar18 = (short)local_1ac * 0x76e8 + (0x40 - local_1ac) * 0x8000;
    }
    else {
      iVar18 = DAT_000f84bc + 0xf8396 + (short)local_19c * 2;
      iVar18 = (0x40 - local_1ac) * (int)*(short *)(iVar18 + 0x18) +
               (int)(short)local_1ac * (int)*(short *)(iVar18 + 0x1a);
    }
    if ((uint)(iVar18 >> 5) < 0x2001) {
      uVar15 = 0x1000;
      uVar7 = 0x7fff;
    }
    else {
      uVar15 = (uint)(iVar18 >> 5) >> 1;
      if (uVar15 == 0x8000) {
        uVar7 = __udivsi3(0x10000000);
        uVar15 = 0x7fff;
      }
      else {
        uVar7 = __udivsi3(0x10000000);
      }
    }
  }
  if (param_2 == '\x02') {
    *(undefined2 *)(iVar13 + 0xf2) = uVar7;
    *(short *)(iVar13 + 0xb0) = (short)local_178[0xb];
    *(undefined2 *)(iVar13 + 0xb2) = (undefined2)local_148;
    *(short *)(iVar13 + 0xb4) = (short)local_144;
    *(undefined2 *)(iVar13 + 0xb6) = (undefined2)local_140[0];
    *(short *)(iVar13 + 0xa8) = (short)local_140[1];
    *(undefined2 *)(iVar13 + 0xaa) = (undefined2)local_138;
    *(short *)(iVar13 + 0xac) = (short)local_134;
    *(undefined2 *)(iVar13 + 0xae) = (undefined2)local_130;
    *(short *)(iVar13 + 0xc2) = (short)local_178[0];
    *(short *)(iVar13 + 0xc4) = (short)local_178[1];
    *(short *)(iVar13 + 0xc6) = (short)local_178[2];
    *(short *)(iVar13 + 200) = (short)local_178[3];
    *(short *)(iVar13 + 0xb8) = (short)local_178[4];
    *(short *)(iVar13 + 0xba) = (short)local_178[5];
    *(short *)(iVar13 + 0xbc) = (short)local_178[6];
    *(short *)(iVar13 + 0xbe) = (short)local_178[7];
    LSendCoef('\x11',local_40);
  }
  else {
    local_120 = (local_140[1] & 0xff) << 8;
    local_120 = CONCAT13((char)(undefined2)local_138,(uint3)local_120);
    local_120 = CONCAT31(local_120._1_3_,(char)(local_140[1] >> 8));
    local_120._0_3_ = CONCAT12((char)((ushort)(undefined2)local_138 >> 8),(ushort)local_120);
    local_120 = CONCAT13((char)(undefined2)local_138,(uint3)local_120);
    local_11c = CONCAT13((char)(undefined2)local_130,
                         CONCAT12((char)((ushort)(undefined2)local_130 >> 8),
                                  (short)CONCAT31((int3)local_134,(char)(local_134 >> 8))));
    local_118 = (local_178[0xb] & 0xff) << 8;
    local_118 = CONCAT13((char)(undefined2)local_148,(undefined3)local_118);
    local_118 = CONCAT31(local_118._1_3_,(char)(local_178[0xb] >> 8));
    local_118._0_3_ = CONCAT12((char)((ushort)(undefined2)local_148 >> 8),(undefined2)local_118);
    local_118 = CONCAT13((char)(undefined2)local_148,(undefined3)local_118);
    local_114 = CONCAT13((char)(undefined2)local_140[0],
                         CONCAT12((char)((ushort)(undefined2)local_140[0] >> 8),
                                  (short)CONCAT31((int3)local_144,(char)(local_144 >> 8))));
    local_110 = CONCAT13((char)local_178[5],
                         CONCAT12((char)(local_178[5] >> 8),
                                  (short)CONCAT31((int3)local_178[4],(char)(local_178[4] >> 8))));
    local_10c = CONCAT13((char)local_178[7],
                         CONCAT12((char)(local_178[7] >> 8),
                                  (short)CONCAT31((int3)local_178[6],(char)(local_178[6] >> 8))));
    local_104 = CONCAT13((char)local_178[2],
                         CONCAT12((char)(local_178[2] >> 8),
                                  CONCAT11((char)local_178[1],(char)(local_178[1] >> 8))));
    local_100._0_2_ = CONCAT11((char)local_178[3],(char)(local_178[3] >> 8));
    local_108 = CONCAT22(CONCAT11((char)local_178[0],(char)(local_178[0] >> 8)),0x8000);
    MaDevDrv_SendDspCoef(0xef,(uchar *)&local_120,0x22);
    local_120 = CONCAT31(CONCAT21(local_120._2_2_,(char)uVar7),(char)((ushort)uVar7 >> 8));
    MaDevDrv_SendDspCoef(0x11e,(uchar *)&local_120,2);
    uVar17 = 0x8000;
    if ((*(short *)(iVar13 + 0x334) != 0) && (uVar17 = uVar15, *(short *)(iVar13 + 0x332) == 0)) {
      uVar17 = 0x8000;
    }
    lset_adj_gain(uVar17);
  }
LAB_000f74ae:
  if (local_2c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

