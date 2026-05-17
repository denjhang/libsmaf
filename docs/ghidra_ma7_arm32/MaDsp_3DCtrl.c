/* MaDsp_3DCtrl @ 000d9628 7506B */


/* YAMAHA::MaDsp_3DCtrl(unsigned int, unsigned int, unsigned int, void*) */

void YAMAHA::MaDsp_3DCtrl(uint param_1,uint param_2,uint param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  ushort uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  _MASMW_P3DASNDSRCMOVE *p_Var16;
  undefined4 uVar17;
  _MASMW_P3DACALCRESULT *p_Var18;
  _MASMW_P3DASNDSRCCTRL *p_Var19;
  int iVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  undefined1 uVar27;
  undefined2 local_50 [2];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40 [5];
  int local_2c;
  
  iVar4 = DAT_000da2fc;
  iVar3 = DAT_000da2f4;
  iVar2 = DAT_000da2cc;
  iVar26 = DAT_000da2b4;
  iVar20 = DAT_000da2b0;
  iVar5 = DAT_000da2a8;
  iVar14 = DAT_000da28c;
  iVar13 = DAT_000da27c + 0xd963c;
  piVar15 = *(int **)(iVar13 + DAT_000da280);
  local_50[0] = *(undefined2 *)(DAT_000da284 + 0xd9644);
  local_2c = *piVar15;
  if (param_1 == 0) {
    switch(param_2) {
    case 0x3c:
      puVar24 = (uint *)(DAT_000da28c + 0xd975e);
      iVar5 = 0;
      uVar7 = *puVar24;
      *(undefined4 *)(DAT_000da28c + 0xd976e) = 0x10000;
      *(undefined4 *)(iVar14 + 0xd978e) = 0x8fc;
      *(undefined4 *)(iVar14 + 0xd979e) = 1;
      *puVar24 = uVar7 | 0xb;
      *(undefined4 *)(iVar14 + 0xd97a2) = 1;
      *(undefined4 *)(iVar14 + 0xd976a) = 0;
      break;
    default:
switchD_000d96e6_caseD_3d:
      iVar5 = -2;
      break;
    case 0x40:
      if (1 < param_3) {
        iVar5 = -2;
        goto LAB_000d9658;
      }
      iVar5 = 0;
      *(uint *)(DAT_000da2bc + 0xd98d8) = param_3;
      break;
    case 0x41:
      iVar5 = 0;
      *(undefined4 *)param_4 = *(undefined4 *)(DAT_000da2a4 + 0xd985a);
      break;
    case 0x42:
      if (1 < param_3) {
        iVar5 = -2;
        goto LAB_000d9658;
      }
      puVar24 = (uint *)(DAT_000da2a8 + 0xd982e);
      piVar9 = (int *)(DAT_000da2a8 + 0xd9882);
      *(uint *)(DAT_000da2a8 + 0xd983a) = param_3;
      iVar20 = DAT_000da2b4;
      iVar14 = DAT_000da2b0;
      if ((*piVar9 == 0) && (param_3 != 0)) {
        iVar26 = *(int *)(iVar13 + DAT_000da2ac);
        *(undefined4 *)(iVar5 + 0xd9832) = 0;
        uVar7 = *puVar24;
        *(undefined4 *)(iVar26 + 4) = 0;
        uVar7 = uVar7 | 4;
        *(undefined4 *)(iVar5 + 0xd985e) =
             *(undefined4 *)(*(int *)(iVar13 + iVar20) + (uint)**(ushort **)(iVar13 + iVar14) * 4);
      }
      else {
        uVar7 = *(uint *)(DAT_000db4f0 + 0xdb106);
      }
      iVar5 = 0;
      *(uint *)(DAT_000da2b8 + 0xd9880) = uVar7 | 1;
      break;
    case 0x43:
      iVar5 = 0;
      *(undefined4 *)param_4 = *(undefined4 *)(DAT_000da298 + 0xd97da);
      break;
    case 0x44:
      iVar5 = 0;
      *(undefined4 *)param_4 = 4;
      break;
    case 0x48:
      if (2 < param_3) {
        iVar5 = -2;
        goto LAB_000d9658;
      }
      iVar5 = 0;
      *(uint *)(DAT_000da29c + 0xd9838) = param_3;
      break;
    case 0x49:
      iVar5 = 0;
      *(undefined4 *)param_4 = *(undefined4 *)(DAT_000da2a0 + 0xd984a);
      break;
    case 0x4a:
      if (0xa0000 < param_3) {
        iVar5 = -2;
        goto LAB_000d9658;
      }
      iVar5 = 0;
      puVar24 = (uint *)(DAT_000da290 + 0xd979c);
      *(uint *)(DAT_000da290 + 0xd97ac) = param_3;
      *puVar24 = *puVar24 | 2;
      break;
    case 0x4b:
      iVar5 = 0;
      *(undefined4 *)param_4 = *(undefined4 *)(DAT_000da294 + 0xd97ca);
      break;
    case 0x54:
      puVar24 = (uint *)(DAT_000da2c8 + 0xd9914);
      if (*(int *)(DAT_000da2c8 + 0xd9920) == 0) {
        iVar5 = -1;
        goto LAB_000d9658;
      }
      if (*(int *)param_4 << 0x19 < 0) {
        if (0x7404 < *(int *)((int)param_4 + 0x1c) - 300U) goto switchD_000d96e6_caseD_3d;
        iVar5 = 0;
        *(int *)(DAT_000da2c8 + 0xd9944) = *(int *)((int)param_4 + 0x1c);
        *puVar24 = *puVar24 | 8;
      }
      else {
LAB_000d9924:
        iVar5 = 0;
      }
      break;
    case 0x55:
      iVar5 = 0;
      uVar10 = *(undefined4 *)(DAT_000da2f8 + 0xd9ebe);
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 0x18) = 0;
      *(undefined4 *)((int)param_4 + 0x1c) = uVar10;
      *(undefined4 *)((int)param_4 + 0x28) = 0;
      *(undefined4 *)param_4 = 0;
      *(undefined4 *)((int)param_4 + 4) = 100;
      *(undefined4 *)((int)param_4 + 0xc) = 100;
      *(undefined4 *)((int)param_4 + 0x14) = 100;
      *(undefined4 *)((int)param_4 + 0x10) = 9;
      *(undefined4 *)((int)param_4 + 0x20) = 0x8000;
      *(undefined4 *)((int)param_4 + 0x24) = 0x100;
      break;
    case 0x56:
      iVar14 = *(int *)param_4;
      if ((iVar14 << 0x1f < 0) && (1 < *(uint *)((int)param_4 + 4))) {
        iVar5 = -2;
        goto LAB_000d9658;
      }
      if ((iVar14 << 0x1e < 0) && (0xa0000 < *(uint *)((int)param_4 + 8))) {
        iVar5 = -2;
        goto LAB_000d9658;
      }
      if (*(int *)((int)param_4 + 0xc) << 0x19 < 0) {
        if (0x7404 < *(int *)((int)param_4 + 0x28) - 300U) {
          iVar5 = -2;
          break;
        }
        puVar24 = (uint *)(DAT_000db4f4 + 0xdb14c);
        *(int *)(DAT_000db4f4 + 0xdb17c) = *(int *)((int)param_4 + 0x28);
        *puVar24 = *puVar24 | 8;
        iVar14 = *(int *)param_4;
      }
      if (iVar14 << 0x1f < 0) {
        puVar24 = (uint *)(DAT_000da2c0 + 0xd98ce);
        *(undefined4 *)(DAT_000da2c0 + 0xd98da) = *(undefined4 *)((int)param_4 + 4);
        *puVar24 = *puVar24 | 1;
        iVar14 = *(int *)param_4;
      }
      if (-1 < iVar14 << 0x1e) goto LAB_000d9924;
      iVar5 = 0;
      uVar7 = *(uint *)((int)param_4 + 8);
      puVar24 = (uint *)(DAT_000da2c4 + 0xd98f2);
      if (0x9ffff < uVar7) {
        uVar7 = 0xa0000;
      }
      *(uint *)(DAT_000da2c4 + 0xd9902) = uVar7;
      *puVar24 = *puVar24 | 2;
      break;
    case 0x57:
      *(undefined4 *)((int)param_4 + 0x34) = 0;
      uVar10 = *(undefined4 *)(iVar4 + 0xd9ef6);
      iVar5 = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      uVar17 = *(undefined4 *)(iVar4 + 0xd9ed2);
      *(undefined4 *)((int)param_4 + 0x28) = uVar10;
      *(undefined4 *)((int)param_4 + 0x10) = 100;
      *(undefined4 *)((int)param_4 + 4) = uVar17;
      uVar10 = *(undefined4 *)(iVar4 + 0xd9ed6);
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 0x24) = 0;
      *(undefined4 *)((int)param_4 + 8) = uVar10;
      *(undefined4 *)((int)param_4 + 0x18) = 100;
      *(undefined4 *)((int)param_4 + 0x20) = 100;
      *(undefined4 *)param_4 = 0;
      *(undefined4 *)((int)param_4 + 0x1c) = 9;
      *(undefined4 *)((int)param_4 + 0x2c) = 0x8000;
      *(undefined4 *)((int)param_4 + 0x30) = 0x100;
      break;
    case 0x58:
      uVar7 = *(uint *)(DAT_000da2cc + 0xd9934);
      if ((uVar7 & 2) != 0) {
        puVar12 = (undefined4 *)(DAT_000da2cc + 0xd9944);
        p_Var18 = (_MASMW_P3DACALCRESULT *)(DAT_000da2cc + 0xda6d4);
        p_Var16 = (_MASMW_P3DASNDSRCMOVE *)(DAT_000da2cc + 0xd9ec4);
        p_Var19 = (_MASMW_P3DASNDSRCCTRL *)(DAT_000da2cc + 0xd9c44);
        *(undefined4 *)(DAT_000da2cc + 0xd9ec8) = *puVar12;
        *(undefined4 *)(iVar2 + 0xd998c) = *puVar12;
        MaDsp_3DEngProc4Doppler(p_Var19,p_Var16,p_Var18);
        iVar5 = DAT_000da2d4;
        iVar14 = DAT_000da2d0;
        if (*(uint *)(iVar2 + 0xd9c48) != 0xff) {
          MaSndDrv_SetDoppler(*(uint *)(iVar2 + 0xd9c48),*(uint *)(DAT_000da2d0 + 0xda71a));
        }
        *(undefined4 *)(iVar2 + 0xda0cc) = *(undefined4 *)(iVar5 + 0xd99d0);
        MaDsp_3DEngProc4Doppler
                  ((_MASMW_P3DASNDSRCCTRL *)(iVar2 + 0xd9ce4),
                   (_MASMW_P3DASNDSRCMOVE *)(iVar2 + 0xda0c8),
                   (_MASMW_P3DACALCRESULT *)(iVar2 + 0xda704));
        if (*(uint *)(iVar2 + 0xd9ce8) != 0xff) {
          MaSndDrv_SetDoppler(*(uint *)(iVar2 + 0xd9ce8),*(uint *)(iVar14 + 0xda74a));
        }
        *(undefined4 *)((int)&DAT_000da2d0 + iVar2) = *(undefined4 *)(iVar5 + 0xd99d0);
        MaDsp_3DEngProc4Doppler
                  ((_MASMW_P3DASNDSRCCTRL *)(iVar2 + 0xd9d84),
                   (_MASMW_P3DASNDSRCMOVE *)((int)&DAT_000da2cc + iVar2),
                   (_MASMW_P3DACALCRESULT *)(iVar2 + 0xda734));
        if (*(uint *)(iVar2 + 0xd9d88) != 0xff) {
          MaSndDrv_SetDoppler(*(uint *)(iVar2 + 0xd9d88),*(uint *)(iVar14 + 0xda77a));
        }
        *(undefined4 *)(iVar2 + 0xda4d4) = *(undefined4 *)(iVar5 + 0xd99d0);
        MaDsp_3DEngProc4Doppler
                  ((_MASMW_P3DASNDSRCCTRL *)(iVar2 + 0xd9e24),
                   (_MASMW_P3DASNDSRCMOVE *)(iVar2 + 0xda4d0),
                   (_MASMW_P3DACALCRESULT *)(iVar2 + 0xda764));
        if (*(uint *)(iVar2 + 0xd9e28) != 0xff) {
          MaSndDrv_SetDoppler(*(uint *)(iVar2 + 0xd9e28),*(uint *)(iVar14 + 0xda7aa));
        }
      }
      iVar14 = DAT_000da2d8;
      if (((uVar7 & 1) != 0) &&
         (iVar5 = *(int *)(DAT_000da2d8 + 0xd9a4e), *(int *)(DAT_000da2d8 + 0xd9a96) != iVar5)) {
        iVar20 = MaDevDrv_ClearDspDelayRam(0xffff0000);
        if (-1 < iVar20) {
          if (iVar5 == 0) {
            local_40[0] = local_40[0] & 0xffff0000;
            MaDevDrv_SendDspCoef(0x286,(uchar *)local_40,2);
            MaDevDrv_SendDspCoef(0x28d,(uchar *)local_40,2);
            puVar12 = *(undefined4 **)(iVar13 + DAT_000db4f8);
            *puVar12 = 0;
            puVar12[3] = 0;
            *(undefined1 *)(puVar12 + 2) = 0xfe;
            *(undefined1 *)((int)puVar12 + 9) = 0xfe;
            lup_calc('\v',0xff);
            lup_calc('\x02',0xff);
            lup_calc('\x05',0xfd);
          }
          else {
            local_40[0] = 0;
            local_40[1] = 0;
            iVar5 = MaDevDrv_SendDspCoef(0xd1,(uchar *)local_40,8);
            if (-1 < iVar5) {
              uVar6 = *(uint *)(iVar14 + 0xd9f26);
              uVar25 = *(uint *)(iVar14 + 0xd9de6) >> 2;
              uVar21 = (undefined1)(uVar25 >> 8);
              uVar23 = *(uint *)(iVar14 + 0xd9e86) >> 2;
              if (0x7ffe < *(uint *)(iVar14 + 0xd9de6)) {
                uVar21 = 0x20;
                uVar25 = 0;
              }
              uVar27 = (undefined1)(uVar23 >> 8);
              if (0x7ffe < *(uint *)(iVar14 + 0xd9e86)) {
                uVar27 = 0x20;
                uVar23 = 0;
              }
              uVar8 = uVar6 >> 2;
              *(char *)(iVar14 + 0xda961) = (char)uVar25;
              uVar22 = (undefined1)(uVar8 >> 8);
              if (0x7ffe < uVar6) {
                uVar8 = 0;
              }
              uVar25 = *(uint *)(iVar14 + 0xd9fc6);
              if (0x7ffe < uVar6) {
                uVar22 = 0x20;
              }
              *(char *)(iVar14 + 0xda965) = (char)uVar23;
              *(undefined1 *)(iVar14 + 0xda964) = uVar27;
              uVar27 = (undefined1)((uVar25 >> 2) >> 8);
              if (0x7ffe < uVar25) {
                uVar27 = 0x20;
              }
              *(undefined1 *)(iVar14 + 0xda968) = uVar22;
              *(char *)(iVar14 + 0xda969) = (char)uVar8;
              *(undefined1 *)(iVar14 + 0xda960) = uVar21;
              if (uVar25 < 0x7fff) {
                uVar21 = (undefined1)(uVar25 >> 2);
              }
              else {
                uVar21 = 0;
              }
              *(char *)(iVar14 + 0xda957) = (char)*(undefined2 *)(iVar14 + 0xda7e2);
              *(undefined1 *)(iVar14 + 0xda96c) = uVar27;
              *(undefined1 *)(iVar14 + 0xda96d) = uVar21;
              *(char *)(iVar14 + 0xda956) = (char)((ushort)*(undefined2 *)(iVar14 + 0xda7e2) >> 8);
              *(undefined1 *)(iVar14 + 0xda95e) = 0;
              *(undefined1 *)(iVar14 + 0xda95f) = 0;
              *(undefined1 *)(iVar14 + 0xda962) = 0;
              *(undefined1 *)(iVar14 + 0xda963) = 0;
              *(undefined1 *)(iVar14 + 0xda966) = 0;
              *(undefined1 *)(iVar14 + 0xda967) = 0;
              *(undefined1 *)(iVar14 + 0xda96a) = 0;
              *(undefined1 *)(iVar14 + 0xda96b) = 0;
              *(undefined1 *)(iVar14 + 0xda96e) = 0;
              *(char *)(iVar14 + 0xda959) = (char)*(undefined2 *)(iVar14 + 0xda812);
              *(char *)(iVar14 + 0xda95b) = (char)*(undefined2 *)(iVar14 + 0xda842);
              *(char *)(iVar14 + 0xda95d) = (char)*(undefined2 *)(iVar14 + 0xda872);
              *(char *)(iVar14 + 0xda958) = (char)((ushort)*(undefined2 *)(iVar14 + 0xda812) >> 8);
              *(char *)(iVar14 + 0xda95a) = (char)((ushort)*(undefined2 *)(iVar14 + 0xda842) >> 8);
              *(char *)(iVar14 + 0xda95c) = (char)((ushort)*(undefined2 *)(iVar14 + 0xda872) >> 8);
              *(undefined1 *)(iVar14 + 0xda96f) = 0;
              *(undefined1 *)(iVar14 + 0xda970) = 0;
              *(undefined1 *)(iVar14 + 0xda971) = 0;
              *(undefined1 *)(iVar14 + 0xda972) = 0;
              *(undefined1 *)(iVar14 + 0xda973) = 0;
              *(undefined1 *)(iVar14 + 0xda974) = 0;
              *(undefined1 *)(iVar14 + 0xda975) = 0;
              *(undefined1 *)(iVar14 + 0xda976) = 0x7f;
              *(undefined1 *)(iVar14 + 0xda978) = 0x7f;
              *(undefined1 *)(iVar14 + 0xda97a) = 0x7f;
              *(undefined1 *)(iVar14 + 0xda97c) = 0x7f;
              *(undefined1 *)(iVar14 + 0xda97e) = 0x7f;
              *(undefined1 *)(iVar14 + 0xda980) = 0x7f;
              *(undefined1 *)(iVar14 + 0xda977) = 0xff;
              *(undefined1 *)(iVar14 + 0xda979) = 0xff;
              *(undefined1 *)(iVar14 + 0xda97b) = 0xff;
              *(undefined1 *)(iVar14 + 0xda97d) = 0xff;
              *(undefined1 *)(iVar14 + 0xda97f) = 0xff;
              *(undefined1 *)(iVar14 + 0xda981) = 0xff;
              iVar5 = MaDevDrv_SetDspRamAddress(0x13,0x72);
              if (iVar5 < 0) {
LAB_000db252:
                lup_calc('\x05','\0');
                lup_calc('\x05','\x02');
              }
              else {
                iVar5 = MaDevDrv_SendDspProgram(0x13,*(uchar **)(iVar13 + DAT_000da2dc),0xba);
                if ((-1 < iVar5) && (iVar5 = MaDevDrv_ClearDspProgram(0x32,0x72), -1 < iVar5)) {
                  MaDevDrv_SendDspCoef(0x13,(uchar *)(iVar14 + 0xda950),0x3e);
                  iVar14 = MaDevDrv_SetDspRamAddress(0,0);
                  if (iVar14 < 0) goto LAB_000db252;
                  iVar14 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
                  if (((-1 < iVar14) && (iVar14 = MaDevDrv_ClearDspProgram(0x76,0xcc), -1 < iVar14))
                     && (iVar5 = MaDevDrv_SetDspRamAddress(0,0), iVar14 = DAT_000da2e0, -1 < iVar5))
                  {
                    puVar24 = *(uint **)(iVar13 + DAT_000da2ac);
                    puVar24[1] = 0;
                    *(undefined1 *)(puVar24 + 2) = 2;
                    *puVar24 = (uint)**(byte **)(iVar13 + iVar14);
                    lup_calc('\v',0xfd);
                    local_40[0] = CONCAT22(local_40[0]._2_2_,0xff00);
                    local_40[0] = CONCAT31(local_40[0]._1_3_,0x7f);
                    MaDevDrv_SendDspCoef(0x286,(uchar *)local_40,2);
                    MaDevDrv_SendDspCoef(0x28d,(uchar *)local_40,2);
                  }
                }
              }
            }
          }
        }
        iVar14 = DAT_000da2e4;
        uVar7 = uVar7 & 0xfffffffa;
        puVar12 = (undefined4 *)(DAT_000da2e4 + 0xd9c8e);
        *(undefined4 *)(DAT_000da2e4 + 0xd9cde) = *(undefined4 *)(DAT_000da2e4 + 0xd9c96);
        *(undefined4 *)(iVar14 + 0xd9cd6) = *puVar12;
      }
      if (((uVar7 & 0xc) == 0) ||
         (piVar9 = (int *)(DAT_000da2e8 + 0xd9cac),
         *(undefined4 *)(DAT_000da2e8 + 0xd9d18) = *(undefined4 *)(DAT_000da2e8 + 0xd9cd0),
         *piVar9 == 0)) {
LAB_000d9e10:
        iVar5 = 0;
      }
      else if ((uVar7 & 4) == 0) {
LAB_000d9cfc:
        iVar20 = DAT_000da2ec;
        iVar14 = DAT_000da2b4;
        iVar5 = 0;
        if ((uVar7 & 8) != 0) {
          uVar11 = 0;
          iVar5 = *(int *)(iVar13 + DAT_000da2ac);
          *(undefined2 *)(iVar5 + 0x2e6) = 0x45;
          piVar9 = *(int **)(iVar13 + iVar14);
          uVar7 = *(uint *)(iVar20 + 0xd9d96);
          if ((uint)(*piVar9 + piVar9[1]) >> 1 <= uVar7) {
            uVar11 = 1;
            if ((uint)(piVar9[1] + piVar9[2]) >> 1 <= uVar7) {
              uVar11 = 2;
              if ((uint)(piVar9[2] + piVar9[3]) >> 1 <= uVar7) {
                uVar11 = 3;
                if ((uint)(piVar9[3] + piVar9[4]) >> 1 <= uVar7) {
                  uVar11 = 4;
                  piVar1 = piVar9 + 5;
                  iVar14 = *piVar1;
                  uVar6 = piVar9[4] + iVar14;
                  piVar9 = piVar9 + 4;
                  while (uVar6 >> 1 <= uVar7) {
                    uVar11 = uVar11 + 1 & 0xff;
                    if (uVar11 == 0x45) goto LAB_000d9e08;
                    if (uVar7 < (uint)(iVar14 + piVar1[1]) >> 1) break;
                    uVar11 = uVar11 + 1 & 0xff;
                    if (uVar7 < (uint)(piVar1[1] + piVar1[2]) >> 1) break;
                    uVar11 = uVar11 + 1 & 0xff;
                    if (uVar7 < (uint)(piVar1[2] + piVar9[4]) >> 1) break;
                    uVar11 = uVar11 + 1 & 0xff;
                    if (uVar7 < (uint)(piVar9[4] + piVar9[5]) >> 1) break;
                    uVar11 = uVar11 + 1 & 0xff;
                    if (uVar7 < (uint)(piVar9[5] + piVar9[6]) >> 1) break;
                    uVar11 = uVar11 + 1 & 0xff;
                    if (uVar7 < (uint)(piVar9[6] + piVar9[7]) >> 1) break;
                    uVar11 = uVar11 + 1 & 0xff;
                    if (uVar7 < (uint)(piVar9[7] + piVar9[8]) >> 1) break;
                    piVar1 = piVar9 + 9;
                    iVar14 = *piVar1;
                    uVar11 = uVar11 + 1 & 0xff;
                    uVar6 = piVar9[8] + iVar14;
                    piVar9 = piVar9 + 8;
                  }
                }
              }
            }
          }
          *(ushort *)(iVar5 + 0x2e6) = uVar11;
LAB_000d9e08:
          lup_calc('\v','\0');
          goto LAB_000d9e10;
        }
      }
      else {
        **(uint **)(iVar13 + DAT_000da2ac) =
             (uint)*(byte *)(*(int *)(iVar13 + DAT_000da2e0) +
                            (*(uint **)(iVar13 + DAT_000da2ac))[1]);
        iVar5 = MaDevDrv_ClearDspDelayRam(0xffff0000);
        if (((-1 < iVar5) && (iVar5 = lup_calc('\v',0xfd), -1 < iVar5)) &&
           (iVar5 = MaDevDrv_ClearDspDelayRam(0xffff0000), -1 < iVar5)) goto LAB_000d9cfc;
      }
      *(undefined4 *)(DAT_000da2f0 + 0xd9e22) = 0;
      MaDevDrv_SendDspCoef(0,(uchar *)local_50,2);
      break;
    case 0x59:
      puVar24 = (uint *)(DAT_000da2f4 + 0xd9e34);
      if (*(int *)(DAT_000da2f4 + 0xd9e40) == 0) {
        iVar5 = -1;
        goto LAB_000d9658;
      }
      if (9 < param_3) {
        iVar5 = -2;
        goto LAB_000d9658;
      }
      iVar5 = 0;
      iVar14 = *(int *)(iVar13 + DAT_000da2ac);
      *(uint *)(DAT_000da2f4 + 0xd9e38) = param_3;
      uVar7 = *puVar24;
      *(uint *)(iVar14 + 4) = param_3;
      iVar20 = *(int *)(iVar13 + iVar20);
      iVar14 = *(int *)(iVar13 + iVar26);
      *puVar24 = uVar7 | 4;
      *(undefined4 *)(iVar3 + 0xd9e64) =
           *(undefined4 *)(iVar14 + (uint)*(ushort *)(iVar20 + param_3 * 0x20) * 4);
      break;
    case 0x5a:
      if (*(int *)(DAT_000da288 + 0xd973c) == 0) {
        iVar5 = -2;
        goto LAB_000d9658;
      }
      iVar5 = 0;
      *(undefined4 *)param_4 = *(undefined4 *)(DAT_000da288 + 0xd9734);
    }
    MaDevDrv_SendDspCoef(0,(uchar *)local_50,2);
    goto LAB_000d9658;
  }
  if (param_1 != 1) {
    iVar5 = -2;
    goto LAB_000d9658;
  }
  switch(param_2) {
  case 0x80:
    iVar26 = DAT_000db480 + 0xda880;
    iVar20 = iVar26 + param_3 * 0xa0;
    iVar5 = (param_3 + 1) * 0xa0;
    iVar14 = iVar26 + iVar5;
    *(undefined4 *)(iVar20 + 0x98) = 0;
    *(undefined4 *)(iVar20 + 0x9c) = 0;
    *(undefined4 *)(iVar26 + iVar5) = 0;
    *(undefined4 *)(iVar14 + 8) = 1;
    *(undefined4 *)(iVar14 + 4) = 0;
    *(undefined4 *)(iVar20 + 0xe8) = 0x10000;
    *(undefined4 *)(iVar20 + 0x11c) = 100;
    *(undefined4 *)(iVar20 + 0xb4) = 1000;
    *(undefined4 *)(iVar20 + 0xe4) = 1000;
    *(undefined4 *)(iVar20 + 0x108) = 1000;
    *(undefined4 *)(iVar20 + 0x110) = 1000;
    *(undefined4 *)(iVar20 + 0xac) = 0;
    *(undefined4 *)(iVar20 + 0xb0) = 0;
    *(undefined4 *)(iVar20 + 0xb8) = 0;
    *(undefined4 *)(iVar20 + 0xbc) = 0;
    *(undefined4 *)(iVar20 + 0xc0) = 0;
    *(undefined4 *)(iVar20 + 0xc4) = 0;
    *(undefined4 *)(iVar20 + 200) = 0;
    *(undefined4 *)(iVar20 + 0xcc) = 0;
    *(undefined4 *)(iVar20 + 0xd0) = 0;
    *(undefined4 *)(iVar20 + 0xd4) = 0;
    *(undefined4 *)(iVar20 + 0xdc) = 0;
    *(undefined4 *)(iVar20 + 0xec) = 0;
    *(undefined4 *)(iVar20 + 0xf4) = 0;
    *(undefined4 *)(iVar20 + 0xf8) = 0;
    *(undefined4 *)(iVar20 + 0xfc) = 0;
    *(undefined4 *)(iVar20 + 0x100) = 0;
    *(undefined4 *)(iVar20 + 0x104) = 0;
    *(undefined4 *)(iVar20 + 0x10c) = 0;
    *(undefined4 *)(iVar20 + 0x114) = 0;
    *(undefined4 *)(iVar20 + 0x118) = 0;
    *(undefined4 *)(iVar20 + 0xd8) = 0xb4;
    *(undefined4 *)(iVar20 + 0xe0) = 10000;
    *(undefined4 *)(iVar20 + 0x120) = 0;
    *(undefined4 *)(iVar20 + 0x124) = 0;
    *(undefined4 *)(iVar20 + 0x128) = 0;
    *(undefined4 *)(iVar20 + 0xf0) = 1;
    *(undefined4 *)(iVar20 + 300) = 1;
    *(undefined4 *)(iVar20 + 0x90) = 0x1ffff;
    MaDsp_3DEngStart((_MASMW_P3DASNDSRCMOVE *)(iVar26 + param_3 * 0x204 + 0x590));
    iVar5 = 0;
    break;
  case 0x81:
    if (*(uint *)param_4 < 0x1000000) {
      iVar5 = 0;
      iVar14 = DAT_000db484 + 0xda970 + param_3 * 0xa0;
      *(uint *)(iVar14 + 0xb8) = *(uint *)param_4;
      *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 1;
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x82:
    iVar14 = *(int *)param_4;
    if (0x7fffff < iVar14) {
      iVar5 = -2;
      break;
    }
    if (0x7fffff < *(int *)((int)param_4 + 4)) {
      iVar5 = -2;
      break;
    }
    if (0xfffffe < *(int *)((int)param_4 + 8) + 0x7fffffU) {
      iVar5 = -2;
      break;
    }
    if (iVar14 < -0x7fffff) {
      iVar5 = -2;
      break;
    }
    if (*(int *)((int)param_4 + 4) < -0x7fffff) {
      iVar5 = -2;
      break;
    }
    iVar26 = param_3 * 0xa0 + DAT_000db488 + 0xda9f0;
    iVar20 = (param_3 + 1) * 0xa0 + DAT_000db488 + 0xda9f0;
    *(int *)(iVar26 + 0xac) = iVar14;
    *(undefined4 *)(iVar26 + 0xb0) = *(undefined4 *)((int)param_4 + 4);
    uVar10 = *(undefined4 *)((int)param_4 + 8);
    *(uint *)(iVar26 + 0x90) = *(uint *)(iVar26 + 0x90) | 2;
    *(undefined4 *)(iVar26 + 0xb4) = uVar10;
    if (*(int *)(iVar20 + 8) != 0) {
      iVar5 = 0;
      *(undefined4 *)(iVar20 + 8) = 0;
      *(uint *)(iVar26 + 0x90) = *(uint *)(iVar26 + 0x90) | 4;
      break;
    }
    goto LAB_000db380;
  case 0x83:
    iVar5 = 0;
    iVar14 = DAT_000db48c + 0xdaa40 + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0xac);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0xb0);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0xb4);
    break;
  case 0x84:
    iVar14 = *(int *)param_4;
    if (0x7fffff < iVar14) {
      iVar5 = -2;
      break;
    }
    if (0x7fffff < *(int *)((int)param_4 + 4)) {
      iVar5 = -2;
      break;
    }
    if (0xfffffe < *(int *)((int)param_4 + 8) + 0x7fffffU) {
      iVar5 = -2;
      break;
    }
    if (iVar14 < -0x7fffff) {
      iVar5 = -2;
      break;
    }
    if (*(int *)((int)param_4 + 4) < -0x7fffff) {
      iVar5 = -2;
      break;
    }
    iVar20 = param_3 * 0xa0 + DAT_000db490 + 0xdaac0;
    iVar5 = (param_3 + 1) * 0xa0 + DAT_000db490 + 0xdaac0;
    *(int *)(iVar20 + 0xac) = iVar14;
    *(undefined4 *)(iVar20 + 0xb0) = *(undefined4 *)((int)param_4 + 4);
    uVar10 = *(undefined4 *)((int)param_4 + 8);
    *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 2;
    *(undefined4 *)(iVar20 + 0xb4) = uVar10;
    if (*(int *)(iVar5 + 8) != 1) {
      *(undefined4 *)(iVar5 + 8) = 1;
      iVar5 = 0;
      *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 4;
      break;
    }
    goto LAB_000db380;
  case 0x85:
    iVar5 = 0;
    iVar14 = DAT_000db4a8 + 0xdac5c + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0xac);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0xb0);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0xb4);
    break;
  case 0x86:
    iVar14 = *(int *)param_4;
    if (0xb4 < iVar14) {
      iVar5 = -2;
      break;
    }
    if (0x5a < *(int *)((int)param_4 + 4)) {
      iVar5 = -2;
      break;
    }
    if (0x7fffff < *(uint *)((int)param_4 + 8)) {
      iVar5 = -2;
      break;
    }
    if (iVar14 < -0xb4) {
      iVar5 = -2;
      break;
    }
    if (*(int *)((int)param_4 + 4) < -0x5a) {
      iVar5 = -2;
      break;
    }
    iVar20 = param_3 * 0xa0 + DAT_000db4ac + 0xdacc2;
    iVar5 = (param_3 + 1) * 0xa0 + DAT_000db4ac + 0xdacc2;
    *(int *)(iVar20 + 0xac) = iVar14;
    *(undefined4 *)(iVar20 + 0xb0) = *(undefined4 *)((int)param_4 + 4);
    uVar10 = *(undefined4 *)((int)param_4 + 8);
    *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 2;
    *(undefined4 *)(iVar20 + 0xb4) = uVar10;
    if (*(int *)(iVar5 + 8) != 2) {
      *(undefined4 *)(iVar5 + 8) = 2;
      iVar5 = 0;
      *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 4;
      break;
    }
LAB_000db380:
    iVar5 = 0;
    break;
  case 0x87:
    iVar5 = 0;
    iVar14 = DAT_000db49c + 0xdab92 + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0xac);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0xb0);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0xb4);
    break;
  case 0x88:
    iVar14 = *(int *)param_4;
    if (iVar14 < 0x800000) {
      if (*(int *)((int)param_4 + 4) < 0x800000) {
        if (*(int *)((int)param_4 + 8) + 0x7fffffU < 0xffffff) {
          if (iVar14 < -0x7fffff) {
            iVar5 = -2;
          }
          else if (*(int *)((int)param_4 + 4) < -0x7fffff) {
            iVar5 = -2;
          }
          else {
            iVar5 = 0;
            iVar20 = param_3 * 0xa0 + DAT_000db4a0 + 0xdac12;
            *(int *)(iVar20 + 0xbc) = iVar14;
            *(undefined4 *)(iVar20 + 0xc0) = *(undefined4 *)((int)param_4 + 4);
            uVar10 = *(undefined4 *)((int)param_4 + 8);
            *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 8;
            *(undefined4 *)(iVar20 + 0xc4) = uVar10;
          }
        }
        else {
          iVar5 = -2;
        }
      }
      else {
        iVar5 = -2;
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x89:
    iVar5 = 0;
    iVar14 = DAT_000db4b0 + 0xdad14 + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0xbc);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0xc0);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0xc4);
    break;
  case 0x8a:
    iVar14 = *(int *)param_4;
    if (iVar14 < 0x800000) {
      if (*(int *)((int)param_4 + 4) < 0x800000) {
        if (*(int *)((int)param_4 + 8) + 0x7fffffU < 0xffffff) {
          if (iVar14 < -0x7fffff) {
            iVar5 = -2;
          }
          else if (*(int *)((int)param_4 + 4) < -0x7fffff) {
            iVar5 = -2;
          }
          else {
            iVar5 = 0;
            iVar20 = param_3 * 0xa0 + DAT_000db4ec + 0xdb0d6;
            *(int *)(iVar20 + 200) = iVar14;
            *(undefined4 *)(iVar20 + 0xcc) = *(undefined4 *)((int)param_4 + 4);
            uVar10 = *(undefined4 *)((int)param_4 + 8);
            *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 0x10;
            *(undefined4 *)(iVar20 + 0xd0) = uVar10;
          }
        }
        else {
          iVar5 = -2;
        }
      }
      else {
        iVar5 = -2;
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x8b:
    iVar5 = 0;
    iVar14 = DAT_000db494 + 0xdab12 + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 200);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0xcc);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0xd0);
    break;
  case 0x8c:
    if (*(uint *)param_4 < 0x169) {
      if (*(uint *)((int)param_4 + 4) < 0x169) {
        iVar5 = 0;
        iVar14 = DAT_000db4c8 + 0xdadfe + param_3 * 0xa0;
        *(uint *)(iVar14 + 0xd4) = *(uint *)param_4;
        *(undefined4 *)(iVar14 + 0xd8) = *(undefined4 *)((int)param_4 + 4);
        *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x60;
      }
      else {
        iVar5 = -2;
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x8d:
    iVar5 = 0;
    iVar14 = DAT_000db4c4 + 0xdadca + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0xd4);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0xd8);
    break;
  case 0x8e:
    if (*(int *)param_4 + 10000U < 0x2711) {
      iVar5 = 0;
      iVar14 = DAT_000db4cc + 0xdae3c + param_3 * 0xa0;
      *(int *)(iVar14 + 0xdc) = *(int *)param_4;
      *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x80;
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x8f:
    iVar5 = 0;
    *(undefined4 *)param_4 = *(undefined4 *)(DAT_000db4b4 + param_3 * 0xa0 + 0xdae16);
    break;
  case 0x90:
    if (*(uint *)param_4 < 0x800000) {
      iVar5 = 0;
      iVar14 = DAT_000db4b8 + 0xdad5e + param_3 * 0xa0;
      *(uint *)(iVar14 + 0xe4) = *(uint *)param_4;
      *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x100;
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x91:
    iVar5 = 0;
    *(undefined4 *)param_4 = *(undefined4 *)(DAT_000db4bc + param_3 * 0xa0 + 0xdae66);
    break;
  case 0x92:
    if (*(uint *)param_4 < 0x800000) {
      iVar5 = 0;
      iVar14 = DAT_000db4c0 + 0xdada6 + param_3 * 0xa0;
      *(uint *)(iVar14 + 0xe0) = *(uint *)param_4;
      *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x200;
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x93:
    iVar5 = 0;
    *(undefined4 *)param_4 = *(undefined4 *)(DAT_000db4a4 + param_3 * 0xa0 + 0xdad22);
    break;
  case 0x94:
    if (*(uint *)param_4 < 0xa0001) {
      if (*(uint *)((int)param_4 + 4) < 2) {
        iVar5 = 0;
        iVar14 = DAT_000db4dc + 0xdaf2c + param_3 * 0xa0;
        *(uint *)(iVar14 + 0xe8) = *(uint *)param_4;
        *(undefined4 *)(iVar14 + 0xec) = *(undefined4 *)((int)param_4 + 4);
        *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x400;
      }
      else {
        iVar5 = -2;
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x95:
    iVar5 = 0;
    iVar14 = DAT_000db4d4 + 0xdae86 + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0xe8);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0xec);
    break;
  case 0x96:
    iVar14 = *(int *)param_4;
    if (iVar14 < 0x800000) {
      if (*(int *)((int)param_4 + 4) < 0x800000) {
        if (*(int *)((int)param_4 + 8) + 0x7fffffU < 0xffffff) {
          if (iVar14 < -0x7fffff) {
            iVar5 = -2;
          }
          else if (*(int *)((int)param_4 + 4) < -0x7fffff) {
            iVar5 = -2;
          }
          else {
            iVar5 = 0;
            iVar20 = DAT_000db4d8 + 0xdaeea + param_3 * 0xa0;
            *(int *)(iVar20 + 0xf4) = iVar14;
            *(undefined4 *)(iVar20 + 0xf8) = *(undefined4 *)((int)param_4 + 4);
            uVar10 = *(undefined4 *)((int)param_4 + 8);
            *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 0x800;
            *(undefined4 *)(iVar20 + 0xfc) = uVar10;
          }
        }
        else {
          iVar5 = -2;
        }
      }
      else {
        iVar5 = -2;
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x97:
    iVar5 = 0;
    iVar14 = DAT_000db4d0 + 0xdae60 + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0xf4);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0xf8);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0xfc);
    break;
  case 0x98:
    iVar14 = *(int *)param_4;
    if (iVar14 < 0x800000) {
      if (*(int *)((int)param_4 + 4) < 0x800000) {
        if (*(int *)((int)param_4 + 8) + 0x7fffffU < 0xffffff) {
          if (iVar14 < -0x7fffff) {
            iVar5 = -2;
          }
          else if (*(int *)((int)param_4 + 4) < -0x7fffff) {
            iVar5 = -2;
          }
          else {
            iVar5 = 0;
            iVar20 = DAT_000db4e8 + 0xdb044;
            iVar26 = iVar20 + param_3 * 0xa0;
            *(int *)(iVar26 + 0x98) = iVar14;
            *(undefined4 *)(iVar26 + 0x9c) = *(undefined4 *)((int)param_4 + 4);
            *(undefined4 *)(iVar20 + (param_3 + 1) * 0xa0) = *(undefined4 *)((int)param_4 + 8);
            *(uint *)(iVar26 + 0x90) = *(uint *)(iVar26 + 0x90) | 0x1000;
          }
        }
        else {
          iVar5 = -2;
        }
      }
      else {
        iVar5 = -2;
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x99:
    iVar5 = 0;
    iVar20 = DAT_000db4e0 + 0xdaf5a;
    iVar14 = iVar20 + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0x98);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0x9c);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar20 + (param_3 + 1) * 0xa0);
    break;
  case 0x9a:
    iVar14 = *(int *)param_4;
    if (iVar14 < 0x800000) {
      if (*(int *)((int)param_4 + 4) < 0x800000) {
        if (*(int *)((int)param_4 + 8) + 0x7fffffU < 0xffffff) {
          if (iVar14 < -0x7fffff) {
            iVar5 = -2;
          }
          else if (*(int *)((int)param_4 + 4) < -0x7fffff) {
            iVar5 = -2;
          }
          else {
            iVar5 = 0;
            iVar20 = DAT_000db4e4 + 0xdafcc + param_3 * 0xa0;
            *(int *)(iVar20 + 0x100) = iVar14;
            *(undefined4 *)(iVar20 + 0x104) = *(undefined4 *)((int)param_4 + 4);
            uVar10 = *(undefined4 *)((int)param_4 + 8);
            *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 0x2000;
            *(undefined4 *)(iVar20 + 0x108) = uVar10;
          }
        }
        else {
          iVar5 = -2;
        }
      }
      else {
        iVar5 = -2;
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x9b:
    iVar5 = 0;
    iVar14 = DAT_000da320 + 0xda15e + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0x100);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0x104);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0x108);
    break;
  case 0x9c:
    iVar14 = *(int *)param_4;
    if (iVar14 < 0x800000) {
      if (*(int *)((int)param_4 + 4) < 0x800000) {
        if (*(int *)((int)param_4 + 8) + 0x7fffffU < 0xffffff) {
          if (iVar14 < -0x7fffff) {
            iVar5 = -2;
          }
          else if (*(int *)((int)param_4 + 4) < -0x7fffff) {
            iVar5 = -2;
          }
          else {
            iVar5 = 0;
            iVar20 = DAT_000da324 + 0xda1c8 + param_3 * 0xa0;
            *(int *)(iVar20 + 0x10c) = iVar14;
            *(undefined4 *)(iVar20 + 0x110) = *(undefined4 *)((int)param_4 + 4);
            uVar10 = *(undefined4 *)((int)param_4 + 8);
            *(uint *)(iVar20 + 0x90) = *(uint *)(iVar20 + 0x90) | 0x4000;
            *(undefined4 *)(iVar20 + 0x114) = uVar10;
          }
        }
        else {
          iVar5 = -2;
        }
      }
      else {
        iVar5 = -2;
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x9d:
    iVar5 = 0;
    iVar14 = DAT_000da328 + 0xda1f8 + param_3 * 0xa0;
    *(undefined4 *)param_4 = *(undefined4 *)(iVar14 + 0x10c);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar14 + 0x110);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0x114);
    break;
  case 0x9e:
    if (*(uint *)param_4 < 0x10) {
      iVar5 = 0;
      if ((*(uint *)param_4 & 4) != 0) {
        if (*(uint *)((int)param_4 + 0xc) < 0x65) {
          iVar14 = DAT_000db498 + 0xdab62 + param_3 * 0xa0;
          iVar5 = 0;
          uVar7 = (*(uint *)((int)param_4 + 0xc) << 0xf) / 100;
          if (uVar7 == 0x8000) {
            uVar7 = 0x7fff;
          }
          *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x8000;
          *(uint *)(iVar14 + 0x124) = uVar7;
        }
        else {
          iVar5 = -2;
        }
      }
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x9f:
    iVar5 = 0;
    iVar14 = *(int *)(DAT_000da32c + param_3 * 0xa0 + 0xda342);
    *(undefined4 *)((int)param_4 + 4) = 100;
    *(undefined4 *)((int)param_4 + 8) = 0;
    *(undefined4 *)((int)param_4 + 0x10) = 0;
    *(undefined4 *)param_4 = 0;
    *(uint *)((int)param_4 + 0xc) = iVar14 * 100 + 0x4000U >> 0xf;
    break;
  case 0xa0:
    uVar7 = *(uint *)param_4;
    if (uVar7 < 2) {
      iVar5 = 0;
      iVar14 = DAT_000da330 + 0xda252 + param_3 * 0xa0;
      *(uint *)(iVar14 + 0xf0) = uVar7;
      *(uint *)(iVar14 + 300) = uVar7;
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0xa1:
    iVar5 = 0;
    *(undefined4 *)param_4 = *(undefined4 *)(DAT_000da334 + param_3 * 0xa0 + 0xda39a);
    break;
  case 0xa2:
    uVar7 = *(uint *)param_4;
    iVar5 = 0;
    if (uVar7 != 0) {
      if (uVar7 < 0x10000) {
        if (((uVar7 & 1) == 0) || (*(uint *)((int)param_4 + 4) < 3)) {
          if ((int)(uVar7 << 0x1e) < 0) {
            if (0x7fffff < *(int *)((int)param_4 + 8)) {
              iVar5 = -2;
              break;
            }
            if (0x7fffff < *(int *)((int)param_4 + 0xc)) {
              iVar5 = -2;
              break;
            }
            if (0xfffffe < *(int *)((int)param_4 + 0x10) + 0x7fffffU) {
              iVar5 = -2;
              break;
            }
            if (*(int *)((int)param_4 + 8) < -0x7fffff) {
              iVar5 = -2;
              break;
            }
            if (*(int *)((int)param_4 + 0xc) < -0x7fffff) {
              iVar5 = -2;
              break;
            }
          }
          if (((int)(uVar7 << 0x1d) < 0) && (0xffffff < *(uint *)((int)param_4 + 0x14))) {
            iVar5 = -2;
          }
          else {
            if ((int)(uVar7 << 0x1c) < 0) {
              if (0x7fffff < *(int *)((int)param_4 + 0x18)) {
                iVar5 = -2;
                break;
              }
              if (0x7fffff < *(int *)((int)param_4 + 0x1c)) {
                iVar5 = -2;
                break;
              }
              if (0xfffffe < *(int *)((int)param_4 + 0x20) + 0x7fffffU) {
                iVar5 = -2;
                break;
              }
              if (*(int *)((int)param_4 + 0x18) < -0x7fffff) {
                iVar5 = -2;
                break;
              }
              if (*(int *)((int)param_4 + 0x1c) < -0x7fffff) {
                iVar5 = -2;
                break;
              }
            }
            if ((int)(uVar7 << 0x1b) < 0) {
              if (0x7fffff < *(int *)((int)param_4 + 0x24)) {
                iVar5 = -2;
                break;
              }
              if (0x7fffff < *(int *)((int)param_4 + 0x28)) {
                iVar5 = -2;
                break;
              }
              if (0xfffffe < *(int *)((int)param_4 + 0x2c) + 0x7fffffU) {
                iVar5 = -2;
                break;
              }
              if (*(int *)((int)param_4 + 0x24) < -0x7fffff) {
                iVar5 = -2;
                break;
              }
              if (*(int *)((int)param_4 + 0x28) < -0x7fffff) {
                iVar5 = -2;
                break;
              }
            }
            if (((int)(uVar7 << 0x1a) < 0) && (0x168 < *(uint *)((int)param_4 + 0x30))) {
              iVar5 = -2;
            }
            else if (((int)(uVar7 << 0x19) < 0) && (0x168 < *(uint *)((int)param_4 + 0x34))) {
              iVar5 = -2;
            }
            else if (((int)(uVar7 << 0x18) < 0) && (10000 < *(int *)((int)param_4 + 0x38) + 10000U))
            {
              iVar5 = -2;
            }
            else if (((int)(uVar7 << 0x17) < 0) && (0x7fffff < *(uint *)((int)param_4 + 0x40))) {
              iVar5 = -2;
            }
            else if (((int)(uVar7 << 0x16) < 0) && (0x7fffff < *(uint *)((int)param_4 + 0x3c))) {
              iVar5 = -2;
            }
            else {
              if ((int)(uVar7 << 0x15) < 0) {
                if (0xa0000 < *(uint *)((int)param_4 + 0x44)) {
                  iVar5 = -2;
                  break;
                }
                if (1 < *(uint *)((int)param_4 + 0x48)) {
                  iVar5 = -2;
                  break;
                }
              }
              if (((int)(uVar7 << 0x14) < 0) && (1 < *(uint *)((int)param_4 + 0x4c))) {
                iVar5 = -2;
              }
              else {
                if ((int)(uVar7 << 0x13) < 0) {
                  if (0x7fffff < *(int *)((int)param_4 + 0x50)) {
                    iVar5 = -2;
                    break;
                  }
                  if (0x7fffff < *(int *)((int)param_4 + 0x54)) {
                    iVar5 = -2;
                    break;
                  }
                  if (0xfffffe < *(int *)((int)param_4 + 0x58) + 0x7fffffU) {
                    iVar5 = -2;
                    break;
                  }
                  if (*(int *)((int)param_4 + 0x50) < -0x7fffff) {
                    iVar5 = -2;
                    break;
                  }
                  if (*(int *)((int)param_4 + 0x54) < -0x7fffff) {
                    iVar5 = -2;
                    break;
                  }
                }
                if ((int)(uVar7 << 0x12) < 0) {
                  if (0x7fffff < *(int *)((int)param_4 + 0x5c)) {
                    iVar5 = -2;
                    break;
                  }
                  if (0x7fffff < *(int *)((int)param_4 + 0x60)) {
                    iVar5 = -2;
                    break;
                  }
                  if (0xfffffe < *(int *)((int)param_4 + 100) + 0x7fffffU) {
                    iVar5 = -2;
                    break;
                  }
                  if (*(int *)((int)param_4 + 0x5c) < -0x7fffff) {
                    iVar5 = -2;
                    break;
                  }
                  if (*(int *)((int)param_4 + 0x60) < -0x7fffff) {
                    iVar5 = -2;
                    break;
                  }
                }
                if ((int)(uVar7 << 0x11) < 0) {
                  if (0x7fffff < *(int *)((int)param_4 + 0x68)) {
                    iVar5 = -2;
                    break;
                  }
                  if (0x7fffff < *(int *)((int)param_4 + 0x6c)) {
                    iVar5 = -2;
                    break;
                  }
                  if (0xfffffe < *(int *)((int)param_4 + 0x70) + 0x7fffffU) {
                    iVar5 = -2;
                    break;
                  }
                  if (*(int *)((int)param_4 + 0x68) < -0x7fffff) {
                    iVar5 = -2;
                    break;
                  }
                  if (*(int *)((int)param_4 + 0x6c) < -0x7fffff) {
                    iVar5 = -2;
                    break;
                  }
                }
                if ((int)(uVar7 << 0x10) < 0) {
                  if (0xf < *(uint *)((int)param_4 + 0x74)) {
                    iVar5 = -2;
                    break;
                  }
                  if (((int)(*(uint *)((int)param_4 + 0x74) << 0x1d) < 0) &&
                     (100 < *(uint *)((int)param_4 + 0x80))) {
                    iVar5 = -2;
                    break;
                  }
                }
                if ((uVar7 & 1) != 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db440 + 0xda5b6;
                  *(undefined4 *)((param_3 + 1) * 0xa0 + DAT_000db440 + 0xda5b6 + 8) =
                       *(undefined4 *)((int)param_4 + 4);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 4;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x1d) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db444 + 0xda5de;
                  *(undefined4 *)(iVar14 + 0xb8) = *(undefined4 *)((int)param_4 + 0x14);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 1;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x1e) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db448 + 0xda602;
                  *(undefined4 *)(iVar14 + 0xac) = *(undefined4 *)((int)param_4 + 8);
                  *(undefined4 *)(iVar14 + 0xb0) = *(undefined4 *)((int)param_4 + 0xc);
                  uVar10 = *(undefined4 *)((int)param_4 + 0x10);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 2;
                  *(undefined4 *)(iVar14 + 0xb4) = uVar10;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x1c) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db44c + 0xda634;
                  *(undefined4 *)(iVar14 + 0xbc) = *(undefined4 *)((int)param_4 + 0x18);
                  *(undefined4 *)(iVar14 + 0xc0) = *(undefined4 *)((int)param_4 + 0x1c);
                  uVar10 = *(undefined4 *)((int)param_4 + 0x20);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 8;
                  *(undefined4 *)(iVar14 + 0xc4) = uVar10;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x1b) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db450 + 0xda666;
                  *(undefined4 *)(iVar14 + 200) = *(undefined4 *)((int)param_4 + 0x24);
                  *(undefined4 *)(iVar14 + 0xcc) = *(undefined4 *)((int)param_4 + 0x28);
                  uVar10 = *(undefined4 *)((int)param_4 + 0x2c);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x10;
                  *(undefined4 *)(iVar14 + 0xd0) = uVar10;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x1a) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db454 + 0xda698;
                  *(undefined4 *)(iVar14 + 0xd4) = *(undefined4 *)((int)param_4 + 0x30);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x20;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x19) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db458 + 0xda6bc;
                  *(undefined4 *)(iVar14 + 0xd8) = *(undefined4 *)((int)param_4 + 0x34);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x40;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x18) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db45c + 0xda6e0;
                  *(undefined4 *)(iVar14 + 0xdc) = *(undefined4 *)((int)param_4 + 0x38);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x80;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x17) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db460 + 0xda704;
                  *(undefined4 *)(iVar14 + 0xe4) = *(undefined4 *)((int)param_4 + 0x40);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x100;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x16) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db464 + 0xda728;
                  *(undefined4 *)(iVar14 + 0xe0) = *(undefined4 *)((int)param_4 + 0x3c);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x200;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x15) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db468 + 0xda74c;
                  *(undefined4 *)(iVar14 + 0xe8) = *(undefined4 *)((int)param_4 + 0x44);
                  *(undefined4 *)(iVar14 + 0xec) = *(undefined4 *)((int)param_4 + 0x48);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x400;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x13) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db46c + 0xda778;
                  *(undefined4 *)(iVar14 + 0xf4) = *(undefined4 *)((int)param_4 + 0x50);
                  *(undefined4 *)(iVar14 + 0xf8) = *(undefined4 *)((int)param_4 + 0x54);
                  uVar10 = *(undefined4 *)((int)param_4 + 0x58);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x800;
                  *(undefined4 *)(iVar14 + 0xfc) = uVar10;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x12) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db470 + 0xda7aa;
                  *(undefined4 *)(iVar14 + 0x100) = *(undefined4 *)((int)param_4 + 0x5c);
                  *(undefined4 *)(iVar14 + 0x104) = *(undefined4 *)((int)param_4 + 0x60);
                  uVar10 = *(undefined4 *)((int)param_4 + 100);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x2000;
                  *(undefined4 *)(iVar14 + 0x108) = uVar10;
                  uVar7 = *(uint *)param_4;
                }
                if ((int)(uVar7 << 0x11) < 0) {
                  iVar14 = param_3 * 0xa0 + DAT_000db474 + 0xda7dc;
                  *(undefined4 *)(iVar14 + 0x10c) = *(undefined4 *)((int)param_4 + 0x68);
                  *(undefined4 *)(iVar14 + 0x110) = *(undefined4 *)((int)param_4 + 0x6c);
                  uVar10 = *(undefined4 *)((int)param_4 + 0x70);
                  *(uint *)(iVar14 + 0x90) = *(uint *)(iVar14 + 0x90) | 0x4000;
                  *(undefined4 *)(iVar14 + 0x114) = uVar10;
                  uVar7 = *(uint *)param_4;
                }
                if (((int)(uVar7 << 0x10) < 0) && (*(int *)((int)param_4 + 0x74) << 0x1d < 0)) {
                  iVar14 = __udivsi3(*(int *)((int)param_4 + 0x80) << 0xf,100);
                  iVar5 = param_3 * 0xa0 + DAT_000db478 + 0xda824;
                  *(uint *)(iVar5 + 0x90) = *(uint *)(iVar5 + 0x90) | 0x8000;
                  if (iVar14 == 0x8000) {
                    iVar14 = 0x7fff;
                  }
                  *(int *)(iVar5 + 0x124) = iVar14;
                  uVar7 = *(uint *)param_4;
                }
                iVar5 = 0;
                if ((uVar7 & 0x800) != 0) {
                  uVar10 = *(undefined4 *)((int)param_4 + 0x4c);
                  iVar5 = 0;
                  iVar14 = DAT_000db47c + 0xda85a + param_3 * 0xa0;
                  *(undefined4 *)(iVar14 + 0xf0) = uVar10;
                  *(undefined4 *)(iVar14 + 300) = uVar10;
                }
              }
            }
          }
        }
        else {
          iVar5 = -2;
        }
      }
      else {
        iVar5 = -2;
      }
    }
    break;
  case 0xa3:
    iVar14 = DAT_000da30c + 0xd9f9e + param_3 * 0xa0;
    iVar5 = 0;
    *(undefined4 *)((int)param_4 + 4) =
         *(undefined4 *)(DAT_000da30c + 0xd9f9e + (param_3 + 1) * 0xa0 + 8);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar14 + 0xac);
    *(undefined4 *)((int)param_4 + 0xc) = *(undefined4 *)(iVar14 + 0xb0);
    *(undefined4 *)((int)param_4 + 0x10) = *(undefined4 *)(iVar14 + 0xb4);
    *(undefined4 *)((int)param_4 + 0x14) = *(undefined4 *)(iVar14 + 0xb8);
    *(undefined4 *)((int)param_4 + 0x18) = *(undefined4 *)(iVar14 + 0xbc);
    *(undefined4 *)((int)param_4 + 0x1c) = *(undefined4 *)(iVar14 + 0xc0);
    *(undefined4 *)((int)param_4 + 0x20) = *(undefined4 *)(iVar14 + 0xc4);
    *(undefined4 *)((int)param_4 + 0x24) = *(undefined4 *)(iVar14 + 200);
    *(undefined4 *)((int)param_4 + 0x28) = *(undefined4 *)(iVar14 + 0xcc);
    *(undefined4 *)((int)param_4 + 0x2c) = *(undefined4 *)(iVar14 + 0xd0);
    *(undefined4 *)((int)param_4 + 0x30) = *(undefined4 *)(iVar14 + 0xd4);
    *(undefined4 *)((int)param_4 + 0x34) = *(undefined4 *)(iVar14 + 0xd8);
    *(undefined4 *)((int)param_4 + 0x38) = *(undefined4 *)(iVar14 + 0xdc);
    *(undefined4 *)((int)param_4 + 0x3c) = *(undefined4 *)(iVar14 + 0xe0);
    *(undefined4 *)((int)param_4 + 0x40) = *(undefined4 *)(iVar14 + 0xe4);
    *(undefined4 *)((int)param_4 + 0x44) = *(undefined4 *)(iVar14 + 0xe8);
    *(undefined4 *)((int)param_4 + 0x48) = *(undefined4 *)(iVar14 + 0xec);
    *(undefined4 *)((int)param_4 + 0x4c) = *(undefined4 *)(iVar14 + 0xf0);
    *(undefined4 *)((int)param_4 + 0x50) = *(undefined4 *)(iVar14 + 0xf4);
    *(undefined4 *)((int)param_4 + 0x54) = *(undefined4 *)(iVar14 + 0xf8);
    *(undefined4 *)((int)param_4 + 0x58) = *(undefined4 *)(iVar14 + 0xfc);
    *(undefined4 *)((int)param_4 + 0x5c) = *(undefined4 *)(iVar14 + 0x100);
    *(undefined4 *)((int)param_4 + 0x60) = *(undefined4 *)(iVar14 + 0x104);
    *(undefined4 *)((int)param_4 + 100) = *(undefined4 *)(iVar14 + 0x108);
    *(undefined4 *)((int)param_4 + 0x68) = *(undefined4 *)(iVar14 + 0x10c);
    *(undefined4 *)((int)param_4 + 0x6c) = *(undefined4 *)(iVar14 + 0x110);
    uVar10 = *(undefined4 *)(iVar14 + 0x114);
    *(undefined4 *)param_4 = 0;
    *(undefined4 *)((int)param_4 + 0x70) = uVar10;
    iVar14 = *(int *)(iVar14 + 0x124);
    *(undefined4 *)((int)param_4 + 0x7c) = 0;
    *(undefined4 *)((int)param_4 + 0x84) = 0;
    *(undefined4 *)((int)param_4 + 0x74) = 0;
    *(undefined4 *)((int)param_4 + 0x78) = 100;
    *(uint *)((int)param_4 + 0x80) = iVar14 * 100 + 0x4000U >> 0xf;
    break;
  case 0xa4:
    iVar14 = DAT_000da310 + 0xda084;
    p_Var16 = (_MASMW_P3DASNDSRCMOVE *)(iVar14 + param_3 * 0x204 + 0x590);
    p_Var19 = (_MASMW_P3DASNDSRCCTRL *)(param_3 * 0xa0 + 0x310 + iVar14);
    MaDsp_3DEngSet((_MASMW_P3DASNDSRCCTRL *)(param_3 * 0xa0 + 0x90 + iVar14),p_Var19,p_Var16);
    uVar7 = MaDsp_3DEngProc(p_Var19,p_Var16,
                            (_MASMW_P3DACALCRESULT *)(iVar14 + param_3 * 0x30 + 0xda0));
    if ((uVar7 & 3) != 0) {
      uVar7 = uVar7 & 0xfffffff7;
      FUN_000d75a4(param_3);
    }
    if ((int)(uVar7 << 0x1d) < 0) {
      uVar6 = *(uint *)(DAT_000da314 + 0xda0d2 + param_3 * 0xa0 + 0x314);
      if (uVar6 != 0xff) {
        MaSndDrv_SetDoppler(uVar6,*(uint *)(DAT_000da314 + 0xda0d2 + param_3 * 0x30 + 0xda8));
      }
    }
    if ((int)(uVar7 << 0x1c) < 0) {
      FUN_000d7500(param_3);
    }
    MaDevDrv_SendDspCoef(0,(uchar *)local_50,2);
    iVar5 = 0;
    break;
  case 0xa5:
    MaDsp_3DEngPause((_MASMW_P3DASNDSRCMOVE *)(DAT_000da318 + param_3 * 0x204 + 0xda69c));
    MaDevDrv_SendDspCoef(0,(uchar *)local_50,2);
    iVar5 = 0;
    break;
  case 0xa6:
    MaDsp_3DEngStart((_MASMW_P3DASNDSRCMOVE *)(DAT_000da31c + param_3 * 0x204 + 0xda6c0));
    FUN_000d75a4(param_3);
    MaDevDrv_SendDspCoef(0,(uchar *)local_50,2);
    iVar5 = 0;
    break;
  default:
    iVar5 = -2;
    break;
  case 0xb0:
    MaDsp_3DEngGetCurPos
              ((_MASMW_P3DASNDSRCMOVE *)(DAT_000da304 + param_3 * 0x204 + 0xda4c8),0,
               (_MASMW_P3DAVECTOR *)&local_4c);
    iVar5 = 0;
    *(undefined4 *)param_4 = local_4c;
    *(undefined4 *)((int)param_4 + 4) = local_48;
    *(undefined4 *)((int)param_4 + 8) = local_44;
    break;
  case 0xb2:
    MaDsp_3DEngGetCurPos
              ((_MASMW_P3DASNDSRCMOVE *)(DAT_000da308 + param_3 * 0x204 + 0xda4f8),2,
               (_MASMW_P3DAVECTOR *)&local_4c);
    iVar5 = 0;
    *(undefined4 *)param_4 = local_4c;
    *(undefined4 *)((int)param_4 + 4) = local_48;
    *(undefined4 *)((int)param_4 + 8) = local_44;
    break;
  case 0xb3:
    iVar14 = *(int *)param_4;
    if (iVar14 == 0xff) {
      uVar7 = *(uint *)(DAT_000db4fc + 0xdb1ee + param_3 * 0xa0 + 0x314);
      *(undefined4 *)(DAT_000db4fc + 0xdb1ee + param_3 * 0x30 + 0xda8) = 0x400;
      MaSndDrv_SetDoppler(uVar7,0x400);
    }
    iVar5 = 0;
    *(int *)(DAT_000da300 + param_3 * 0xa0 + 0xda232) = iVar14;
  }
LAB_000d9658:
  if (local_2c == *piVar15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

