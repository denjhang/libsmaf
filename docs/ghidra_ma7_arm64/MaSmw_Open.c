/* MaSmw_Open @ 00194d68 1176B */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* YAMAHA::MaSmw_Open(unsigned int, _MASMW_OPEN_PARAM*) */

void YAMAHA::MaSmw_Open(uint param_1,_MASMW_OPEN_PARAM *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  uchar uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  long lVar23;
  byte bVar24;
  undefined4 *puVar25;
  ulong uVar26;
  undefined1 uVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  byte bVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  byte bVar36;
  undefined4 *puVar37;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 uStack_28;
  undefined1 uStack_20;
  uchar auStack_18 [16];
  long local_8;
  
  uVar16 = param_1 & 0xff;
  uVar35 = (ulong)(param_1 >> 8) & 0xff;
  uVar20 = (uint)uVar35;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  machdep_EnterCriticalSection();
  lVar9 = DAT_0059a428;
  lVar8 = DAT_0059a420;
  if ((((3 < uVar16) || (8 < uVar20)) || (uVar20 == 3 && uVar16 != 0)) ||
     (param_2 == (_MASMW_OPEN_PARAM *)0x0)) {
LAB_001951d4:
    iVar13 = -2;
    goto LAB_0019517c;
  }
  if ((param_1 == 0x401) || (param_1 == 0x700)) {
    iVar13 = -0x18;
    if (2 < *(int *)(DAT_005a0050 + 8) - 0x22U) goto LAB_0019517c;
  }
  else if ((param_1 == 0x800) && (*(int *)(DAT_005a0050 + 8) != 0x23)) {
    iVar13 = -0x18;
    goto LAB_0019517c;
  }
  if (((uVar20 - 6 < 3) && (*(long *)(param_2 + 0x28) == 0)) || (0xb < *(int *)(param_2 + 4)))
  goto LAB_001951d4;
  uVar26 = (ulong)uVar16;
  bVar12 = (&DAT_0048aa70)[uVar26 + uVar35 * 4];
  uVar21 = (uint)bVar12;
  if (uVar21 == 0xff) goto LAB_001951d4;
  lVar29 = (ulong)uVar21 * 0xc0;
  lVar1 = DAT_0059a420 + lVar29;
  if (*(int *)(DAT_0059a420 + lVar29) == 0) {
    *(uint *)param_2 = *(uint *)param_2 | 1;
  }
  else {
    if (*(int *)(DAT_0059a420 + lVar29) != 1) {
      iVar13 = -1;
      goto LAB_0019517c;
    }
    *(uint *)param_2 = *(uint *)param_2 & 0xfffffffe;
  }
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined1 *)(lVar1 + 0x2b) = 0xff;
  *(undefined1 *)(lVar1 + 0x2c) = 0;
  lVar23 = (ulong)bVar12 * 0x430;
  *(undefined1 *)(lVar1 + 0x25) = 0;
  puVar2 = (undefined8 *)(lVar9 + lVar23);
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(undefined1 *)(lVar1 + 0x2a) = 4;
  *(undefined1 *)(lVar1 + 0x2d) = 0;
  iVar13 = -2;
  *(undefined1 *)(lVar1 + 0x2e) = 0xff;
  *(undefined1 *)(lVar1 + 0x2f) = 1;
  *(undefined4 *)(lVar8 + lVar29 + 0x30) = 0;
  *(undefined4 *)(lVar8 + lVar29 + 0x34) = 0;
  *(undefined1 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(lVar1 + 0x39) = 0;
  *(undefined4 *)(lVar9 + lVar23) = 0;
  *(undefined4 *)((long)puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined1 *)((long)puVar2 + 0x1c) = 0;
  *(undefined1 *)((long)puVar2 + 0x1d) = 0xff;
  *(undefined1 *)((long)puVar2 + 0x1e) = 0;
  *(undefined1 *)((long)puVar2 + 0x1f) = 0xff;
  *(undefined1 *)(puVar2 + 4) = 0x80;
  *(undefined1 *)((long)puVar2 + 0x21) = 0x80;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  puVar2[0x12] = 0;
  *(undefined4 *)(puVar2 + 0x13) = 0;
  puVar2[0x14] = 0;
  *(undefined4 *)(puVar2 + 0x15) = 0;
  puVar2[0x16] = 0;
  *(undefined4 *)(puVar2 + 0x17) = 0;
  puVar2[0x18] = 0;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  puVar2[0x1a] = 0;
  *(undefined4 *)(puVar2 + 0x1b) = 0;
  puVar2[0x1c] = 0;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  puVar2[0x1e] = 0;
  *(undefined4 *)(puVar2 + 0x1f) = 0;
  puVar2[0x20] = 0;
  *(undefined4 *)(puVar2 + 0x21) = 0;
  puVar2[0x22] = 0;
  *(undefined4 *)(puVar2 + 0x23) = 0;
  puVar2[0x24] = 0;
  *(undefined4 *)(puVar2 + 0x25) = 0;
  puVar2[0x26] = 0;
  *(undefined4 *)(puVar2 + 0x27) = 0;
  puVar2[0x28] = 0;
  *(undefined4 *)(puVar2 + 0x29) = 0;
  puVar2[0x2a] = 0;
  *(undefined4 *)(puVar2 + 0x2b) = 0;
  puVar2[0x2c] = 0;
  *(undefined4 *)(puVar2 + 0x2d) = 0;
  puVar2[0x2e] = 0;
  *(undefined4 *)(puVar2 + 0x2f) = 0;
  puVar2[0x30] = 0;
  *(undefined4 *)(puVar2 + 0x31) = 0;
  puVar2[0x32] = 0;
  *(undefined4 *)(puVar2 + 0x33) = 0;
  puVar2[0x34] = 0;
  *(undefined4 *)(puVar2 + 0x35) = 0;
  puVar2[0x36] = 0;
  *(undefined4 *)(puVar2 + 0x37) = 0;
  puVar2[0x38] = 0;
  *(undefined4 *)(puVar2 + 0x39) = 0;
  puVar2[0x3a] = 0;
  *(undefined4 *)(puVar2 + 0x3b) = 0;
  puVar2[0x3c] = 0;
  *(undefined4 *)(puVar2 + 0x3d) = 0;
  puVar2[0x3e] = 0;
  *(undefined4 *)(puVar2 + 0x3f) = 0;
  puVar2[0x40] = 0;
  *(undefined4 *)(puVar2 + 0x41) = 0;
  puVar2[0x42] = 0;
  *(undefined4 *)(puVar2 + 0x43) = 0;
  puVar2[0x44] = 0;
  *(undefined4 *)(puVar2 + 0x45) = 0;
  puVar2[0x46] = 0;
  *(undefined4 *)(puVar2 + 0x47) = 0;
  puVar2[0x48] = 0;
  *(undefined4 *)(puVar2 + 0x49) = 0;
  puVar2[0x4a] = 0;
  *(undefined4 *)(puVar2 + 0x4b) = 0;
  puVar2[0x4c] = 0;
  *(undefined4 *)(puVar2 + 0x4d) = 0;
  puVar2[0x4e] = 0;
  *(undefined4 *)(puVar2 + 0x4f) = 0;
  puVar2[0x50] = 0;
  *(undefined4 *)(puVar2 + 0x51) = 0;
  puVar2[0x52] = 0;
  *(undefined4 *)(puVar2 + 0x53) = 0;
  puVar2[0x54] = 0;
  *(undefined4 *)(puVar2 + 0x55) = 0;
  puVar2[0x56] = 0;
  *(undefined4 *)(puVar2 + 0x57) = 0;
  puVar2[0x58] = 0;
  *(undefined4 *)(puVar2 + 0x59) = 0;
  puVar2[0x5a] = 0;
  *(undefined4 *)(puVar2 + 0x5b) = 0;
  puVar2[0x5c] = 0;
  *(undefined4 *)(puVar2 + 0x5d) = 0;
  puVar2[0x5e] = 0;
  *(undefined4 *)(puVar2 + 0x5f) = 0;
  puVar2[0x60] = 0;
  *(undefined4 *)(puVar2 + 0x61) = 0;
  puVar2[0x62] = 0;
  *(undefined4 *)(puVar2 + 99) = 0;
  puVar2[100] = 0;
  *(undefined4 *)(puVar2 + 0x65) = 0;
  puVar2[0x66] = 0;
  *(undefined4 *)(puVar2 + 0x67) = 0;
  puVar2[0x68] = 0;
  *(undefined4 *)(puVar2 + 0x69) = 0;
  puVar2[0x6a] = 0;
  *(undefined4 *)(puVar2 + 0x6b) = 0;
  puVar2[0x6c] = 0;
  *(undefined4 *)(puVar2 + 0x6d) = 0;
  puVar2[0x6e] = 0;
  *(undefined4 *)(puVar2 + 0x6f) = 0;
  puVar2[0x70] = 0;
  *(undefined4 *)(puVar2 + 0x71) = 0;
  puVar2[0x72] = 0;
  *(undefined4 *)(puVar2 + 0x73) = 0;
  puVar2[0x74] = 0;
  *(undefined4 *)(puVar2 + 0x75) = 0;
  puVar2[0x76] = 0;
  *(undefined4 *)(puVar2 + 0x77) = 0;
  puVar2[0x78] = 0;
  *(undefined4 *)(puVar2 + 0x79) = 0;
  puVar2[0x7a] = 0;
  *(undefined4 *)(puVar2 + 0x7b) = 0;
  puVar2[0x7c] = 0;
  *(undefined4 *)(puVar2 + 0x7d) = 0;
  puVar2[0x7e] = 0;
  *(undefined4 *)(puVar2 + 0x7f) = 0;
  puVar2[0x80] = 0;
  *(undefined4 *)(puVar2 + 0x81) = 0;
  puVar2[0x82] = 0;
  *(undefined4 *)(puVar2 + 0x83) = 0;
  puVar2[0x84] = 0;
  *(undefined4 *)(puVar2 + 0x85) = 0;
  switch(uVar35) {
  case 0:
  case 1:
  case 2:
  case 3:
    puVar3 = &DAT_005a0058 + (ulong)uVar21 * 0x10;
    iVar13 = (*(code *)(&PTR_MaDmyCnv_Open_005659d0)[(long)*(int *)(param_2 + 4) * 10])
                       (puVar3,param_2);
    if (iVar13 < 0) goto LAB_0019517c;
    iVar13 = (*(code *)(&PTR_MaDmyCnv_Ctrl_005659f8)[(long)*(int *)(param_2 + 4) * 10])
                       (puVar3,5,0,&uStack_38);
    if (iVar13 < 0) {
      uStack_38 = 0;
    }
    iVar13 = *(int *)(param_2 + 4);
    *(undefined4 *)(lVar1 + 0x48) = uStack_38;
    uVar21 = (*(code *)(&PTR_MaDmyCnv_GetResInfo_005659d8)[(long)iVar13 * 10])(puVar3);
    if (uVar20 == 1) {
      uVar31 = (ulong)(uVar21 & 0xfffe7fff | 0x300000);
    }
    else if (uVar20 == 0) {
      uVar31 = (ulong)(uVar21 | 0x700000);
    }
    else if (uVar20 == 3) {
      uVar31 = (ulong)(uVar21 & 0xfffe7fff | 0x200000);
    }
    else {
      uVar31 = (ulong)(uVar21 & 0xfffe7fff);
    }
    uVar21 = (uint)uVar31;
    if ((uVar21 >> 0x1b & 1) == 0) {
      puVar37 = (undefined4 *)0x0;
      iVar13 = MaResMgr_AllocSequence((uint)bVar12,0);
      if (iVar13 < 0) goto LAB_0019517c;
      puVar25 = (undefined4 *)0x0;
      if ((uVar21 >> 0x19 & 1) != 0) {
        *(undefined1 *)(lVar1 + 0x2a) = 1;
        goto code_r0x00195218;
      }
      goto code_r0x00195210;
    }
    iVar13 = MaResMgr_AllocSequence((uint)bVar12,1);
    if (iVar13 < 0) goto LAB_0019517c;
    *(undefined1 *)(lVar1 + 0x2a) = 5;
    uVar31 = (ulong)(uVar21 & 0xffffff80);
    MaDevDrv_WriteIntermediateReg(1,0xe0);
    MaDevDrv_WriteIntermediateReg(1,'\0');
    MaDevDrv_WriteIntermediateReg(2,0x80);
    MaDevDrv_WriteIntermediateReg(0,' ');
    MaDevDrv_WriteIntermediateReg(0,'\0');
    iVar13 = MaDevDrv_WaitBusy();
    if (iVar13 < 0) goto LAB_0019517c;
    puVar37 = (undefined4 *)0x0;
    goto code_r0x00195218;
  case 4:
    uVar31 = 0;
    puVar25 = (undefined4 *)0x0;
    break;
  case 5:
    *(undefined4 *)param_2 = 0;
    uVar31 = 0;
    puVar25 = (undefined4 *)0x0;
    break;
  case 6:
    *(undefined1 *)(lVar1 + 0x29) = 0;
    puVar25 = *(undefined4 **)(param_2 + 0x28);
    uVar21 = 4;
    if (puVar25[1] == 1) {
      uVar21 = 1;
    }
    uVar31 = (ulong)uVar21;
    break;
  case 7:
    puVar25 = *(undefined4 **)(param_2 + 0x28);
    uVar31 = 0;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    break;
  default:
    goto LAB_0019517c;
  }
  iVar13 = MaResMgr_AllocSequence((uint)bVar12,0);
  if (iVar13 < 0) goto LAB_0019517c;
code_r0x00195210:
  puVar37 = puVar25;
  *(undefined1 *)(lVar1 + 0x2a) = 4;
code_r0x00195218:
  uVar21 = *(uint *)param_2 & 0xf00;
  uVar30 = (uint)uVar31;
  if (uVar21 == 0x200) {
    uVar21 = 0;
code_r0x00195254:
    if ((byte)(*(char *)(lVar1 + 0x39) - 1U) < 2) {
code_r0x001956dc:
      uStack_30 = 0x7f;
      MaDsp_VolCtrl(0,&uStack_30);
    }
  }
  else {
    if (uVar21 < 0x201) {
      if (uVar21 == 0x100) {
        iVar13 = MaResMgr_AllocSfx(0);
        uVar27 = 2;
        if (iVar13 < 0) goto code_r0x0019524c;
      }
      else {
code_r0x00195804:
        if ((uVar31 & 0x6000) == 0) {
code_r0x00195820:
          uVar21 = uVar30 & 0x6000;
          goto code_r0x00195254;
        }
        iVar13 = MaResMgr_AllocSfx(0);
        if (iVar13 < 0) goto code_r0x0019524c;
        uVar27 = 1;
      }
      *(undefined1 *)(lVar1 + 0x38) = uVar27;
      iVar13 = MaResMgr_AllocSfx(1);
      if (iVar13 < 0) {
code_r0x0019524c:
        uVar21 = 1;
        goto code_r0x00195254;
      }
      uVar21 = 0;
      *(undefined1 *)(lVar1 + 0x39) = uVar27;
      goto code_r0x001956dc;
    }
    if (uVar21 == 0x300) {
      if (*(short *)(DAT_005a0050 + 0x34) == 0) {
        if ((uVar31 & 0x6000) != 0) {
          *(undefined1 *)(lVar1 + 0x38) = 5;
          *(undefined1 *)(lVar1 + 0x39) = 5;
          uVar21 = 0;
          goto code_r0x00195268;
        }
        goto code_r0x00195820;
      }
      goto code_r0x0019524c;
    }
    if (uVar21 != 0x400) goto code_r0x00195804;
    if (*(short *)(DAT_005a0050 + 0x34) != 0) goto code_r0x0019524c;
    *(undefined1 *)(lVar1 + 0x38) = 6;
    *(undefined1 *)(lVar1 + 0x39) = 6;
    uVar21 = 0;
  }
code_r0x00195268:
  uVar33 = *(uint *)param_2 & 0xf000;
  if (uVar33 != 0x2000) {
    if (uVar33 == 0x3000) {
      if (((uVar20 - 4 & 0xfffffffb) == 0) || ((uVar20 & 0xfffffffb) == 2)) {
        *(undefined1 *)(lVar1 + 0x2d) = 1;
      }
    }
    else if (uVar33 == 0x1000) {
      iVar13 = MaResMgr_Alloc3D(&uStack_3c);
      if (iVar13 < 0) {
code_r0x001957a8:
        uVar21 = 1;
      }
      else {
        *(byte *)(lVar1 + 0x34) = (byte)uStack_3c | 0x80;
        MaDsp_3DCtrl(1,0x80,uStack_3c,(void *)0x0);
        MaDsp_3DCtrl(1,0xa4,uStack_3c,(void *)0x0);
        MaDsp_3DCtrl(1,0xa5,uStack_3c,(void *)0x0);
        (&DAT_005a1020)[(ulong)uStack_3c * 2] = param_1;
        (&DAT_005a1024)[(ulong)uStack_3c * 8] = 1;
      }
    }
    else {
      if ((uVar30 >> 9 & 1) != 0) {
        iVar13 = MaResMgr_Alloc3D(&uStack_3c);
        if (iVar13 < 0) {
          uVar21 = 1;
        }
        else {
          *(byte *)(lVar1 + 0x34) = (byte)uStack_3c | 0x40;
          MaDsp_3DCtrl(1,0x80,uStack_3c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa4,uStack_3c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa5,uStack_3c,(void *)0x0);
          (&DAT_005a1020)[(ulong)uStack_3c * 2] = param_1;
          (&DAT_005a1024)[(ulong)uStack_3c * 8] = 0;
        }
      }
      if ((uVar30 >> 10 & 1) != 0) {
        iVar13 = MaResMgr_Alloc3D(&uStack_3c);
        if (iVar13 < 0) {
          uVar21 = 1;
        }
        else {
          *(byte *)(lVar1 + 0x35) = (byte)uStack_3c | 0x40;
          MaDsp_3DCtrl(1,0x80,uStack_3c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa4,uStack_3c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa5,uStack_3c,(void *)0x0);
          (&DAT_005a1020)[(ulong)uStack_3c * 2] = param_1;
          (&DAT_005a1024)[(ulong)uStack_3c * 8] = 0;
        }
      }
      if ((uVar30 >> 0xb & 1) != 0) {
        iVar13 = MaResMgr_Alloc3D(&uStack_3c);
        if (iVar13 < 0) {
          uVar21 = 1;
        }
        else {
          *(byte *)(lVar1 + 0x36) = (byte)uStack_3c | 0x40;
          MaDsp_3DCtrl(1,0x80,uStack_3c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa4,uStack_3c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa5,uStack_3c,(void *)0x0);
          (&DAT_005a1020)[(ulong)uStack_3c * 2] = param_1;
          (&DAT_005a1024)[(ulong)uStack_3c * 8] = 0;
        }
      }
      if ((uVar30 >> 0xc & 1) != 0) {
        iVar13 = MaResMgr_Alloc3D(&uStack_3c);
        if (iVar13 < 0) goto code_r0x001957a8;
        *(byte *)(lVar1 + 0x37) = (byte)uStack_3c | 0x40;
        MaDsp_3DCtrl(1,0x80,uStack_3c,(void *)0x0);
        MaDsp_3DCtrl(1,0xa4,uStack_3c,(void *)0x0);
        MaDsp_3DCtrl(1,0xa5,uStack_3c,(void *)0x0);
        (&DAT_005a1020)[(ulong)uStack_3c * 2] = param_1;
        (&DAT_005a1024)[(ulong)uStack_3c * 8] = 0;
      }
    }
  }
  uStack_34 = 0;
  if ((uVar31 & 1) == 0) {
    if ((uVar30 >> 2 & 1) != 0) {
      lVar17 = MaResMgr_AllocStream(uVar20,uVar30 & 1,&uStack_34);
      puVar2[5] = lVar17;
      if (lVar17 == 0) goto code_r0x00195720;
code_r0x001954e0:
      if (uStack_34 != 0) {
        bVar11 = *(byte *)(lVar17 + 0x18);
        *(undefined1 *)(lVar17 + 1) = 0;
        *(undefined1 *)(lVar17 + 2) = 0;
        *(undefined4 *)(lVar17 + 8) = 0;
        *(undefined1 *)(lVar17 + 3) = 0x41;
        *(undefined1 *)(lVar17 + 4) = 0x41;
        *(undefined4 *)(lVar17 + 0xc) = 0;
        *(undefined1 *)(lVar17 + 0x10) = 0;
        *(undefined1 *)(lVar17 + 0x11) = 0;
        *(undefined1 *)(lVar17 + 0x12) = 0x41;
        *(undefined1 *)(lVar17 + 0x13) = 0;
        *(undefined1 *)(lVar17 + 0x14) = 0;
        *(undefined1 *)(lVar17 + 0x15) = 0;
        *(undefined1 *)(lVar17 + 0x16) = 0;
        *(undefined1 *)(lVar17 + 0x17) = 0;
        *(undefined1 *)(lVar17 + 0x19) = 0;
        *(undefined1 *)(lVar17 + 0x1a) = 0;
        if (bVar11 < 4) {
          MaDevDrv_WriteIntermediateReg(bVar11 + 0xa8,'|');
          MaDevDrv_WriteIntermediateReg(0xa0,bVar11);
          MaDevDrv_WriteIntermediateReg(0xa1,'\0');
          MaDevDrv_WriteIntermediateReg(0xa2,'\0');
          MaDevDrv_WriteIntermediateReg(0xa3,'|');
        }
        *(undefined4 *)(lVar17 + 0x1c) = 0;
        bVar11 = *(byte *)(lVar17 + 0x2c);
        *(undefined4 *)(lVar17 + 0x20) = 0;
        *(undefined1 *)(lVar17 + 0x24) = 0;
        *(undefined1 *)(lVar17 + 0x25) = 0;
        *(undefined1 *)(lVar17 + 0x26) = 0x41;
        *(undefined1 *)(lVar17 + 0x27) = 0;
        *(undefined1 *)(lVar17 + 0x28) = 0;
        *(undefined1 *)(lVar17 + 0x29) = 0;
        *(undefined1 *)(lVar17 + 0x2a) = 0;
        *(undefined1 *)(lVar17 + 0x2b) = 0;
        *(undefined1 *)(lVar17 + 0x2d) = 0;
        *(undefined1 *)(lVar17 + 0x2e) = 0;
        if (bVar11 < 4) {
          MaDevDrv_WriteIntermediateReg(bVar11 + 0xa8,'|');
          MaDevDrv_WriteIntermediateReg(0xa0,bVar11);
          MaDevDrv_WriteIntermediateReg(0xa1,'\0');
          MaDevDrv_WriteIntermediateReg(0xa2,'\0');
          MaDevDrv_WriteIntermediateReg(0xa3,'|');
          uVar30 = (uint)uVar31;
          goto joined_r0x00195728;
        }
      }
    }
    if (((uint)uVar31 >> 6 & 1) == 0) goto code_r0x001952ac;
code_r0x001954b4:
    iVar13 = MaResMgr_AllocHv();
    uVar30 = (uint)uVar31;
    if (iVar13 < 0) {
      if (uVar20 != 1) {
        uVar21 = 1;
      }
      goto joined_r0x001967d4;
    }
    *(undefined1 *)((long)puVar2 + 0x1d) = 0;
    if ((uVar30 >> 0xf & 1) != 0) goto code_r0x00195498;
code_r0x001952b0:
    uVar30 = (uint)uVar31;
joined_r0x001967e4:
    if ((uVar30 >> 0x10 & 1) == 0) goto code_r0x001952b4;
code_r0x0019547c:
    iVar13 = MaResMgr_AllocMotor();
    uVar30 = (uint)uVar31;
    if (iVar13 < 0) {
      uVar21 = 1;
      goto joined_r0x001967f4;
    }
    *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 2;
    if ((uVar30 >> 0x14 & 1) == 0) goto code_r0x001952b8;
code_r0x00195454:
    iVar13 = MaResMgr_AllocRam((_MARESMGRALLOCRAM *)&uStack_28);
    uVar30 = (uint)uVar31;
    if (iVar13 < 0) {
      if (uVar20 != 1) {
        uVar21 = 1;
      }
    }
    else {
      *puVar2 = uStack_28;
      *(undefined1 *)((long)puVar2 + 0x1c) = uStack_20;
    }
  }
  else {
    uVar31 = (ulong)(uVar30 & 0xffffffc3);
    lVar17 = MaResMgr_AllocStream(uVar20,1,&uStack_34);
    puVar2[5] = lVar17;
    if (lVar17 != 0) goto code_r0x001954e0;
code_r0x00195720:
    uVar21 = 1;
    uVar30 = (uint)uVar31;
joined_r0x00195728:
    if ((uVar30 >> 6 & 1) != 0) goto code_r0x001954b4;
code_r0x001952ac:
    uVar30 = (uint)uVar31;
joined_r0x001967d4:
    if ((uVar30 >> 0xf & 1) == 0) goto code_r0x001952b0;
code_r0x00195498:
    iVar13 = MaResMgr_AllocLed();
    uVar30 = (uint)uVar31;
    if (iVar13 < 0) {
      uVar21 = 1;
      goto joined_r0x001967e4;
    }
    *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 1;
    if ((uVar30 >> 0x10 & 1) != 0) goto code_r0x0019547c;
code_r0x001952b4:
    uVar30 = (uint)uVar31;
joined_r0x001967f4:
    if ((uVar30 >> 0x14 & 1) != 0) goto code_r0x00195454;
code_r0x001952b8:
    uVar30 = (uint)uVar31;
  }
  if ((uVar30 >> 0x15 & 1) != 0) {
    MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)(lVar1 + 0x80));
  }
  uVar20 = (uint)uVar31;
  if ((uVar20 >> 0x16 & 1) != 0) {
    MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)(lVar1 + 0x90));
  }
  lVar34 = DAT_0059a428;
  lVar17 = DAT_0059a420;
  if (uVar21 != 0) goto code_r0x001955e4;
  uVar21 = (uint)(uVar31 >> 7) & 1;
  switch(uVar35) {
  case 0:
    iVar13 = *(int *)(param_2 + 4);
    uVar35 = (ulong)(byte)(&DAT_0048aa70)[uVar26];
    lVar34 = DAT_0059a420 + uVar35 * 0xc0;
    lVar4 = DAT_0059a428 + (ulong)(byte)(&DAT_0048aa70)[uVar26] * 0x430;
    if (((*(int *)(lVar4 + 4) == 0) || (*(long *)(lVar34 + 0x80) == 0)) ||
       (*(long *)(lVar34 + 0x90) == 0)) goto code_r0x001955e4;
    if (*(char *)(lVar4 + 0x1d) != -1) {
      MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)(DAT_0059a420 + 0xe00));
      if (*(long *)(lVar17 + 0xe00) == 0) goto code_r0x001955e4;
      MaDevDrv_WriteIntermediateReg(0x1d,'\x7f');
    }
    MaDevDrv_WriteIntermediateReg(1,'P');
    MaDevDrv_WriteIntermediateReg(1,'\0');
    MaDevDrv_WriteIntermediateReg(0xb,'\x10');
    MaDevDrv_WriteIntermediateReg(8,'\x04');
    bVar11 = *(byte *)(lVar4 + 0x1f);
    if (bVar11 == 0xff) {
      if (*(char *)(lVar34 + 0x2a) == '\x05') {
        MaCmd_VoiceInit(uVar16,2,0,uVar21,0);
      }
      else if ((uVar20 >> 0x19 & 1) == 0) {
        if ((uVar20 >> 0x18 & 1) == 0) {
          uVar30 = uVar20 & 0x10000000;
          if ((uVar20 >> 0x1c & 1) == 0) {
            MaCmd_VoiceInit(uVar16,uVar30,uVar30,uVar21,uVar30);
          }
          else {
            MaCmd_VoiceInit(uVar16,uVar20 & 0x1000000,uVar20 & 0x1000000,uVar21,1);
          }
        }
        else {
          MaCmd_VoiceInit(uVar16,5,uVar20 & 0x2000000,uVar21,1);
        }
      }
      else {
        MaCmd_VoiceInit(uVar16,4,0,uVar21,1);
      }
    }
    else {
      if ((uVar20 >> 0x1c & 1) == 0) {
        MaCmd_VoiceInit(uVar16,3,(uint)bVar11,uVar21,uVar20 & 0x10000000);
      }
      else {
        MaCmd_VoiceInit(uVar16,3,(uint)bVar11,uVar21,1);
      }
      *(undefined1 *)(lVar34 + 0x2a) = 3;
    }
    uVar20 = 0;
    do {
      MaSrm_DelStream(uVar16,uVar20);
      MaSrm_DelStream(uVar16,uVar20 + 1);
      MaSrm_DelStream(uVar16,uVar20 + 2);
      MaSrm_DelStream(uVar16,uVar20 + 3);
      MaSrm_DelStream(uVar16,uVar20 + 4);
      MaSrm_DelStream(uVar16,uVar20 + 5);
      MaSrm_DelStream(uVar16,uVar20 + 6);
      MaSrm_DelStream(uVar16,uVar20 + 7);
      MaSrm_DelStream(uVar16,uVar20 + 8);
      MaSrm_DelStream(uVar16,uVar20 + 9);
      MaSrm_DelStream(uVar16,uVar20 + 10);
      MaSrm_DelStream(uVar16,uVar20 + 0xb);
      MaSrm_DelStream(uVar16,uVar20 + 0xc);
      MaSrm_DelStream(uVar16,uVar20 + 0xd);
      MaSrm_DelStream(uVar16,uVar20 + 0xe);
      uVar21 = uVar20 + 0xf;
      uVar20 = uVar20 + 0x10;
      MaSrm_DelStream(uVar16,uVar21);
    } while (uVar20 != 0x40);
    lVar17 = (long)iVar13;
    MaDva_Initialize((uint)*(byte *)(lVar34 + 0x2a));
    MaCmd_InitChannelVolume(uVar16);
    if (((code *)(&PTR_MaDmyCnv_ReqVoice_005659e0)[lVar17 * 10] != (code *)0x0) &&
       (iVar13 = (*(code *)(&PTR_MaDmyCnv_ReqVoice_005659e0)[lVar17 * 10])
                           (&DAT_005a0058 + uVar35 * 0x10), iVar13 < 0)) break;
    if ((code *)(&PTR_MaDmyCnv_GetTick_005659e8)[lVar17 * 10] == (code *)0x0) {
code_r0x00196efc:
      if ((code *)(&PTR_MaDmyCnv_SetTick_005659f0)[lVar17 * 10] != (code *)0x0) {
        (*(code *)(&PTR_MaDmyCnv_SetTick_005659f0)[lVar17 * 10])(&DAT_005a0058 + uVar35 * 0x10,4);
      }
      iVar15 = 4;
      MaDevDrv_WriteIntermediateReg(9,'\x0e');
      MaDevDrv_WriteIntermediateReg(10,'f');
    }
    else {
      iVar15 = (*(code *)(&PTR_MaDmyCnv_GetTick_005659e8)[lVar17 * 10])
                         (&DAT_005a0058 + uVar35 * 0x10);
      if (iVar15 == 5) {
        MaDevDrv_WriteIntermediateReg(9,'\x12');
        MaDevDrv_WriteIntermediateReg(10,'\0');
      }
      else if (iVar15 == 10) {
        MaDevDrv_WriteIntermediateReg(9,'$');
        MaDevDrv_WriteIntermediateReg(10,'\0');
      }
      else {
        if (iVar15 != 4) goto code_r0x00196efc;
        MaDevDrv_WriteIntermediateReg(9,'\x0e');
        MaDevDrv_WriteIntermediateReg(10,'f');
      }
    }
    iVar13 = MaDevDrv_SendDirectPacket(&UNK_0048ae70,0x180);
    if (-1 < iVar13) {
      if ((char)*(byte *)(lVar34 + 0x34) < '\0') {
        uStack_2c = uVar16;
        iVar13 = MaDsp_3DCtrl(1,0xb3,*(byte *)(lVar34 + 0x34) & 3,&uStack_2c);
        if (iVar13 < 0) break;
        uVar16 = MaCmd_SeqInit(uVar16,(*(byte *)(lVar34 + 0x34) & 3) + 2,*(uchar **)(lVar34 + 0x80))
        ;
      }
      else {
        uVar16 = MaCmd_SeqInit(uVar16,0,*(uchar **)(lVar34 + 0x80));
      }
      iVar13 = MaDevDrv_SendDirectPacket(*(uchar **)(lVar34 + 0x80),uVar16);
      if (-1 < iVar13) {
        lVar17 = *(long *)(lVar4 + 0x28);
        if (lVar17 != 0) {
          bVar11 = *(byte *)(lVar17 + 0x18);
          uVar16 = 0;
          if (bVar11 < 4) {
            if ((uVar31 & 0x13000000) == 0) {
              MaDevDrv_WriteIntermediateReg(bVar11 + 0xa8,'f');
            }
            else {
              MaDevDrv_WriteIntermediateReg(bVar11 + 0xa8,'d');
            }
            uVar16 = MaCmd_SetPanpot(*(byte *)(lVar17 + 0x18) + 4,0x40,auStack_18);
          }
          bVar11 = *(byte *)(lVar17 + 0x2c);
          if (bVar11 < 4) {
            uVar20 = bVar11 + 0xa8;
            if ((uVar31 & 0x13000000) == 0) {
              MaDevDrv_WriteIntermediateReg(uVar20,'f');
            }
            else {
              MaDevDrv_WriteIntermediateReg(uVar20,'d');
            }
            iVar13 = MaCmd_SetPanpot(*(byte *)(lVar17 + 0x2c) + 4,0x40,auStack_18 + (int)uVar16);
            uVar16 = uVar16 + iVar13;
          }
          if ((0 < (int)uVar16) &&
             (iVar13 = MaDevDrv_SendDirectPacket(auStack_18,uVar16), iVar13 < 0)) break;
        }
        if ((uVar31 & 0x13000000) == 0) {
          MaDevDrv_WriteIntermediateReg(0x1b,'~');
        }
        else {
          MaDevDrv_WriteIntermediateReg(0x1b,'|');
        }
        MaDevDrv_WriteIntermediateReg(0xc,'\0');
        MaDevDrv_WriteIntermediateReg(0xd,'\0');
        MaDevDrv_WriteIntermediateReg(0xe,'\0');
        MaDevDrv_WriteIntermediateReg(0xf,'\0');
        *(int *)(lVar34 + 0x44) = iVar15;
        goto code_r0x00195b38;
      }
    }
    break;
  case 1:
    iVar15 = *(int *)(param_2 + 4);
    uVar35 = (ulong)(byte)(&DAT_0048aa74)[uVar26];
    lVar4 = DAT_0059a420 + uVar35 * 0xc0;
    lVar28 = (ulong)(byte)(&DAT_0048aa74)[uVar26] * 0x430;
    lVar5 = DAT_0059a428 + lVar28;
    iVar7 = *(int *)(lVar5 + 4);
    if (*(long *)(lVar4 + 0x80) != 0) {
      if (*(char *)(lVar5 + 0x1d) != -1) {
        MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)(DAT_0059a420 + 0xe00));
        if (*(long *)(lVar17 + 0xe00) == 0) goto code_r0x001955e4;
        MaDevDrv_WriteIntermediateReg(0x1d,'\x7f');
      }
      if (*(char *)(lVar4 + 0x2a) == '\x05') {
        MaCmd_VoiceInit(uVar16,2,0,uVar21,0);
      }
      else {
        MaCmd_VoiceInit(uVar16,0,0,uVar21,0);
      }
      uVar20 = 0;
      do {
        MaSrm_DelStream(uVar16,uVar20);
        MaSrm_DelStream(uVar16,uVar20 + 1);
        MaSrm_DelStream(uVar16,uVar20 + 2);
        MaSrm_DelStream(uVar16,uVar20 + 3);
        MaSrm_DelStream(uVar16,uVar20 + 4);
        MaSrm_DelStream(uVar16,uVar20 + 5);
        MaSrm_DelStream(uVar16,uVar20 + 6);
        MaSrm_DelStream(uVar16,uVar20 + 7);
        MaSrm_DelStream(uVar16,uVar20 + 8);
        MaSrm_DelStream(uVar16,uVar20 + 9);
        MaSrm_DelStream(uVar16,uVar20 + 10);
        MaSrm_DelStream(uVar16,uVar20 + 0xb);
        MaSrm_DelStream(uVar16,uVar20 + 0xc);
        MaSrm_DelStream(uVar16,uVar20 + 0xd);
        MaSrm_DelStream(uVar16,uVar20 + 0xe);
        uVar21 = uVar20 + 0xf;
        uVar20 = uVar20 + 0x10;
        MaSrm_DelStream(uVar16,uVar21);
      } while (uVar20 != 0x40);
      MaCmd_InitChannelVolume(uVar16);
      if ((code *)(&PTR_MaDmyCnv_ReqVoice_005659e0)[(long)iVar15 * 10] == (code *)0x0) {
code_r0x00196c04:
        if (*(uint *)(lVar5 + 4) != 0) {
          iVar13 = MaResMgr_FreeRam((uint)*(byte *)(lVar5 + 0x1c),*(uint *)(lVar5 + 4));
          if (iVar13 < 0) break;
          if (iVar7 == *(int *)(lVar5 + 4)) {
            *(undefined4 *)(lVar34 + lVar28) = 0;
            *(undefined4 *)(lVar5 + 4) = 0;
          }
          else {
            *(undefined4 *)(lVar5 + 4) = 0;
          }
        }
      }
      else {
        iVar14 = (*(code *)(&PTR_MaDmyCnv_ReqVoice_005659e0)[(long)iVar15 * 10])
                           (&DAT_005a0058 + uVar35 * 0x10);
        iVar13 = iVar14;
        if (iVar14 < 0) break;
        if (iVar14 == 0) goto code_r0x00196c04;
        if (iVar14 < *(int *)(lVar5 + 4)) {
          iVar13 = MaResMgr_FreeRam((uint)*(byte *)(lVar5 + 0x1c),*(int *)(lVar5 + 4) - iVar14);
          if (iVar13 < 0) break;
          *(int *)(lVar5 + 4) = iVar14;
        }
      }
      if ((code *)(&PTR_MaDmyCnv_SetTick_005659f0)[(long)iVar15 * 10] != (code *)0x0) {
        (*(code *)(&PTR_MaDmyCnv_SetTick_005659f0)[(long)iVar15 * 10])
                  (&DAT_005a0058 + uVar35 * 0x10,0x14);
      }
      iVar13 = MaDevDrv_SendDirectPacket(&UNK_0048ae70 + uVar26 * 0x60,0x60);
      if (-1 < iVar13) {
        if ((char)*(byte *)(lVar4 + 0x34) < '\0') {
          uStack_2c = uVar16;
          iVar13 = MaDsp_3DCtrl(1,0xb3,*(byte *)(lVar4 + 0x34) & 3,&uStack_2c);
          if (iVar13 < 0) break;
          uVar16 = MaCmd_SeqInit(uVar16,(*(byte *)(lVar4 + 0x34) & 3) + 2,*(uchar **)(lVar4 + 0x80))
          ;
        }
        else {
          uVar16 = MaCmd_SeqInit(uVar16,0,*(uchar **)(lVar4 + 0x80));
        }
        iVar13 = MaDevDrv_SendDirectPacket(*(uchar **)(lVar4 + 0x80),uVar16);
        if (-1 < iVar13) {
          MaDevDrv_WriteIntermediateReg(0x1b,'~');
          *(undefined4 *)(lVar4 + 0x44) = 0x14;
          goto code_r0x00195b38;
        }
      }
      break;
    }
    goto code_r0x001955e4;
  case 2:
    bVar11 = (&DAT_0048aa78)[uVar26];
    lVar17 = DAT_0059a420 + (ulong)bVar11 * 0xc0;
    lVar34 = *(long *)(DAT_0059a428 + (ulong)bVar11 * 0x430 + 0x28);
    if ((lVar34 != 0) && (bVar10 = *(byte *)(lVar34 + 0x18), bVar10 < 4)) {
      if (((code *)(&PTR_MaDmyCnv_ReqVoice_005659e0)[(long)*(int *)(param_2 + 4) * 10] ==
           (code *)0x0) ||
         (iVar13 = (*(code *)(&PTR_MaDmyCnv_ReqVoice_005659e0)[(long)*(int *)(param_2 + 4) * 10])
                             (&DAT_005a0058 + (ulong)bVar11 * 0x10), -1 < iVar13)) {
        uVar16 = (uint)bVar10;
        if ((char)*(byte *)(lVar17 + 0x34) < '\0') {
          uStack_2c = uVar16 + 4;
          iVar13 = MaDsp_3DCtrl(1,0xb3,*(byte *)(lVar17 + 0x34) & 3,&uStack_2c);
          if (iVar13 < 0) break;
          iVar13 = MaSrm_SetOutput((uint)bVar10,(*(byte *)(lVar17 + 0x34) & 3) + 2);
        }
        else {
          uVar20 = (uint)*(byte *)(lVar17 + 0x2d);
          if ((*(byte *)(lVar17 + 0x2d) == 1) ||
             (uVar20 = *(uint *)(lVar34 + 8) & 0x80, (*(uint *)(lVar34 + 8) >> 7 & 1) == 0)) {
            iVar13 = MaSrm_SetOutput((uint)bVar10,uVar20);
          }
          else {
            iVar13 = MaSrm_SetOutput((uint)bVar10,1);
          }
        }
        if (-1 < iVar13) {
          MaDevDrv_WriteIntermediateReg(uVar16 + 0xa8,'|');
          if ((uVar31 & 1) != 0) {
            MaDevDrv_WriteIntermediateReg(uVar16 + 0xa9,'|');
          }
          *(undefined4 *)(lVar17 + 0x44) = 0;
          goto code_r0x00195b38;
        }
      }
      break;
    }
    goto code_r0x001955e4;
  case 3:
    iVar15 = *(int *)(param_2 + 4);
    uVar35 = (ulong)(byte)(&DAT_0048aa7c)[uVar26];
    lVar17 = DAT_0059a420 + uVar35 * 0xc0;
    lVar34 = DAT_0059a428 + (ulong)(byte)(&DAT_0048aa7c)[uVar26] * 0x430;
    if ((*(char *)(lVar34 + 0x1d) != -1) && (*(long *)(lVar17 + 0x80) != 0)) {
      if (((code *)(&PTR_MaDmyCnv_ReqVoice_005659e0)[(long)iVar15 * 10] == (code *)0x0) ||
         (iVar13 = (*(code *)(&PTR_MaDmyCnv_ReqVoice_005659e0)[(long)iVar15 * 10])
                             (&DAT_005a0058 + uVar35 * 0x10), -1 < iVar13)) {
        if ((char)*(byte *)(lVar17 + 0x34) < '\0') {
          uStack_2c = uVar16 + 8;
          iVar13 = MaDsp_3DCtrl(1,0xb3,*(byte *)(lVar17 + 0x34) & 3,&uStack_2c);
          if (iVar13 < 0) break;
          uVar16 = MaCmd_SeqInit(8,(*(byte *)(lVar17 + 0x34) & 3) + 2,*(uchar **)(lVar17 + 0x80));
        }
        else {
          uVar16 = MaCmd_SeqInit(8,0,*(uchar **)(lVar17 + 0x80));
        }
        iVar13 = MaDevDrv_SendDirectPacket(*(uchar **)(lVar17 + 0x80),uVar16);
        if (-1 < iVar13) {
          **(undefined1 **)(lVar17 + 0x80) = 0xdc;
          *(undefined1 *)(*(long *)(lVar17 + 0x80) + 1) = 0xfc;
          iVar13 = MaDevDrv_SendDirectPacket(*(uchar **)(lVar17 + 0x80),2);
          if (-1 < iVar13) {
            if ((code *)(&PTR_MaDmyCnv_SetTick_005659f0)[(long)iVar15 * 10] != (code *)0x0) {
              (*(code *)(&PTR_MaDmyCnv_SetTick_005659f0)[(long)iVar15 * 10])
                        (&DAT_005a0058 + uVar35 * 0x10,0x14);
            }
            (*(code *)(&PTR_MaHvDrvJP_Initialize_00565950)[(ulong)*(byte *)(lVar34 + 0x1d) * 5])
                      (0x14);
            MaDevDrv_WriteIntermediateReg(0xa5,'\0');
            MaDevDrv_WriteIntermediateReg(0xa6,'\0');
            MaDevDrv_WriteIntermediateReg(0xa7,'|');
            MaDevDrv_WriteIntermediateReg(0x1d,'\x7f');
            *(undefined4 *)(lVar17 + 0x44) = 0x14;
            goto code_r0x00195b38;
          }
        }
      }
      break;
    }
code_r0x001955e4:
    iVar13 = -3;
    break;
  case 4:
    bVar11 = (&UNK_0048aa80)[uVar26];
    if (uVar16 == 0) {
      uStack_2c = 9;
      uVar18 = (uchar)param_1;
      MaDevDrv_WriteIntermediateReg(0x5a,uVar18);
      MaDevDrv_WriteIntermediateReg(0x5c,'\x01');
      MaDevDrv_WriteIntermediateReg(0x56,0x80);
      MaDevDrv_WriteIntermediateReg(0x57,uVar18);
      MaDevDrv_WriteIntermediateReg(0x60,'|');
      MaDevDrv_WriteIntermediateReg(0x5f,'@');
      bVar10 = MaDevDrv_ReadIntermediateReg(0x65);
      MaDevDrv_WriteIntermediateReg(0x65,bVar10 & 0xfe);
      MaDevDrv_WriteIntermediateReg(0x61,uVar18);
      MaDevDrv_WriteIntermediateReg(0x62,uVar18);
      MaDevDrv_WriteIntermediateReg(99,'|');
      uVar16 = MaCmd_SeqInit(10,0,auStack_18);
      MaDevDrv_SendDirectPacket(auStack_18,uVar16);
code_r0x00196518:
      lVar17 = lVar17 + (ulong)bVar11 * 0xc0;
      if ((char)*(byte *)(lVar17 + 0x34) < '\0') {
        MaDsp_3DCtrl(1,0xb3,*(byte *)(lVar17 + 0x34) & 3,&uStack_2c);
        uVar16 = MaCmd_SeqInit(uStack_2c,(*(byte *)(lVar17 + 0x34) & 3) + 2,auStack_18);
      }
      else {
        uVar16 = (uint)*(byte *)(lVar17 + 0x2d);
        if (*(byte *)(lVar17 + 0x2d) != 1) {
          uVar16 = 0;
        }
        uVar16 = MaCmd_SeqInit(uStack_2c,uVar16,auStack_18);
      }
      iVar13 = MaDevDrv_SendDirectPacket(auStack_18,uVar16);
      if (iVar13 < 0) break;
      goto code_r0x00195b38;
    }
    if (uVar16 == 1) {
      iVar13 = MaDevDrv_AutoPowerManagement(3);
      if (-1 < iVar13) {
        *(uint *)(DAT_005a0050 + 0x68) = *(uint *)(DAT_005a0050 + 0x68) | 1;
      }
      uStack_2c = 0xb;
      MaDevDrv_WriteIntermediateReg(0xe6,'\0');
      MaDevDrv_WriteIntermediateReg(0xe9,'|');
      MaDevDrv_WriteIntermediateReg(0xe8,'@');
      MaDevDrv_WriteIntermediateReg(0xea,'\0');
      MaDevDrv_WriteIntermediateReg(0xeb,'\0');
      MaDevDrv_WriteIntermediateReg(0xec,'|');
      goto code_r0x00196518;
    }
code_r0x0019687c:
    iVar13 = -1;
    break;
  case 5:
    iVar13 = MaResMgr_AllocDtmf();
    if (iVar13 < 0) break;
    MaDevDrv_WriteIntermediateReg(0x54,'d');
    MaDevDrv_WriteIntermediateReg(0x53,'@');
code_r0x00195b38:
    if (*(char *)(lVar1 + 0x38) == '\x02') {
      MaDsp_SfxCtrl(0,0x2011e,0x80000003,&DAT_0048ac90);
    }
    if (*(char *)(lVar1 + 0x39) == '\x02') {
      MaDsp_SfxCtrl(0,0x2013e,0x80000003,&DAT_0048acb0);
    }
    if ((((char)*(byte *)(lVar1 + 0x34) < '\0') && ((byte)(*(char *)(lVar1 + 0x38) - 1U) < 2)) &&
       ((byte)(*(char *)(lVar1 + 0x39) - 1U) < 2)) {
      MaDsp_SfxCtrl(0,0x20180,(*(byte *)(lVar1 + 0x34) & 3) + 2,(void *)0x1);
    }
    uVar6 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(lVar8 + lVar29) = 2;
    puVar2 = (undefined8 *)(lVar8 + lVar29 + 0xd);
    *(undefined1 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 4) = uVar6;
    *(undefined4 *)(lVar1 + 0x3c) = 1;
    *(undefined4 *)(lVar1 + 0x40) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(lVar1 + 0x1d) = 100;
    iVar13 = 0;
    *(undefined1 *)(lVar1 + 0x1e) = 0x40;
    *(undefined1 *)(lVar1 + 0x1f) = 0x7f;
    *(undefined1 *)(lVar1 + 0x20) = 0x7f;
    *(undefined1 *)(lVar1 + 0x21) = 0x7f;
    *(undefined1 *)(lVar1 + 0x22) = 0;
    *(undefined1 *)(lVar1 + 0x23) = 0;
    *(undefined1 *)(lVar1 + 0x28) = 0;
    *(char *)(lVar1 + 0x27) = (char)(1 << (ulong)(param_1 & 0x1f));
    *(undefined1 *)(lVar1 + 0x24) = 0;
    *(undefined4 *)(lVar1 + 0x4c) = 0;
    *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(lVar1 + 0x50) = 0;
    *(undefined4 *)(lVar1 + 0x54) = 0;
    *(undefined4 *)(lVar1 + 0x58) = 100;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    goto LAB_0019517c;
  case 6:
    uVar20 = *(uint *)(param_2 + 0x10);
    bVar11 = (&UNK_0048aa88)[uVar26];
    lVar34 = *(long *)(DAT_0059a428 + (ulong)bVar11 * 0x430 + 0x28);
    if (((*(uchar **)(param_2 + 8) != (uchar *)0x0) && (0x7ff < uVar20)) && ((uVar20 & 1) == 0)) {
      if ((lVar34 == 0) || (bVar10 = *(byte *)(lVar34 + 0x18), 3 < bVar10)) goto code_r0x001955e4;
      switch(*puVar37) {
      case 1:
        uVar30 = 0x40;
        uVar21 = 0;
        break;
      case 2:
        uVar30 = 0x42;
        uVar21 = 2;
        break;
      case 3:
        uVar30 = 0x43;
        uVar21 = 3;
        break;
      case 4:
        uVar30 = 0x41;
        uVar21 = 1;
        break;
      default:
        goto code_r0x00195fc4;
      }
      uVar33 = (uint)bVar10;
      iVar15 = puVar37[1];
      if (iVar15 == 1) {
        uVar21 = uVar30;
      }
      iVar13 = MaSrm_Open(uVar16,(uint)bVar10,puVar37[2],uVar21,100,0x40,0,0,
                          *(uchar **)(param_2 + 8),uVar20);
      if (-1 < iVar13) {
        lVar17 = lVar17 + (ulong)bVar11 * 0xc0;
        if ((char)*(byte *)(lVar17 + 0x34) < '\0') {
          uStack_2c = uVar33 + 4;
          iVar13 = MaDsp_3DCtrl(1,0xb3,*(byte *)(lVar17 + 0x34) & 3,&uStack_2c);
          if (iVar13 < 0) break;
          iVar13 = MaSrm_SetOutput((uint)bVar10,(*(byte *)(lVar17 + 0x34) & 3) + 2);
        }
        else {
          uVar16 = (uint)*(byte *)(lVar17 + 0x2d);
          if (*(byte *)(lVar17 + 0x2d) != 1) {
            uVar16 = 0;
          }
          iVar13 = MaSrm_SetOutput((uint)bVar10,uVar16);
        }
        if (-1 < iVar13) {
          MaDevDrv_WriteIntermediateReg(uVar33 + 0xa8,'|');
          if (iVar15 == 1) {
            MaDevDrv_WriteIntermediateReg(uVar33 + 0xa9,'|');
            *(undefined4 *)(lVar17 + 0x44) = 0;
          }
          else {
            *(undefined4 *)(lVar17 + 0x44) = 0;
          }
          goto code_r0x00195b38;
        }
      }
      break;
    }
  default:
code_r0x001952d4:
    iVar13 = -2;
    break;
  case 7:
    uVar16 = *(uint *)(param_2 + 0x10);
    lVar17 = *(long *)(param_2 + 8);
    bVar10 = MaDevDrv_ReadIntermediateReg(0x9f);
    bVar11 = bVar10 & 1;
    if ((bVar10 & 1) != 0) goto code_r0x001955e4;
    if (((lVar17 == 0) || (uVar16 < 0x800)) || ((uVar16 & 3) != 0)) goto code_r0x001952d4;
    switch(*puVar37) {
    case 1:
      if (1 < DAT_0057c490 - 0x23) goto code_r0x00195fc4;
      bVar22 = 0x60;
      bVar36 = 0xa0;
      bVar10 = 0x20;
      bVar24 = 0x40;
      bVar19 = 0x80;
      bVar32 = 0;
      goto code_r0x001969ac;
    case 2:
      bVar22 = 100;
      bVar36 = 0xa4;
      bVar10 = 0x24;
      bVar19 = 0x84;
      bVar24 = 0x44;
      bVar32 = 4;
      break;
    case 3:
      bVar22 = 0x66;
      bVar36 = 0xa6;
      bVar10 = 0x26;
      bVar19 = 0x86;
      bVar24 = 0x46;
      bVar32 = 6;
      break;
    case 4:
      bVar22 = 0x62;
      bVar36 = 0xa2;
      bVar10 = 0x22;
      bVar19 = 0x82;
      bVar24 = 0x42;
      bVar32 = 2;
      break;
    default:
code_r0x00195fc4:
      iVar13 = -0x18;
      goto code_r0x001955e8;
    }
    if (DAT_0057c490 != 0x22) {
code_r0x001969ac:
      if (1 < (uint)puVar37[1]) goto code_r0x001952d4;
      bVar11 = MaDevDrv_ReadIntermediateReg(0xee);
      bVar11 = bVar11 & 0x10;
      uVar20 = puVar37[2];
      uVar21 = DAT_0057c490;
      if (uVar20 == 0x5622) {
        bVar19 = bVar11 | 5;
code_r0x00196a4c:
        bVar11 = bVar19;
        if (uVar21 != 0x22) {
          if ((uVar21 < 0x22) || (0x24 < uVar21)) goto code_r0x0019687c;
          goto code_r0x00196a68;
        }
code_r0x00196dbc:
        bVar12 = MaDevDrv_ReadIntermediateReg(0xf1);
        MaDevDrv_WriteIntermediateReg(0xf1,bVar12 & 0x18 | bVar32);
      }
      else {
        if (uVar20 < 0x5623) {
          if (uVar20 == 0x2b11) {
            bVar19 = bVar11 | 9;
          }
          else if (uVar20 < 0x2b12) {
            if (uVar20 != 8000) goto code_r0x001952d4;
            bVar19 = bVar11 | 10;
          }
          else if (uVar20 == 12000) {
            bVar19 = bVar11 | 8;
          }
          else {
            if (uVar20 != 16000) goto code_r0x001952d4;
            bVar19 = bVar11 | 6;
          }
          goto code_r0x00196a4c;
        }
        if (uVar20 == 32000) {
          bVar19 = bVar11 | 2;
          goto code_r0x00196a4c;
        }
        if (uVar20 < 0x7d01) {
          if (uVar20 != 24000) goto code_r0x001952d4;
          bVar19 = bVar11 | 4;
          goto code_r0x00196a4c;
        }
        if (uVar20 == 0xac44) {
          bVar19 = bVar11 | 1;
          goto code_r0x00196a4c;
        }
        if (uVar20 != 48000) goto code_r0x001952d4;
        if (DAT_0057c490 == 0x22) goto code_r0x00196dbc;
        if ((DAT_0057c490 < 0x22) || (0x24 < DAT_0057c490)) goto code_r0x0019687c;
        bVar10 = bVar36;
        bVar32 = bVar19;
        if (DAT_0057c4ba == '\0') {
          bVar10 = bVar22;
          bVar32 = bVar24;
        }
code_r0x00196a68:
        if (puVar37[1] != 0) {
          bVar10 = bVar32;
        }
        MaDevDrv_WriteIntermediateReg(0xf1,bVar10);
      }
      bVar12 = MaDevDrv_ReadIntermediateReg(0xed);
      MaDevDrv_WriteIntermediateReg(0xed,bVar12 | 1);
      MaDevDrv_WriteIntermediateReg(0xee,bVar11);
      MaDevDrv_WriteIntermediateReg(0xf2,'\x01');
      MaDevDrv_WriteIntermediateReg(0xf2,'\0');
      uVar20 = MaDevDrv_ReadReg(0);
      if (((uVar20 & 0xff) >> 5 & 1) != 0) {
        MaDevDrv_WriteReg(0,(byte)uVar20 & 0xb9);
      }
      MaDevDrv_WriteIntermediateReg(0xf3,'\x04');
      DAT_005a1040 = 0;
      DAT_005a1050 = 0;
      DAT_005a1054 = 0;
      DAT_005a1058 = 0;
      DAT_005a105c = 0;
      DAT_005a1060 = 0;
      DAT_005a1064 = 0;
      DAT_005a1068 = 0;
      DAT_005a106c = 0;
      DAT_005a1070 = 0;
      DAT_005a1044 = uVar16;
      DAT_005a1048 = lVar17;
      goto code_r0x00195b38;
    }
    if (puVar37[1] != 1) goto code_r0x001952d4;
    uVar20 = puVar37[2];
    uVar21 = 0x22;
    if (uVar20 == 0x5622) {
      bVar19 = 5;
      goto code_r0x00196a4c;
    }
    if (0x5622 < uVar20) {
      if (uVar20 == 32000) {
        bVar19 = 2;
        goto code_r0x00196a4c;
      }
      if (uVar20 < 0x7d01) {
        bVar19 = 4;
        if (uVar20 != 24000) {
          iVar13 = -2;
          break;
        }
        goto code_r0x00196a4c;
      }
      bVar19 = 1;
      if (uVar20 == 0xac44) goto code_r0x00196a4c;
      if (uVar20 != 48000) goto code_r0x001952d4;
      goto code_r0x00196dbc;
    }
    if (uVar20 == 0x2b11) {
      bVar19 = 9;
      goto code_r0x00196a4c;
    }
    if (0x2b11 < uVar20) {
      if (uVar20 == 12000) {
        bVar19 = 8;
      }
      else {
        bVar19 = 6;
        if (uVar20 != 16000) {
          iVar13 = -2;
          break;
        }
      }
      goto code_r0x00196a4c;
    }
    bVar19 = 10;
    if (uVar20 == 8000) goto code_r0x00196a4c;
    iVar13 = -2;
  }
code_r0x001955e8:
  MaResMgr_FreeSequence((uint)bVar12);
  if (*(int *)(lVar9 + lVar23) != 0) {
    MaResMgr_FreeRam((uint)*(byte *)((long)puVar2 + 0x1c),0x4000);
  }
  if (*(long *)(lVar1 + 0x80) != 0) {
    MaResMgr_FreeBuf((uint)*(byte *)(lVar1 + 0x8c));
  }
  if (*(long *)(lVar1 + 0x90) != 0) {
    MaResMgr_FreeBuf((uint)*(byte *)(lVar1 + 0x9c));
  }
  if (*(byte *)(lVar1 + 0x34) != 0) {
    MaResMgr_Free3D(*(byte *)(lVar1 + 0x34) & 3);
  }
  if (*(byte *)(lVar1 + 0x35) != 0) {
    MaResMgr_Free3D(*(byte *)(lVar1 + 0x35) & 3);
  }
  if (*(byte *)(lVar1 + 0x36) != 0) {
    MaResMgr_Free3D(*(byte *)(lVar1 + 0x36) & 3);
  }
  if (*(byte *)(lVar1 + 0x37) != 0) {
    MaResMgr_Free3D(*(byte *)(lVar1 + 0x37) & 3);
  }
  if ((byte)(*(char *)(lVar1 + 0x38) - 1U) < 2) {
    MaResMgr_FreeSfx(0);
  }
  if ((byte)(*(char *)(lVar1 + 0x39) - 1U) < 2) {
    MaResMgr_FreeSfx(1);
  }
  if ((_MASTMINFO *)puVar2[5] != (_MASTMINFO *)0x0) {
    MaResMgr_FreeStream((_MASTMINFO *)puVar2[5]);
  }
  if (*(char *)((long)puVar2 + 0x1d) != -1) {
    MaResMgr_FreeHv();
    *(undefined1 *)((long)puVar2 + 0x1d) = 0xff;
  }
  bVar12 = *(byte *)(lVar1 + 0x2c);
  if ((bVar12 & 1) != 0) {
    MaResMgr_FreeLed();
    bVar12 = *(byte *)(lVar1 + 0x2c);
  }
  if ((bVar12 >> 1 & 1) != 0) {
    MaResMgr_FreeMotor();
  }
LAB_0019517c:
  machdep_LeaveCriticalSection();
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar13);
}

