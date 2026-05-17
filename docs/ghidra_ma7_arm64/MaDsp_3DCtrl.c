/* MaDsp_3DCtrl @ 002197b0 9368B */


/* YAMAHA::MaDsp_3DCtrl(unsigned int, unsigned int, unsigned int, void*) */

void YAMAHA::MaDsp_3DCtrl(uint param_1,uint param_2,uint param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  ushort uVar30;
  int iVar31;
  uint uVar32;
  int *piVar33;
  undefined4 uVar34;
  ulong uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uchar local_40 [8];
  uchar local_38;
  undefined1 local_37;
  uchar local_30;
  undefined1 local_2f;
  uchar local_28;
  undefined1 local_27;
  ulong local_20 [3];
  long local_8;
  
  uVar32 = DAT_005e1d30;
  puVar29 = PTR_lut_rev_time_00567358;
  uVar27 = DAT_0021bc48;
  uVar35 = (ulong)param_3;
  local_40[0] = 0xff;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_40[1] = 0xff;
  if (param_1 == 0) {
    switch(param_2) {
    case 0x3c:
      iVar31 = 0;
      DAT_005e1d70 = 1;
      DAT_005e1d30 = DAT_005e1d30 | 0xb;
      DAT_005e1d3c = 0;
      DAT_005e1d74 = 1;
      DAT_005e1d40 = 0x10000;
      DAT_005e1d60 = 0x8fc;
      break;
    default:
switchD_0021987c_caseD_3d:
      iVar31 = -2;
      break;
    case 0x40:
      if (1 < param_3) {
        iVar31 = -2;
        goto LAB_002197f8;
      }
      iVar31 = 0;
      DAT_005e1d70 = param_3;
      break;
    case 0x41:
      iVar31 = 0;
      *(uint *)param_4 = DAT_005e1d70;
      break;
    case 0x42:
      if (1 < param_3) {
        iVar31 = -2;
        goto LAB_002197f8;
      }
      DAT_005e1d3c = param_3;
      if (((param_3 & 1) != 0) && (DAT_005e1d84 == 0)) {
        DAT_005e1d34 = 0;
        DAT_005e1d30 = DAT_005e1d30 | 4;
        uVar30 = *(ushort *)PTR_liup_r3dr_00567f90;
        *(undefined4 *)(PTR_lprm_00567530 + 4) = 0;
        DAT_005e1d60 = *(uint *)(puVar29 + (long)(int)(uint)uVar30 * 4);
      }
      DAT_005e1d30 = DAT_005e1d30 | 1;
      iVar31 = 0;
      break;
    case 0x43:
      iVar31 = 0;
      *(uint *)param_4 = DAT_005e1d3c;
      break;
    case 0x44:
      iVar31 = 0;
      *(undefined4 *)param_4 = 4;
      break;
    case 0x48:
      if (2 < param_3) {
        iVar31 = -2;
        goto LAB_002197f8;
      }
      iVar31 = 0;
      DAT_005e1d74 = param_3;
      break;
    case 0x49:
      iVar31 = 0;
      *(uint *)param_4 = DAT_005e1d74;
      break;
    case 0x4a:
      if (0xa0000 < param_3) {
        iVar31 = -2;
        goto LAB_002197f8;
      }
      iVar31 = 0;
      DAT_005e1d30 = DAT_005e1d30 | 2;
      DAT_005e1d40 = param_3;
      break;
    case 0x4b:
      iVar31 = 0;
      *(uint *)param_4 = DAT_005e1d40;
      break;
    case 0x54:
      if (DAT_005e1d3c == 0) {
        iVar31 = -1;
        goto LAB_002197f8;
      }
      if ((*(uint *)param_4 >> 6 & 1) == 0) {
LAB_0021a1b8:
        iVar31 = 0;
      }
      else {
        if (0x7404 < *(uint *)((long)param_4 + 0x1c) - 300) goto switchD_0021987c_caseD_3d;
        iVar31 = 0;
        DAT_005e1d30 = DAT_005e1d30 | 8;
        DAT_005e1d60 = *(uint *)((long)param_4 + 0x1c);
      }
      break;
    case 0x55:
      iVar31 = 0;
      *(uint *)((long)param_4 + 0x1c) = DAT_005e1d60;
      *(undefined4 *)((long)param_4 + 4) = 100;
      *(undefined4 *)((long)param_4 + 8) = 0;
      *(undefined4 *)((long)param_4 + 0xc) = 100;
      *(undefined4 *)((long)param_4 + 0x10) = 9;
      *(undefined4 *)((long)param_4 + 0x14) = 100;
      *(undefined4 *)((long)param_4 + 0x18) = 0;
      *(undefined4 *)((long)param_4 + 0x20) = 0x8000;
      *(undefined4 *)((long)param_4 + 0x24) = 0x100;
      *(undefined4 *)((long)param_4 + 0x28) = 0;
      *(undefined4 *)param_4 = 0;
      break;
    case 0x56:
      uVar32 = *(uint *)param_4;
      if (((uVar32 & 1) != 0) && (1 < *(uint *)((long)param_4 + 4))) {
        iVar31 = -2;
        goto LAB_002197f8;
      }
      if (((uVar32 >> 1 & 1) != 0) && (0xa0000 < *(uint *)((long)param_4 + 8))) {
        iVar31 = -2;
        goto LAB_002197f8;
      }
      if ((*(uint *)((long)param_4 + 0xc) >> 6 & 1) != 0) {
        if (0x7404 < *(uint *)((long)param_4 + 0x28) - 300) goto switchD_0021987c_caseD_3d;
        DAT_005e1d30 = DAT_005e1d30 | 8;
        DAT_005e1d60 = *(uint *)((long)param_4 + 0x28);
      }
      if ((uVar32 & 1) != 0) {
        DAT_005e1d3c = *(uint *)((long)param_4 + 4);
        DAT_005e1d30 = DAT_005e1d30 | 1;
      }
      if ((uVar32 & 2) == 0) goto LAB_0021a1b8;
      DAT_005e1d40 = *(uint *)((long)param_4 + 8);
      iVar31 = 0;
      if (0xa0000 < DAT_005e1d40) {
        DAT_005e1d40 = 0xa0000;
      }
      DAT_005e1d30 = DAT_005e1d30 | 2;
      break;
    case 0x57:
      iVar31 = 0;
      *(undefined4 *)((long)param_4 + 0x34) = 0;
      uVar3 = DAT_005e1d40;
      uVar32 = DAT_005e1d3c;
      *(uint *)((long)param_4 + 0x28) = DAT_005e1d60;
      *(undefined4 *)((long)param_4 + 0x10) = 100;
      *(undefined4 *)((long)param_4 + 0x14) = 0;
      *(undefined4 *)((long)param_4 + 0x18) = 100;
      *(undefined4 *)((long)param_4 + 0x1c) = 9;
      *(undefined4 *)((long)param_4 + 0x20) = 100;
      *(undefined4 *)((long)param_4 + 0x24) = 0;
      *(undefined4 *)((long)param_4 + 0x2c) = 0x8000;
      *(undefined4 *)((long)param_4 + 0x30) = 0x100;
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      *(uint *)((long)param_4 + 4) = uVar32;
      *(uint *)((long)param_4 + 8) = uVar3;
      *(undefined4 *)param_4 = 0;
      break;
    case 0x58:
      if ((DAT_005e1d30 >> 1 & 1) != 0) {
        DAT_005e1d88 = DAT_005e1d40;
        DAT_005e22c4 = DAT_005e1d40;
        MaDsp_3DEngProc4Doppler
                  ((_MASMW_P3DASNDSRCCTRL *)&DAT_005e2040,(_MASMW_P3DASNDSRCMOVE *)&DAT_005e22c0,
                   (_MASMW_P3DACALCRESULT *)&DAT_005e2ad0);
        if (DAT_005e2040._4_4_ != 0xff) {
          MaSndDrv_SetDoppler(DAT_005e2040._4_4_,DAT_005e2ad8);
        }
        DAT_005e24c8 = DAT_005e1d88;
        MaDsp_3DEngProc4Doppler
                  ((_MASMW_P3DASNDSRCCTRL *)&DAT_005e20e0,(_MASMW_P3DASNDSRCMOVE *)&DAT_005e24c4,
                   (_MASMW_P3DACALCRESULT *)&DAT_005e2b00);
        if (DAT_005e20e4 != 0xff) {
          MaSndDrv_SetDoppler(DAT_005e20e4,DAT_005e2b08);
        }
        DAT_005e26cc = DAT_005e1d88;
        MaDsp_3DEngProc4Doppler
                  ((_MASMW_P3DASNDSRCCTRL *)&DAT_005e2180,(_MASMW_P3DASNDSRCMOVE *)&DAT_005e26c8,
                   (_MASMW_P3DACALCRESULT *)&DAT_005e2b30);
        if (DAT_005e2184 != 0xff) {
          MaSndDrv_SetDoppler(DAT_005e2184,DAT_005e2b38);
        }
        DAT_005e28d0 = DAT_005e1d88;
        MaDsp_3DEngProc4Doppler
                  ((_MASMW_P3DASNDSRCCTRL *)&DAT_005e2220,(_MASMW_P3DASNDSRCMOVE *)&DAT_005e28cc,
                   (_MASMW_P3DACALCRESULT *)&DAT_005e2b60);
        if (DAT_005e2224 != 0xff) {
          MaSndDrv_SetDoppler(DAT_005e2224,DAT_005e2b68);
        }
      }
      uVar3 = DAT_005e1d3c;
      if (((uVar32 & 1) != 0) && (DAT_005e1d84 != DAT_005e1d3c)) {
        iVar31 = MaDevDrv_ClearDspDelayRam(0xffff0000);
        if (-1 < iVar31) {
          if (uVar3 == 0) {
            local_20[0] = local_20[0] & 0xffffffffffff0000;
            MaDevDrv_SendDspCoef(0x286,(uchar *)local_20,2);
            MaDevDrv_SendDspCoef(0x28d,(uchar *)local_20,2);
            puVar29 = PTR_lprm_00567530;
            PTR_lprm_00567530[8] = 0xfe;
            *(undefined4 *)puVar29 = 0;
            puVar29[9] = 0xfe;
            *(undefined4 *)(puVar29 + 0xc) = 0;
            lup_calc('\v',0xff);
            lup_calc('\x02',0xff);
            lup_calc('\x05',0xfd);
          }
          else {
            local_20[0] = 0;
            iVar31 = MaDevDrv_SendDspCoef(0xd1,(uchar *)local_20,8);
            if (-1 < iVar31) {
              uVar3 = DAT_005e20d4 >> 2;
              uVar23 = DAT_005e2174 >> 2;
              DAT_005e2c56 = (char)(uVar3 >> 8);
              if (0x7ffe < DAT_005e20d4) {
                uVar3 = 0;
                DAT_005e2c56 = 0x20;
              }
              uVar24 = DAT_005e2214 >> 2;
              DAT_005e2c5a = (undefined1)(uVar23 >> 8);
              if (0x7ffe < DAT_005e2174) {
                DAT_005e2c5a = 0x20;
                uVar23 = 0;
              }
              DAT_005e2c5e = (undefined1)(uVar24 >> 8);
              if (0x7ffe < DAT_005e2214) {
                DAT_005e2c5e = 0x20;
              }
              uVar25 = DAT_005e22b4 >> 2;
              if (0x7ffe < DAT_005e2214) {
                uVar24 = 0;
              }
              DAT_005e2c62 = (undefined1)(uVar25 >> 8);
              DAT_005e2c4c = (undefined1)((ushort)DAT_005e2ad0 >> 8);
              if (0x7ffe < DAT_005e22b4) {
                DAT_005e2c62 = 0x20;
                uVar25 = 0;
              }
              DAT_005e2c4d = (undefined1)DAT_005e2ad0;
              DAT_005e2c4e = (undefined1)((ushort)DAT_005e2b00 >> 8);
              DAT_005e2c4f = (undefined1)DAT_005e2b00;
              DAT_005e2c50 = (undefined1)((ushort)DAT_005e2b30 >> 8);
              DAT_005e2c51 = (undefined1)DAT_005e2b30;
              DAT_005e2c52 = (undefined1)((ushort)DAT_005e2b60 >> 8);
              DAT_005e2c53 = (undefined1)DAT_005e2b60;
              DAT_005e2c54 = 0;
              DAT_005e2c55 = 0;
              DAT_005e2c57 = (undefined1)uVar3;
              DAT_005e2c58 = 0;
              DAT_005e2c59 = 0;
              DAT_005e2c5b = (undefined1)uVar23;
              DAT_005e2c5c = 0;
              DAT_005e2c5d = 0;
              DAT_005e2c5f = (undefined1)uVar24;
              DAT_005e2c60 = 0;
              DAT_005e2c61 = 0;
              DAT_005e2c63 = (undefined1)uVar25;
              DAT_005e2c64 = 0;
              DAT_005e2c65 = 0;
              DAT_005e2c66 = 0;
              DAT_005e2c67 = 0;
              DAT_005e2c68 = 0;
              DAT_005e2c69 = 0;
              DAT_005e2c6a = 0;
              DAT_005e2c6b = 0;
              DAT_005e2c6c = 0x7f;
              DAT_005e2c6d = 0xff;
              DAT_005e2c6e = 0x7f;
              DAT_005e2c6f = 0xff;
              DAT_005e2c70 = 0x7f;
              DAT_005e2c71 = 0xff;
              DAT_005e2c72 = 0x7f;
              DAT_005e2c73 = 0xff;
              DAT_005e2c74 = 0x7f;
              DAT_005e2c75 = 0xff;
              DAT_005e2c76 = 0x7f;
              DAT_005e2c77 = 0xff;
              iVar31 = MaDevDrv_SetDspRamAddress(0x13,0x72);
              if (iVar31 < 0) {
LAB_0021ba84:
                lup_calc('\x05','\0');
                lup_calc('\x05','\x02');
              }
              else {
                iVar31 = MaDevDrv_SendDspProgram(0x13,PTR_gabProg3DRevIn_00567aa8,0xba);
                if ((-1 < iVar31) && (iVar31 = MaDevDrv_ClearDspProgram(0x32,0x72), -1 < iVar31)) {
                  MaDevDrv_SendDspCoef(0x13,&DAT_005e2c46,0x3e);
                  iVar31 = MaDevDrv_SetDspRamAddress(0,0);
                  if (iVar31 < 0) goto LAB_0021ba84;
                  iVar31 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
                  if (((-1 < iVar31) && (iVar31 = MaDevDrv_ClearDspProgram(0x76,0xcc), -1 < iVar31))
                     && (iVar31 = MaDevDrv_SetDspRamAddress(0,0), puVar29 = PTR_lprm_00567530,
                        -1 < iVar31)) {
                    bVar22 = *PTR_lrel_3dr_rev_00567730;
                    PTR_lprm_00567530[8] = 2;
                    *(undefined4 *)(puVar29 + 4) = 0;
                    *(uint *)puVar29 = (uint)bVar22;
                    lup_calc('\v',0xfd);
                    local_20[0] = CONCAT62(local_20[0]._2_6_,0xff7f);
                    MaDevDrv_SendDspCoef(0x286,(uchar *)local_20,2);
                    MaDevDrv_SendDspCoef(0x28d,(uchar *)local_20,2);
                  }
                }
              }
            }
          }
        }
        uVar32 = uVar32 & 0xfffffffa;
        DAT_005e1d84 = DAT_005e1d3c;
        DAT_005e1d7c = DAT_005e1d34;
      }
      if (((uVar32 & 0xc) == 0) || (DAT_005e1da8 = DAT_005e1d60, DAT_005e1d3c == 0)) {
LAB_0021b85c:
        iVar31 = 0;
      }
      else if ((uVar32 >> 2 & 1) == 0) {
LAB_00219f40:
        uVar3 = DAT_005e1da8;
        puVar29 = PTR_lut_rev_time_00567358;
        if ((uVar32 >> 3 & 1) == 0) goto LAB_0021b85c;
        uVar30 = 0;
        iVar31 = *(int *)PTR_lut_rev_time_00567358;
        *(undefined2 *)(PTR_lprm_00567530 + 0x2e6) = 0x45;
        if (uVar3 < (uint)(*(int *)(puVar29 + 4) + iVar31) >> 1) {
LAB_0021b9c0:
          *(ushort *)(PTR_lprm_00567530 + 0x2e6) = uVar30;
        }
        else {
          uVar30 = 1;
          if (uVar3 < (uint)(*(int *)(puVar29 + 8) + *(int *)(puVar29 + 4)) >> 1) goto LAB_0021b9c0;
          uVar30 = 2;
          if (uVar3 < (uint)(*(int *)(puVar29 + 0xc) + *(int *)(puVar29 + 8)) >> 1)
          goto LAB_0021b9c0;
          uVar30 = 3;
          if (uVar3 < (uint)(*(int *)(puVar29 + 0x10) + *(int *)(puVar29 + 0xc)) >> 1)
          goto LAB_0021b9c0;
          iVar31 = *(int *)(puVar29 + 0x14);
          uVar30 = 4;
          if (uVar3 < (uint)(iVar31 + *(int *)(puVar29 + 0x10)) >> 1) goto LAB_0021b9c0;
          uVar30 = 5;
          piVar33 = (int *)(puVar29 + 0x18);
          do {
            if (uVar3 < (uint)(*piVar33 + iVar31) >> 1) goto LAB_0021b9c0;
            uVar30 = uVar30 + 1 & 0xff;
            if (uVar3 < (uint)(piVar33[1] + *piVar33) >> 1) goto LAB_0021b9c0;
            uVar30 = uVar30 + 1 & 0xff;
            if (uVar3 < (uint)(piVar33[2] + piVar33[1]) >> 1) goto LAB_0021b9c0;
            uVar30 = uVar30 + 1 & 0xff;
            if (uVar3 < (uint)(piVar33[3] + piVar33[2]) >> 1) goto LAB_0021b9c0;
            uVar30 = uVar30 + 1 & 0xff;
            if (uVar3 < (uint)(piVar33[4] + piVar33[3]) >> 1) goto LAB_0021b9c0;
            uVar30 = uVar30 + 1 & 0xff;
            if (uVar3 < (uint)(piVar33[5] + piVar33[4]) >> 1) goto LAB_0021b9c0;
            uVar30 = uVar30 + 1 & 0xff;
            if (uVar3 < (uint)(piVar33[6] + piVar33[5]) >> 1) goto LAB_0021b9c0;
            iVar31 = piVar33[7];
            uVar30 = uVar30 + 1 & 0xff;
            if (uVar3 < (uint)(iVar31 + piVar33[6]) >> 1) goto LAB_0021b9c0;
            piVar33 = piVar33 + 8;
            uVar30 = uVar30 + 1 & 0xff;
          } while (uVar30 != 0x45);
        }
        iVar31 = 0;
        lup_calc('\v','\0');
      }
      else {
        *(uint *)PTR_lprm_00567530 =
             (uint)(byte)PTR_lrel_3dr_rev_00567730[*(uint *)(PTR_lprm_00567530 + 4)];
        iVar31 = MaDevDrv_ClearDspDelayRam(0xffff0000);
        if (((-1 < iVar31) && (iVar31 = lup_calc('\v',0xfd), -1 < iVar31)) &&
           (iVar31 = MaDevDrv_ClearDspDelayRam(0xffff0000), -1 < iVar31)) goto LAB_00219f40;
      }
      DAT_005e1d30 = 0;
      MaDevDrv_SendDspCoef(0,local_40,2);
      break;
    case 0x59:
      if (DAT_005e1d3c == 0) {
        iVar31 = -1;
        goto LAB_002197f8;
      }
      if (9 < param_3) {
        iVar31 = -2;
        goto LAB_002197f8;
      }
      iVar31 = 0;
      DAT_005e1d30 = DAT_005e1d30 | 4;
      uVar30 = *(ushort *)(PTR_liup_r3dr_00567f90 + uVar35 * 0x20);
      DAT_005e1d34 = param_3;
      *(uint *)(PTR_lprm_00567530 + 4) = param_3;
      DAT_005e1d60 = *(uint *)(puVar29 + (long)(int)(uint)uVar30 * 4);
      break;
    case 0x5a:
      if (DAT_005e1d3c == 0) {
        iVar31 = -2;
        goto LAB_002197f8;
      }
      iVar31 = 0;
      *(uint *)param_4 = DAT_005e1d34;
    }
    MaDevDrv_SendDspCoef(0,local_40,2);
    goto LAB_002197f8;
  }
  if (param_1 != 1) {
    iVar31 = -2;
    goto LAB_002197f8;
  }
  switch(param_2) {
  case 0x80:
    lVar1 = uVar35 + 1;
    (&DAT_005e1dc8)[uVar35 * 0x28] = 0;
    (&DAT_005e1dcc)[uVar35 * 0x28] = 0;
    (&DAT_005e1dd0)[uVar35 * 0x28] = 0;
    *(undefined8 *)(&DAT_005e1d34 + lVar1 * 0x28) = uVar27;
    uVar27 = DAT_0021bc50;
    (&DAT_005e1d3c)[lVar1 * 0x28] = 0;
    (&DAT_005e1d40)[lVar1 * 0x28] = 0;
    (&DAT_005e1d44)[lVar1 * 0x28] = 1000;
    (&DAT_005e1de8)[uVar35 * 0x28] = 0;
    (&DAT_005e1dec)[uVar35 * 0x14] = 0;
    (&DAT_005e1df4)[uVar35 * 0x14] = 0;
    (&DAT_005e1dfc)[uVar35 * 0x14] = 0;
    uVar28 = DAT_0021bc58;
    (&DAT_005e1e04)[uVar35 * 0x14] = uVar27;
    (&DAT_005e1e0c)[uVar35 * 0x28] = 0;
    (&DAT_005e1e10)[uVar35 * 0x28] = 10000;
    (&DAT_005e1e14)[uVar35 * 0x28] = 1000;
    (&DAT_005e1e18)[uVar35 * 0x28] = 0x10000;
    (&DAT_005e1e1c)[uVar35 * 0x28] = 0;
    (&DAT_005e1e20)[uVar35 * 0x28] = 1;
    (&DAT_005e1e24)[uVar35 * 0x28] = 0;
    (&DAT_005e1e28)[uVar35 * 0x28] = 0;
    (&DAT_005e1e2c)[uVar35 * 0x28] = 0;
    (&DAT_005e1e30)[uVar35 * 0x28] = 0;
    (&DAT_005e1e34)[uVar35 * 0x28] = 0;
    (&DAT_005e1e38)[uVar35 * 0x28] = 1000;
    (&DAT_005e1e3c)[uVar35 * 0x28] = 0;
    (&DAT_005e1e40)[uVar35 * 0x28] = 1000;
    (&DAT_005e1e44)[uVar35 * 0x28] = 0;
    (&DAT_005e1e48)[uVar35 * 0x14] = uVar28;
    (&DAT_005e1e50)[uVar35 * 0x28] = 0;
    (&DAT_005e1e54)[uVar35 * 0x28] = 0;
    (&DAT_005e1e58)[uVar35 * 0x28] = 0;
    *(undefined4 *)(&DAT_005e1dc0 + uVar35 * 0x14) = 0x1ffff;
    (&DAT_005e1e5c)[uVar35 * 0x28] = 1;
    MaDsp_3DEngStart((_MASMW_P3DASNDSRCMOVE *)(&DAT_005e22c0 + uVar35 * 0x204));
    iVar31 = 0;
    break;
  case 0x81:
    iVar31 = -2;
    if (*(uint *)param_4 < 0x1000000) {
      iVar31 = 0;
      uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
      (&DAT_005e1de8)[uVar35 * 0x28] = *(uint *)param_4;
      *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 1;
    }
    break;
  case 0x82:
    iVar19 = *(int *)param_4;
    iVar31 = -2;
    if ((0x7fffff < iVar19) || (iVar20 = *(int *)((long)param_4 + 4), 0x7fffff < iVar20)) break;
    iVar31 = *(int *)((long)param_4 + 8);
    if ((iVar20 < -0x7fffff || iVar19 < -0x7fffff) || (0xfffffe < iVar31 + 0x7fffffU)) {
      iVar31 = -2;
      break;
    }
    uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
    iVar21 = *(int *)((long)&DAT_005e1dd4 + uVar35 * 0xa0 + 4);
    (&DAT_005e1ddc)[uVar35 * 0x28] = iVar19;
    (&DAT_005e1de0)[uVar35 * 0x28] = iVar20;
    (&DAT_005e1de4)[uVar35 * 0x28] = iVar31;
    *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 2;
    if (iVar21 != 0) {
      *(undefined4 *)((long)&DAT_005e1dd4 + uVar35 * 0xa0 + 4) = 0;
      *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 6;
      iVar31 = 0;
      break;
    }
    goto LAB_0021bb40;
  case 0x83:
    lVar1 = uVar35 + 1;
    iVar31 = 0;
    uVar34 = (&DAT_005e1d3c)[lVar1 * 0x28];
    uVar4 = (&DAT_005e1d40)[lVar1 * 0x28];
    *(undefined4 *)((long)param_4 + 8) = (&DAT_005e1d44)[lVar1 * 0x28];
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x84:
    iVar19 = *(int *)param_4;
    iVar31 = -2;
    if ((0x7fffff < iVar19) || (iVar20 = *(int *)((long)param_4 + 4), 0x7fffff < iVar20)) break;
    iVar31 = *(int *)((long)param_4 + 8);
    if ((iVar20 < -0x7fffff || iVar19 < -0x7fffff) || (0xfffffe < iVar31 + 0x7fffffU)) {
      iVar31 = -2;
      break;
    }
    uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
    iVar21 = *(int *)((long)&DAT_005e1dd4 + uVar35 * 0xa0 + 4);
    (&DAT_005e1ddc)[uVar35 * 0x28] = iVar19;
    (&DAT_005e1de0)[uVar35 * 0x28] = iVar20;
    (&DAT_005e1de4)[uVar35 * 0x28] = iVar31;
    *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 2;
    if (iVar21 != 1) {
      *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 6;
      *(undefined4 *)((long)&DAT_005e1dd4 + uVar35 * 0xa0 + 4) = 1;
      iVar31 = 0;
      break;
    }
    goto LAB_0021bb40;
  case 0x85:
    lVar1 = uVar35 + 1;
    iVar31 = 0;
    uVar34 = (&DAT_005e1d3c)[lVar1 * 0x28];
    uVar4 = (&DAT_005e1d40)[lVar1 * 0x28];
    *(undefined4 *)((long)param_4 + 8) = (&DAT_005e1d44)[lVar1 * 0x28];
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x86:
    iVar19 = *(int *)param_4;
    iVar31 = -2;
    if ((0xb4 < iVar19) || (iVar20 = *(int *)((long)param_4 + 4), 0x5a < iVar20)) break;
    uVar32 = *(uint *)((long)param_4 + 8);
    if ((iVar20 < -0x5a || iVar19 < -0xb4) || (0x7fffff < uVar32)) {
      iVar31 = -2;
      break;
    }
    uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
    iVar31 = *(int *)((long)&DAT_005e1dd4 + uVar35 * 0xa0 + 4);
    (&DAT_005e1ddc)[uVar35 * 0x28] = iVar19;
    (&DAT_005e1de0)[uVar35 * 0x28] = iVar20;
    (&DAT_005e1de4)[uVar35 * 0x28] = uVar32;
    *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 2;
    if (iVar31 != 2) {
      *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 6;
      *(undefined4 *)((long)&DAT_005e1dd4 + uVar35 * 0xa0 + 4) = 2;
      iVar31 = 0;
      break;
    }
LAB_0021bb40:
    iVar31 = 0;
    break;
  case 0x87:
    lVar1 = uVar35 + 1;
    iVar31 = 0;
    uVar34 = (&DAT_005e1d3c)[lVar1 * 0x28];
    uVar4 = (&DAT_005e1d40)[lVar1 * 0x28];
    *(undefined4 *)((long)param_4 + 8) = (&DAT_005e1d44)[lVar1 * 0x28];
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x88:
    iVar19 = *(int *)param_4;
    iVar31 = -2;
    if ((iVar19 < 0x800000) && (iVar20 = *(int *)((long)param_4 + 4), iVar20 < 0x800000)) {
      iVar31 = *(int *)((long)param_4 + 8);
      if ((iVar20 < -0x7fffff || iVar19 < -0x7fffff) || (0xfffffe < iVar31 + 0x7fffffU)) {
        iVar31 = -2;
      }
      else {
        uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
        *(int *)(&DAT_005e1dec + uVar35 * 0x14) = iVar19;
        *(int *)((long)&DAT_005e1dec + uVar35 * 0xa0 + 4) = iVar20;
        *(int *)(&DAT_005e1df4 + uVar35 * 0x14) = iVar31;
        *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 8;
        iVar31 = 0;
      }
    }
    break;
  case 0x89:
    iVar31 = 0;
    uVar34 = *(undefined4 *)(&DAT_005e1dec + uVar35 * 0x14);
    uVar4 = *(undefined4 *)((long)&DAT_005e1dec + uVar35 * 0xa0 + 4);
    *(undefined4 *)((long)param_4 + 8) = *(undefined4 *)(&DAT_005e1df4 + uVar35 * 0x14);
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x8a:
    iVar19 = *(int *)param_4;
    iVar31 = -2;
    if ((iVar19 < 0x800000) && (iVar20 = *(int *)((long)param_4 + 4), iVar20 < 0x800000)) {
      iVar31 = *(int *)((long)param_4 + 8);
      if ((iVar20 < -0x7fffff || iVar19 < -0x7fffff) || (0xfffffe < iVar31 + 0x7fffffU)) {
        iVar31 = -2;
      }
      else {
        uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
        *(int *)((long)&DAT_005e1df4 + uVar35 * 0xa0 + 4) = iVar19;
        *(int *)(&DAT_005e1dfc + uVar35 * 0x14) = iVar20;
        *(int *)((long)&DAT_005e1dfc + uVar35 * 0xa0 + 4) = iVar31;
        *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 0x10;
        iVar31 = 0;
      }
    }
    break;
  case 0x8b:
    iVar31 = 0;
    uVar34 = *(undefined4 *)((long)&DAT_005e1df4 + uVar35 * 0xa0 + 4);
    uVar4 = *(undefined4 *)(&DAT_005e1dfc + uVar35 * 0x14);
    *(undefined4 *)((long)param_4 + 8) = *(undefined4 *)((long)&DAT_005e1dfc + uVar35 * 0xa0 + 4);
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x8c:
    if (*(uint *)param_4 < 0x169) {
      uVar32 = *(uint *)((long)param_4 + 4);
      if (uVar32 < 0x169) {
        iVar31 = 0;
        uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
        *(uint *)(&DAT_005e1e04 + uVar35 * 0x14) = *(uint *)param_4;
        *(uint *)((long)&DAT_005e1e04 + uVar35 * 0xa0 + 4) = uVar32;
        *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x60;
      }
      else {
        iVar31 = -2;
      }
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x8d:
    iVar31 = 0;
    *(undefined8 *)param_4 = (&DAT_005e1e04)[uVar35 * 0x14];
    break;
  case 0x8e:
    if (*(int *)param_4 + 10000U < 0x2711) {
      iVar31 = 0;
      uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
      (&DAT_005e1e0c)[uVar35 * 0x28] = *(int *)param_4;
      *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 0x80;
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x8f:
    iVar31 = 0;
    *(undefined4 *)param_4 = (&DAT_005e1e0c)[uVar35 * 0x28];
    break;
  case 0x90:
    if (*(uint *)param_4 < 0x800000) {
      iVar31 = 0;
      uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
      (&DAT_005e1e14)[uVar35 * 0x28] = *(uint *)param_4;
      *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 0x100;
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x91:
    iVar31 = 0;
    *(undefined4 *)param_4 = (&DAT_005e1e14)[uVar35 * 0x28];
    break;
  case 0x92:
    if (*(uint *)param_4 < 0x800000) {
      iVar31 = 0;
      uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
      (&DAT_005e1e10)[uVar35 * 0x28] = *(uint *)param_4;
      *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 0x200;
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x93:
    iVar31 = 0;
    *(undefined4 *)param_4 = (&DAT_005e1e10)[uVar35 * 0x28];
    break;
  case 0x94:
    if (*(uint *)param_4 < 0xa0001) {
      uVar32 = *(uint *)((long)param_4 + 4);
      if (uVar32 < 2) {
        iVar31 = 0;
        uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
        (&DAT_005e1e18)[uVar35 * 0x28] = *(uint *)param_4;
        (&DAT_005e1e1c)[uVar35 * 0x28] = uVar32;
        *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x400;
      }
      else {
        iVar31 = -2;
      }
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x95:
    iVar31 = 0;
    *(undefined8 *)param_4 = *(undefined8 *)(&DAT_005e1e18 + uVar35 * 0x28);
    break;
  case 0x96:
    iVar31 = *(int *)param_4;
    if (iVar31 < 0x800000) {
      iVar19 = *(int *)((long)param_4 + 4);
      if (iVar19 < 0x800000) {
        iVar20 = *(int *)((long)param_4 + 8);
        if ((iVar19 < -0x7fffff || iVar31 < -0x7fffff) || (0xfffffe < iVar20 + 0x7fffffU)) {
          iVar31 = -2;
        }
        else {
          uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
          (&DAT_005e1e24)[uVar35 * 0x28] = iVar31;
          (&DAT_005e1e28)[uVar35 * 0x28] = iVar19;
          (&DAT_005e1e2c)[uVar35 * 0x28] = iVar20;
          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 0x800;
          iVar31 = 0;
        }
      }
      else {
        iVar31 = -2;
      }
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x97:
    iVar31 = 0;
    uVar34 = (&DAT_005e1e24)[uVar35 * 0x28];
    uVar4 = (&DAT_005e1e28)[uVar35 * 0x28];
    *(undefined4 *)((long)param_4 + 8) = (&DAT_005e1e2c)[uVar35 * 0x28];
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x98:
    iVar31 = *(int *)param_4;
    if (iVar31 < 0x800000) {
      iVar19 = *(int *)((long)param_4 + 4);
      if (iVar19 < 0x800000) {
        iVar20 = *(int *)((long)param_4 + 8);
        if ((iVar19 < -0x7fffff || iVar31 < -0x7fffff) || (0xfffffe < iVar20 + 0x7fffffU)) {
          iVar31 = -2;
        }
        else {
          uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
          (&DAT_005e1dc8)[uVar35 * 0x28] = iVar31;
          (&DAT_005e1dcc)[uVar35 * 0x28] = iVar19;
          (&DAT_005e1dd0)[uVar35 * 0x28] = iVar20;
          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 0x1000;
          iVar31 = 0;
        }
      }
      else {
        iVar31 = -2;
      }
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x99:
    iVar31 = 0;
    uVar34 = (&DAT_005e1dc8)[uVar35 * 0x28];
    uVar4 = (&DAT_005e1dcc)[uVar35 * 0x28];
    *(undefined4 *)((long)param_4 + 8) = (&DAT_005e1dd0)[uVar35 * 0x28];
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x9a:
    iVar31 = *(int *)param_4;
    if (iVar31 < 0x800000) {
      iVar19 = *(int *)((long)param_4 + 4);
      if (iVar19 < 0x800000) {
        iVar20 = *(int *)((long)param_4 + 8);
        if ((iVar19 < -0x7fffff || iVar31 < -0x7fffff) || (0xfffffe < iVar20 + 0x7fffffU)) {
          iVar31 = -2;
        }
        else {
          uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
          (&DAT_005e1e30)[uVar35 * 0x28] = iVar31;
          (&DAT_005e1e34)[uVar35 * 0x28] = iVar19;
          (&DAT_005e1e38)[uVar35 * 0x28] = iVar20;
          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 0x2000;
          iVar31 = 0;
        }
      }
      else {
        iVar31 = -2;
      }
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x9b:
    iVar31 = 0;
    uVar34 = (&DAT_005e1e30)[uVar35 * 0x28];
    uVar4 = (&DAT_005e1e34)[uVar35 * 0x28];
    *(undefined4 *)((long)param_4 + 8) = (&DAT_005e1e38)[uVar35 * 0x28];
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x9c:
    iVar31 = *(int *)param_4;
    if (iVar31 < 0x800000) {
      iVar19 = *(int *)((long)param_4 + 4);
      if (iVar19 < 0x800000) {
        iVar20 = *(int *)((long)param_4 + 8);
        if ((iVar19 < -0x7fffff || iVar31 < -0x7fffff) || (0xfffffe < iVar20 + 0x7fffffU)) {
          iVar31 = -2;
        }
        else {
          uVar32 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
          (&DAT_005e1e3c)[uVar35 * 0x28] = iVar31;
          (&DAT_005e1e40)[uVar35 * 0x28] = iVar19;
          (&DAT_005e1e44)[uVar35 * 0x28] = iVar20;
          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar32 | 0x4000;
          iVar31 = 0;
        }
      }
      else {
        iVar31 = -2;
      }
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x9d:
    iVar31 = 0;
    uVar34 = (&DAT_005e1e3c)[uVar35 * 0x28];
    uVar4 = (&DAT_005e1e40)[uVar35 * 0x28];
    *(undefined4 *)((long)param_4 + 8) = (&DAT_005e1e44)[uVar35 * 0x28];
    *(undefined4 *)param_4 = uVar34;
    *(undefined4 *)((long)param_4 + 4) = uVar4;
    break;
  case 0x9e:
    if (*(uint *)param_4 < 0x10) {
      iVar31 = 0;
      if ((*(uint *)param_4 >> 2 & 1) != 0) {
        if (*(uint *)((long)param_4 + 0xc) < 0x65) {
          auVar26 = (ZEXT416(*(uint *)((long)param_4 + 0xc)) * (undefined1  [16])0x2000) /
                    (undefined1  [16])0x19;
          uVar34 = auVar26._0_4_;
          if (auVar26._0_8_ == 0x8000) {
            uVar34 = 0x7fff;
          }
          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) =
               *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) | 0x8000;
          (&DAT_005e1e54)[uVar35 * 0x28] = uVar34;
        }
        else {
          iVar31 = -2;
        }
      }
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0x9f:
    iVar31 = 0;
    iVar19 = (&DAT_005e1e54)[uVar35 * 0x28];
    *(undefined4 *)((long)param_4 + 4) = 100;
    *(undefined4 *)((long)param_4 + 8) = 0;
    *(undefined4 *)((long)param_4 + 0x10) = 0;
    *(undefined4 *)param_4 = 0;
    *(int *)((long)param_4 + 0xc) = (int)((ulong)(uint)(iVar19 * 100) + 0x4000 >> 0xf);
    break;
  case 0xa0:
    uVar32 = *(uint *)param_4;
    if (uVar32 < 2) {
      iVar31 = 0;
      (&DAT_005e1e20)[uVar35 * 0x28] = uVar32;
      (&DAT_005e1e5c)[uVar35 * 0x28] = uVar32;
    }
    else {
      iVar31 = -2;
    }
    break;
  case 0xa1:
    iVar31 = 0;
    *(undefined4 *)param_4 = (&DAT_005e1e5c)[uVar35 * 0x28];
    break;
  case 0xa2:
    uVar32 = *(uint *)param_4;
    iVar31 = 0;
    if (uVar32 != 0) {
      if (uVar32 < 0x10000) {
        if (((uVar32 & 1) == 0) || (*(uint *)((long)param_4 + 4) < 3)) {
          if ((uVar32 >> 1 & 1) != 0) {
            if (0x7fffff < *(int *)((long)param_4 + 8)) {
              iVar31 = -2;
              break;
            }
            if (0x7fffff < *(int *)((long)param_4 + 0xc)) {
              iVar31 = -2;
              break;
            }
            if ((*(int *)((long)param_4 + 0xc) < -0x7fffff ||
                 *(int *)((long)param_4 + 8) < -0x7fffff) ||
               (0xfffffe < *(int *)((long)param_4 + 0x10) + 0x7fffffU)) {
              iVar31 = -2;
              break;
            }
          }
          if (((uVar32 >> 2 & 1) == 0) || (*(uint *)((long)param_4 + 0x14) < 0x1000000)) {
            if ((uVar32 >> 3 & 1) != 0) {
              if (0x7fffff < *(int *)((long)param_4 + 0x18)) {
                iVar31 = -2;
                break;
              }
              if (0x7fffff < *(int *)((long)param_4 + 0x1c)) {
                iVar31 = -2;
                break;
              }
              if ((*(int *)((long)param_4 + 0x1c) < -0x7fffff ||
                   *(int *)((long)param_4 + 0x18) < -0x7fffff) ||
                 (0xfffffe < *(int *)((long)param_4 + 0x20) + 0x7fffffU)) {
                iVar31 = -2;
                break;
              }
            }
            if ((uVar32 >> 4 & 1) != 0) {
              if (0x7fffff < *(int *)((long)param_4 + 0x24)) {
                iVar31 = -2;
                break;
              }
              if (0x7fffff < *(int *)((long)param_4 + 0x28)) {
                iVar31 = -2;
                break;
              }
              if ((*(int *)((long)param_4 + 0x28) < -0x7fffff ||
                   *(int *)((long)param_4 + 0x24) < -0x7fffff) ||
                 (0xfffffe < *(int *)((long)param_4 + 0x2c) + 0x7fffffU)) {
                iVar31 = -2;
                break;
              }
            }
            if (((uVar32 >> 5 & 1) == 0) || (*(uint *)((long)param_4 + 0x30) < 0x169)) {
              if (((uVar32 >> 6 & 1) == 0) || (*(uint *)((long)param_4 + 0x34) < 0x169)) {
                if (((uVar32 >> 7 & 1) == 0) || (*(int *)((long)param_4 + 0x38) + 10000U < 0x2711))
                {
                  if (((uVar32 >> 8 & 1) == 0) || (*(uint *)((long)param_4 + 0x40) < 0x800000)) {
                    if (((uVar32 >> 9 & 1) == 0) || (*(uint *)((long)param_4 + 0x3c) < 0x800000)) {
                      if ((uVar32 >> 10 & 1) != 0) {
                        if (0xa0000 < *(uint *)((long)param_4 + 0x44)) {
                          iVar31 = -2;
                          break;
                        }
                        if (1 < *(uint *)((long)param_4 + 0x48)) {
                          iVar31 = -2;
                          break;
                        }
                      }
                      if (((uVar32 >> 0xb & 1) == 0) || (*(uint *)((long)param_4 + 0x4c) < 2)) {
                        if ((uVar32 >> 0xc & 1) != 0) {
                          if (0x7fffff < *(int *)((long)param_4 + 0x50)) {
                            iVar31 = -2;
                            break;
                          }
                          if (0x7fffff < *(int *)((long)param_4 + 0x54)) {
                            iVar31 = -2;
                            break;
                          }
                          if ((*(int *)((long)param_4 + 0x54) < -0x7fffff ||
                               *(int *)((long)param_4 + 0x50) < -0x7fffff) ||
                             (0xfffffe < *(int *)((long)param_4 + 0x58) + 0x7fffffU)) {
                            iVar31 = -2;
                            break;
                          }
                        }
                        if ((uVar32 >> 0xd & 1) != 0) {
                          if (0x7fffff < *(int *)((long)param_4 + 0x5c)) {
                            iVar31 = -2;
                            break;
                          }
                          if (0x7fffff < *(int *)((long)param_4 + 0x60)) {
                            iVar31 = -2;
                            break;
                          }
                          if ((*(int *)((long)param_4 + 0x60) < -0x7fffff ||
                               *(int *)((long)param_4 + 0x5c) < -0x7fffff) ||
                             (0xfffffe < *(int *)((long)param_4 + 100) + 0x7fffffU)) {
                            iVar31 = -2;
                            break;
                          }
                        }
                        if ((uVar32 >> 0xe & 1) != 0) {
                          if (0x7fffff < *(int *)((long)param_4 + 0x68)) {
                            iVar31 = -2;
                            break;
                          }
                          if (0x7fffff < *(int *)((long)param_4 + 0x6c)) {
                            iVar31 = -2;
                            break;
                          }
                          if ((*(int *)((long)param_4 + 0x6c) < -0x7fffff ||
                               *(int *)((long)param_4 + 0x68) < -0x7fffff) ||
                             (0xfffffe < *(int *)((long)param_4 + 0x70) + 0x7fffffU)) {
                            iVar31 = -2;
                            break;
                          }
                        }
                        if ((uVar32 >> 0xf & 1) != 0) {
                          if (0xf < *(uint *)((long)param_4 + 0x74)) {
                            iVar31 = -2;
                            break;
                          }
                          if (((*(uint *)((long)param_4 + 0x74) >> 2 & 1) != 0) &&
                             (100 < *(uint *)((long)param_4 + 0x80))) {
                            iVar31 = -2;
                            break;
                          }
                        }
                        if ((uVar32 & 1) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 4);
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) =
                               *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) | 4;
                          *(undefined4 *)((long)&DAT_005e1dd4 + uVar35 * 0xa0 + 4) = uVar34;
                        }
                        if ((uVar32 & 4) != 0) {
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          (&DAT_005e1de8)[uVar35 * 0x28] = *(undefined4 *)((long)param_4 + 0x14);
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 1;
                        }
                        if ((uVar32 & 2) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 8);
                          uVar4 = *(undefined4 *)((long)param_4 + 0xc);
                          uVar5 = *(undefined4 *)((long)param_4 + 0x10);
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) =
                               *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) | 2;
                          (&DAT_005e1ddc)[uVar35 * 0x28] = uVar34;
                          (&DAT_005e1de0)[uVar35 * 0x28] = uVar4;
                          (&DAT_005e1de4)[uVar35 * 0x28] = uVar5;
                        }
                        if ((uVar32 & 8) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 0x1c);
                          uVar4 = *(undefined4 *)((long)param_4 + 0x20);
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          *(undefined4 *)(&DAT_005e1dec + uVar35 * 0x14) =
                               *(undefined4 *)((long)param_4 + 0x18);
                          *(undefined4 *)((long)&DAT_005e1dec + uVar35 * 0xa0 + 4) = uVar34;
                          *(undefined4 *)(&DAT_005e1df4 + uVar35 * 0x14) = uVar4;
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 8;
                        }
                        if ((uVar32 & 0x10) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 0x28);
                          uVar4 = *(undefined4 *)((long)param_4 + 0x2c);
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          *(undefined4 *)((long)&DAT_005e1df4 + uVar35 * 0xa0 + 4) =
                               *(undefined4 *)((long)param_4 + 0x24);
                          *(undefined4 *)(&DAT_005e1dfc + uVar35 * 0x14) = uVar34;
                          *(undefined4 *)((long)&DAT_005e1dfc + uVar35 * 0xa0 + 4) = uVar4;
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x10;
                        }
                        if ((uVar32 & 0x20) != 0) {
                          *(undefined4 *)(&DAT_005e1e04 + uVar35 * 0x14) =
                               *(undefined4 *)((long)param_4 + 0x30);
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) =
                               *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) | 0x20;
                        }
                        if ((uVar32 & 0x40) != 0) {
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          *(undefined4 *)((long)&DAT_005e1e04 + uVar35 * 0xa0 + 4) =
                               *(undefined4 *)((long)param_4 + 0x34);
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x40;
                        }
                        if ((uVar32 & 0x80) != 0) {
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          (&DAT_005e1e0c)[uVar35 * 0x28] = *(undefined4 *)((long)param_4 + 0x38);
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x80;
                        }
                        if ((uVar32 & 0x100) != 0) {
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          (&DAT_005e1e14)[uVar35 * 0x28] = *(undefined4 *)((long)param_4 + 0x40);
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x100;
                        }
                        if ((uVar32 & 0x200) != 0) {
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          (&DAT_005e1e10)[uVar35 * 0x28] = *(undefined4 *)((long)param_4 + 0x3c);
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x200;
                        }
                        if ((uVar32 & 0x400) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 0x48);
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          (&DAT_005e1e18)[uVar35 * 0x28] = *(undefined4 *)((long)param_4 + 0x44);
                          (&DAT_005e1e1c)[uVar35 * 0x28] = uVar34;
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x400;
                        }
                        if ((uVar32 & 0x1000) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 0x54);
                          uVar4 = *(undefined4 *)((long)param_4 + 0x58);
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          (&DAT_005e1e24)[uVar35 * 0x28] = *(undefined4 *)((long)param_4 + 0x50);
                          (&DAT_005e1e28)[uVar35 * 0x28] = uVar34;
                          (&DAT_005e1e2c)[uVar35 * 0x28] = uVar4;
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x800;
                        }
                        if ((uVar32 & 0x2000) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 0x60);
                          uVar4 = *(undefined4 *)((long)param_4 + 100);
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          (&DAT_005e1e30)[uVar35 * 0x28] = *(undefined4 *)((long)param_4 + 0x5c);
                          (&DAT_005e1e34)[uVar35 * 0x28] = uVar34;
                          (&DAT_005e1e38)[uVar35 * 0x28] = uVar4;
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x2000;
                        }
                        if ((uVar32 & 0x4000) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 0x6c);
                          uVar4 = *(undefined4 *)((long)param_4 + 0x70);
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          (&DAT_005e1e3c)[uVar35 * 0x28] = *(undefined4 *)((long)param_4 + 0x68);
                          (&DAT_005e1e40)[uVar35 * 0x28] = uVar34;
                          (&DAT_005e1e44)[uVar35 * 0x28] = uVar4;
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x4000;
                        }
                        if (((uVar32 & 0x8000) != 0) &&
                           ((*(uint *)((long)param_4 + 0x74) >> 2 & 1) != 0)) {
                          iVar31 = (int)(((ulong)*(uint *)((long)param_4 + 0x80) << 0xf) / 100);
                          uVar3 = *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14);
                          if (iVar31 == 0x8000) {
                            iVar31 = 0x7fff;
                          }
                          (&DAT_005e1e54)[uVar35 * 0x28] = iVar31;
                          *(uint *)(&DAT_005e1dc0 + uVar35 * 0x14) = uVar3 | 0x8000;
                        }
                        iVar31 = 0;
                        if ((uVar32 & 0x800) != 0) {
                          uVar34 = *(undefined4 *)((long)param_4 + 0x4c);
                          (&DAT_005e1e20)[uVar35 * 0x28] = uVar34;
                          (&DAT_005e1e5c)[uVar35 * 0x28] = uVar34;
                        }
                      }
                      else {
                        iVar31 = -2;
                      }
                    }
                    else {
                      iVar31 = -2;
                    }
                  }
                  else {
                    iVar31 = -2;
                  }
                }
                else {
                  iVar31 = -2;
                }
              }
              else {
                iVar31 = -2;
              }
            }
            else {
              iVar31 = -2;
            }
          }
          else {
            iVar31 = -2;
          }
        }
        else {
          iVar31 = -2;
        }
      }
      else {
        iVar31 = -2;
      }
    }
    break;
  case 0xa3:
    lVar2 = uVar35 + 1;
    lVar1 = uVar35 * 0xa0;
    iVar31 = 0;
    uVar34 = (&DAT_005e1de8)[uVar35 * 0x28];
    uVar4 = (&DAT_005e1d3c)[lVar2 * 0x28];
    uVar5 = (&DAT_005e1d40)[lVar2 * 0x28];
    uVar6 = (&DAT_005e1d44)[lVar2 * 0x28];
    uVar7 = *(undefined4 *)(&DAT_005e1dec + uVar35 * 0x14);
    uVar8 = *(undefined4 *)((long)&DAT_005e1dec + lVar1 + 4);
    uVar9 = *(undefined4 *)(&DAT_005e1df4 + uVar35 * 0x14);
    uVar10 = *(undefined4 *)((long)&DAT_005e1df4 + lVar1 + 4);
    uVar11 = *(undefined4 *)(&DAT_005e1dfc + uVar35 * 0x14);
    uVar12 = *(undefined4 *)((long)&DAT_005e1dfc + lVar1 + 4);
    uVar13 = *(undefined4 *)(&DAT_005e1e04 + uVar35 * 0x14);
    uVar14 = *(undefined4 *)((long)&DAT_005e1e04 + lVar1 + 4);
    uVar15 = (&DAT_005e1e0c)[uVar35 * 0x28];
    uVar16 = (&DAT_005e1e10)[uVar35 * 0x28];
    uVar17 = (&DAT_005e1e14)[uVar35 * 0x28];
    uVar18 = (&DAT_005e1e18)[uVar35 * 0x28];
    *(undefined4 *)((long)param_4 + 4) = (&DAT_005e1d38)[lVar2 * 0x28];
    *(undefined4 *)((long)param_4 + 8) = uVar4;
    *(undefined4 *)((long)param_4 + 0xc) = uVar5;
    *(undefined4 *)((long)param_4 + 0x10) = uVar6;
    *(undefined4 *)((long)param_4 + 0x14) = uVar34;
    *(undefined4 *)((long)param_4 + 0x18) = uVar7;
    *(undefined4 *)((long)param_4 + 0x1c) = uVar8;
    *(undefined4 *)((long)param_4 + 0x20) = uVar9;
    *(undefined4 *)((long)param_4 + 0x24) = uVar10;
    *(undefined4 *)((long)param_4 + 0x28) = uVar11;
    *(undefined4 *)((long)param_4 + 0x2c) = uVar12;
    *(undefined4 *)((long)param_4 + 0x30) = uVar13;
    *(undefined4 *)((long)param_4 + 0x34) = uVar14;
    *(undefined4 *)((long)param_4 + 0x38) = uVar15;
    *(undefined4 *)((long)param_4 + 0x3c) = uVar16;
    *(undefined4 *)((long)param_4 + 0x40) = uVar17;
    *(undefined4 *)((long)param_4 + 0x44) = uVar18;
    iVar19 = (&DAT_005e1e54)[uVar35 * 0x28];
    uVar34 = (&DAT_005e1e1c)[uVar35 * 0x28];
    uVar4 = (&DAT_005e1e24)[uVar35 * 0x28];
    uVar5 = (&DAT_005e1e28)[uVar35 * 0x28];
    uVar6 = (&DAT_005e1e2c)[uVar35 * 0x28];
    uVar7 = (&DAT_005e1e30)[uVar35 * 0x28];
    uVar8 = (&DAT_005e1e34)[uVar35 * 0x28];
    uVar9 = (&DAT_005e1e38)[uVar35 * 0x28];
    uVar10 = (&DAT_005e1e40)[uVar35 * 0x28];
    uVar11 = (&DAT_005e1e3c)[uVar35 * 0x28];
    uVar12 = (&DAT_005e1e20)[uVar35 * 0x28];
    *(undefined4 *)((long)param_4 + 0x70) = (&DAT_005e1e44)[uVar35 * 0x28];
    *(undefined4 *)((long)param_4 + 0x48) = uVar34;
    *(undefined4 *)((long)param_4 + 0x4c) = uVar12;
    *(undefined4 *)((long)param_4 + 0x50) = uVar4;
    *(undefined4 *)((long)param_4 + 0x54) = uVar5;
    *(undefined4 *)((long)param_4 + 0x58) = uVar6;
    *(undefined4 *)((long)param_4 + 0x5c) = uVar7;
    *(undefined4 *)((long)param_4 + 0x60) = uVar8;
    *(undefined4 *)((long)param_4 + 100) = uVar9;
    *(undefined4 *)((long)param_4 + 0x68) = uVar11;
    *(undefined4 *)((long)param_4 + 0x6c) = uVar10;
    *(undefined4 *)param_4 = 0;
    *(int *)((long)param_4 + 0x80) = (int)((ulong)(uint)(iVar19 * 100) + 0x4000 >> 0xf);
    *(undefined4 *)((long)param_4 + 0x78) = 100;
    *(undefined4 *)((long)param_4 + 0x7c) = 0;
    *(undefined4 *)((long)param_4 + 0x84) = 0;
    *(undefined4 *)((long)param_4 + 0x74) = 0;
    break;
  case 0xa4:
    MaDsp_3DEngSet((_MASMW_P3DASNDSRCCTRL *)(&DAT_005e1dc0 + uVar35 * 0x14),
                   (_MASMW_P3DASNDSRCCTRL *)(&DAT_005e2040 + uVar35 * 0x14),
                   (_MASMW_P3DASNDSRCMOVE *)(&DAT_005e22c0 + uVar35 * 0x204));
    uVar32 = MaDsp_3DEngProc((_MASMW_P3DASNDSRCCTRL *)(&DAT_005e2040 + uVar35 * 0x14),
                             (_MASMW_P3DASNDSRCMOVE *)(&DAT_005e22c0 + uVar35 * 0x204),
                             (_MASMW_P3DACALCRESULT *)(&DAT_005e2ad0 + uVar35 * 0x18));
    if ((uVar32 & 3) != 0) {
      local_37 = (undefined1)(&DAT_005e2ad2)[uVar35 * 0x18];
      local_2f = (undefined1)(&DAT_005e2ad4)[uVar35 * 0x18];
      local_38 = (uchar)((ushort)(&DAT_005e2ad2)[uVar35 * 0x18] >> 8);
      local_30 = (uchar)((ushort)(&DAT_005e2ad4)[uVar35 * 0x18] >> 8);
      MaDevDrv_SendDspCoef(0x285 - param_3,&local_38,2);
      MaDevDrv_SendDspCoef(0x28c - param_3,&local_30,2);
      if (DAT_005e1d84 != 0) {
        uVar3 = (&DAT_005e20d4)[uVar35 * 0x28];
        if (uVar3 < 0x7fff) {
          uVar37 = (undefined1)(uVar3 >> 10);
          uVar36 = (undefined1)(uVar3 >> 2);
        }
        else {
          uVar36 = 0;
          uVar37 = 0x20;
        }
        local_20[0] = (ulong)CONCAT42((int)(local_20[0] >> 0x20),CONCAT11(uVar36,uVar37)) << 0x10;
        MaDevDrv_SendDspCoef((param_3 + 0xd) * 2,(uchar *)local_20,4);
        uVar3 = (uint)((int)(short)(&DAT_005e2ad0)[uVar35 * 0x18] *
                      *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
        local_27 = (undefined1)uVar3;
        local_28 = (uchar)(uVar3 >> 8);
        MaDevDrv_SendDspCoef(param_3 + 0x16,&local_28,2);
      }
      uVar32 = uVar32 & 0xfffffff7;
    }
    if (((uVar32 >> 2 & 1) != 0) &&
       (uVar3 = *(uint *)((long)&DAT_005e2040 + uVar35 * 0xa0 + 4), uVar3 != 0xff)) {
      MaSndDrv_SetDoppler(uVar3,(&DAT_005e2ad8)[uVar35 * 0xc]);
    }
    if (((uVar32 >> 3 & 1) != 0) && (DAT_005e1d84 != 0)) {
      uVar32 = (&DAT_005e20d4)[uVar35 * 0x28];
      if (uVar32 < 0x7fff) {
        uVar37 = (undefined1)(uVar32 >> 10);
        uVar36 = (undefined1)(uVar32 >> 2);
      }
      else {
        uVar36 = 0;
        uVar37 = 0x20;
      }
      local_20[0] = (ulong)CONCAT42((int)(local_20[0] >> 0x20),CONCAT11(uVar36,uVar37)) << 0x10;
      MaDevDrv_SendDspCoef((param_3 + 0xd) * 2,(uchar *)local_20,4);
      uVar32 = (uint)((int)(short)(&DAT_005e2ad0)[uVar35 * 0x18] *
                     *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
      local_27 = (undefined1)uVar32;
      local_28 = (uchar)(uVar32 >> 8);
      MaDevDrv_SendDspCoef(param_3 + 0x16,&local_28,2);
    }
    MaDevDrv_SendDspCoef(0,local_40,2);
    iVar31 = 0;
    break;
  case 0xa5:
    MaDsp_3DEngPause((_MASMW_P3DASNDSRCMOVE *)(&DAT_005e22c0 + uVar35 * 0x204));
    MaDevDrv_SendDspCoef(0,local_40,2);
    iVar31 = 0;
    break;
  case 0xa6:
    MaDsp_3DEngStart((_MASMW_P3DASNDSRCMOVE *)(&DAT_005e22c0 + uVar35 * 0x204));
    local_37 = (undefined1)(&DAT_005e2ad2)[uVar35 * 0x18];
    local_2f = (undefined1)(&DAT_005e2ad4)[uVar35 * 0x18];
    local_38 = (uchar)((ushort)(&DAT_005e2ad2)[uVar35 * 0x18] >> 8);
    local_30 = (uchar)((ushort)(&DAT_005e2ad4)[uVar35 * 0x18] >> 8);
    MaDevDrv_SendDspCoef(0x285 - param_3,&local_38,2);
    MaDevDrv_SendDspCoef(0x28c - param_3,&local_30,2);
    if (DAT_005e1d84 != 0) {
      uVar32 = (&DAT_005e20d4)[uVar35 * 0x28];
      if (uVar32 < 0x7fff) {
        uVar37 = (undefined1)(uVar32 >> 10);
        uVar36 = (undefined1)(uVar32 >> 2);
      }
      else {
        uVar36 = 0;
        uVar37 = 0x20;
      }
      local_20[0] = (ulong)CONCAT42((int)(local_20[0] >> 0x20),CONCAT11(uVar36,uVar37)) << 0x10;
      MaDevDrv_SendDspCoef((param_3 + 0xd) * 2,(uchar *)local_20,4);
      uVar32 = (uint)((int)(short)(&DAT_005e2ad0)[uVar35 * 0x18] *
                     *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
      local_27 = (undefined1)uVar32;
      local_28 = (uchar)(uVar32 >> 8);
      MaDevDrv_SendDspCoef(param_3 + 0x16,&local_28,2);
    }
    MaDevDrv_SendDspCoef(0,local_40,2);
    iVar31 = 0;
    break;
  default:
    iVar31 = -2;
    break;
  case 0xb0:
    MaDsp_3DEngGetCurPos
              ((_MASMW_P3DASNDSRCMOVE *)(&DAT_005e22c0 + uVar35 * 0x204),0,
               (_MASMW_P3DAVECTOR *)&local_50);
    iVar31 = 0;
    *(undefined4 *)param_4 = local_50;
    *(undefined4 *)((long)param_4 + 4) = local_4c;
    *(undefined4 *)((long)param_4 + 8) = local_48;
    break;
  case 0xb2:
    MaDsp_3DEngGetCurPos
              ((_MASMW_P3DASNDSRCMOVE *)(&DAT_005e22c0 + uVar35 * 0x204),2,
               (_MASMW_P3DAVECTOR *)&local_50);
    iVar31 = 0;
    *(undefined4 *)param_4 = local_50;
    *(undefined4 *)((long)param_4 + 4) = local_4c;
    *(undefined4 *)((long)param_4 + 8) = local_48;
    break;
  case 0xb3:
    iVar19 = *(int *)param_4;
    if (iVar19 == 0xff) {
      uVar32 = *(uint *)((long)&DAT_005e2040 + uVar35 * 0xa0 + 4);
      (&DAT_005e2ad8)[uVar35 * 0xc] = 0x400;
      MaSndDrv_SetDoppler(uVar32,0x400);
    }
    iVar31 = 0;
    *(int *)((long)&DAT_005e2040 + uVar35 * 0xa0 + 4) = iVar19;
  }
LAB_002197f8:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar31);
}

