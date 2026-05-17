/* LSendBlock @ 00247750 2832B */


/* YAMAHA::LSendBlock(unsigned char, unsigned char) */

void YAMAHA::LSendBlock(uchar param_1,uchar param_2)

{
  uchar *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  uchar local_18;
  undefined1 local_17;
  uchar local_10;
  undefined1 local_f;
  long local_8;
  
  puVar8 = PTR_ltatt_mute_00567618;
  puVar7 = PTR_lprm_00567530;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == '\x02') {
    puVar1 = PTR_ltatt_mute_00567618 + 3;
    bVar15 = PTR_ltatt_mute_00567618[6];
    bVar3 = PTR_ltatt_mute_00567618[4];
    bVar4 = PTR_ltatt_mute_00567618[3];
    bVar5 = PTR_ltatt_mute_00567618[1];
    bVar2 = *PTR_ltatt_mute_00567618;
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltatt_mute_00567618[8] * 2 + 0x26) = 0;
    *(undefined2 *)(puVar7 + (long)(int)(uint)bVar15 * 2 + 0x26) = 0;
    *(undefined2 *)(puVar7 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0;
    *(undefined2 *)(puVar7 + (long)(int)(uint)bVar4 * 2 + 0x26) = 0;
    *(undefined2 *)(puVar7 + (long)(int)(uint)bVar5 * 2 + 0x26) = 0;
    *(undefined2 *)(puVar7 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0;
    LSendCoef('\x02',puVar1);
    LSendCoef('\x01',puVar8 + 6);
    LSendCoef('\x01',puVar8 + 8);
    if (puVar7[9] == '\t') {
      if (*(int *)(puVar7 + 0x368) - 0x23U < 2) {
        machdep_Sleep(6);
      }
      else {
        machdep_Sleep(10);
      }
    }
    LSendCoef('\x02',PTR_ltatt_mute_00567618);
LAB_00247a18:
    uVar11 = MaDevDrv_ClearDspDelayRam(0xff00);
    uVar13 = (ulong)uVar11;
    if ((int)uVar11 < 0) {
LAB_00247d04:
      puVar7 = PTR_lprm_00567530;
      if ((PTR_lprm_00567530[0x24] == '\0') && (PTR_lprm_00567530[0x25] != '\x01')) {
        uVar6 = *(undefined2 *)(PTR_lprm_00567530 + 0x20);
        bVar15 = *PTR_ltatt_mute_00567618;
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltatt_mute_00567618[1] * 2 + 0x26) =
             uVar6;
        *(undefined2 *)(puVar7 + (long)(int)(uint)bVar15 * 2 + 0x26) = uVar6;
      }
      else {
        bVar15 = *PTR_ltatt_mute_00567618;
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltatt_mute_00567618[1] * 2 + 0x26) =
             0x7fff;
        *(undefined2 *)(puVar7 + (long)(int)(uint)bVar15 * 2 + 0x26) = 0x7fff;
      }
      LSendCoef('\x02',PTR_ltatt_mute_00567618);
      lup_tconnect('\x04');
      lup_tconnect('\x02');
      goto LAB_002477b4;
    }
    if (param_2 == '\0') {
      bVar9 = PTR_lprm_00567530[9] == '\x05';
      if ((PTR_lprm_00567530[9] != '\t') &&
         (uVar13 = LSendCoef('`',PTR_ltav_allc_00567bd0), (int)uVar13 < 0)) goto LAB_002477b4;
    }
    else {
      uVar11 = MaDevDrv_SetDspRamAddress(0x13,0x72);
      uVar13 = (ulong)uVar11;
      if ((int)uVar11 < 0) goto LAB_00247d04;
      bVar15 = PTR_lprm_00567530[9];
      if (bVar15 == 5) {
        bVar9 = true;
        uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgPitch_00567c90,0x240);
        uVar13 = uVar13 & 0xffffffff;
LAB_00247cc8:
        if ((int)uVar13 < 0) goto LAB_002477b4;
        bVar15 = PTR_lprm_00567530[9];
      }
      else {
        if (bVar15 < 6) {
          if (bVar15 == 2) {
            bVar9 = false;
            uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgPhaser_00567240,0x240);
            uVar13 = uVar13 & 0xffffffff;
          }
          else if (bVar15 < 3) {
            if (bVar15 == 0) {
              uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgMod1_005679b0,0x240);
              uVar13 = uVar13 & 0xffffffff;
              bVar9 = false;
            }
            else {
              if (bVar15 != 1) goto LAB_00247fa8;
              bVar9 = false;
              uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgMod2_00567d50,0x240);
              uVar13 = uVar13 & 0xffffffff;
            }
          }
          else if (bVar15 == 3) {
            bVar9 = false;
            uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgDistortion_00567318,0x240);
            uVar13 = uVar13 & 0xffffffff;
          }
          else {
            if (bVar15 != 4) goto LAB_00247fa8;
            bVar9 = false;
            uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgWah_00567600,0x240);
            uVar13 = uVar13 & 0xffffffff;
          }
          goto LAB_00247cc8;
        }
        if (bVar15 == 8) {
          bVar9 = false;
          uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgDBEX_SFX1_00567aa0,0x240);
          uVar13 = uVar13 & 0xffffffff;
          goto LAB_00247cc8;
        }
        if (bVar15 < 9) {
          if (bVar15 == 6) {
            bVar9 = false;
            uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgComp_00567a98,0x240);
            uVar13 = uVar13 & 0xffffffff;
          }
          else {
            if (bVar15 != 7) goto LAB_00247fa8;
            bVar9 = false;
            uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgVC2_00567228,0x240);
            uVar13 = uVar13 & 0xffffffff;
          }
          goto LAB_00247cc8;
        }
        if (bVar15 == 0xfe) {
          uVar13 = MaDevDrv_ClearDspProgram(0x13,0x72);
          if ((int)uVar13 < 0) goto LAB_002477b4;
          uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgMuteSfx1_00567b80,0x12);
          iVar12 = (int)uVar13;
        }
        else if (bVar15 == 0xff) {
          uVar13 = MaDevDrv_ClearDspProgram(0x13,0x72);
          if ((int)uVar13 < 0) goto LAB_002477b4;
          uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgThruSfx1_005671f0,0x2a);
          iVar12 = (int)uVar13;
        }
        else {
          if (bVar15 != 9) goto LAB_00247fa8;
          if ((*(long *)(PTR_lprm_00567530 + 0x370) != 0) &&
             (*(long *)(PTR_lprm_00567530 + 0x378) != 0)) {
            cVar10 = Ma7emu_GetMode();
            if (cVar10 != '\x02') {
              local_17 = 0;
              local_18 = '~';
              _MaDevDrv_SendDspCoef(0,&local_18,2);
            }
            puVar7 = PTR_lprm_00567530;
            uVar13 = _MaDevDrv_SendDspProgram(0x13,*(uchar **)(PTR_lprm_00567530 + 0x370),0x240);
            if ((int)uVar13 < 0) goto LAB_002477b4;
            bVar9 = false;
            uVar13 = _MaDevDrv_SendDspCoef(0x13,*(uchar **)(puVar7 + 0x378),0xc0);
            uVar13 = uVar13 & 0xffffffff;
            cVar10 = Ma7emu_GetMode();
            if (cVar10 != '\x02') {
              local_18 = 0xff;
              local_17 = 0xff;
              _MaDevDrv_SendDspCoef(0,&local_18,2);
            }
            goto LAB_00247cc8;
          }
          uVar13 = MaDevDrv_ClearDspProgram(0x13,0x72);
          if (((int)uVar13 < 0) ||
             (uVar13 = _MaDevDrv_SendDspProgram(0x13,PTR_gabProgThruSfx1_005671f0,0x2a),
             (int)uVar13 < 0)) goto LAB_002477b4;
          uVar13 = MaDevDrv_ClearDspCoef(0x13,0x72);
          iVar12 = (int)uVar13;
        }
        if (iVar12 < 0) goto LAB_002477b4;
        bVar15 = PTR_lprm_00567530[9];
LAB_00247fa8:
        bVar9 = false;
      }
      if ((bVar15 != 9) && (uVar13 = LSendCoef('`',PTR_ltav_allc_00567bd0), (int)uVar13 < 0))
      goto LAB_002477b4;
      uVar11 = MaDevDrv_SetDspRamAddress(0,0);
      uVar13 = (ulong)uVar11;
      if ((int)uVar11 < 0) goto LAB_00247d04;
    }
    if (bVar9) {
      MaDevDrv_ClearDspCoef(0x16,0x37);
      LSendCoef('`',PTR_ltav_allc_00567bd0);
    }
    puVar8 = PTR_ltatt_mute_00567618;
    puVar7 = PTR_lprm_00567530;
    if (PTR_lprm_00567530[0x25] != '\x01') {
LAB_00247b90:
      puVar7 = PTR_lprm_00567530;
      if ((PTR_lprm_00567530[0x24] == '\0') && (PTR_lprm_00567530[0x25] != '\x01')) {
        uVar6 = *(undefined2 *)(PTR_lprm_00567530 + 0x20);
        bVar15 = *PTR_ltatt_mute_00567618;
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltatt_mute_00567618[1] * 2 + 0x26) =
             uVar6;
        *(undefined2 *)(puVar7 + (long)(int)(uint)bVar15 * 2 + 0x26) = uVar6;
      }
      else {
        bVar15 = *PTR_ltatt_mute_00567618;
        *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltatt_mute_00567618[1] * 2 + 0x26) =
             0x7fff;
        *(undefined2 *)(puVar7 + (long)(int)(uint)bVar15 * 2 + 0x26) = 0x7fff;
      }
      LSendCoef('\x02',PTR_ltatt_mute_00567618);
      lup_tconnect('\x04');
      lup_tconnect('\x02');
      uVar13 = 0;
      goto LAB_002477b4;
    }
    if (PTR_lprm_00567530[8] == '\x02') {
      MaDevDrv_ClearDspCoef(0x286,0x286);
      MaDevDrv_ClearDspCoef(0x28d,0x28d);
    }
    else {
      puVar1 = PTR_ltatt_mute_00567618 + 2;
      bVar15 = PTR_ltatt_mute_00567618[5];
      bVar3 = PTR_ltatt_mute_00567618[4];
      bVar4 = PTR_ltatt_mute_00567618[3];
      bVar5 = PTR_ltatt_mute_00567618[2];
      *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltatt_mute_00567618[7] * 2 + 0x26) = 0;
      *(undefined2 *)(puVar7 + (long)(int)(uint)bVar15 * 2 + 0x26) = 0;
      *(undefined2 *)(puVar7 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0;
      *(undefined2 *)(puVar7 + (long)(int)(uint)bVar4 * 2 + 0x26) = 0;
      *(undefined2 *)(puVar7 + (long)(int)(uint)bVar5 * 2 + 0x26) = 0;
      LSendCoef('\x03',puVar1);
      LSendCoef('\x01',puVar8 + 5);
      LSendCoef('\x01',puVar8 + 7);
    }
    uVar11 = MaDevDrv_ClearDspDelayRam(0xffff0000);
    uVar13 = (ulong)uVar11;
    if (-1 < (int)uVar11) {
      if (param_2 == '\0') {
        uVar13 = LSendCoef('W',PTR_ltar_allc_00567a30);
        if ((int)uVar13 < 0) goto LAB_002477b4;
LAB_00247b44:
        if (PTR_lprm_00567530[8] == '\x02') {
          uVar13 = FUN_0024734c();
          if ((int)uVar13 < 0) goto LAB_002477b4;
        }
        else {
          pbVar14 = PTR_ltatt_mute_00567618 + 2;
          *(short *)(PTR_lprm_00567530 + (ulong)*pbVar14 * 2 + 0x26) =
               (short)*(undefined4 *)(PTR_lprm_00567530 + 0x20);
          LSendCoef('\x01',pbVar14);
          lup_tconnect('\x04');
          lup_tconnect('\0');
        }
        goto LAB_00247b90;
      }
      uVar11 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
      uVar13 = (ulong)uVar11;
      if (-1 < (int)uVar11) {
        _MaDevDrv_SendDspProgram(0x76,PTR_gabProgDBEX_SFX0_00567708,0x20a);
        uVar13 = LSendCoef('W',PTR_ltar_allc_00567a30);
        if ((int)uVar13 < 0) goto LAB_002477b4;
        uVar11 = MaDevDrv_SetDspRamAddress(0,0);
        uVar13 = (ulong)uVar11;
        if (-1 < (int)uVar11) goto LAB_00247b44;
      }
    }
    if (PTR_lprm_00567530[8] == '\x02') {
      local_10 = '\x7f';
      local_f = 0xff;
      _MaDevDrv_SendDspCoef(0x286,&local_10,2);
      _MaDevDrv_SendDspCoef(0x28d,&local_10,2);
      goto LAB_002477b4;
    }
LAB_002478f0:
    pbVar14 = PTR_ltatt_mute_00567618 + 2;
    *(short *)(PTR_lprm_00567530 + (ulong)*pbVar14 * 2 + 0x26) =
         (short)*(undefined4 *)(PTR_lprm_00567530 + 0x20);
  }
  else {
    if (param_1 != '\v') {
      if (param_1 == '\x02') goto LAB_00247a18;
      if (param_1 == '\v') goto LAB_0024785c;
      if (param_1 != '\x02') {
        if (param_1 != '\v') {
          uVar13 = 0;
          goto LAB_002477b4;
        }
        goto LAB_00247940;
      }
      goto LAB_00247b90;
    }
    if (PTR_lprm_00567530[8] == '\x02') {
      MaDevDrv_ClearDspCoef(0x286,0x286);
      MaDevDrv_ClearDspCoef(0x28d,0x28d);
    }
    else {
      puVar1 = PTR_ltatt_mute_00567618 + 2;
      bVar15 = PTR_ltatt_mute_00567618[5];
      bVar3 = PTR_ltatt_mute_00567618[4];
      bVar4 = PTR_ltatt_mute_00567618[3];
      bVar5 = PTR_ltatt_mute_00567618[2];
      *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltatt_mute_00567618[7] * 2 + 0x26) = 0;
      *(undefined2 *)(puVar7 + (long)(int)(uint)bVar15 * 2 + 0x26) = 0;
      *(undefined2 *)(puVar7 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0;
      *(undefined2 *)(puVar7 + (long)(int)(uint)bVar4 * 2 + 0x26) = 0;
      *(undefined2 *)(puVar7 + (long)(int)(uint)bVar5 * 2 + 0x26) = 0;
      LSendCoef('\x03',puVar1);
      LSendCoef('\x01',puVar8 + 5);
      LSendCoef('\x01',puVar8 + 7);
    }
LAB_0024785c:
    uVar11 = MaDevDrv_ClearDspDelayRam(0xffff0000);
    uVar13 = (ulong)uVar11;
    if (-1 < (int)uVar11) {
      if (param_2 == '\0') {
        uVar13 = LSendCoef('W',PTR_ltar_allc_00567a30);
        if ((int)uVar13 < 0) goto LAB_002477b4;
LAB_00247940:
        if (PTR_lprm_00567530[8] == '\x02') {
          local_10 = '\x7f';
          local_f = 0xff;
          _MaDevDrv_SendDspCoef(0x286,&local_10,2);
          uVar13 = _MaDevDrv_SendDspCoef(0x28d,&local_10,2);
        }
        else {
          pbVar14 = PTR_ltatt_mute_00567618 + 2;
          *(short *)(PTR_lprm_00567530 + (ulong)*pbVar14 * 2 + 0x26) =
               (short)*(undefined4 *)(PTR_lprm_00567530 + 0x20);
          LSendCoef('\x01',pbVar14);
          lup_tconnect('\x04');
          lup_tconnect('\0');
          uVar13 = 0;
        }
        goto LAB_002477b4;
      }
      uVar11 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
      uVar13 = (ulong)uVar11;
      if ((int)uVar11 < 0) {
        if (PTR_lprm_00567530[8] == '\x02') {
          local_10 = '\x7f';
          local_f = 0xff;
          _MaDevDrv_SendDspCoef(0x286,&local_10,2);
          _MaDevDrv_SendDspCoef(0x28d,&local_10,2);
          uVar13 = (ulong)uVar11;
          goto LAB_002477b4;
        }
        pbVar14 = PTR_ltatt_mute_00567618 + 2;
        *(short *)(PTR_lprm_00567530 + (ulong)*pbVar14 * 2 + 0x26) =
             (short)*(undefined4 *)(PTR_lprm_00567530 + 0x20);
        goto LAB_0024790c;
      }
      bVar15 = PTR_lprm_00567530[8];
      if (bVar15 == 2) {
        uVar13 = _MaDevDrv_SendDspProgram(0x76,PTR_gabProg3DRev_005673f0,0x20a);
        iVar12 = (int)uVar13;
joined_r0x00247ef4:
        if (iVar12 < 0) goto LAB_002477b4;
      }
      else {
        if (2 < bVar15) {
          if (bVar15 == 0xfe) {
            uVar13 = MaDevDrv_ClearDspProgram(0x76,0xcc);
            if ((int)uVar13 < 0) goto LAB_002477b4;
            uVar13 = _MaDevDrv_SendDspProgram(0x76,PTR_gabProgMuteSfx0_005677b8,0x12);
            iVar12 = (int)uVar13;
          }
          else {
            if (bVar15 != 0xff) goto LAB_002478b8;
            uVar13 = MaDevDrv_ClearDspProgram(0x76,0xcc);
            if ((int)uVar13 < 0) goto LAB_002477b4;
            uVar13 = _MaDevDrv_SendDspProgram(0x76,PTR_gabProgThruSfx0_005675e8,0x2a);
            iVar12 = (int)uVar13;
          }
          goto joined_r0x00247ef4;
        }
        if (bVar15 == 0) {
          if (*(int *)PTR_lprm_00567530 - 1U < 0xb) {
            uVar13 = _MaDevDrv_SendDspProgram(0x76,PTR_gabProgReverb_00567fe0,0x20a);
            iVar12 = (int)uVar13;
            goto joined_r0x00247ef4;
          }
        }
        else if ((bVar15 == 1) && (*(int *)PTR_lprm_00567530 - 2U < 3)) {
          uVar13 = _MaDevDrv_SendDspProgram(0x76,PTR_gabProgEcho_00567ad0,0x20a);
          iVar12 = (int)uVar13;
          goto joined_r0x00247ef4;
        }
      }
LAB_002478b8:
      uVar13 = LSendCoef('W',PTR_ltar_allc_00567a30);
      if ((int)uVar13 < 0) goto LAB_002477b4;
      uVar11 = MaDevDrv_SetDspRamAddress(0,0);
      uVar13 = (ulong)uVar11;
      if (-1 < (int)uVar11) goto LAB_00247940;
      if (PTR_lprm_00567530[8] == '\x02') goto LAB_002481d8;
      goto LAB_002478f0;
    }
    if (PTR_lprm_00567530[8] == '\x02') {
LAB_002481d8:
      FUN_0024734c();
      goto LAB_002477b4;
    }
    pbVar14 = PTR_ltatt_mute_00567618 + 2;
    *(short *)(PTR_lprm_00567530 + (ulong)*pbVar14 * 2 + 0x26) =
         (short)*(undefined4 *)(PTR_lprm_00567530 + 0x20);
  }
LAB_0024790c:
  LSendCoef('\x01',pbVar14);
  lup_tconnect('\x04');
  lup_tconnect('\0');
LAB_002477b4:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}

