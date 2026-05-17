/* MaSmw_DevCtrl @ 000853c8 10056B */


/* YAMAHA::MaSmw_DevCtrl(unsigned int, unsigned int, unsigned int, void*) */

uint YAMAHA::MaSmw_DevCtrl(uint param_1,uint param_2,uint param_3,void *param_4)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined4 uVar40;
  int iVar41;
  byte bVar42;
  uint uVar43;
  uint uVar44;
  byte *pbVar45;
  int *piVar46;
  byte bVar47;
  int *piVar48;
  byte bVar49;
  int *piVar50;
  byte bVar51;
  int *piVar52;
  int iVar53;
  int iVar54;
  bool bVar55;
  uint local_2c [2];
  
  machdep_EnterCriticalSection();
  iVar37 = DAT_00087fa0;
  iVar36 = DAT_00087f98;
  iVar35 = DAT_00087f60;
  iVar34 = DAT_00087f5c;
  iVar33 = DAT_00087f54;
  iVar32 = DAT_00087f4c;
  iVar31 = DAT_00087f48;
  iVar30 = DAT_0008727c;
  iVar29 = DAT_00087264;
  iVar28 = DAT_0008725c;
  iVar27 = DAT_00087258;
  iVar26 = DAT_00087224;
  iVar25 = DAT_000871e0;
  iVar24 = DAT_000871ac;
  iVar23 = DAT_000863a8;
  iVar22 = DAT_000863a0;
  iVar21 = DAT_00086398;
  iVar20 = DAT_00086390;
  iVar19 = DAT_00086388;
  iVar18 = DAT_00086380;
  iVar17 = DAT_00086378;
  iVar16 = DAT_00086374;
  iVar15 = DAT_00086370;
  iVar14 = DAT_00086368;
  iVar13 = DAT_00086360;
  iVar12 = DAT_00086344;
  iVar11 = DAT_00086330;
  iVar10 = DAT_00086328;
  iVar9 = DAT_00086320;
  iVar8 = DAT_0008631c;
  iVar7 = DAT_00086318;
  iVar6 = DAT_00086308;
  iVar5 = DAT_000862fc;
  iVar4 = DAT_000862f4;
  iVar3 = DAT_000862ec;
  iVar41 = DAT_000862e4;
  iVar54 = DAT_000862dc;
  iVar53 = DAT_000862bc;
  bVar39 = (byte)param_2;
  uVar2 = (uchar)param_3;
  uVar43 = param_2;
  switch(param_1) {
  case 0:
    uVar43 = MaDevDrv_HwInit(local_2c);
    iVar53 = DAT_000871fc;
    if (-1 < (int)uVar43) {
      *(uint *)(DAT_000871fc + 0x868d0) = local_2c[0];
      uVar43 = MaDsp_HwInit(local_2c[0]);
      if (((-1 < (int)uVar43) && (uVar43 = MaDsp_SetDefault(), -1 < (int)uVar43)) &&
         (uVar43 = MaDsp_Start(0x14), -1 < (int)uVar43)) {
        MaDsp_3DCtrl(1,0xa5,0,(void *)0x0);
        MaDsp_3DCtrl(1,0xa5,1,(void *)0x0);
        MaDsp_3DCtrl(1,0xa5,2,(void *)0x0);
        MaDsp_3DCtrl(1,0xa5,3,(void *)0x0);
        iVar54 = DAT_00087200;
        *(undefined4 *)(iVar53 + 0x868d4) = 0;
        *(undefined4 *)(iVar53 + 0x868d8) = 0;
        iVar54 = *(int *)(iVar54 + 0x86942);
        *(undefined1 *)(iVar54 + 0x32) = 1;
        *(undefined1 *)(iVar54 + 0x33) = 0;
        *(undefined1 *)(iVar53 + 0x86902) = 0;
        *(undefined1 *)(iVar53 + 0x86903) = 0;
        *(undefined4 *)(iVar53 + 0x86904) = 0;
        *(undefined4 *)(iVar53 + 0x86908) = 0;
        *(undefined4 *)(iVar53 + 0x8690c) = 0;
        *(undefined4 *)(iVar53 + 0x86910) = 0;
        *(undefined4 *)(iVar53 + 0x86914) = 0;
        *(undefined4 *)(iVar53 + 0x86918) = 0;
        *(undefined4 *)(iVar53 + 0x8691c) = 0;
        *(undefined1 *)(iVar53 + 0x86920) = 0;
        *(undefined1 *)(iVar53 + 0x86921) = 0;
        *(undefined4 *)(iVar53 + 0x868dc) = 0;
        *(undefined4 *)(iVar53 + 0x868e0) = 0;
        *(undefined4 *)(iVar53 + 0x868e4) = 0;
        *(undefined4 *)(iVar53 + 0x868e8) = 0;
        *(undefined4 *)(iVar53 + 0x868ec) = 0;
        *(undefined4 *)(iVar53 + 0x868f0) = 0;
        *(undefined1 *)(iVar53 + 0x868fe) = 2;
        *(undefined1 *)(iVar53 + 0x868ff) = 2;
        *(undefined1 *)(iVar53 + 0x86900) = 2;
        *(undefined1 *)(iVar53 + 0x86901) = 2;
      }
    }
    break;
  case 1:
    MaDevDrv_WriteIntermediateReg(100,bVar39);
    uVar43 = 0;
    break;
  case 2:
    if (param_2 == 0) {
      MaDevDrv_WriteIntermediateReg(0x66,uVar2);
    }
    else {
      if (param_2 != 1) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0x67,uVar2);
      uVar43 = 0;
    }
    break;
  case 3:
    if (param_4 == (void *)0x0) {
LAB_000856d2:
      machdep_LeaveCriticalSection();
      return 0xfffffffe;
    }
    uVar43 = MaDevDrv_PowerManagementEx(param_4);
    if (-1 < (int)uVar43) {
      iVar53 = *(int *)(DAT_000871f4 + 0x867ca);
      *(undefined4 *)(iVar53 + 100) = *(undefined4 *)param_4;
      *(undefined4 *)(iVar53 + 0x68) = *(undefined4 *)((int)param_4 + 4);
      *(undefined4 *)(iVar53 + 0x6c) = *(undefined4 *)((int)param_4 + 8);
      *(undefined4 *)(iVar53 + 0x70) = *(undefined4 *)((int)param_4 + 0xc);
      *(undefined4 *)(iVar53 + 0x74) = *(undefined4 *)((int)param_4 + 0x10);
      *(undefined4 *)(iVar53 + 0x78) = *(undefined4 *)((int)param_4 + 0x14);
      *(undefined4 *)(iVar53 + 0x7c) = *(undefined4 *)((int)param_4 + 0x18);
      *(undefined4 *)(iVar53 + 0x80) = *(undefined4 *)((int)param_4 + 0x1c);
      *(undefined4 *)(iVar53 + 0x84) = *(undefined4 *)((int)param_4 + 0x20);
      *(undefined4 *)(iVar53 + 0x88) = *(undefined4 *)((int)param_4 + 0x24);
      *(undefined4 *)(iVar53 + 0x8c) = *(undefined4 *)((int)param_4 + 0x28);
    }
    break;
  case 4:
    if (0xff < param_2) goto LAB_000856d2;
    MaDevDrv_WriteIntermediateReg(param_2,uVar2);
    uVar43 = 0;
    break;
  case 5:
    if (param_4 == (void *)0x0 || 0xff < param_2) goto LAB_000856d2;
    uVar38 = MaDevDrv_ReadIntermediateReg(param_2);
    *(undefined1 *)param_4 = uVar38;
    uVar43 = 0;
    break;
  case 6:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    *(undefined4 *)param_4 = 0x12000;
    uVar43 = 0;
    break;
  case 7:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar43 = MaDevDrv_ReadReg(5);
    uVar44 = uVar43 & 0xf0;
    if (uVar44 == 0x80) {
      uVar40 = 0x21;
    }
    else if (uVar44 < 0x81) {
      if (uVar44 != 0x70) {
LAB_000879b4:
        uVar43 = 0xffffffff;
        break;
      }
      uVar40 = 0x20;
    }
    else if (uVar44 == 0x90) {
      if (uVar43 == 0x92) {
        uVar40 = 0x24;
      }
      else {
        uVar40 = 0x22;
      }
    }
    else {
      if (uVar44 != 0xa0) goto LAB_000879b4;
      uVar40 = 0x23;
    }
    *(undefined4 *)param_4 = uVar40;
    uVar43 = 0;
    break;
  case 8:
    if (1 < param_2) goto LAB_000856d2;
    if (param_2 == 1) {
      if (param_4 == (void *)0x0) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0x88,*(byte *)param_4 | 0x80);
      MaDevDrv_WriteIntermediateReg(0x89,*(uchar *)((int)param_4 + 1));
      MaDevDrv_WriteIntermediateReg(0x8a,*(uchar *)((int)param_4 + 2));
      MaDevDrv_WriteIntermediateReg(0x8b,*(uchar *)((int)param_4 + 3));
      uVar43 = 0;
    }
    else {
      MaDevDrv_WriteIntermediateReg(0x88,'\0');
      uVar43 = 0;
    }
    break;
  case 9:
  case 10:
    if (param_1 == 9) {
      if (2 < param_2) goto LAB_000856d2;
      *(byte *)(*(int *)(DAT_00087f5c + 0x87722) + 0x2c) = bVar39;
      MaDevDrv_WriteIntermediateReg(0x86,'\0');
      iVar53 = *(int *)(iVar34 + 0x87722);
    }
    else {
      if (6 < param_2) goto LAB_000856d2;
      if (param_2 == 0) {
        iVar53 = *(int *)(DAT_000871f8 + 0x86844);
        *(undefined1 *)(iVar53 + 0x2d) = 0;
      }
      else {
        iVar53 = *(int *)(DAT_00087f40 + 0x8758c);
        *(byte *)(iVar53 + 0x2e) = bVar39 - 1;
        *(undefined1 *)(iVar53 + 0x2d) = 1;
      }
    }
    cVar1 = *(char *)(iVar53 + 0x2c);
    if (cVar1 == '\x01') {
      MaDevDrv_WriteIntermediateReg
                (0x87,*(char *)(iVar53 + 0x2d) + 6U | *(char *)(iVar53 + 0x2e) << 4);
      uVar43 = 0;
    }
    else if (cVar1 == '\0') {
      MaDevDrv_WriteIntermediateReg(0x87,'\0');
      uVar43 = 0;
    }
    else if (cVar1 == '\x02') {
      MaDevDrv_WriteIntermediateReg
                (0x87,*(char *)(iVar53 + 0x2d) + 2U | *(char *)(iVar53 + 0x2e) << 4);
      uVar43 = 0;
    }
    else {
      uVar43 = 0;
    }
    break;
  case 0xb:
    if (7 < param_2) goto LAB_000856d2;
    if (*(char *)(*(int *)(DAT_000871ec + 0x8673e) + 0x2c) == '\x01') {
      MaDevDrv_WriteIntermediateReg(0x86,bVar39);
      uVar43 = 0;
    }
    else {
      uVar43 = 0;
    }
    break;
  default:
    uVar43 = 0xfffffffe;
    break;
  case 0xd:
  case 0xe:
    if (param_1 == 0xd) {
      if (2 < param_2) goto LAB_000856d2;
      *(byte *)(*(int *)(DAT_00087f60 + 0x87746) + 0x2f) = bVar39;
      MaDevDrv_WriteIntermediateReg(0x8c,'\0');
      iVar53 = *(int *)(iVar35 + 0x87746);
    }
    else {
      if (5 < param_2) goto LAB_000856d2;
      if (param_2 == 0) {
        iVar53 = *(int *)(DAT_000871e8 + 0x866f8);
        *(undefined1 *)(iVar53 + 0x30) = 0;
      }
      else {
        iVar53 = *(int *)(DAT_00087f44 + 0x875a8);
        *(byte *)(iVar53 + 0x31) = bVar39 - 1;
        *(undefined1 *)(iVar53 + 0x30) = 1;
      }
    }
    cVar1 = *(char *)(iVar53 + 0x2f);
    if (cVar1 == '\x01') {
      MaDevDrv_WriteIntermediateReg
                (0x8d,*(char *)(iVar53 + 0x30) + 4U | *(char *)(iVar53 + 0x31) << 4);
      uVar43 = 0;
    }
    else if (cVar1 == '\0') {
      MaDevDrv_WriteIntermediateReg(0x8d,'\0');
      uVar43 = 0;
    }
    else if (cVar1 == '\x02') {
      MaDevDrv_WriteIntermediateReg
                (0x8d,*(char *)(iVar53 + 0x30) + 2U | *(char *)(iVar53 + 0x31) << 4);
      uVar43 = 0;
    }
    else {
      uVar43 = 0;
    }
    break;
  case 0xf:
    if (1 < param_2) goto LAB_000856d2;
    if (*(char *)(*(int *)(DAT_000871f0 + 0x8677a) + 0x2f) == '\x01') {
      MaDevDrv_WriteIntermediateReg(0x8c,bVar39);
      uVar43 = 0;
    }
    else {
      uVar43 = 0;
    }
    break;
  case 0x11:
    MaDevDrv_WriteIntermediateReg(0x6c,bVar39 & 0xdd);
    uVar43 = 0;
    break;
  case 0x12:
    MaDevDrv_WriteIntermediateReg(0x6d,bVar39 & 0xcd);
    uVar43 = 0;
    break;
  case 0x13:
    MaDevDrv_WriteIntermediateReg(0x6a,bVar39 & 0xd);
    uVar43 = 0;
    break;
  case 0x14:
    MaDevDrv_WriteIntermediateReg(0x6b,bVar39 & 0xd);
    uVar43 = 0;
    break;
  case 0x15:
    bVar39 = MaDevDrv_ReadIntermediateReg(0x7e);
    bVar39 = bVar39 & 0x43;
    if ((int)param_2 < 0) {
      bVar39 = bVar39 | 0x80;
    }
    MaDevDrv_WriteIntermediateReg(0x7e,bVar39);
    MaDevDrv_WriteIntermediateReg(0x79,*(uchar *)((param_2 & 0x7f) + iVar25 + 0x865f8 + 0x494));
    MaDevDrv_WriteIntermediateReg(0x7a,*(uchar *)(iVar25 + 0x865f8 + (param_3 & 0x7f) + 0x494));
    uVar43 = 0;
    break;
  case 0x16:
    bVar42 = MaDevDrv_ReadIntermediateReg(0x7e);
    MaDevDrv_WriteIntermediateReg(0x7e,bVar42 & 0xc0 | bVar39 & 3);
    uVar43 = 0;
    break;
  case 0x17:
    MaDevDrv_WriteIntermediateReg(0x7b,*(uchar *)(DAT_000871dc + (param_2 & 0x7f) + 0x86a52));
    uVar43 = 0;
    break;
  case 0x18:
    bVar39 = MaDevDrv_ReadIntermediateReg(0x7e);
    bVar39 = bVar39 & 0x83;
    if ((int)param_2 < 0) {
      bVar39 = bVar39 | 0x40;
    }
    MaDevDrv_WriteIntermediateReg(0x7e,bVar39);
    MaDevDrv_WriteIntermediateReg(0x7c,*(uchar *)(DAT_000871d8 + (param_2 & 0x7f) + 0x86a36));
    uVar43 = 0;
    break;
  case 0x19:
    MaDevDrv_WriteIntermediateReg(0x74,*(uchar *)(DAT_000871d4 + (param_2 & 0x7f) + 0x86a00));
    uVar43 = 0;
    break;
  case 0x1a:
    MaDevDrv_WriteIntermediateReg(0x75,*(uchar *)(DAT_000871d0 + (param_2 & 0x7f) + 0x869e4));
    uVar43 = 0;
    break;
  case 0x1b:
    MaDevDrv_WriteIntermediateReg(0x77,*(uchar *)(DAT_000871cc + (param_2 & 0x7f) + 0x869c8));
    uVar43 = 0;
    break;
  case 0x1c:
    MaDevDrv_WriteIntermediateReg(0x78,*(uchar *)(DAT_000871e4 + (param_2 & 0x7f) + 0x86ae4));
    uVar43 = 0;
    break;
  case 0x1d:
    uVar43 = *(int *)(DAT_00086340 + 0x85dbe) - 0x20;
    if (uVar43 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00085dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar43 = (*(code *)(&switchD_00085dc0::switchdataD_00085dc4 +
                         (&switchD_00085dc0::switchdataD_00085dc4)[uVar43]))();
      return uVar43;
    }
    uVar43 = 0xffffffff;
    break;
  case 0x1e:
    if (param_4 == (void *)0x0 || 1 < param_2) goto LAB_000856d2;
    uVar43 = MaDevDrv_WaitEqBusy();
    if (-1 < (int)uVar43) {
      uVar43 = *(int *)(DAT_0008633c + 0x85d9c) - 0x20;
      if (uVar43 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00085da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar43 = (*(code *)(&switchD_00085da0::switchdataD_00085da4 +
                           (&switchD_00085da0::switchdataD_00085da4)[uVar43]))();
        return uVar43;
      }
      uVar43 = 0xffffffff;
    }
    break;
  case 0x1f:
  case 0x20:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar43 = MaDsp_XtcCtrl(param_1,param_4);
    break;
  case 0x21:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar43 = MaDsp_SfxCtrl(0,0x20160,*(uint *)((int)param_4 + 4),*(void **)((int)param_4 + 8));
    break;
  case 0x22:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar43 = MaDsp_SfxCtrl(1,0x20160,0,*(void **)((int)param_4 + 8));
    break;
  case 0x23:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    if (*(uint *)(*(int *)(DAT_00086338 + 0x85d0e) + 0xbe0) < 2) {
      bVar39 = 0;
      local_2c[0] = 0;
      if (*(int *)(DAT_00087f6c + 0x87874) - 0x21U < 2) {
        bVar51 = MaDevDrv_ReadIntermediateReg(0xed);
        bVar42 = MaDevDrv_ReadIntermediateReg(0xf4);
        bVar51 = bVar51 & 0x80;
        bVar42 = bVar42 & 7;
      }
      else if (*(int *)(DAT_00087f6c + 0x87874) - 0x23U < 2) {
        bVar51 = MaDevDrv_ReadIntermediateReg(0xed);
        bVar42 = MaDevDrv_ReadIntermediateReg(0xf4);
        bVar51 = bVar51 & 0x80;
        bVar42 = bVar42 & 7;
        bVar39 = MaDevDrv_ReadIntermediateReg(0xee);
        bVar39 = bVar39 & 0x10;
      }
      else {
        bVar51 = 0;
        bVar42 = bVar39;
        bVar39 = 0;
      }
      iVar53 = DAT_00087f78;
      bVar47 = *(byte *)param_4;
      bVar49 = bVar51;
      if (bVar47 == 1) {
        if (*(int *)(DAT_00087fac + 0x87c38) - 0x21U < 2) {
          bVar49 = bVar51 | 1;
        }
        else if (*(int *)(DAT_00087fac + 0x87c38) - 0x23U < 2) {
          bVar49 = bVar51 | 1;
          if (*(int *)((int)param_4 + 8) == 48000) {
            if (*(char *)(DAT_00087fac + 0x87c62) == '\0') {
              bVar49 = bVar51 | 3;
            }
            else {
              bVar49 = bVar51 | 5;
            }
          }
          else {
            bVar39 = bVar39 | 0x20;
          }
        }
      }
      else if (bVar47 != 0) {
        if (bVar47 != 2) {
          uVar43 = 0xfffffffe;
          break;
        }
        if (*(int *)(DAT_00087f70 + 0x878ae) - 0x21U < 2) {
          bVar47 = 1;
        }
        else {
          if (1 < *(int *)(DAT_00087f70 + 0x878ae) - 0x23U) goto LAB_000856d2;
          if (*(int *)((int)param_4 + 8) == 48000) {
            if (*(char *)(DAT_00087f70 + 0x878d8) == '\0') {
              bVar47 = 1;
              bVar49 = bVar51 | 2;
            }
            else {
              bVar47 = 1;
              bVar49 = bVar51 | 4;
            }
          }
          else {
            bVar39 = bVar39 | 0x20;
            bVar47 = 1;
          }
        }
      }
      if (*(char *)((int)param_4 + 1) == '\x01') {
        local_2c[0] = local_2c[0] | 0xe0;
      }
      else if (*(char *)((int)param_4 + 1) != '\0') goto LAB_000856d2;
      cVar1 = *(char *)((int)param_4 + 2);
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          local_2c[0] = local_2c[0] | 2;
        }
        else {
          if (cVar1 != '\x02') goto LAB_000856d2;
          local_2c[0] = local_2c[0] | 4;
        }
      }
      cVar1 = *(char *)((int)param_4 + 3);
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          local_2c[0] = local_2c[0] | 8;
        }
        else {
          if (cVar1 != '\x02') goto LAB_000856d2;
          local_2c[0] = local_2c[0] | 0x10;
        }
      }
      if (*(int *)(DAT_00087f74 + 0x8792e) - 0x21U < 4) {
        cVar1 = *(char *)((int)param_4 + 4);
        if (cVar1 == '\x01') {
          bVar42 = bVar42 | 0x10;
        }
        else if (cVar1 != '\0') {
          if (cVar1 != '\x02') {
            uVar43 = 0xfffffffe;
            break;
          }
          bVar42 = bVar42 | 0x20;
        }
        uVar43 = *(uint *)((int)param_4 + 8);
        if (uVar43 == 0x5622) {
          bVar39 = bVar39 | 5;
        }
        else if (uVar43 < 0x5623) {
          if (uVar43 == 0x2b11) {
            bVar39 = bVar39 | 9;
          }
          else if (uVar43 < 0x2b12) {
            if (uVar43 != 8000) {
LAB_00087cd8:
              uVar43 = 0xfffffffe;
              break;
            }
            bVar39 = bVar39 | 10;
          }
          else if (uVar43 == 12000) {
            bVar39 = bVar39 | 8;
          }
          else {
            if (uVar43 != 16000) goto LAB_00087cd8;
            bVar39 = bVar39 | 6;
          }
        }
        else if (uVar43 == 32000) {
          bVar39 = bVar39 | 2;
        }
        else if (uVar43 < 0x7d01) {
          if (uVar43 != 24000) goto LAB_00087cd8;
          bVar39 = bVar39 | 4;
        }
        else if (uVar43 == 0xac44) {
          bVar39 = bVar39 | 1;
        }
        else if (uVar43 != 48000) goto LAB_00087cd8;
      }
      MaDevDrv_WriteIntermediateReg(0x9f,(byte)local_2c[0]);
      if (*(int *)(iVar53 + 0x8798e) - 0x21U < 4) {
        MaDevDrv_WriteIntermediateReg(0xed,bVar49);
        MaDevDrv_WriteIntermediateReg(0xee,bVar39);
        MaDevDrv_WriteIntermediateReg(0xf4,bVar42);
        machdep_Sleep(1);
      }
      MaDevDrv_WriteIntermediateReg(0x9f,bVar47 | (byte)local_2c[0]);
      uVar43 = 0;
      break;
    }
    goto LAB_00085d1a;
  case 0x24:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    MaDevDrv_WriteIntermediateReg(0x18,*(byte *)((int)param_4 + 1) & 3 | *(byte *)param_4 & 0x7c);
    MaDevDrv_WriteIntermediateReg
              (0x19,*(byte *)((int)param_4 + 3) & 3 | *(byte *)((int)param_4 + 2) & 0x7c);
    uVar43 = 0;
    break;
  case 0x25:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar40 = MaResMgr_GetNumFree3D();
    *(undefined4 *)param_4 = uVar40;
    uVar43 = 0;
    break;
  case 0x26:
    uVar43 = 1 - (int)param_4;
    if ((void *)0x1 < param_4) {
      uVar43 = 0;
    }
    if (param_2 != 0x115) {
      uVar43 = uVar43 | 1;
    }
    if ((((((((uVar43 != 0) || (*(char *)param_4 != 'M')) || (*(char *)((int)param_4 + 1) != '5'))
           || ((*(char *)((int)param_4 + 2) != 'S' || (*(char *)((int)param_4 + 3) != '\0')))) ||
          (*(char *)((int)param_4 + 4) != '\0')) ||
         (((*(char *)((int)param_4 + 5) != '\0' || (*(char *)((int)param_4 + 6) != '\x01')) ||
          ((*(char *)((int)param_4 + 7) != '\r' ||
           (((*(char *)((int)param_4 + 8) != 'R' || (*(char *)((int)param_4 + 9) != 'R')) ||
            (*(char *)((int)param_4 + 10) != '\0')))))))) ||
        ((*(char *)((int)param_4 + 0xb) != -0x80 || (*(char *)((int)param_4 + 0x8c) != 'R')))) ||
       ((*(char *)((int)param_4 + 0x8d) != 'L' ||
        (((*(char *)((int)param_4 + 0x8e) != '\0' || (*(char *)((int)param_4 + 0x8f) != -0x80)) ||
         ((*(char *)((int)param_4 + 0x110) != 'S' ||
          (((*(char *)((int)param_4 + 0x111) != 'T' || (*(char *)((int)param_4 + 0x112) != '\0')) ||
           (*(char *)((int)param_4 + 0x113) != '\x01')))))))))) goto LAB_000856d2;
    uVar43 = MaDsp_DvxCtrl((uchar *)((int)param_4 + 0xc),(uchar *)((int)param_4 + 0x90),
                           (uint)*(byte *)((int)param_4 + 0x114));
    break;
  case 0x27:
    uVar43 = MaDsp_3DCtrl(0,100,param_2,(void *)0x0);
    if (-1 < (int)uVar43) {
      iVar53 = 0;
      pbVar45 = (byte *)(DAT_0008722c + 0x86b98);
      piVar52 = (int *)(DAT_00087230 + 0x86b9e);
      piVar50 = (int *)(DAT_00087234 + 0x86ba4);
      piVar48 = (int *)(DAT_00087238 + 0x86ba6);
      piVar46 = (int *)(DAT_0008723c + 0x86ba8);
      do {
        if (*pbVar45 == 0xff) {
LAB_00086ba8:
          if (pbVar45[1] != 0xff) {
            iVar54 = *piVar48 + (uint)pbVar45[1] * 0x98;
            uVar44 = (uint)*(byte *)(iVar54 + 0x34);
            if ((int)(uVar44 << 0x18) < 0) {
              uVar43 = MaDsp_3DCtrl(1,0xa1,uVar44 & 3,local_2c);
              if ((int)uVar43 < 0) goto LAB_00086c0a;
              *(char *)(iVar54 + 0x2e) = (char)local_2c[0];
              FUN_00075e28(iVar53,1);
            }
          }
          if (pbVar45[2] != 0xff) {
            iVar54 = *piVar50 + (uint)pbVar45[2] * 0x98;
            uVar44 = (uint)*(byte *)(iVar54 + 0x34);
            if ((int)(uVar44 << 0x18) < 0) {
              uVar43 = MaDsp_3DCtrl(1,0xa1,uVar44 & 3,local_2c);
              if ((int)uVar43 < 0) goto LAB_00086c0a;
              *(char *)(iVar54 + 0x2e) = (char)local_2c[0];
              FUN_00075e28(iVar53,2);
            }
          }
          if (pbVar45[3] != 0xff) {
            iVar54 = *piVar52 + (uint)pbVar45[3] * 0x98;
            uVar44 = (uint)*(byte *)(iVar54 + 0x34);
            if (((int)(uVar44 << 0x18) < 0) &&
               (uVar43 = MaDsp_3DCtrl(1,0xa1,uVar44 & 3,local_2c), -1 < (int)uVar43)) {
              *(char *)(iVar54 + 0x2e) = (char)local_2c[0];
              FUN_00075e28(iVar53,3);
            }
          }
        }
        else {
          iVar54 = *piVar46 + (uint)*pbVar45 * 0x98;
          uVar44 = (uint)*(byte *)(iVar54 + 0x34);
          if (-1 < (int)(uVar44 << 0x18)) goto LAB_00086ba8;
          uVar43 = MaDsp_3DCtrl(1,0xa1,uVar44 & 3,local_2c);
          if (-1 < (int)uVar43) {
            *(char *)(iVar54 + 0x2e) = (char)local_2c[0];
            FUN_00075e28(iVar53,0);
            goto LAB_00086ba8;
          }
        }
LAB_00086c0a:
        iVar53 = iVar53 + 1;
        pbVar45 = pbVar45 + 4;
      } while (iVar53 != 10);
    }
    break;
  case 0x28:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar43 = MaDsp_3DCtrl(0,0x65,0,param_4);
    break;
  case 0x2a:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    iVar53 = *(int *)(DAT_000871c8 + 0x864f2);
    *(undefined4 *)param_4 = *(undefined4 *)(iVar53 + 100);
    *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar53 + 0x68);
    *(undefined4 *)((int)param_4 + 8) = *(undefined4 *)(iVar53 + 0x6c);
    *(undefined4 *)((int)param_4 + 0xc) = *(undefined4 *)(iVar53 + 0x70);
    *(undefined4 *)((int)param_4 + 0x10) = *(undefined4 *)(iVar53 + 0x74);
    *(undefined4 *)((int)param_4 + 0x14) = *(undefined4 *)(iVar53 + 0x78);
    *(undefined4 *)((int)param_4 + 0x18) = *(undefined4 *)(iVar53 + 0x7c);
    *(undefined4 *)((int)param_4 + 0x1c) = *(undefined4 *)(iVar53 + 0x80);
    *(undefined4 *)((int)param_4 + 0x20) = *(undefined4 *)(iVar53 + 0x84);
    *(undefined4 *)((int)param_4 + 0x24) = *(undefined4 *)(iVar53 + 0x88);
    *(undefined4 *)((int)param_4 + 0x28) = *(undefined4 *)(iVar53 + 0x8c);
    uVar43 = 0;
    break;
  case 0x2b:
    if (*(int *)(DAT_000871c4 + 0x864ac) - 0x23U < 2) {
      if (2 < param_2) goto LAB_000856d2;
      bVar42 = MaDevDrv_ReadIntermediateReg(0xdb);
      MaDevDrv_WriteIntermediateReg(0xdb,bVar42 & 0xfc | bVar39);
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0x2c:
    uVar43 = MaDsp_ExtCtrl(1,param_2,param_4);
    break;
  case 0x3c:
    iVar53 = *(int *)(DAT_000871ac + 0x863c8);
    if (*(char *)(iVar53 + 0x34) != '\0') {
      MaResMgr_FreeSfx(0);
      iVar53 = *(int *)(iVar24 + 0x863c8);
      *(undefined1 *)(iVar53 + 0x34) = 0;
    }
    if (*(char *)(iVar53 + 0x35) != '\0') {
      MaResMgr_FreeSfx(1);
      *(undefined1 *)(*(int *)(DAT_00087f58 + 0x876e2) + 0x35) = 0;
    }
    uVar43 = MaDsp_3DCtrl(0,0x3c,param_2,param_4);
    if (-1 < (int)uVar43) {
      iVar53 = 0;
      pbVar45 = (byte *)(DAT_000871b0 + 0x86400);
      piVar52 = (int *)(DAT_000871b4 + 0x86406);
      piVar50 = (int *)(DAT_000871b8 + 0x8640c);
      piVar48 = (int *)(DAT_000871bc + 0x8640e);
      piVar46 = (int *)(DAT_000871c0 + 0x86410);
      do {
        if (*pbVar45 != 0xff) {
          iVar54 = *piVar52 + (uint)*pbVar45 * 0x98;
          uVar43 = (uint)*(byte *)(iVar54 + 0x34);
          if ((((int)(uVar43 << 0x18) < 0) &&
              (iVar41 = MaDsp_3DCtrl(1,0xa1,uVar43 & 3,local_2c), -1 < iVar41)) &&
             (local_2c[0] == 2)) {
            *(undefined1 *)(iVar54 + 0x2e) = 2;
            FUN_00075e28(iVar53,0);
          }
        }
        if (pbVar45[1] != 0xff) {
          iVar54 = *piVar50 + (uint)pbVar45[1] * 0x98;
          uVar43 = (uint)*(byte *)(iVar54 + 0x34);
          if ((((int)(uVar43 << 0x18) < 0) &&
              (iVar41 = MaDsp_3DCtrl(1,0xa1,uVar43 & 3,local_2c), -1 < iVar41)) &&
             (local_2c[0] == 2)) {
            *(undefined1 *)(iVar54 + 0x2e) = 2;
            FUN_00075e28(iVar53,1);
          }
        }
        if (pbVar45[2] != 0xff) {
          iVar54 = *piVar48 + (uint)pbVar45[2] * 0x98;
          uVar43 = (uint)*(byte *)(iVar54 + 0x34);
          if ((((int)(uVar43 << 0x18) < 0) &&
              (iVar41 = MaDsp_3DCtrl(1,0xa1,uVar43 & 3,local_2c), -1 < iVar41)) &&
             (local_2c[0] == 2)) {
            *(undefined1 *)(iVar54 + 0x2e) = 2;
            FUN_00075e28(iVar53);
          }
        }
        if (pbVar45[3] != 0xff) {
          iVar54 = *piVar46 + (uint)pbVar45[3] * 0x98;
          uVar43 = (uint)*(byte *)(iVar54 + 0x34);
          if ((((int)(uVar43 << 0x18) < 0) &&
              (iVar41 = MaDsp_3DCtrl(1,0xa1,uVar43 & 3,local_2c), -1 < iVar41)) &&
             (local_2c[0] == 2)) {
            *(undefined1 *)(iVar54 + 0x2e) = 2;
            FUN_00075e28(iVar53,3);
          }
        }
        iVar53 = iVar53 + 1;
        pbVar45 = pbVar45 + 4;
      } while (iVar53 != 10);
      uVar43 = 0;
    }
    break;
  case 0x42:
    if (param_2 == 0) {
      iVar53 = *(int *)(DAT_00087f4c + 0x87606);
      if (*(char *)(iVar53 + 0x34) != '\0') {
        MaResMgr_FreeSfx(0);
        iVar53 = *(int *)(iVar32 + 0x87606);
        *(undefined1 *)(iVar53 + 0x34) = 0;
      }
      iVar54 = DAT_00087f90;
      if (*(char *)(iVar53 + 0x35) != '\0') {
        MaResMgr_FreeSfx(1);
        *(undefined1 *)(*(int *)(iVar54 + 0x87b34) + 0x35) = 0;
      }
      uVar43 = MaDsp_3DCtrl(0,0x42,0,param_4);
      break;
    }
    if (param_2 != 1) {
      uVar43 = 0xfffffffe;
      break;
    }
    iVar53 = MaResMgr_AllocSfx(0);
    if (-1 < iVar53) {
      *(undefined1 *)(*(int *)(DAT_00087214 + 0x86a98) + 0x34) = 2;
    }
    iVar53 = MaResMgr_AllocSfx(1);
    if (iVar53 < 0) {
      iVar53 = *(int *)(DAT_00087f9c + 0x87ba8);
    }
    else {
      iVar53 = *(int *)(DAT_00087218 + 0x86ab6);
      *(undefined1 *)(iVar53 + 0x35) = 2;
    }
    if (*(char *)(iVar53 + 0x34) != '\0') {
      if (*(char *)(iVar53 + 0x35) != '\0') {
        uVar43 = MaDsp_3DCtrl(0,0x42,1,param_4);
        iVar53 = DAT_00087fb0;
        if ((int)uVar43 < 0) {
          if (*(char *)(*(int *)(DAT_00087fb0 + 0x87c80) + 0x34) != '\0') {
            MaResMgr_FreeSfx(0);
            *(undefined1 *)(*(int *)(iVar53 + 0x87c80) + 0x34) = 0;
          }
          iVar53 = DAT_00087fb4;
          if (*(char *)(*(int *)(DAT_00087fb4 + 0x87ca0) + 0x35) != '\0') {
            MaResMgr_FreeSfx(1);
            *(undefined1 *)(*(int *)(iVar53 + 0x87ca0) + 0x35) = 0;
          }
        }
        break;
      }
      MaResMgr_FreeSfx(0);
      iVar53 = *(int *)(DAT_0008721c + 0x86adc);
      *(undefined1 *)(iVar53 + 0x34) = 0;
    }
    iVar54 = DAT_00087220;
    if (*(char *)(iVar53 + 0x35) != '\0') {
      MaResMgr_FreeSfx(1);
      *(undefined1 *)(*(int *)(iVar54 + 0x86afc) + 0x35) = 0;
    }
    goto LAB_00085d1a;
  case 0x43:
  case 0x44:
  case 0x47:
  case 0x49:
  case 0x4b:
  case 0x54:
  case 0x55:
  case 0x57:
  case 0x5a:
  case 0x60:
  case 0x61:
  case 0x62:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar43 = MaDsp_3DCtrl(0,param_1,param_2,param_4);
    break;
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x58:
  case 0x59:
  case 0x5f:
    uVar43 = MaDsp_3DCtrl(0,param_1,param_2,param_4);
    break;
  case 0x56:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    if ((*(uint *)param_4 & 1) == 0) {
      uVar43 = MaDsp_3DCtrl(0,0x56,param_2,param_4);
      break;
    }
    if (*(int *)((int)param_4 + 4) == 0) {
      uVar43 = MaDsp_3DCtrl(0,0x56,param_2,param_4);
      iVar53 = DAT_00087f7c;
      if (-1 < (int)uVar43) {
        iVar54 = *(int *)(DAT_00087f7c + 0x879de);
        if (*(char *)(iVar54 + 0x34) != '\0') {
          MaResMgr_FreeSfx(0);
          iVar54 = *(int *)(iVar53 + 0x879de);
          *(undefined1 *)(iVar54 + 0x34) = 0;
        }
        if (*(char *)(iVar54 + 0x35) != '\0') {
          MaResMgr_FreeSfx(1);
          *(undefined1 *)(*(int *)(DAT_00087f80 + 0x87a04) + 0x35) = 0;
        }
      }
      break;
    }
    if (*(int *)((int)param_4 + 4) != 1) goto LAB_000856d2;
    iVar53 = MaResMgr_AllocSfx(0);
    if (-1 < iVar53) {
      *(undefined1 *)(*(int *)(DAT_00087204 + 0x869da) + 0x34) = 2;
    }
    iVar53 = MaResMgr_AllocSfx(1);
    if (iVar53 < 0) {
      iVar53 = *(int *)(DAT_00087f94 + 0x87b56);
    }
    else {
      iVar53 = *(int *)(DAT_00087208 + 0x869f8);
      *(undefined1 *)(iVar53 + 0x35) = 2;
    }
    iVar54 = DAT_0008720c;
    if (*(char *)(iVar53 + 0x34) != '\0') {
      if (*(char *)(iVar53 + 0x35) != '\0') {
        uVar43 = MaDsp_3DCtrl(0,0x56,param_2,param_4);
        iVar53 = DAT_00087fa4;
        if ((int)uVar43 < 0) {
          if (*(char *)(*(int *)(DAT_00087fa4 + 0x87bea) + 0x34) != '\0') {
            MaResMgr_FreeSfx(0);
            *(undefined1 *)(*(int *)(iVar53 + 0x87bea) + 0x34) = 0;
          }
          iVar53 = DAT_00087fa8;
          if (*(char *)(*(int *)(DAT_00087fa8 + 0x87c08) + 0x35) != '\0') {
            MaResMgr_FreeSfx(1);
            *(undefined1 *)(*(int *)(iVar53 + 0x87c08) + 0x35) = 0;
          }
        }
        break;
      }
      MaResMgr_FreeSfx(0);
      iVar53 = *(int *)(iVar54 + 0x86a1e);
      *(undefined1 *)(iVar53 + 0x34) = 0;
    }
    iVar54 = DAT_00087210;
    if (*(char *)(iVar53 + 0x35) != '\0') {
      MaResMgr_FreeSfx(1);
      *(undefined1 *)(*(int *)(iVar54 + 0x86a3e) + 0x35) = 0;
    }
LAB_00085d1a:
    uVar43 = 0xfffffffd;
    break;
  case 0x66:
    uVar43 = MaDsp_3DCtrl(0,0x66,param_2,(void *)0x0);
    if (-1 < (int)uVar43) {
      iVar53 = 0;
      pbVar45 = (byte *)(DAT_0008634c + 0x85e6e);
      piVar52 = (int *)(DAT_00086350 + 0x85e74);
      piVar50 = (int *)(DAT_00086354 + 0x85e7a);
      piVar48 = (int *)(DAT_00086358 + 0x85e7c);
      piVar46 = (int *)(DAT_0008635c + 0x85e7e);
      do {
        if (*pbVar45 != 0xff) {
          iVar54 = *piVar52 + (uint)*pbVar45 * 0x98;
          uVar43 = (uint)*(byte *)(iVar54 + 0x34);
          if ((((int)(uVar43 << 0x18) < 0) &&
              (iVar41 = MaDsp_3DCtrl(1,0xa1,uVar43 & 3,local_2c), -1 < iVar41)) &&
             (local_2c[0] == 2)) {
            if (param_2 == 0) {
              uVar38 = 2;
            }
            else {
              uVar38 = 3;
            }
            *(undefined1 *)(iVar54 + 0x2e) = uVar38;
            FUN_00075e28(iVar53,0);
          }
        }
        if (pbVar45[1] != 0xff) {
          iVar54 = *piVar50 + (uint)pbVar45[1] * 0x98;
          uVar43 = (uint)*(byte *)(iVar54 + 0x34);
          if ((((int)(uVar43 << 0x18) < 0) &&
              (iVar41 = MaDsp_3DCtrl(1,0xa1,uVar43 & 3,local_2c), -1 < iVar41)) &&
             (local_2c[0] == 2)) {
            if (param_2 == 0) {
              uVar38 = 2;
            }
            else {
              uVar38 = 3;
            }
            *(undefined1 *)(iVar54 + 0x2e) = uVar38;
            FUN_00075e28(iVar53,1);
          }
        }
        if (pbVar45[2] != 0xff) {
          iVar54 = *piVar48 + (uint)pbVar45[2] * 0x98;
          uVar43 = (uint)*(byte *)(iVar54 + 0x34);
          if ((((int)(uVar43 << 0x18) < 0) &&
              (iVar41 = MaDsp_3DCtrl(1,0xa1,uVar43 & 3,local_2c), -1 < iVar41)) &&
             (local_2c[0] == 2)) {
            if (param_2 == 0) {
              uVar38 = 2;
            }
            else {
              uVar38 = 3;
            }
            *(undefined1 *)(iVar54 + 0x2e) = uVar38;
            FUN_00075e28(iVar53);
          }
        }
        if (pbVar45[3] != 0xff) {
          iVar54 = *piVar46 + (uint)pbVar45[3] * 0x98;
          uVar43 = (uint)*(byte *)(iVar54 + 0x34);
          if ((((int)(uVar43 << 0x18) < 0) &&
              (iVar41 = MaDsp_3DCtrl(1,0xa1,uVar43 & 3,local_2c), -1 < iVar41)) &&
             (local_2c[0] == 2)) {
            if (param_2 == 0) {
              uVar38 = 2;
            }
            else {
              uVar38 = 3;
            }
            *(undefined1 *)(iVar54 + 0x2e) = uVar38;
            FUN_00075e28(iVar53,3);
          }
        }
        iVar53 = iVar53 + 1;
        pbVar45 = pbVar45 + 4;
      } while (iVar53 != 10);
      uVar43 = 0;
    }
    break;
  case 0x67:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar43 = MaDsp_3DCtrl(0,0x67,0,local_2c);
    *(uint *)param_4 = local_2c[0];
    break;
  case 200:
    uVar43 = *(int *)(DAT_00087224 + 0x86b0e) - 0x20;
    if (uVar43 < 5) {
      if ((1 << (uVar43 & 0xff) & 0x1dU) == 0) {
        uVar43 = 0xffffffff;
      }
      else {
        uVar43 = param_2;
        if (param_2 < 0x75) {
          uVar43 = param_3;
        }
        if (0x74 < uVar43) goto LAB_000856d2;
        MaDevDrv_WriteIntermediateReg(0x7b,*(uchar *)(DAT_00087228 + param_2 + 0x87058));
        *(byte *)(iVar26 + 0x86b40) = bVar39;
        *(uchar *)(iVar26 + 0x86b41) = uVar2;
        uVar43 = 0;
      }
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xc9:
    uVar43 = *(int *)(DAT_00086344 + 0x85dde) - 0x20;
    if (uVar43 < 5) {
      if ((1 << (uVar43 & 0xff) & 0x1dU) == 0) {
        uVar43 = 0xffffffff;
      }
      else {
        uVar43 = param_2;
        if (param_2 < 0x75) {
          uVar43 = param_3;
        }
        if (0x74 < uVar43) goto LAB_000856d2;
        MaDevDrv_WriteIntermediateReg
                  (0x7c,*(uchar *)((int)&DAT_00086324 + DAT_00086348 + param_2 + 2));
        *(byte *)(iVar12 + 0x85e12) = bVar39;
        *(uchar *)(iVar12 + 0x85e13) = uVar2;
        uVar43 = 0;
      }
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xca:
    uVar43 = *(int *)(DAT_00086398 + 0x86142) - 0x20;
    if (uVar43 < 5) {
      if ((1 << (uVar43 & 0xff) & 0x1dU) == 0) {
        uVar43 = 0xffffffff;
      }
      else {
        uVar43 = param_2;
        if (param_2 < 0x75) {
          uVar43 = param_3;
        }
        if (0x74 < uVar43) goto LAB_000856d2;
        iVar53 = DAT_0008639c + 0x86176;
        MaDevDrv_WriteIntermediateReg(0x79,*(uchar *)(iVar53 + param_2 + 0x514));
        MaDevDrv_WriteIntermediateReg(0x7a,*(uchar *)(iVar53 + param_3 + 0x514));
        *(byte *)(iVar21 + 0x86178) = bVar39;
        *(uchar *)(iVar21 + 0x86179) = uVar2;
        uVar43 = 0;
      }
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xcb:
    uVar43 = *(int *)(DAT_00086390 + 0x860ea) - 0x20;
    if (uVar43 < 5) {
      if ((1 << (uVar43 & 0xff) & 0x1dU) == 0) {
        uVar43 = 0xffffffff;
      }
      else {
        uVar43 = param_2;
        if (param_2 < 0x75) {
          uVar43 = param_3;
        }
        if (0x74 < uVar43) goto LAB_000856d2;
        MaDevDrv_WriteIntermediateReg(0x78,*(uchar *)(DAT_00086394 + param_2 + 0x86632));
        *(byte *)(iVar20 + 0x86122) = bVar39;
        *(uchar *)(iVar20 + 0x86123) = uVar2;
        uVar43 = 0;
      }
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xcc:
    if (*(int *)(DAT_00086388 + 0x860ae) == 0x20) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0x77,*(uchar *)(DAT_0008638c + param_2 + 0x865dc));
      *(byte *)(iVar19 + 0x860e8) = bVar39;
      *(uchar *)(iVar19 + 0x860e9) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xcd:
    if (param_2 < 0x75) {
      uVar43 = param_3;
    }
    if (0x74 < uVar43) goto LAB_000856d2;
    uVar43 = *(uint *)(DAT_00086380 + 0x86070);
    if (uVar43 == 0x20) {
      MaDevDrv_WriteIntermediateReg
                (0x75,*(uchar *)((int)&DAT_00087f54 + DAT_00087f84 + param_2 + 2));
      *(byte *)(iVar18 + 0x860ac) = bVar39;
      *(uchar *)(iVar18 + 0x860ad) = uVar2;
      uVar43 = 0;
    }
    else if ((uVar43 < 0x20) || (2 < uVar43 - 0x22)) {
      uVar43 = 0xffffffff;
    }
    else {
      MaDevDrv_WriteIntermediateReg(0xc0,*(uchar *)(DAT_00086384 + param_2 + 0x86616));
      *(byte *)(iVar18 + 0x860ac) = bVar39;
      *(uchar *)(iVar18 + 0x860ad) = uVar2;
      uVar43 = 0;
    }
    break;
  case 0xce:
    if (param_2 < 0x75) {
      uVar43 = param_3;
    }
    if (0x74 < uVar43) goto LAB_000856d2;
    uVar43 = *(uint *)(DAT_00086378 + 0x86028);
    if (uVar43 == 0x20) {
      MaDevDrv_WriteIntermediateReg
                (0x74,*(uchar *)((int)&DAT_00087f7c + DAT_00087f88 + param_2 + 2));
      *(byte *)(iVar17 + 0x86066) = bVar39;
      *(uchar *)(iVar17 + 0x86067) = uVar2;
      uVar43 = 0;
    }
    else if ((uVar43 < 0x20) || (2 < uVar43 - 0x22)) {
      uVar43 = 0xffffffff;
    }
    else {
      MaDevDrv_WriteIntermediateReg(0xbf,*(uchar *)(DAT_0008637c + param_2 + 0x865ce));
      *(byte *)(iVar17 + 0x86066) = bVar39;
      *(uchar *)(iVar17 + 0x86067) = uVar2;
      uVar43 = 0;
    }
    break;
  case 0xcf:
    if (*(int *)(DAT_00086370 + 0x85fbe) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      bVar42 = MaDevDrv_ReadIntermediateReg(0xc3);
      MaDevDrv_WriteIntermediateReg
                (0xc3,bVar42 & 0x80 | *(byte *)(iVar16 + 0x85fe2 + param_2 + 0x514));
      MaDevDrv_WriteIntermediateReg(0xc4,*(uchar *)(iVar16 + 0x85fe2 + param_3 + 0x514));
      *(byte *)(iVar15 + 0x85ffe) = bVar39;
      *(uchar *)(iVar15 + 0x85fff) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xd0:
    if (*(int *)(DAT_00086368 + 0x85f7a) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0xc2,*(uchar *)(DAT_0008636c + param_2 + 0x864ae));
      *(byte *)(iVar14 + 0x85fbc) = bVar39;
      *(uchar *)(iVar14 + 0x85fbd) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xd1:
    if (*(int *)(DAT_00086360 + 0x85f28) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      iVar53 = DAT_00086364 + 0x85f48;
      MaDevDrv_WriteIntermediateReg(0xbd,*(uchar *)(iVar53 + param_2 + 0x604));
      MaDevDrv_WriteIntermediateReg(0xbe,*(uchar *)(iVar53 + param_3 + 0x604));
      *(byte *)(iVar13 + 0x85f6c) = bVar39;
      *(uchar *)(iVar13 + 0x85f6d) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xd2:
    if (*(int *)(DAT_00086328 + 0x85c54) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0xb6,*(uchar *)(DAT_0008632c + param_2 + 0x86200));
      *(byte *)(iVar10 + 0x85c9a) = bVar39;
      *(uchar *)(iVar10 + 0x85c9b) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xd3:
    if (*(int *)(DAT_00086320 + 0x85c12) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0xb7,*(uchar *)(DAT_00086324 + param_2 + 0x861be));
      *(byte *)(iVar9 + 0x85c5a) = bVar39;
      *(uchar *)(iVar9 + 0x85c5b) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xd4:
    if (*(int *)(DAT_00086330 + 0x85c96) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0xb8,*(uchar *)(DAT_00086334 + param_2 + 0x86242));
      *(byte *)(iVar11 + 0x85ce0) = bVar39;
      *(uchar *)(iVar11 + 0x85ce1) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xd5:
    if (*(int *)(DAT_00086318 + 0x85bb4) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      bVar42 = MaDevDrv_ReadIntermediateReg(0xb9);
      MaDevDrv_WriteIntermediateReg
                (0xb9,bVar42 & 0x80 | *(byte *)(iVar8 + 0x85bd8 + param_2 + 0x58c));
      MaDevDrv_WriteIntermediateReg(0xba,*(uchar *)(iVar8 + 0x85bd8 + param_3 + 0x58c));
      *(byte *)(iVar7 + 0x85c00) = bVar39;
      *(uchar *)(iVar7 + 0x85c01) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xd6:
    if (*(int *)(DAT_000863a8 + 0x861ec) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      iVar53 = DAT_000863ac + 0x8620c;
      MaDevDrv_WriteIntermediateReg(0xbb,*(uchar *)(iVar53 + param_2 + 0x58c));
      MaDevDrv_WriteIntermediateReg(0xbc,*(uchar *)(iVar53 + param_3 + 0x58c));
      *(byte *)(iVar23 + 0x8623a) = bVar39;
      *(uchar *)(iVar23 + 0x8623b) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xd7:
    if (*(int *)(DAT_000863a0 + 0x861a8) - 0x22U < 3) {
      if (param_2 < 0x75) {
        uVar43 = param_3;
      }
      if (0x74 < uVar43) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0xc1,*(uchar *)(DAT_000863a4 + param_2 + 0x86754));
      *(byte *)(iVar22 + 0x861f8) = bVar39;
      *(uchar *)(iVar22 + 0x861f9) = uVar2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xdc:
    uVar43 = *(uint *)(DAT_000863b0 + 0x8623e);
    if (uVar43 == 0x20) {
      bVar39 = bVar39 & 1;
      if ((int)(param_2 << 0x16) < 0) {
        if ((param_2 & 6) != 0) goto LAB_000856d2;
        bVar39 = bVar39 | 0x48;
      }
      else {
        if ((int)(param_2 << 0x1e) < 0) {
          bVar39 = bVar39 | 0x88;
        }
        if ((int)(param_2 << 0x1d) < 0) {
          bVar39 = bVar39 | 0x44;
        }
      }
      MaDevDrv_WriteIntermediateReg(0x6d,bVar39);
      *(uint *)(DAT_00087f50 + 0x87664) = param_2;
      uVar43 = 0;
    }
    else if ((uVar43 < 0x20) || (2 < uVar43 - 0x22)) {
      uVar43 = 0xffffffff;
    }
    else {
      if ((param_2 & 1) == 0) {
        bVar42 = 8;
        bVar39 = 4;
        bVar51 = 0;
      }
      else {
        bVar42 = 0x88;
        bVar39 = 0x84;
        bVar51 = 0x80;
      }
      if ((int)(param_2 << 0x16) < 0) {
        if ((param_2 & 6) != 0) goto LAB_000856d2;
      }
      else {
        if ((param_2 & 2) == 0) {
          bVar39 = bVar51;
        }
        bVar42 = bVar39;
        if ((int)(param_2 << 0x1d) < 0) {
          bVar39 = bVar39 | 8;
          bVar42 = bVar39;
        }
      }
      if ((int)(param_2 << 0x1c) < 0) {
        bVar39 = bVar39 | 1;
        bVar42 = bVar42 | 1;
      }
      if ((int)(param_2 << 0x1b) < 0) {
        bVar39 = bVar39 | 2;
        bVar42 = bVar42 | 2;
      }
      MaDevDrv_WriteIntermediateReg(0xd3,bVar39);
      MaDevDrv_WriteIntermediateReg(0xd4,bVar42);
      *(uint *)((int)&DAT_000862c0 + DAT_000863b4) = param_2;
      uVar43 = 0;
    }
    break;
  case 0xdd:
    uVar43 = *(uint *)(DAT_00086310 + 0x85b20);
    if (uVar43 == 0x20) {
      if ((param_2 & 1) == 0) {
        bVar42 = 0x48;
        bVar39 = 0x88;
        bVar51 = 0;
      }
      else {
        bVar42 = 0x59;
        bVar39 = 0x99;
        bVar51 = 0x11;
      }
      if ((int)(param_2 << 0x16) < 0) {
        if ((param_2 & 6) != 0) goto LAB_000856d2;
      }
      else {
        bVar42 = bVar39;
        if ((param_2 & 2) == 0) {
          bVar42 = bVar51;
        }
        if ((int)(param_2 << 0x1d) < 0) {
          bVar42 = bVar42 | 0x44;
        }
      }
      MaDevDrv_WriteIntermediateReg(0x6c,bVar42);
      *(uint *)(iVar31 + 0x87600) = param_2;
      uVar43 = 0;
    }
    else if ((uVar43 < 0x20) || (2 < uVar43 - 0x22)) {
      uVar43 = 0xffffffff;
    }
    else {
      if ((param_2 & 1) == 0) {
        bVar42 = 8;
        bVar39 = 4;
        bVar51 = 0;
      }
      else {
        bVar42 = 0x88;
        bVar39 = 0x84;
        bVar51 = 0x80;
      }
      if ((int)(param_2 << 0x16) < 0) {
        if ((param_2 & 6) != 0) goto LAB_000856d2;
      }
      else {
        if ((param_2 & 2) == 0) {
          bVar39 = bVar51;
        }
        bVar42 = bVar39;
        if ((int)(param_2 << 0x1d) < 0) {
          bVar39 = bVar39 | 8;
          bVar42 = bVar39;
        }
      }
      if ((int)(param_2 << 0x1c) < 0) {
        bVar39 = bVar39 | 1;
        bVar42 = bVar42 | 1;
      }
      if ((int)(param_2 << 0x1b) < 0) {
        bVar39 = bVar39 | 2;
        bVar42 = bVar42 | 2;
      }
      if ((int)(param_2 << 0x17) < 0) {
        bVar39 = bVar39 | 0x10;
        bVar42 = bVar42 | 0x10;
      }
      MaDevDrv_WriteIntermediateReg(0xd1,bVar39);
      MaDevDrv_WriteIntermediateReg(0xd2,bVar42);
      *(uint *)(DAT_00086314 + 0x85bb2) = param_2;
      uVar43 = 0;
    }
    break;
  case 0xde:
    uVar43 = *(uint *)(DAT_000862f0 + 0x858f6);
    if (uVar43 == 0x20) {
      if ((int)(param_2 << 0x16) < 0) goto LAB_000856d2;
      bVar39 = bVar39 & 1;
      if ((int)(param_2 << 0x1e) < 0) {
        bVar39 = bVar39 | 8;
      }
      if ((int)(param_2 << 0x1d) < 0) {
        bVar39 = bVar39 | 4;
      }
      MaDevDrv_WriteIntermediateReg(0x6b,bVar39);
      *(uint *)(iVar33 + 0x876a6) = param_2;
      uVar43 = 0;
    }
    else if ((uVar43 < 0x20) || (2 < uVar43 - 0x22)) {
      uVar43 = 0xffffffff;
    }
    else {
      if ((int)(param_2 << 0x16) < 0) goto LAB_000856d2;
      if ((param_2 & 1) == 0) {
        bVar39 = 0;
        bVar42 = 4;
      }
      else {
        bVar39 = 0x80;
        bVar42 = 0x84;
      }
      if ((param_2 & 2) == 0) {
        bVar42 = bVar39;
      }
      if ((int)(param_2 << 0x1d) < 0) {
        bVar42 = bVar42 | 8;
      }
      if ((int)(param_2 << 0x1c) < 0) {
        bVar42 = bVar42 | 1;
      }
      if ((int)(param_2 << 0x1b) < 0) {
        bVar42 = bVar42 | 2;
      }
      MaDevDrv_WriteIntermediateReg(0xd0,bVar42);
      *(uint *)(iVar4 + 0x85942) = param_2;
      uVar43 = 0;
    }
    break;
  case 0xdf:
    if (*(int *)(DAT_000862e8 + 0x858ae) == 0x20) {
      if ((int)(param_2 << 0x16) < 0) goto LAB_000856d2;
      bVar39 = bVar39 & 1;
      if ((int)(param_2 << 0x1e) < 0) {
        bVar39 = bVar39 | 8;
      }
      if ((int)(param_2 << 0x1d) < 0) {
        bVar39 = bVar39 | 4;
      }
      MaDevDrv_WriteIntermediateReg(0x6a,bVar39);
      *(uint *)(iVar3 + 0x858f2) = param_2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xe0:
    if (*(int *)(DAT_000862e0 + 0x85804) - 0x22U < 3) {
      if ((param_2 & 1) == 0) {
        bVar42 = 8;
        bVar39 = 4;
        bVar51 = 0;
      }
      else {
        bVar42 = 0x88;
        bVar39 = 0x84;
        bVar51 = 0x80;
      }
      if ((int)(param_2 << 0x16) < 0) {
        if ((param_2 & 6) != 0) goto LAB_000856d2;
      }
      else {
        if ((param_2 & 2) == 0) {
          bVar39 = bVar51;
        }
        bVar42 = bVar39;
        if ((int)(param_2 << 0x1d) < 0) {
          bVar39 = bVar39 | 8;
          bVar42 = bVar39;
        }
      }
      if ((int)(param_2 << 0x1c) < 0) {
        bVar39 = bVar39 | 1;
        bVar42 = bVar42 | 1;
      }
      if ((int)(param_2 << 0x1b) < 0) {
        bVar39 = bVar39 | 2;
        bVar42 = bVar42 | 2;
      }
      if ((int)(param_2 << 0x1a) < 0) {
        bVar39 = bVar39 | 0x10;
        bVar42 = bVar42 | 0x10;
      }
      if ((int)(param_2 << 0x19) < 0) {
        bVar39 = bVar39 | 0x20;
        bVar42 = bVar42 | 0x20;
      }
      if ((int)(param_2 << 0x18) < 0) {
        bVar39 = bVar39 | 0x40;
        bVar42 = bVar42 | 0x40;
      }
      MaDevDrv_WriteIntermediateReg(0xcc,bVar39);
      MaDevDrv_WriteIntermediateReg(0xce,bVar42);
      *(uint *)(iVar41 + 0x8586e) = param_2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xe1:
    if (*(int *)(DAT_000862d8 + 0x8579e) - 0x22U < 3) {
      if ((param_2 & 1) == 0) {
        bVar39 = 4;
        bVar42 = 0;
      }
      else {
        bVar39 = 0x84;
        bVar42 = 0x80;
      }
      if ((int)(param_2 << 0x16) < 0) {
        if ((param_2 & 6) != 0) goto LAB_000856d2;
      }
      else {
        if ((param_2 & 2) != 0) {
          bVar42 = bVar39;
        }
        if ((int)(param_2 << 0x1d) < 0) {
          bVar42 = bVar42 | 8;
        }
      }
      if ((int)(param_2 << 0x1c) < 0) {
        bVar42 = bVar42 | 1;
      }
      if ((int)(param_2 << 0x1b) < 0) {
        bVar42 = bVar42 | 2;
      }
      if ((int)(param_2 << 0x17) < 0) {
        bVar42 = bVar42 | 0x10;
      }
      MaDevDrv_WriteIntermediateReg(0xd5,bVar42);
      *(uint *)(iVar54 + 0x85806) = param_2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xe2:
    if (*(int *)(DAT_000862f8 + 0x85968) - 0x22U < 3) {
      if ((int)(param_2 << 0x16) < 0) {
        if ((param_2 & 6) != 0) goto LAB_000856d2;
        bVar42 = 8;
        bVar51 = 4;
      }
      else {
        if ((param_2 & 2) == 0) {
          bVar39 = 0;
          bVar42 = 8;
        }
        else {
          bVar39 = 4;
          bVar42 = 0xc;
        }
        bVar51 = bVar42;
        if ((param_2 & 4) == 0) {
          bVar42 = bVar39;
          bVar51 = bVar39;
        }
      }
      if ((int)(param_2 << 0x1c) < 0) {
        bVar42 = bVar42 | 1;
        bVar51 = bVar51 | 1;
      }
      if ((int)(param_2 << 0x1b) < 0) {
        bVar42 = bVar42 | 2;
        bVar51 = bVar51 | 2;
      }
      if ((int)(param_2 << 0x1a) < 0) {
        bVar42 = bVar42 | 0x10;
        bVar51 = bVar51 | 0x10;
      }
      if ((int)(param_2 << 0x19) < 0) {
        bVar42 = bVar42 | 0x20;
        bVar51 = bVar51 | 0x20;
      }
      if ((int)(param_2 << 0x18) < 0) {
        bVar51 = bVar51 | 0x40;
        bVar42 = bVar42 | 0x40;
      }
      MaDevDrv_WriteIntermediateReg(200,bVar51);
      MaDevDrv_WriteIntermediateReg(0xca,bVar42);
      *(uint *)(iVar5 + 0x859c2) = param_2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xe3:
    if (*(int *)(DAT_000862d0 + 0x85748) - 0x22U < 3) {
      if (((int)(param_2 << 0x16) < 0) && ((param_2 & 6) != 0)) goto LAB_000856d2;
      if ((param_2 & 0x20) == 0) {
        bVar39 = 0;
        bVar42 = 0x20;
      }
      else {
        bVar39 = 0x10;
        bVar42 = 0x30;
      }
      if ((param_2 & 0x40) == 0) {
        bVar42 = bVar39;
      }
      if ((int)(param_2 << 0x18) < 0) {
        bVar42 = bVar42 | 0x40;
      }
      MaDevDrv_WriteIntermediateReg(0xd6,bVar42);
      *(uint *)(DAT_000862d4 + 0x857b4) = param_2;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xe6:
    if (1 < param_3 - 1) goto LAB_000856d2;
    switch(param_2) {
    case 1:
      bVar39 = MaDevDrv_ReadIntermediateReg(0x7e);
      uVar43 = 0;
      bVar39 = bVar39 & 0x83;
      if (param_3 == 1) {
        bVar39 = bVar39 | 0x40;
      }
      MaDevDrv_WriteIntermediateReg(0x7e,bVar39);
      *(uchar *)(iVar30 + 0x86fd8) = uVar2;
      break;
    case 2:
      uVar43 = 0;
      bVar39 = MaDevDrv_ReadIntermediateReg(0x7e);
      bVar39 = bVar39 & 0x43;
      if (param_3 == 1) {
        bVar39 = bVar39 | 0x80;
      }
      MaDevDrv_WriteIntermediateReg(0x7e,bVar39);
      *(uchar *)(DAT_00087278 + 0x86fc3) = uVar2;
      break;
    case 3:
      if (*(int *)(DAT_00087270 + 0x86f3c) - 0x22U < 3) {
        if (param_3 == 1) {
          MaDevDrv_WriteIntermediateReg(0xcd,0x83);
          MaDevDrv_WriteIntermediateReg(0xcf,0x83);
        }
        else {
          MaDevDrv_WriteIntermediateReg(0xcd,'\0');
          MaDevDrv_WriteIntermediateReg(0xcf,'\0');
        }
        uVar43 = 0;
        *(uchar *)(DAT_00087274 + 0x86f9a) = uVar2;
      }
      else {
        uVar43 = 0xffffffff;
      }
      break;
    case 4:
      if (*(int *)(DAT_00087268 + 0x86f00) - 0x22U < 3) {
        if (param_3 == 1) {
          MaDevDrv_WriteIntermediateReg(0xc9,'\x03');
          MaDevDrv_WriteIntermediateReg(0xcb,'\x03');
        }
        else {
          MaDevDrv_WriteIntermediateReg(0xc9,'\0');
          MaDevDrv_WriteIntermediateReg(0xcb,'\0');
        }
        uVar43 = 0;
        *(uchar *)(DAT_0008726c + 0x86f5f) = uVar2;
      }
      else {
        uVar43 = 0xffffffff;
      }
      break;
    default:
      uVar43 = 0xfffffffe;
    }
    break;
  case 0xf0:
    if ((param_4 == (void *)0x0) || (0xf < param_2)) goto LAB_000856d2;
    uVar43 = 1 << (param_2 & 0xff);
    if ((uVar43 & 0x6f) == 0) {
      if ((uVar43 & 0xff80) == 0) {
        if (-1 < (int)(uVar43 << 0x1b)) goto LAB_000856d2;
        if (*(int *)(DAT_000862cc + 0x8571a) != 0x20) {
          uVar43 = 0xffffffff;
          break;
        }
      }
      else if (2 < *(int *)(DAT_00087f8c + 0x87b10) - 0x22U) {
        uVar43 = 0xffffffff;
        break;
      }
    }
    else {
      uVar43 = *(uint *)(DAT_00087f64 + 0x8780a);
      bVar55 = 0x1f < uVar43;
      if (uVar43 != 0x20) {
        bVar55 = 1 < uVar43 - 0x22;
      }
      if (bVar55 && (uVar43 != 0x20 && uVar43 - 0x22 != 2)) {
        uVar43 = 0xffffffff;
        break;
      }
    }
    *(undefined2 *)param_4 = *(undefined2 *)(DAT_00087f68 + param_2 * 2 + 0x8785c);
    uVar43 = 0;
    break;
  case 0xf1:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    switch(param_2) {
    case 1:
    case 2:
    case 3:
      uVar43 = *(uint *)(DAT_00087254 + 0x86e38);
      bVar55 = 0x1f < uVar43;
      if (uVar43 != 0x20) {
        bVar55 = 1 < uVar43 - 0x22;
      }
      if (bVar55 && (uVar43 != 0x20 && uVar43 - 0x22 != 2)) {
        uVar43 = 0xffffffff;
        goto LAB_000855f2;
      }
      break;
    case 4:
      if (*(int *)(DAT_00087250 + 0x86e1a) == 0x20) {
        uVar43 = 0;
        *(undefined4 *)param_4 = *(undefined4 *)(DAT_00087250 + 0x86e2a);
      }
      else {
        uVar43 = 0xffffffff;
      }
      goto LAB_000855f2;
    case 5:
    case 6:
    case 7:
    case 8:
      if (2 < *(int *)(DAT_00087248 + 0x86dea) - 0x22U) {
        uVar43 = 0xffffffff;
        goto LAB_000855f2;
      }
      break;
    default:
      uVar43 = 0xfffffffe;
      goto LAB_000855f2;
    }
    uVar43 = 0;
    *(undefined4 *)param_4 = *(undefined4 *)(DAT_0008724c + param_2 * 4 + 0x86e06);
    break;
  case 0xf2:
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    switch(param_2) {
    case 1:
    case 2:
      uVar43 = 0;
      *(uint *)param_4 = (uint)*(byte *)(param_2 + DAT_00087240 + 0x86ddd);
      break;
    case 3:
    case 4:
      if (*(int *)(DAT_00087244 + 0x86dc2) - 0x22U < 3) {
        uVar43 = 0;
        *(uint *)param_4 = (uint)*(byte *)(DAT_00087244 + param_2 + 0x86def);
      }
      else {
        uVar43 = 0xffffffff;
      }
      break;
    default:
      uVar43 = 0xfffffffe;
    }
    break;
  case 0xf3:
    uVar44 = *(uint *)(DAT_00086308 + 0x85a4a);
    if (uVar44 == 0x22) {
      if (param_2 == 0) {
        bVar39 = MaDevDrv_ReadIntermediateReg(0xf1);
        MaDevDrv_WriteIntermediateReg(0xf1,bVar39 & 7);
        *(undefined1 *)(iVar6 + 0x85a74) = 0;
      }
      else if (param_2 == 1) {
        bVar39 = MaDevDrv_ReadIntermediateReg(0xf1);
        MaDevDrv_WriteIntermediateReg(0xf1,bVar39 & 7 | 0x10);
        *(undefined1 *)(iVar6 + 0x85a74) = 1;
        uVar43 = 0;
      }
      else {
        uVar43 = 0xfffffffe;
      }
    }
    else if ((uVar44 < 0x22) || (0x24 < uVar44)) {
      uVar43 = 0xffffffff;
    }
    else if (param_2 == 0) {
      bVar39 = MaDevDrv_ReadIntermediateReg(0xee);
      MaDevDrv_WriteIntermediateReg(0xee,bVar39 & 0x2f);
      *(undefined1 *)(iVar6 + 0x85a74) = 0;
    }
    else if (param_2 == 1) {
      bVar39 = MaDevDrv_ReadIntermediateReg(0xee);
      MaDevDrv_WriteIntermediateReg(0xee,bVar39 & 0x2f | 0x10);
      *(undefined1 *)(iVar6 + 0x85a74) = 1;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xfffffffe;
    }
    break;
  case 0xf4:
    if (*(int *)(DAT_00086304 + 0x85a20) - 0x22U < 3) {
      if (param_4 == (void *)0x0) goto LAB_000856d2;
      *(uint *)param_4 = (uint)*(byte *)(DAT_00086304 + 0x85a4a);
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xf5:
    if (*(int *)(DAT_0008630c + 0x85aca) - 0x22U < 3) {
      switch(param_2) {
      case 0:
        bVar39 = MaDevDrv_ReadIntermediateReg(0xe7);
        MaDevDrv_WriteIntermediateReg(0xe7,bVar39 & 0xfe);
        uVar43 = 0;
        *(undefined1 *)(iVar29 + 0x86f0f) = 0;
        break;
      default:
        uVar43 = 0xfffffffe;
        break;
      case 0xc:
        bVar39 = MaDevDrv_ReadIntermediateReg(0xe7);
        uVar43 = 0;
        MaDevDrv_WriteIntermediateReg(0xe7,bVar39 | 1);
        MaDevDrv_WriteIntermediateReg(0xe1,'\x02');
        *(undefined1 *)(DAT_00087260 + 0x86efb) = 0xc;
        break;
      case 0x12:
        bVar39 = MaDevDrv_ReadIntermediateReg(0xe7);
        uVar43 = 0;
        MaDevDrv_WriteIntermediateReg(0xe7,bVar39 | 1);
        MaDevDrv_WriteIntermediateReg(0xe1,'\x01');
        *(undefined1 *)(iVar28 + 0x86eb7) = 0x12;
        break;
      case 0x18:
        bVar39 = MaDevDrv_ReadIntermediateReg(0xe7);
        uVar43 = 0;
        MaDevDrv_WriteIntermediateReg(0xe7,bVar39 | 1);
        MaDevDrv_WriteIntermediateReg(0xe1,'\0');
        *(undefined1 *)(iVar27 + 0x86e8b) = 0x18;
      }
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xf6:
    if (*(int *)(DAT_00086300 + 0x859f6) - 0x22U < 3) {
      if (param_4 == (void *)0x0) goto LAB_000856d2;
      *(uint *)param_4 = (uint)*(byte *)(DAT_00086300 + 0x85a21);
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xf7:
    if (*(int *)(DAT_000862c8 + 0x856c4) - 0x23U < 2) {
      if (1 < param_2) goto LAB_000856d2;
      MaDevDrv_WriteIntermediateReg(0xac,bVar39);
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xf8:
    if (*(int *)(DAT_000862c4 + 0x85662) - 0x23U < 2) {
      if (param_4 == (void *)0x0) goto LAB_000856d2;
      uVar43 = MaDevDrv_ReadIntermediateReg(0xac);
      *(uint *)param_4 = uVar43 & 1;
      uVar38 = MaDevDrv_ReadIntermediateReg(0xad);
      *(undefined1 *)((int)param_4 + 4) = uVar38;
      uVar38 = MaDevDrv_ReadIntermediateReg(0xae);
      *(undefined1 *)((int)param_4 + 5) = uVar38;
      uVar38 = MaDevDrv_ReadIntermediateReg(0xaf);
      *(undefined1 *)((int)param_4 + 6) = uVar38;
      uVar38 = MaDevDrv_ReadIntermediateReg(0xb0);
      *(undefined1 *)((int)param_4 + 7) = uVar38;
      uVar38 = MaDevDrv_ReadIntermediateReg(0xb1);
      *(undefined1 *)((int)param_4 + 8) = uVar38;
      uVar38 = MaDevDrv_ReadIntermediateReg(0xb2);
      *(undefined1 *)((int)param_4 + 9) = uVar38;
      uVar38 = MaDevDrv_ReadIntermediateReg(0xb3);
      *(undefined1 *)((int)param_4 + 10) = uVar38;
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
    break;
  case 0xf9:
    if (1 < *(int *)(DAT_000862c0 + 0x8560e) - 0x23U) {
      uVar43 = 0xffffffff;
      break;
    }
    if (param_4 == (void *)0x0) goto LAB_000856d2;
    uVar43 = *(uint *)((int)param_4 + 4);
    if (uVar43 == 0x140) {
      bVar39 = 5;
    }
    else if (uVar43 < 0x141) {
      if (uVar43 == 0x28) {
        bVar39 = 2;
      }
      else if (uVar43 < 0x29) {
        if (uVar43 == 0) {
          bVar39 = 0;
        }
        else {
          if (uVar43 != 0x14) {
LAB_0008564c:
            uVar43 = 0xfffffffe;
            break;
          }
          bVar39 = 1;
        }
      }
      else if (uVar43 == 0x50) {
        bVar39 = 3;
      }
      else {
        if (uVar43 != 0xa0) goto LAB_0008564c;
        bVar39 = 4;
      }
    }
    else if (uVar43 == 0xa00) {
      bVar39 = 8;
    }
    else if (uVar43 < 0xa01) {
      if (uVar43 == 0x280) {
        bVar39 = 6;
      }
      else {
        if (uVar43 != 0x500) goto LAB_0008564c;
        bVar39 = 7;
      }
    }
    else if (uVar43 == 0x2800) {
      bVar39 = 10;
    }
    else if (uVar43 == 0x5000) {
      bVar39 = 0xb;
    }
    else {
      if (uVar43 != 0x1400) goto LAB_0008564c;
      bVar39 = 9;
    }
    if (*(int *)param_4 == 0) {
      MaDevDrv_WriteIntermediateReg(0x1e,bVar39);
      *(undefined4 *)(iVar37 + 0x87c1a) = *(undefined4 *)param_4;
      *(undefined4 *)(iVar37 + 0x87c1e) = *(undefined4 *)((int)param_4 + 4);
      uVar43 = 0;
    }
    else if (*(int *)param_4 == 1) {
      MaDevDrv_WriteIntermediateReg(0x1e,bVar39 | 0x20);
      *(undefined4 *)(iVar36 + 0x87be8) = *(undefined4 *)param_4;
      *(undefined4 *)(iVar36 + 0x87bec) = *(undefined4 *)((int)param_4 + 4);
      uVar43 = 0;
    }
    else {
      uVar43 = 0xfffffffe;
    }
    break;
  case 0xfa:
    if (*(int *)(DAT_000862bc + 0x855ea) - 0x23U < 2) {
      if (param_4 == (void *)0x0) goto LAB_000856d2;
      *(undefined4 *)param_4 = *(undefined4 *)(DAT_000862bc + 0x8563e);
      *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(iVar53 + 0x85642);
      uVar43 = 0;
    }
    else {
      uVar43 = 0xffffffff;
    }
  }
LAB_000855f2:
  machdep_LeaveCriticalSection();
  return uVar43;
}

