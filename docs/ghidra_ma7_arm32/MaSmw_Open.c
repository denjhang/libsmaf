/* MaSmw_Open @ 0007de50 6908B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaSmw_Open(unsigned int, _MASMW_OPEN_PARAM*) */

void YAMAHA::MaSmw_Open(uint param_1,_MASMW_OPEN_PARAM *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  uchar uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  byte bVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;
  ulonglong uVar34;
  uint local_80;
  undefined4 *local_78;
  uint local_5c;
  undefined4 local_58;
  uint local_54 [3];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  uchar auStack_3c [16];
  int local_2c;
  
  uVar22 = param_1 & 0xff;
  uVar24 = (param_1 & 0xffff) >> 8;
  piVar26 = *(int **)(DAT_0007eb50 + 0x7de66);
  local_2c = *piVar26;
  machdep_EnterCriticalSection();
  bVar33 = 7 < uVar24;
  bVar32 = uVar24 == 8;
  if (uVar24 < 9) {
    bVar33 = 2 < uVar22;
    bVar32 = uVar22 == 3;
  }
  if (((bVar33 && !bVar32) || (uVar22 != 0 && uVar24 == 3)) || (param_2 == (_MASMW_OPEN_PARAM *)0x0)
     ) {
switchD_0007e1bc_default:
    iVar9 = -2;
    goto LAB_0007e1ea;
  }
  if ((param_1 == 0x401) || (param_1 == 0x700)) {
    if (2 < *(int *)(*(int *)(DAT_0007eb60 + 0x7e1e0) + 8) - 0x22U) goto LAB_0007e1e6;
  }
  else if ((param_1 == 0x800) && (*(int *)(*(int *)(DAT_0007eb54 + 0x7dec2) + 8) != 0x23)) {
LAB_0007e1e6:
    iVar9 = -0x18;
    goto LAB_0007e1ea;
  }
  if (((uVar24 - 6 < 3) && (*(int *)(param_2 + 0x18) == 0)) || (0xb < *(int *)(param_2 + 4)))
  goto switchD_0007e1bc_default;
  bVar3 = *(byte *)(DAT_0007eb58 + 0x7dee0 + uVar22 + uVar24 * 4);
  uVar8 = (uint)bVar3;
  if (uVar8 == 0xff) goto switchD_0007e1bc_default;
  iVar28 = (short)(ushort)bVar3 * 0x98;
  iVar18 = *(int *)(DAT_0007eb5c + 0x7defa);
  iVar15 = *(int *)(DAT_0007eb5c + 0x7defe);
  iVar21 = iVar18 + iVar28;
  if (*(int *)(iVar18 + iVar28) == 0) {
    *(uint *)param_2 = *(uint *)param_2 | 1;
  }
  else {
    if (*(int *)(iVar18 + iVar28) != 1) {
      iVar9 = -1;
      goto LAB_0007e1ea;
    }
    *(uint *)param_2 = *(uint *)param_2 & 0xfffffffe;
  }
  iVar12 = uVar8 * 0x228;
  iVar9 = (short)(ushort)bVar3 * 0x98 + 0x30;
  *(undefined1 *)(iVar21 + 0x29) = 1;
  iVar31 = (short)(ushort)bVar3 * 0x98 + 0x34;
  *(undefined1 *)(iVar21 + 0x2f) = 1;
  *(undefined1 *)(iVar21 + 0x2a) = 4;
  iVar19 = iVar18 + iVar9;
  *(undefined4 *)(iVar21 + 0x6c) = 0;
  *(undefined4 *)(iVar21 + 0x78) = 0;
  *(undefined4 *)(iVar21 + 0x48) = 0;
  *(undefined1 *)(iVar21 + 0x2c) = 0;
  *(undefined1 *)(iVar21 + 0x25) = 0;
  *(undefined1 *)(iVar21 + 0x2d) = 0;
  *(undefined1 *)(iVar21 + 0x2b) = 0xff;
  *(undefined1 *)(iVar21 + 0x2e) = 0xff;
  *(undefined1 *)(iVar18 + iVar9) = 0;
  *(undefined1 *)(iVar19 + 1) = 0;
  iVar20 = iVar15 + iVar12;
  *(undefined1 *)(iVar19 + 2) = 0;
  iVar9 = iVar18 + iVar31;
  *(undefined1 *)(iVar19 + 3) = 0;
  *(undefined1 *)(iVar18 + iVar31) = 0;
  *(undefined1 *)(iVar9 + 1) = 0;
  *(undefined1 *)(iVar9 + 2) = 0;
  *(undefined1 *)(iVar9 + 3) = 0;
  *(undefined1 *)(iVar21 + 0x38) = 0;
  *(undefined1 *)(iVar21 + 0x39) = 0;
  *(undefined4 *)(iVar15 + iVar12) = 0;
  *(undefined4 *)(iVar20 + 4) = 0;
  *(undefined4 *)(iVar20 + 8) = 0;
  *(undefined4 *)(iVar20 + 0xc) = 0;
  *(undefined4 *)(iVar20 + 0x10) = 0;
  *(undefined4 *)(iVar20 + 0x14) = 0;
  *(undefined4 *)(iVar20 + 0x18) = 0;
  *(undefined1 *)(iVar20 + 0x1c) = 0;
  *(undefined1 *)(iVar20 + 0x1d) = 0xff;
  *(undefined1 *)(iVar20 + 0x1e) = 0;
  *(undefined1 *)(iVar20 + 0x1f) = 0xff;
  *(undefined1 *)(iVar20 + 0x20) = 0x80;
  *(undefined1 *)(iVar20 + 0x21) = 0x80;
  *(undefined4 *)(iVar20 + 0x24) = 0;
  *(undefined4 *)(iVar20 + 0x28) = 0;
  *(undefined4 *)(iVar20 + 0x2c) = 0;
  *(undefined4 *)(iVar20 + 0x30) = 0;
  *(undefined4 *)(iVar20 + 0x34) = 0;
  *(undefined4 *)(iVar20 + 0x38) = 0;
  *(undefined4 *)(iVar20 + 0x3c) = 0;
  *(undefined4 *)(iVar20 + 0x40) = 0;
  *(undefined4 *)(iVar20 + 0x44) = 0;
  *(undefined4 *)(iVar20 + 0x48) = 0;
  *(undefined4 *)(iVar20 + 0x4c) = 0;
  *(undefined4 *)(iVar20 + 0x50) = 0;
  *(undefined4 *)(iVar20 + 0x54) = 0;
  *(undefined4 *)(iVar20 + 0x58) = 0;
  *(undefined4 *)(iVar20 + 0x5c) = 0;
  *(undefined4 *)(iVar20 + 0x60) = 0;
  *(undefined4 *)(iVar20 + 100) = 0;
  *(undefined4 *)(iVar20 + 0x68) = 0;
  *(undefined4 *)(iVar20 + 0x6c) = 0;
  *(undefined4 *)(iVar20 + 0x70) = 0;
  *(undefined4 *)(iVar20 + 0x74) = 0;
  *(undefined4 *)(iVar20 + 0x78) = 0;
  *(undefined4 *)(iVar20 + 0x7c) = 0;
  *(undefined4 *)(iVar20 + 0x80) = 0;
  *(undefined4 *)(iVar20 + 0x84) = 0;
  *(undefined4 *)(iVar20 + 0x88) = 0;
  *(undefined4 *)(iVar20 + 0x8c) = 0;
  *(undefined4 *)(iVar20 + 0x90) = 0;
  *(undefined4 *)(iVar20 + 0x94) = 0;
  *(undefined4 *)(iVar20 + 0x98) = 0;
  *(undefined4 *)(iVar20 + 0x9c) = 0;
  *(undefined4 *)(iVar20 + 0xa0) = 0;
  *(undefined4 *)(iVar20 + 0xa4) = 0;
  *(undefined4 *)(iVar20 + 0xa8) = 0;
  *(undefined4 *)(iVar20 + 0xac) = 0;
  *(undefined4 *)(iVar20 + 0xb0) = 0;
  *(undefined4 *)(iVar20 + 0xb4) = 0;
  *(undefined4 *)(iVar20 + 0xb8) = 0;
  *(undefined4 *)(iVar20 + 0xbc) = 0;
  *(undefined4 *)(iVar20 + 0xc0) = 0;
  *(undefined4 *)(iVar20 + 0xc4) = 0;
  *(undefined4 *)(iVar20 + 200) = 0;
  *(undefined4 *)(iVar20 + 0xcc) = 0;
  *(undefined4 *)(iVar20 + 0xd0) = 0;
  *(undefined4 *)(iVar20 + 0xd4) = 0;
  *(undefined4 *)(iVar20 + 0xd8) = 0;
  *(undefined4 *)(iVar20 + 0xdc) = 0;
  *(undefined4 *)(iVar20 + 0xe0) = 0;
  *(undefined4 *)(iVar20 + 0xe4) = 0;
  *(undefined4 *)(iVar20 + 0xe8) = 0;
  *(undefined4 *)(iVar20 + 0xec) = 0;
  *(undefined4 *)(iVar20 + 0xf0) = 0;
  *(undefined4 *)(iVar20 + 0xf4) = 0;
  *(undefined4 *)(iVar20 + 0xf8) = 0;
  *(undefined4 *)(iVar20 + 0xfc) = 0;
  *(undefined4 *)(iVar20 + 0x100) = 0;
  *(undefined4 *)(iVar20 + 0x104) = 0;
  *(undefined4 *)(iVar20 + 0x108) = 0;
  *(undefined4 *)(iVar20 + 0x10c) = 0;
  *(undefined4 *)(iVar20 + 0x110) = 0;
  *(undefined4 *)(iVar20 + 0x114) = 0;
  *(undefined4 *)(iVar20 + 0x118) = 0;
  *(undefined4 *)(iVar20 + 0x11c) = 0;
  *(undefined4 *)(iVar20 + 0x120) = 0;
  *(undefined4 *)(iVar20 + 0x124) = 0;
  *(undefined4 *)(iVar20 + 0x128) = 0;
  *(undefined4 *)(iVar20 + 300) = 0;
  *(undefined4 *)(iVar20 + 0x130) = 0;
  *(undefined4 *)(iVar20 + 0x134) = 0;
  *(undefined4 *)(iVar20 + 0x138) = 0;
  *(undefined4 *)(iVar20 + 0x13c) = 0;
  *(undefined4 *)(iVar20 + 0x140) = 0;
  *(undefined4 *)(iVar20 + 0x144) = 0;
  *(undefined4 *)(iVar20 + 0x148) = 0;
  *(undefined4 *)(iVar20 + 0x14c) = 0;
  *(undefined4 *)(iVar20 + 0x150) = 0;
  *(undefined4 *)(iVar20 + 0x154) = 0;
  *(undefined4 *)(iVar20 + 0x158) = 0;
  *(undefined4 *)(iVar20 + 0x15c) = 0;
  *(undefined4 *)(iVar20 + 0x160) = 0;
  *(undefined4 *)(iVar20 + 0x164) = 0;
  *(undefined4 *)(iVar20 + 0x168) = 0;
  *(undefined4 *)(iVar20 + 0x16c) = 0;
  *(undefined4 *)(iVar20 + 0x170) = 0;
  *(undefined4 *)(iVar20 + 0x174) = 0;
  *(undefined4 *)(iVar20 + 0x178) = 0;
  *(undefined4 *)(iVar20 + 0x17c) = 0;
  *(undefined4 *)(iVar20 + 0x180) = 0;
  *(undefined4 *)(iVar20 + 0x184) = 0;
  *(undefined4 *)(iVar20 + 0x188) = 0;
  *(undefined4 *)(iVar20 + 0x18c) = 0;
  *(undefined4 *)(iVar20 + 400) = 0;
  *(undefined4 *)(iVar20 + 0x194) = 0;
  *(undefined4 *)(iVar20 + 0x198) = 0;
  *(undefined4 *)(iVar20 + 0x19c) = 0;
  *(undefined4 *)(iVar20 + 0x1a0) = 0;
  *(undefined4 *)(iVar20 + 0x1a4) = 0;
  *(undefined4 *)(iVar20 + 0x1a8) = 0;
  *(undefined4 *)(iVar20 + 0x1ac) = 0;
  *(undefined4 *)(iVar20 + 0x1b0) = 0;
  *(undefined4 *)(iVar20 + 0x1b4) = 0;
  *(undefined4 *)(iVar20 + 0x1b8) = 0;
  *(undefined4 *)(iVar20 + 0x1bc) = 0;
  *(undefined4 *)(iVar20 + 0x1c0) = 0;
  *(undefined4 *)(iVar20 + 0x1c4) = 0;
  *(undefined4 *)(iVar20 + 0x1c8) = 0;
  *(undefined4 *)(iVar20 + 0x1cc) = 0;
  *(undefined4 *)(iVar20 + 0x1d0) = 0;
  *(undefined4 *)(iVar20 + 0x1d4) = 0;
  *(undefined4 *)(iVar20 + 0x1d8) = 0;
  *(undefined4 *)(iVar20 + 0x1dc) = 0;
  *(undefined4 *)(iVar20 + 0x1e0) = 0;
  *(undefined4 *)(iVar20 + 0x1e4) = 0;
  *(undefined4 *)(iVar20 + 0x1e8) = 0;
  *(undefined4 *)(iVar20 + 0x1ec) = 0;
  *(undefined4 *)(iVar20 + 0x1f0) = 0;
  *(undefined4 *)(iVar20 + 500) = 0;
  *(undefined4 *)(iVar20 + 0x1f8) = 0;
  *(undefined4 *)(iVar20 + 0x1fc) = 0;
  *(undefined4 *)(iVar20 + 0x200) = 0;
  *(undefined4 *)(iVar20 + 0x204) = 0;
  *(undefined4 *)(iVar20 + 0x208) = 0;
  *(undefined4 *)(iVar20 + 0x20c) = 0;
  *(undefined4 *)(iVar20 + 0x210) = 0;
  *(undefined4 *)(iVar20 + 0x214) = 0;
  *(undefined4 *)(iVar20 + 0x218) = 0;
  *(undefined4 *)(iVar20 + 0x21c) = 0;
  *(undefined4 *)(iVar20 + 0x220) = 0;
  *(undefined4 *)(iVar20 + 0x224) = 0;
  switch(uVar24) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar31 = DAT_0007eb6c + 0x7e3f2;
    iVar19 = DAT_0007eb68 + 0x7e3f4 + uVar8 * 8;
    iVar9 = (**(code **)(iVar31 + *(int *)(param_2 + 4) * 0x28 + 0x40))(iVar19,param_2);
    if (iVar9 < 0) goto LAB_0007e1ea;
    iVar31 = (**(code **)(iVar31 + *(int *)(param_2 + 4) * 0x28 + 0x54))(iVar19,5,0,&local_58);
    iVar9 = DAT_0007eb70;
    if (iVar31 < 0) {
      local_58 = 0;
    }
    *(undefined4 *)(iVar21 + 0x48) = local_58;
    uVar16 = (**(code **)(iVar9 + *(int *)(param_2 + 4) * 0x28 + 0x7e472))(iVar19);
    if (uVar24 == 1) {
      uVar16 = uVar16 & 0xfffe7fff | 0x300000;
    }
    else if (uVar24 == 0) {
      uVar16 = uVar16 | 0x700000;
    }
    else if (uVar24 == 3) {
      uVar16 = uVar16 & 0xfffe7fff | 0x200000;
    }
    else {
      uVar16 = uVar16 & 0xfffe7fff;
    }
    if ((uVar16 & 0x8000000) == 0) {
      local_78 = (undefined4 *)0x0;
      break;
    }
    iVar9 = MaResMgr_AllocSequence(uVar8,1);
    if (iVar9 < 0) goto LAB_0007e1ea;
    *(undefined1 *)(iVar21 + 0x2a) = 5;
    MaDevDrv_WriteIntermediateReg(1,0xe0);
    uVar16 = uVar16 & 0xffffff80;
    MaDevDrv_WriteIntermediateReg(1,'\0');
    MaDevDrv_WriteIntermediateReg(2,0x80);
    MaDevDrv_WriteIntermediateReg(0,' ');
    MaDevDrv_WriteIntermediateReg(0,'\0');
    iVar9 = MaDevDrv_WaitBusy();
    if (iVar9 < 0) goto LAB_0007e1ea;
    local_78 = (undefined4 *)0x0;
    goto LAB_0007e248;
  case 4:
    local_78 = (undefined4 *)0x0;
    uVar16 = 0;
    break;
  case 5:
    *(undefined4 *)param_2 = 0;
    local_78 = (undefined4 *)0x0;
    uVar16 = 0;
    break;
  case 6:
    *(undefined1 *)(iVar21 + 0x29) = 0;
    local_78 = *(undefined4 **)(param_2 + 0x18);
    if (local_78[1] == 1) {
      uVar16 = 1;
    }
    else {
      uVar16 = 4;
    }
    break;
  case 7:
    local_78 = *(undefined4 **)(param_2 + 0x18);
    uVar16 = 0;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    break;
  default:
    goto switchD_0007e1bc_default;
  }
  iVar9 = MaResMgr_AllocSequence(uVar8,0);
  if (iVar9 < 0) goto LAB_0007e1ea;
  if ((uVar16 & 0x2000000) == 0) {
    uVar11 = 4;
  }
  else {
    uVar11 = 1;
  }
  *(undefined1 *)(iVar21 + 0x2a) = uVar11;
LAB_0007e248:
  uVar13 = *(uint *)param_2 & 0xf00;
  if (uVar13 == 0x200) {
    local_80 = 0;
LAB_0007e282:
    if (*(byte *)(iVar21 + 0x39) - 1 < 2) {
LAB_0007e5da:
      local_54[1] = 0x7f;
      MaDsp_VolCtrl(0,local_54 + 1);
    }
  }
  else {
    if (uVar13 < 0x201) {
      if (uVar13 == 0x100) {
        iVar9 = MaResMgr_AllocSfx(0);
        if (iVar9 < 0) goto LAB_0007e27e;
        uVar11 = 2;
        *(undefined1 *)(iVar21 + 0x38) = 2;
      }
      else {
LAB_0007e70c:
        if ((uVar16 & 0x6000) == 0) {
LAB_0007e728:
          local_80 = uVar16 & 0x6000;
          goto LAB_0007e282;
        }
        iVar9 = MaResMgr_AllocSfx(0);
        if (iVar9 < 0) goto LAB_0007e27e;
        uVar11 = 1;
        *(undefined1 *)(iVar21 + 0x38) = 1;
      }
      iVar9 = MaResMgr_AllocSfx(1);
      if (iVar9 < 0) {
LAB_0007e27e:
        local_80 = 1;
        goto LAB_0007e282;
      }
      *(undefined1 *)(iVar21 + 0x39) = uVar11;
      local_80 = 0;
      goto LAB_0007e5da;
    }
    if (uVar13 == 0x300) {
      if (*(short *)(*(int *)(DAT_0007eb78 + 0x7e742) + 0x34) == 0) {
        if ((uVar16 & 0x6000) != 0) {
          *(undefined1 *)(iVar21 + 0x38) = 5;
          *(undefined1 *)(iVar21 + 0x39) = 5;
          goto LAB_0007e768;
        }
        goto LAB_0007e728;
      }
      goto LAB_0007e27e;
    }
    if (uVar13 != 0x400) goto LAB_0007e70c;
    if (*(short *)(*(int *)(DAT_0007eb64 + 0x7e27c) + 0x34) != 0) goto LAB_0007e27e;
    *(undefined1 *)(iVar21 + 0x38) = 6;
    *(undefined1 *)(iVar21 + 0x39) = 6;
LAB_0007e768:
    local_80 = 0;
  }
  uVar13 = *(uint *)param_2 & 0xf000;
  if (uVar13 != 0x2000) {
    if (uVar13 == 0x3000) {
      if ((uVar24 == 4 || (uVar24 & 0xfffffffb) == 2) || (uVar24 == 8)) {
        *(undefined1 *)(iVar21 + 0x2d) = 1;
      }
    }
    else if (uVar13 == 0x1000) {
      iVar9 = MaResMgr_Alloc3D(&local_5c);
      if (iVar9 < 0) {
LAB_0007e6f0:
        local_80 = 1;
      }
      else {
        *(byte *)(iVar21 + 0x34) = (byte)local_5c | 0x80;
        MaDsp_3DCtrl(1,0x80,local_5c,(void *)0x0);
        MaDsp_3DCtrl(1,0xa4,local_5c,(void *)0x0);
        MaDsp_3DCtrl(1,0xa5,local_5c,(void *)0x0);
        iVar9 = DAT_0007eb74 + 0x7e6e4 + local_5c * 8;
        *(uint *)(iVar9 + 0xba4) = param_1;
        *(undefined1 *)(iVar9 + 0xba8) = 1;
      }
    }
    else {
      if ((uVar16 & 0x200) != 0) {
        iVar9 = MaResMgr_Alloc3D(&local_5c);
        if (iVar9 < 0) {
          local_80 = 1;
        }
        else {
          *(byte *)(iVar21 + 0x34) = (byte)local_5c | 0x40;
          MaDsp_3DCtrl(1,0x80,local_5c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa4,local_5c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa5,local_5c,(void *)0x0);
          iVar9 = DAT_0007f970 + 0x7f58e + local_5c * 8;
          *(uint *)(iVar9 + 0xba4) = param_1;
          *(undefined1 *)(iVar9 + 0xba8) = 0;
        }
      }
      if ((uVar16 & 0x400) != 0) {
        iVar9 = MaResMgr_Alloc3D(&local_5c);
        if (iVar9 < 0) {
          local_80 = 1;
        }
        else {
          *(byte *)(iVar21 + 0x35) = (byte)local_5c | 0x40;
          MaDsp_3DCtrl(1,0x80,local_5c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa4,local_5c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa5,local_5c,(void *)0x0);
          iVar9 = DAT_0007f96c + 0x7f538 + local_5c * 8;
          *(uint *)(iVar9 + 0xba4) = param_1;
          *(undefined1 *)(iVar9 + 0xba8) = 0;
        }
      }
      if ((uVar16 & 0x800) != 0) {
        iVar9 = MaResMgr_Alloc3D(&local_5c);
        if (iVar9 < 0) {
          local_80 = 1;
        }
        else {
          *(byte *)(iVar21 + 0x36) = (byte)local_5c | 0x40;
          MaDsp_3DCtrl(1,0x80,local_5c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa4,local_5c,(void *)0x0);
          MaDsp_3DCtrl(1,0xa5,local_5c,(void *)0x0);
          iVar9 = DAT_0007f968 + 0x7f4e0 + local_5c * 8;
          *(uint *)(iVar9 + 0xba4) = param_1;
          *(undefined1 *)(iVar9 + 0xba8) = 0;
        }
      }
      if ((uVar16 & 0x1000) != 0) {
        iVar9 = MaResMgr_Alloc3D(&local_5c);
        if (iVar9 < 0) goto LAB_0007e6f0;
        *(byte *)(iVar21 + 0x37) = (byte)local_5c | 0x40;
        MaDsp_3DCtrl(1,0x80,local_5c,(void *)0x0);
        MaDsp_3DCtrl(1,0xa4,local_5c,(void *)0x0);
        MaDsp_3DCtrl(1,0xa5,local_5c,(void *)0x0);
        iVar9 = DAT_0007f964 + 0x7f488 + local_5c * 8;
        *(uint *)(iVar9 + 0xba4) = param_1;
        *(undefined1 *)(iVar9 + 0xba8) = 0;
      }
    }
  }
  local_54[0] = 0;
  if ((uVar16 & 1) != 0) {
    uVar16 = uVar16 & 0xffffffc3;
    iVar9 = MaResMgr_AllocStream(uVar24,1,local_54);
    *(int *)(iVar20 + 0x24) = iVar9;
    if (iVar9 == 0) {
      local_80 = 1;
    }
  }
  if ((uVar16 & 4) == 0) {
    iVar9 = *(int *)(iVar20 + 0x24);
    if (iVar9 != 0) {
LAB_0007e2ea:
      if (local_54[0] != 0) {
        bVar3 = *(byte *)(iVar9 + 0x18);
        *(undefined1 *)(iVar9 + 1) = 0;
        *(undefined1 *)(iVar9 + 2) = 0;
        *(undefined4 *)(iVar9 + 8) = 0;
        *(undefined4 *)(iVar9 + 0xc) = 0;
        *(undefined1 *)(iVar9 + 0x10) = 0;
        *(undefined1 *)(iVar9 + 0x11) = 0;
        *(undefined1 *)(iVar9 + 0x13) = 0;
        *(undefined1 *)(iVar9 + 0x14) = 0;
        *(undefined1 *)(iVar9 + 0x15) = 0;
        *(undefined1 *)(iVar9 + 0x16) = 0;
        *(undefined1 *)(iVar9 + 0x17) = 0;
        *(undefined1 *)(iVar9 + 0x19) = 0;
        *(undefined1 *)(iVar9 + 0x1a) = 0;
        *(undefined1 *)(iVar9 + 3) = 0x41;
        *(undefined1 *)(iVar9 + 4) = 0x41;
        *(undefined1 *)(iVar9 + 0x12) = 0x41;
        if (bVar3 < 4) {
          MaDevDrv_WriteIntermediateReg(bVar3 + 0xa8,'|');
          MaDevDrv_WriteIntermediateReg(0xa0,bVar3);
          MaDevDrv_WriteIntermediateReg(0xa1,'\0');
          MaDevDrv_WriteIntermediateReg(0xa2,'\0');
          MaDevDrv_WriteIntermediateReg(0xa3,'|');
        }
        bVar3 = *(byte *)(iVar9 + 0x2c);
        *(undefined4 *)(iVar9 + 0x1c) = 0;
        *(undefined4 *)(iVar9 + 0x20) = 0;
        *(undefined1 *)(iVar9 + 0x24) = 0;
        *(undefined1 *)(iVar9 + 0x25) = 0;
        *(undefined1 *)(iVar9 + 0x27) = 0;
        *(undefined1 *)(iVar9 + 0x28) = 0;
        *(undefined1 *)(iVar9 + 0x29) = 0;
        *(undefined1 *)(iVar9 + 0x2a) = 0;
        *(undefined1 *)(iVar9 + 0x2b) = 0;
        *(undefined1 *)(iVar9 + 0x2d) = 0;
        *(undefined1 *)(iVar9 + 0x2e) = 0;
        *(undefined1 *)(iVar9 + 0x26) = 0x41;
        if (bVar3 < 4) {
          MaDevDrv_WriteIntermediateReg(bVar3 + 0xa8,'|');
          MaDevDrv_WriteIntermediateReg(0xa0,bVar3);
          MaDevDrv_WriteIntermediateReg(0xa1,'\0');
          MaDevDrv_WriteIntermediateReg(0xa2,'\0');
          MaDevDrv_WriteIntermediateReg(0xa3,'|');
        }
      }
    }
  }
  else {
    iVar9 = MaResMgr_AllocStream(uVar24,0,local_54);
    *(int *)(iVar20 + 0x24) = iVar9;
    if (iVar9 != 0) goto LAB_0007e2ea;
    local_80 = 1;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar9 = MaResMgr_AllocHv();
    if (iVar9 < 0) {
      if (uVar24 != 1) {
        local_80 = 1;
      }
    }
    else {
      *(undefined1 *)(iVar20 + 0x1d) = 0;
    }
  }
  if ((uVar16 & 0x8000) != 0) {
    iVar9 = MaResMgr_AllocLed();
    if (iVar9 < 0) {
      local_80 = 1;
    }
    else {
      *(byte *)(iVar21 + 0x2c) = *(byte *)(iVar21 + 0x2c) | 1;
    }
  }
  if ((uVar16 & 0x10000) != 0) {
    iVar9 = MaResMgr_AllocMotor();
    if (iVar9 < 0) {
      local_80 = 1;
    }
    else {
      *(byte *)(iVar21 + 0x2c) = *(byte *)(iVar21 + 0x2c) | 2;
    }
  }
  if ((uVar16 & 0x100000) != 0) {
    iVar9 = MaResMgr_AllocRam((_MARESMGRALLOCRAM *)&local_48);
    if (iVar9 < 0) {
      if (uVar24 != 1) {
        local_80 = 1;
      }
    }
    else {
      *(undefined4 *)(iVar15 + iVar12) = local_48;
      *(undefined4 *)(iVar20 + 4) = local_44;
      *(undefined1 *)(iVar20 + 0x1c) = local_40;
    }
  }
  if ((uVar16 & 0x200000) != 0) {
    MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)(iVar21 + 0x6c));
  }
  if ((uVar16 & 0x400000) != 0) {
    MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)(iVar21 + 0x78));
  }
  iVar9 = DAT_0007eb88;
  if (local_80 != 0) goto LAB_0007e4fe;
  uVar13 = (uVar16 & 0xff) >> 7;
  switch(uVar24) {
  case 0:
    iVar29 = *(int *)(param_2 + 4);
    uVar24 = (uint)*(byte *)(DAT_0007f928 + 0x7edb2 + uVar22);
    iVar9 = *(int *)(DAT_0007f92c + 0x7edb8);
    iVar19 = uVar24 * 0x228 + *(int *)(DAT_0007f92c + 0x7edbc);
    iVar31 = iVar9 + uVar24 * 0x98;
    if (((*(int *)(iVar19 + 4) == 0) || (*(int *)(iVar31 + 0x6c) == 0)) ||
       (*(int *)(iVar31 + 0x78) == 0)) break;
    if (*(char *)(iVar19 + 0x1d) != -1) {
      MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)(iVar9 + 0xb1c));
      if (*(int *)(iVar9 + 0xb1c) == 0) break;
      MaDevDrv_WriteIntermediateReg(0x1d,'\x7f');
    }
    MaDevDrv_WriteIntermediateReg(1,'P');
    MaDevDrv_WriteIntermediateReg(1,'\0');
    MaDevDrv_WriteIntermediateReg(0xb,'\x10');
    MaDevDrv_WriteIntermediateReg(8,'\x04');
    if (*(byte *)(iVar19 + 0x1f) == 0xff) {
      if (*(char *)(iVar31 + 0x2a) == '\x05') {
        MaCmd_VoiceInit(uVar22,2,0,uVar13,0);
      }
      else if ((uVar16 & 0x2000000) == 0) {
        if ((uVar16 & 0x1000000) == 0) {
          MaCmd_VoiceInit(uVar22,0,0,uVar13,(uint)((uVar16 & 0x10000000) != 0));
        }
        else {
          MaCmd_VoiceInit(uVar22,5,0,uVar13,1);
        }
      }
      else {
        MaCmd_VoiceInit(uVar22,4,0,uVar13,1);
      }
    }
    else {
      MaCmd_VoiceInit(uVar22,3,(uint)*(byte *)(iVar19 + 0x1f),uVar13,
                      (uint)((uVar16 & 0x10000000) != 0));
      *(undefined1 *)(iVar31 + 0x2a) = 3;
    }
    uVar13 = 0;
    do {
      MaSrm_DelStream(uVar22,uVar13);
      MaSrm_DelStream(uVar22,uVar13 + 1);
      MaSrm_DelStream(uVar22,uVar13 + 2);
      MaSrm_DelStream(uVar22,uVar13 + 3);
      MaSrm_DelStream(uVar22,uVar13 + 4);
      MaSrm_DelStream(uVar22,uVar13 + 5);
      MaSrm_DelStream(uVar22,uVar13 + 6);
      MaSrm_DelStream(uVar22,uVar13 + 7);
      MaSrm_DelStream(uVar22,uVar13 + 8);
      MaSrm_DelStream(uVar22,uVar13 + 9);
      MaSrm_DelStream(uVar22,uVar13 + 10);
      MaSrm_DelStream(uVar22,uVar13 + 0xb);
      MaSrm_DelStream(uVar22,uVar13 + 0xc);
      MaSrm_DelStream(uVar22,uVar13 + 0xd);
      MaSrm_DelStream(uVar22,uVar13 + 0xe);
      uVar10 = uVar13 + 0xf;
      uVar13 = uVar13 + 0x10;
      MaSrm_DelStream(uVar22,uVar10);
    } while (uVar13 != 0x40);
    MaDva_Initialize((uint)*(byte *)(iVar31 + 0x2a));
    MaCmd_InitChannelVolume(uVar22);
    pcVar14 = *(code **)(DAT_0007f930 + iVar29 * 0x28 + 0x7ef7c);
    if ((pcVar14 != (code *)0x0) &&
       (iVar9 = (*pcVar14)(DAT_0007f934 + 0x7ef54 + uVar24 * 8), iVar9 < 0)) goto LAB_0007e502;
    pcVar14 = *(code **)(DAT_0007f938 + iVar29 * 0x28 + 0x7efb0);
    if (pcVar14 == (code *)0x0) {
LAB_0007f842:
      pcVar14 = *(code **)(DAT_0007f974 + iVar29 * 0x28 + 0x7f89e);
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(DAT_0007f978 + 0x7f86c + uVar24 * 8,4);
      }
      MaDevDrv_WriteIntermediateReg(9,'\x0e');
      local_78 = (undefined4 *)0x4;
      MaDevDrv_WriteIntermediateReg(10,'f');
    }
    else {
      local_78 = (undefined4 *)(*pcVar14)(DAT_0007f93c + 0x7ef86 + uVar24 * 8);
      if (local_78 == (undefined4 *)0x5) {
        MaDevDrv_WriteIntermediateReg(9,'\x12');
        MaDevDrv_WriteIntermediateReg(10,'\0');
      }
      else if (local_78 == (undefined4 *)0xa) {
        MaDevDrv_WriteIntermediateReg(9,'$');
        MaDevDrv_WriteIntermediateReg(10,'\0');
      }
      else {
        if (local_78 != (undefined4 *)0x4) goto LAB_0007f842;
        MaDevDrv_WriteIntermediateReg(9,'\x0e');
        MaDevDrv_WriteIntermediateReg(10,'f');
      }
    }
    iVar9 = MaDevDrv_SendDirectPacket((uchar *)(DAT_0007f940 + 0x7f396),0x180);
    if (-1 < iVar9) {
      if ((int)((uint)*(byte *)(iVar31 + 0x34) << 0x18) < 0) {
        local_54[2] = uVar22;
        iVar9 = MaDsp_3DCtrl(1,0xb3,*(byte *)(iVar31 + 0x34) & 3,local_54 + 2);
        if (iVar9 < 0) goto LAB_0007e502;
        uVar24 = MaCmd_SeqInit(uVar22,(*(byte *)(iVar31 + 0x34) & 3) + 2,*(uchar **)(iVar31 + 0x6c))
        ;
      }
      else {
        uVar24 = MaCmd_SeqInit(uVar22,0,*(uchar **)(iVar31 + 0x6c));
      }
      iVar9 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar31 + 0x6c),uVar24);
      if (iVar9 < 0) goto LAB_0007e502;
      iVar9 = *(int *)(iVar19 + 0x24);
      if (iVar9 != 0) {
        uVar13 = (uint)*(byte *)(iVar9 + 0x18);
        uVar24 = 0;
        if (uVar13 < 4) {
          if ((uVar16 & 0x13000000) == 0) {
            MaDevDrv_WriteIntermediateReg(uVar13 + 0xa8,'f');
          }
          else {
            MaDevDrv_WriteIntermediateReg(uVar13 + 0xa8,'d');
          }
          uVar24 = MaCmd_SetPanpot(*(byte *)(iVar9 + 0x18) + 4,0x40,auStack_3c);
        }
        if (*(byte *)(iVar9 + 0x2c) < 4) {
          uVar13 = *(byte *)(iVar9 + 0x2c) + 0xa8;
          if ((uVar16 & 0x13000000) == 0) {
            MaDevDrv_WriteIntermediateReg(uVar13,'f');
          }
          else {
            MaDevDrv_WriteIntermediateReg(uVar13,'d');
          }
          iVar9 = MaCmd_SetPanpot(*(byte *)(iVar9 + 0x2c) + 4,0x40,auStack_3c + uVar24);
          uVar24 = uVar24 + iVar9;
        }
        if ((0 < (int)uVar24) && (iVar9 = MaDevDrv_SendDirectPacket(auStack_3c,uVar24), iVar9 < 0))
        goto LAB_0007e502;
      }
      if ((uVar16 & 0x13000000) == 0) {
        MaDevDrv_WriteIntermediateReg(0x1b,'~');
      }
      else {
        MaDevDrv_WriteIntermediateReg(0x1b,'|');
      }
      MaDevDrv_WriteIntermediateReg(0xc,'\0');
      MaDevDrv_WriteIntermediateReg(0xd,'\0');
      MaDevDrv_WriteIntermediateReg(0xe,'\0');
      MaDevDrv_WriteIntermediateReg(0xf,'\0');
      *(undefined4 **)(iVar31 + 0x44) = local_78;
      goto LAB_0007e8e2;
    }
    goto LAB_0007e502;
  case 1:
    iVar25 = *(int *)(param_2 + 4);
    iVar31 = *(int *)(DAT_0007f910 + 0x7ebca);
    uVar24 = (uint)*(byte *)(DAT_0007f90c + uVar22 + 0x7ebc4);
    iVar9 = *(int *)(DAT_0007f910 + 0x7ebc6);
    iVar30 = iVar31 + uVar24 * 0x228;
    iVar29 = iVar9 + uVar24 * 0x98;
    iVar19 = *(int *)(iVar30 + 4);
    if (*(int *)(iVar29 + 0x6c) != 0) {
      if (*(char *)(iVar30 + 0x1d) != -1) {
        MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)(iVar9 + 0xb1c));
        if (*(int *)(iVar9 + 0xb1c) == 0) break;
        MaDevDrv_WriteIntermediateReg(0x1d,'\x7f');
      }
      if (*(char *)(iVar29 + 0x2a) == '\x05') {
        MaCmd_VoiceInit(uVar22,2,0,uVar13,0);
      }
      else {
        MaCmd_VoiceInit(uVar22,0,0,uVar13,0);
      }
      uVar16 = 0;
      do {
        MaSrm_DelStream(uVar22,uVar16);
        MaSrm_DelStream(uVar22,uVar16 + 1);
        MaSrm_DelStream(uVar22,uVar16 + 2);
        MaSrm_DelStream(uVar22,uVar16 + 3);
        MaSrm_DelStream(uVar22,uVar16 + 4);
        MaSrm_DelStream(uVar22,uVar16 + 5);
        MaSrm_DelStream(uVar22,uVar16 + 6);
        MaSrm_DelStream(uVar22,uVar16 + 7);
        MaSrm_DelStream(uVar22,uVar16 + 8);
        MaSrm_DelStream(uVar22,uVar16 + 9);
        MaSrm_DelStream(uVar22,uVar16 + 10);
        MaSrm_DelStream(uVar22,uVar16 + 0xb);
        MaSrm_DelStream(uVar22,uVar16 + 0xc);
        MaSrm_DelStream(uVar22,uVar16 + 0xd);
        MaSrm_DelStream(uVar22,uVar16 + 0xe);
        uVar13 = uVar16 + 0xf;
        uVar16 = uVar16 + 0x10;
        MaSrm_DelStream(uVar22,uVar13);
      } while (uVar16 != 0x40);
      MaCmd_InitChannelVolume(uVar22);
      pcVar14 = *(code **)(DAT_0007f914 + iVar25 * 0x28 + 0x7ed32);
      if (pcVar14 == (code *)0x0) {
LAB_0007f5ee:
        if (*(uint *)(iVar30 + 4) != 0) {
          iVar9 = MaResMgr_FreeRam((uint)*(byte *)(iVar30 + 0x1c),*(uint *)(iVar30 + 4));
          if (iVar9 < 0) goto LAB_0007e502;
          iVar5 = 0;
          if (iVar19 == *(int *)(iVar30 + 4)) {
            *(undefined4 *)(iVar31 + uVar24 * 0x228) = 0;
          }
LAB_0007f61e:
          *(int *)(iVar30 + 4) = iVar5;
        }
      }
      else {
        iVar5 = (*pcVar14)(DAT_0007f918 + 0x7ed0c + uVar24 * 8);
        iVar9 = iVar5;
        if (iVar5 < 0) goto LAB_0007e502;
        if (iVar5 == 0) goto LAB_0007f5ee;
        if (iVar5 < *(int *)(iVar30 + 4)) {
          iVar9 = MaResMgr_FreeRam((uint)*(byte *)(iVar30 + 0x1c),*(int *)(iVar30 + 4) - iVar5);
          if (iVar9 < 0) goto LAB_0007e502;
          goto LAB_0007f61e;
        }
      }
      pcVar14 = *(code **)(DAT_0007f91c + iVar25 * 0x28 + 0x7ed78);
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(DAT_0007f920 + 0x7ed4a + uVar24 * 8,0x14);
      }
      iVar9 = MaDevDrv_SendDirectPacket((uchar *)(DAT_0007f924 + 0x7f134 + uVar22 * 0x60),0x60);
      if (-1 < iVar9) {
        if ((int)((uint)*(byte *)(iVar29 + 0x34) << 0x18) < 0) {
          local_54[2] = uVar22;
          iVar9 = MaDsp_3DCtrl(1,0xb3,*(byte *)(iVar29 + 0x34) & 3,local_54 + 2);
          if (iVar9 < 0) goto LAB_0007e502;
          uVar24 = MaCmd_SeqInit(uVar22,(*(byte *)(iVar29 + 0x34) & 3) + 2,
                                 *(uchar **)(iVar29 + 0x6c));
        }
        else {
          uVar24 = MaCmd_SeqInit(uVar22,0,*(uchar **)(iVar29 + 0x6c));
        }
        iVar9 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar29 + 0x6c),uVar24);
        if (-1 < iVar9) {
          MaDevDrv_WriteIntermediateReg(0x1b,'~');
          *(undefined4 *)(iVar29 + 0x44) = 0x14;
          goto LAB_0007e8e2;
        }
      }
      goto LAB_0007e502;
    }
    break;
  case 2:
    uVar24 = (uint)*(byte *)(DAT_0007eba4 + uVar22 + 0x7eaa4);
    iVar19 = *(int *)(DAT_0007eba8 + 0x7eaa2) + uVar24 * 0x98;
    iVar31 = *(int *)(uVar24 * 0x228 + *(int *)(DAT_0007eba8 + 0x7eaa6) + 0x24);
    if ((iVar31 != 0) && (uVar13 = (uint)*(byte *)(iVar31 + 0x18), uVar13 < 4)) {
      pcVar14 = *(code **)(DAT_0007ebac + *(int *)(param_2 + 4) * 0x28 + 0x7eb26);
      if ((pcVar14 == (code *)0x0) ||
         (iVar9 = (*pcVar14)(DAT_0007eba8 + 0x7eaae + uVar24 * 8), -1 < iVar9)) {
        if ((int)((uint)*(byte *)(iVar19 + 0x34) << 0x18) < 0) {
          local_54[2] = uVar13 + 4;
          iVar9 = MaDsp_3DCtrl(1,0xb3,*(byte *)(iVar19 + 0x34) & 3,local_54 + 2);
          if (iVar9 < 0) goto LAB_0007e502;
          iVar9 = MaSrm_SetOutput(uVar13,(*(byte *)(iVar19 + 0x34) & 3) + 2);
        }
        else if (*(char *)(iVar19 + 0x2d) == '\x01') {
          iVar9 = MaSrm_SetOutput(uVar13,1);
        }
        else {
          iVar9 = MaSrm_SetOutput(uVar13,(uint)((*(uint *)(iVar31 + 8) & 0x80) != 0));
        }
        if (-1 < iVar9) {
          MaDevDrv_WriteIntermediateReg(uVar13 + 0xa8,'|');
          if ((uVar16 & 1) != 0) {
            MaDevDrv_WriteIntermediateReg(uVar13 + 0xa9,'|');
          }
          *(undefined4 *)(iVar19 + 0x44) = 0;
          goto LAB_0007e8e2;
        }
      }
      goto LAB_0007e502;
    }
    break;
  case 3:
    iVar31 = *(int *)(param_2 + 4);
    uVar24 = (uint)*(byte *)(DAT_0007eb8c + uVar22 + 0x7e992);
    iVar19 = uVar24 * 0x228 + *(int *)(DAT_0007eb90 + 0x7e990);
    iVar29 = *(int *)(DAT_0007eb90 + 0x7e98c) + uVar24 * 0x98;
    if ((*(char *)(iVar19 + 0x1d) != -1) && (*(int *)(iVar29 + 0x6c) != 0)) {
      pcVar14 = *(code **)(DAT_0007eb94 + iVar31 * 0x28 + 0x7ea12);
      if ((pcVar14 == (code *)0x0) ||
         (iVar9 = (*pcVar14)(DAT_0007eb90 + 0x7e998 + uVar24 * 8), -1 < iVar9)) {
        if ((int)((uint)*(byte *)(iVar29 + 0x34) << 0x18) < 0) {
          local_54[2] = uVar22 + 8;
          iVar9 = MaDsp_3DCtrl(1,0xb3,*(byte *)(iVar29 + 0x34) & 3,local_54 + 2);
          if (iVar9 < 0) goto LAB_0007e502;
          uVar16 = MaCmd_SeqInit(8,(*(byte *)(iVar29 + 0x34) & 3) + 2,*(uchar **)(iVar29 + 0x6c));
        }
        else {
          uVar16 = MaCmd_SeqInit(8,0,*(uchar **)(iVar29 + 0x6c));
        }
        iVar9 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar29 + 0x6c),uVar16);
        if (-1 < iVar9) {
          **(undefined1 **)(iVar29 + 0x6c) = 0xdc;
          *(undefined1 *)(*(int *)(iVar29 + 0x6c) + 1) = 0xfc;
          iVar9 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar29 + 0x6c),2);
          if (-1 < iVar9) {
            pcVar14 = *(code **)(DAT_0007eb98 + iVar31 * 0x28 + 0x7ea86);
            if (pcVar14 != (code *)0x0) {
              (*pcVar14)(DAT_0007eb9c + 0x7ea52 + uVar24 * 8,0x14);
            }
            (**(code **)(DAT_0007eba0 + 0x7ea5e + (uint)*(byte *)(iVar19 + 0x1d) * 0x14))(0x14);
            MaDevDrv_WriteIntermediateReg(0xa5,'\0');
            MaDevDrv_WriteIntermediateReg(0xa6,'\0');
            MaDevDrv_WriteIntermediateReg(0xa7,'|');
            MaDevDrv_WriteIntermediateReg(0x1d,'\x7f');
            *(undefined4 *)(iVar29 + 0x44) = 0x14;
            goto LAB_0007e8e2;
          }
        }
      }
      goto LAB_0007e502;
    }
    break;
  case 4:
    iVar19 = *(int *)(DAT_0007eb88 + 0x7e846);
    bVar3 = *(byte *)(DAT_0007eb84 + uVar22 + 0x7e854);
    if (uVar22 == 0) {
      local_54[2] = 9;
      uVar7 = (uchar)param_1;
      MaDevDrv_WriteIntermediateReg(0x5a,uVar7);
      MaDevDrv_WriteIntermediateReg(0x5c,'\x01');
      MaDevDrv_WriteIntermediateReg(0x56,0x80);
      MaDevDrv_WriteIntermediateReg(0x57,uVar7);
      MaDevDrv_WriteIntermediateReg(0x60,'|');
      MaDevDrv_WriteIntermediateReg(0x5f,'@');
      bVar4 = MaDevDrv_ReadIntermediateReg(0x65);
      MaDevDrv_WriteIntermediateReg(0x65,bVar4 & 0xfe);
      MaDevDrv_WriteIntermediateReg(0x61,uVar7);
      MaDevDrv_WriteIntermediateReg(0x62,uVar7);
      MaDevDrv_WriteIntermediateReg(99,'|');
      uVar24 = MaCmd_SeqInit(10,0,auStack_3c);
      MaDevDrv_SendDirectPacket(auStack_3c,uVar24);
LAB_0007e8aa:
      iVar19 = iVar19 + (uint)bVar3 * 0x98;
      if ((int)((uint)*(byte *)(iVar19 + 0x34) << 0x18) < 0) {
        MaDsp_3DCtrl(1,0xb3,*(byte *)(iVar19 + 0x34) & 3,local_54 + 2);
        uVar24 = MaCmd_SeqInit(local_54[2],(*(byte *)(iVar19 + 0x34) & 3) + 2,auStack_3c);
      }
      else {
        uVar24 = MaCmd_SeqInit(local_54[2],(uint)(*(char *)(iVar19 + 0x2d) == '\x01'),auStack_3c);
      }
      iVar9 = MaDevDrv_SendDirectPacket(auStack_3c,uVar24);
      goto LAB_0007e8dc;
    }
    if (uVar22 == 1) {
      uVar34 = MaDevDrv_AutoPowerManagement(3);
      bVar32 = -1 < (int)uVar34;
      if (bVar32) {
        uVar34 = CONCAT44(*(undefined4 *)(*(int *)(iVar9 + 0x7e84e) + 0x68),
                          *(int *)(iVar9 + 0x7e84e)) | 0x100000000;
      }
      if (bVar32) {
        *(int *)((int)uVar34 + 0x68) = (int)(uVar34 >> 0x20);
      }
      local_54[2] = 0xb;
      MaDevDrv_WriteIntermediateReg(0xe6,'\0');
      MaDevDrv_WriteIntermediateReg(0xe9,'|');
      MaDevDrv_WriteIntermediateReg(0xe8,'@');
      MaDevDrv_WriteIntermediateReg(0xea,'\0');
      MaDevDrv_WriteIntermediateReg(0xeb,'\0');
      MaDevDrv_WriteIntermediateReg(0xec,'|');
      goto LAB_0007e8aa;
    }
LAB_0007f5e6:
    iVar9 = -1;
    goto LAB_0007e502;
  case 5:
    iVar9 = MaResMgr_AllocDtmf();
    if (iVar9 < 0) goto LAB_0007e502;
    MaDevDrv_WriteIntermediateReg(0x54,'d');
    MaDevDrv_WriteIntermediateReg(0x53,'@');
LAB_0007e8dc:
    if (iVar9 < 0) goto LAB_0007e502;
LAB_0007e8e2:
    if (*(char *)(iVar21 + 0x38) == '\x02') {
      MaDsp_SfxCtrl(0,0x2011e,0x80000003,(void *)(DAT_0007f960 + 0x7f5c2));
    }
    if (*(char *)(iVar21 + 0x39) == '\x02') {
      MaDsp_SfxCtrl(0,0x2013e,0x80000003,(void *)(DAT_0007f95c + 0x7f5c0));
    }
    if ((((int)((uint)*(byte *)(iVar21 + 0x34) << 0x18) < 0) && (*(byte *)(iVar21 + 0x38) - 1 < 2))
       && (*(byte *)(iVar21 + 0x39) - 1 < 2)) {
      MaDsp_SfxCtrl(0,0x20180,(*(byte *)(iVar21 + 0x34) & 3) + 2,(void *)0x1);
    }
    *(undefined4 *)(iVar18 + iVar28) = 2;
    uVar17 = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(iVar21 + 0xc) = 0;
    *(undefined4 *)(iVar21 + 0x3c) = 1;
    *(undefined4 *)(iVar21 + 4) = uVar17;
    *(undefined4 *)(iVar21 + 0x40) = 1;
    iVar9 = 0;
    memset((void *)(uVar8 * 0x98 + iVar18 + 0xd),0,0x10);
    *(undefined1 *)(iVar21 + 0x22) = 0;
    *(char *)(iVar21 + 0x27) = (char)(1 << uVar22);
    *(undefined1 *)(iVar21 + 0x23) = 0;
    *(undefined1 *)(iVar21 + 0x28) = 0;
    *(undefined1 *)(iVar21 + 0x24) = 0;
    *(undefined4 *)(iVar21 + 0x4c) = 0;
    *(undefined4 *)(iVar21 + 0x50) = 0;
    *(undefined4 *)(iVar21 + 0x54) = 0;
    *(undefined1 *)(iVar21 + 0x1d) = 100;
    *(undefined4 *)(iVar21 + 0x58) = 100;
    *(undefined1 *)(iVar21 + 0x1e) = 0x40;
    *(undefined1 *)(iVar21 + 0x1f) = 0x7f;
    *(undefined1 *)(iVar21 + 0x20) = 0x7f;
    *(undefined1 *)(iVar21 + 0x21) = 0x7f;
    uVar17 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar21 + 0x68) = 0;
    *(undefined4 *)(iVar21 + 100) = uVar17;
    goto LAB_0007e1ea;
  case 6:
    uVar16 = *(uint *)(param_2 + 0xc);
    uVar24 = DAT_0007eb7c + 0x7e7ce + uVar22;
    bVar3 = *(byte *)(uVar24 + 0x18);
    if (0x7ff < uVar16) {
      uVar24 = 0;
    }
    iVar19 = *(int *)(DAT_0007eb80 + 0x7e7d6);
    if (0x7ff >= uVar16) {
      uVar24 = 1;
    }
    if (*(uchar **)(param_2 + 8) == (uchar *)0x0) {
      uVar24 = uVar24 | 1;
    }
    iVar9 = *(int *)((uint)bVar3 * 0x228 + *(int *)(DAT_0007eb80 + 0x7e7da) + 0x24);
    if ((uVar24 == 0) && ((uVar16 & 1) == 0)) {
      if ((iVar9 == 0) || (uVar24 = (uint)*(byte *)(iVar9 + 0x18), 3 < uVar24)) break;
      switch(*local_78) {
      case 1:
        uVar10 = 0x40;
        uVar13 = 0;
        break;
      case 2:
        uVar10 = 0x42;
        uVar13 = 2;
        break;
      case 3:
        uVar10 = 0x43;
        uVar13 = 3;
        break;
      case 4:
        uVar10 = 0x41;
        uVar13 = 1;
        break;
      default:
        goto switchD_0007e7b6_default;
      }
      iVar31 = local_78[1];
      if (iVar31 == 1) {
        uVar13 = uVar10;
      }
      iVar9 = MaSrm_Open(uVar22,uVar24,local_78[2],uVar13,100,0x40,0,0,*(uchar **)(param_2 + 8),
                         uVar16);
      if (-1 < iVar9) {
        iVar19 = iVar19 + (uint)bVar3 * 0x98;
        if ((int)((uint)*(byte *)(iVar19 + 0x34) << 0x18) < 0) {
          local_54[2] = uVar24 + 4;
          iVar9 = MaDsp_3DCtrl(1,0xb3,*(byte *)(iVar19 + 0x34) & 3,local_54 + 2);
          if (iVar9 < 0) goto LAB_0007e502;
          iVar9 = MaSrm_SetOutput(uVar24,(*(byte *)(iVar19 + 0x34) & 3) + 2);
        }
        else {
          iVar9 = MaSrm_SetOutput(uVar24,(uint)(*(char *)(iVar19 + 0x2d) == '\x01'));
        }
        if (-1 < iVar9) {
          MaDevDrv_WriteIntermediateReg(uVar24 + 0xa8,'|');
          if (iVar31 == 1) {
            MaDevDrv_WriteIntermediateReg(uVar24 + 0xa9,'|');
          }
          *(undefined4 *)(iVar19 + 0x44) = 0;
          goto LAB_0007e8e2;
        }
      }
      goto LAB_0007e502;
    }
  default:
switchD_0007e3c0_default:
    iVar9 = -2;
    goto LAB_0007e502;
  case 7:
    iVar9 = *(int *)(param_2 + 8);
    uVar16 = *(uint *)(param_2 + 0xc);
    uVar24 = MaDevDrv_ReadIntermediateReg(0x9f);
    if ((uVar24 & 1) != 0) break;
    if ((iVar9 == 0 || uVar16 < 0x800) || ((uVar16 & 3) != 0)) goto switchD_0007e3c0_default;
    switch(*local_78) {
    case 1:
      if (1 < *(int *)(DAT_0007f954 + 0x7f25c) - 0x23U) goto switchD_0007e7b6_default;
      bVar27 = 0x20;
      bVar3 = 0xa0;
      bVar1 = 0x60;
      bVar4 = 0x80;
      bVar23 = 0x40;
      bVar6 = 0;
      goto LAB_0007f110;
    case 2:
      bVar27 = 0x24;
      bVar1 = 100;
      bVar3 = 0xa4;
      bVar4 = 0x84;
      bVar23 = 0x44;
      iVar19 = *(int *)(DAT_0007f950 + 0x7f240);
      bVar6 = 4;
      break;
    case 3:
      bVar3 = 0xa6;
      bVar1 = 0x66;
      bVar4 = 0x86;
      bVar23 = 0x46;
      iVar19 = *(int *)(DAT_0007f944 + 0x7f102);
      bVar6 = 6;
      bVar27 = 0x26;
      break;
    case 4:
      bVar27 = 0x22;
      bVar1 = 0x62;
      bVar3 = 0xa2;
      bVar4 = 0x82;
      bVar23 = 0x42;
      iVar19 = *(int *)(DAT_0007f958 + 0x7f28e);
      bVar6 = 2;
      break;
    default:
switchD_0007e7b6_default:
      iVar9 = -0x18;
      goto LAB_0007e502;
    }
    if (iVar19 == 0x22) {
      if (local_78[1] == 1) {
        bVar2 = 0;
        goto LAB_0007f134;
      }
    }
    else {
LAB_0007f110:
      if ((uint)local_78[1] < 2) {
        bVar2 = MaDevDrv_ReadIntermediateReg(0xee);
        bVar2 = bVar2 & 0x10;
LAB_0007f134:
        uVar24 = local_78[2];
        if (uVar24 == 0x5622) {
          bVar2 = bVar2 | 5;
        }
        else if (uVar24 < 0x5623) {
          if (uVar24 == 0x2b11) {
            bVar2 = bVar2 | 9;
          }
          else if (uVar24 < 0x2b12) {
            if (uVar24 != 8000) goto switchD_0007e3c0_default;
            bVar2 = bVar2 | 10;
          }
          else if (uVar24 == 12000) {
            bVar2 = bVar2 | 8;
          }
          else {
            if (uVar24 != 16000) goto switchD_0007e3c0_default;
            bVar2 = bVar2 | 6;
          }
        }
        else if (uVar24 == 32000) {
          bVar2 = bVar2 | 2;
        }
        else if (uVar24 < 0x7d01) {
          if (uVar24 != 24000) goto switchD_0007e3c0_default;
          bVar2 = bVar2 | 4;
        }
        else if (uVar24 == 0xac44) {
          bVar2 = bVar2 | 1;
        }
        else if (uVar24 != 48000) goto switchD_0007e3c0_default;
        uVar13 = *(uint *)(DAT_0007f948 + 0x7f17c);
        if (uVar13 == 0x22) {
          bVar3 = MaDevDrv_ReadIntermediateReg(0xf1);
          MaDevDrv_WriteIntermediateReg(0xf1,bVar3 & 0x18 | bVar6);
        }
        else {
          if ((uVar13 < 0x22) || (0x24 < uVar13)) goto LAB_0007f5e6;
          if ((uVar24 == 48000) &&
             (bVar27 = bVar1, bVar6 = bVar23, *(char *)(DAT_0007f948 + 0x7f1a6) != '\0')) {
            bVar27 = bVar3;
            bVar6 = bVar4;
          }
          if (local_78[1] == 0) {
            bVar6 = bVar27;
          }
          MaDevDrv_WriteIntermediateReg(0xf1,bVar6);
        }
        bVar3 = MaDevDrv_ReadIntermediateReg(0xed);
        MaDevDrv_WriteIntermediateReg(0xed,bVar3 | 1);
        MaDevDrv_WriteIntermediateReg(0xee,bVar2);
        MaDevDrv_WriteIntermediateReg(0xf2,'\x01');
        MaDevDrv_WriteIntermediateReg(0xf2,'\0');
        iVar15 = MaDevDrv_ReadReg(0);
        if (iVar15 << 0x1a < 0) {
          MaDevDrv_WriteReg(0,(byte)iVar15 & 0xb9);
        }
        MaDevDrv_WriteIntermediateReg(0xf3,'\x04');
        iVar15 = DAT_0007f94c;
        *(uint *)(DAT_0007f94c + 0x7fdc0) = uVar16;
        *(int *)(iVar15 + 0x7fdc4) = iVar9;
        *(undefined4 *)(iVar15 + 0x7fdbc) = 0;
        *(undefined1 *)(iVar15 + 0x7fdc8) = 0;
        *(undefined4 *)(iVar15 + 0x7fdcc) = 0;
        *(undefined1 *)(iVar15 + 0x7fdd0) = 0;
        *(undefined4 *)(iVar15 + 0x7fdd4) = 0;
        *(undefined1 *)(iVar15 + 0x7fdd8) = 0;
        *(undefined4 *)(iVar15 + 0x7fddc) = 0;
        *(undefined1 *)(iVar15 + 0x7fde0) = 0;
        *(undefined4 *)(iVar15 + 0x7fde4) = 0;
        *(undefined1 *)(iVar15 + 0x7fde8) = 0;
        goto LAB_0007e8e2;
      }
    }
    goto switchD_0007e3c0_default;
  }
LAB_0007e4fe:
  iVar9 = -3;
LAB_0007e502:
  MaResMgr_FreeSequence(uVar8);
  if (*(int *)(iVar15 + iVar12) != 0) {
    MaResMgr_FreeRam((uint)*(byte *)(iVar20 + 0x1c),0x4000);
  }
  if (*(int *)(iVar21 + 0x6c) != 0) {
    MaResMgr_FreeBuf((uint)*(byte *)(iVar21 + 0x74));
  }
  if (*(int *)(iVar21 + 0x78) != 0) {
    MaResMgr_FreeBuf((uint)*(byte *)(iVar21 + 0x80));
  }
  if (*(byte *)(iVar21 + 0x34) != 0) {
    MaResMgr_Free3D(*(byte *)(iVar21 + 0x34) & 3);
  }
  if (*(byte *)(iVar21 + 0x35) != 0) {
    MaResMgr_Free3D(*(byte *)(iVar21 + 0x35) & 3);
  }
  if (*(byte *)(iVar21 + 0x36) != 0) {
    MaResMgr_Free3D(*(byte *)(iVar21 + 0x36) & 3);
  }
  if (*(byte *)(iVar21 + 0x37) != 0) {
    MaResMgr_Free3D(*(byte *)(iVar21 + 0x37) & 3);
  }
  if (*(byte *)(iVar21 + 0x38) - 1 < 2) {
    MaResMgr_FreeSfx(0);
  }
  if (*(byte *)(iVar21 + 0x39) - 1 < 2) {
    MaResMgr_FreeSfx(1);
  }
  if (*(_MASTMINFO **)(iVar20 + 0x24) != (_MASTMINFO *)0x0) {
    MaResMgr_FreeStream(*(_MASTMINFO **)(iVar20 + 0x24));
  }
  if (*(char *)(iVar20 + 0x1d) != -1) {
    MaResMgr_FreeHv();
    *(undefined1 *)(iVar20 + 0x1d) = 0xff;
  }
  uVar22 = (uint)*(byte *)(iVar21 + 0x2c);
  if ((int)(uVar22 << 0x1f) < 0) {
    MaResMgr_FreeLed();
    uVar22 = (uint)*(byte *)(iVar21 + 0x2c);
  }
  if ((int)(uVar22 << 0x1e) < 0) {
    MaResMgr_FreeMotor();
  }
LAB_0007e1ea:
  machdep_LeaveCriticalSection();
  if (local_2c == *piVar26) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar9);
}

