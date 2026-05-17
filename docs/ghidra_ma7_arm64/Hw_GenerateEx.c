/* Hw_GenerateEx @ 001329e0 3972B */


void Hw_GenerateEx(undefined8 *param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined *puVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  uint *puVar24;
  long lVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uint *puVar30;
  undefined4 *puVar31;
  uint *puVar32;
  undefined4 *puVar33;
  uint *puVar34;
  uint *puVar35;
  undefined4 *puVar36;
  uint *puVar37;
  uint *puVar38;
  undefined4 *puVar39;
  uint *puVar40;
  uint *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  uint *puVar44;
  ulong uVar45;
  undefined4 *puVar46;
  uint *puVar47;
  undefined4 *puVar48;
  uint *puVar49;
  uint *puVar50;
  uint *puVar51;
  uint *puVar52;
  uint *puVar53;
  undefined8 uVar54;
  uint *local_20;
  uint *local_18;
  
  if (DAT_00568030 == -1) {
    return;
  }
  if (param_2 == 0) {
    local_18 = (uint *)0x0;
    bVar12 = true;
    local_20 = local_18;
    puVar50 = local_18;
    puVar51 = local_18;
    puVar38 = local_18;
    puVar35 = local_18;
    puVar32 = local_18;
    puVar30 = local_18;
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
      return;
    }
    if ((uint *)*param_1 == (uint *)0x0) {
      return;
    }
    if ((uint *)param_1[1] == (uint *)0x0) {
      return;
    }
    if (param_3 == 0) {
      local_18 = (uint *)param_1[7];
      local_20 = (uint *)param_1[6];
      puVar38 = (uint *)param_1[5];
      puVar35 = (uint *)param_1[4];
      puVar32 = (uint *)param_1[3];
      puVar30 = (uint *)param_1[2];
    }
    else {
      puVar30 = (uint *)param_1[2];
      if (puVar30 == (uint *)0x0) {
        return;
      }
      puVar32 = (uint *)param_1[3];
      if (puVar32 == (uint *)0x0) {
        return;
      }
      puVar35 = (uint *)param_1[4];
      if (puVar35 == (uint *)0x0) {
        return;
      }
      puVar38 = (uint *)param_1[5];
      if (puVar38 == (uint *)0x0) {
        return;
      }
      local_20 = (uint *)param_1[6];
      if (local_20 == (uint *)0x0) {
        return;
      }
      local_18 = (uint *)param_1[7];
      if (local_18 == (uint *)0x0) {
        return;
      }
    }
    bVar12 = false;
    puVar50 = (uint *)*param_1;
    puVar51 = (uint *)param_1[1];
  }
LAB_00132a98:
  do {
    if ((!bVar12) && (param_2 == 0)) {
      return;
    }
    EnterCriticalSection((critical_section *)&DAT_00582978);
    uVar9 = param_2;
    if (DAT_005829a8 < param_2) {
      uVar9 = DAT_005829a8;
    }
    uVar45 = (ulong)uVar9;
    DAT_005829b0 = uVar45 + DAT_005829b0;
    DAT_005829b8 = 0;
    if ((ulong)DAT_00568034 != 0) {
      DAT_005829b8 = (DAT_005829b0 * 1000) / (long)(ulong)DAT_00568034;
    }
    uVar15 = ARM::Timer_Generate(DAT_005829b8);
    DAT_005829c0 = (uVar15 & 3) << 5 | DAT_005829c0;
    uVar18 = ARM::Sequencer_Generate(DAT_005829b8);
    uVar16 = (uint)uVar18;
    DAT_005829c0 = (ushort)(uVar18 >> 1) & 0x80 | DAT_005829c0 | (ushort)((uVar16 & 1) << 0xe);
    if ((uVar16 >> 1 & 1) == 0) {
      if ((uVar16 >> 9 & 1) == 0) goto LAB_00132b3c;
LAB_00133190:
      bVar14 = ARM::SIrqFifo_SetData(0xf001);
      DAT_00582971 = bVar14 | DAT_00582971;
      if (param_3 == 0) goto LAB_001331b8;
LAB_00132b40:
      if (uVar9 != 0) {
        lVar25 = 1;
        puVar23 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x60);
        puVar33 = *(undefined4 **)PTR_gOutBuf_005673d0;
        puVar31 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 8);
        puVar36 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x10);
        puVar39 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x18);
        puVar48 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x20);
        puVar46 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x28);
        puVar43 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x30);
        puVar42 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x38);
        puVar29 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x40);
        puVar28 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x48);
        puVar26 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x50);
        puVar19 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 0x58);
        *puVar50 = 0;
        *puVar51 = 0;
        *puVar30 = 0;
        *puVar32 = 0;
        *puVar35 = 0;
        *puVar38 = 0;
        *local_20 = 0;
        *local_18 = 0;
        *puVar33 = 0;
        *puVar31 = 0;
        *puVar36 = 0;
        *puVar39 = 0;
        *puVar48 = 0;
        *puVar46 = 0;
        *puVar43 = 0;
        *puVar42 = 0;
        *puVar29 = 0;
        *puVar28 = 0;
        *puVar26 = 0;
        *puVar19 = 0;
        *puVar23 = 0;
        if (1 < uVar9) {
          if ((uVar9 - 1 & 1) != 0) {
            puVar50[1] = 0;
            lVar25 = 2;
            puVar51[1] = 0;
            puVar30[1] = 0;
            puVar32[1] = 0;
            puVar35[1] = 0;
            puVar38[1] = 0;
            local_20[1] = 0;
            local_18[1] = 0;
            puVar33[1] = 0;
            puVar31[1] = 0;
            puVar36[1] = 0;
            puVar39[1] = 0;
            puVar48[1] = 0;
            puVar46[1] = 0;
            puVar43[1] = 0;
            puVar42[1] = 0;
            puVar29[1] = 0;
            puVar28[1] = 0;
            puVar26[1] = 0;
            puVar19[1] = 0;
            puVar23[1] = 0;
            if (uVar9 < 3) goto LAB_00132d08;
          }
          do {
            puVar50[lVar25] = 0;
            lVar1 = lVar25 + 1;
            puVar51[lVar25] = 0;
            puVar30[lVar25] = 0;
            puVar32[lVar25] = 0;
            puVar35[lVar25] = 0;
            puVar38[lVar25] = 0;
            local_20[lVar25] = 0;
            local_18[lVar25] = 0;
            puVar33[lVar25] = 0;
            puVar31[lVar25] = 0;
            puVar36[lVar25] = 0;
            puVar39[lVar25] = 0;
            puVar48[lVar25] = 0;
            puVar46[lVar25] = 0;
            puVar43[lVar25] = 0;
            puVar42[lVar25] = 0;
            puVar29[lVar25] = 0;
            puVar28[lVar25] = 0;
            puVar26[lVar25] = 0;
            puVar19[lVar25] = 0;
            puVar23[lVar25] = 0;
            lVar25 = lVar25 + 2;
            puVar50[lVar1] = 0;
            puVar51[lVar1] = 0;
            puVar30[lVar1] = 0;
            puVar32[lVar1] = 0;
            puVar35[lVar1] = 0;
            puVar38[lVar1] = 0;
            local_20[lVar1] = 0;
            local_18[lVar1] = 0;
            puVar33[lVar1] = 0;
            puVar31[lVar1] = 0;
            puVar36[lVar1] = 0;
            puVar39[lVar1] = 0;
            puVar48[lVar1] = 0;
            puVar46[lVar1] = 0;
            puVar43[lVar1] = 0;
            puVar42[lVar1] = 0;
            puVar29[lVar1] = 0;
            puVar28[lVar1] = 0;
            puVar26[lVar1] = 0;
            puVar19[lVar1] = 0;
            puVar23[lVar1] = 0;
          } while ((uint)lVar25 < uVar9);
        }
      }
    }
    else {
      bVar14 = ARM::SIrqFifo_SetData(0xf000);
      DAT_00582971 = bVar14 | DAT_00582971;
      if ((uVar16 >> 9 & 1) != 0) goto LAB_00133190;
LAB_00132b3c:
      if (param_3 != 0) goto LAB_00132b40;
LAB_001331b8:
      if (uVar9 != 0) {
        uVar16 = uVar9 - 1 & 3;
        lVar25 = 1;
        puVar40 = *(uint **)PTR_gOutBuf_005673d0;
        puVar37 = *(uint **)(PTR_gOutBuf_005673d0 + 8);
        puVar34 = *(uint **)(PTR_gOutBuf_005673d0 + 0x10);
        puVar24 = *(uint **)(PTR_gOutBuf_005673d0 + 0x18);
        puVar20 = *(uint **)(PTR_gOutBuf_005673d0 + 0x20);
        puVar53 = *(uint **)(PTR_gOutBuf_005673d0 + 0x28);
        puVar49 = *(uint **)(PTR_gOutBuf_005673d0 + 0x30);
        puVar47 = *(uint **)(PTR_gOutBuf_005673d0 + 0x38);
        puVar44 = *(uint **)(PTR_gOutBuf_005673d0 + 0x40);
        puVar41 = *(uint **)(PTR_gOutBuf_005673d0 + 0x48);
        puVar52 = *(uint **)(PTR_gOutBuf_005673d0 + 0x50);
        puVar22 = *(uint **)(PTR_gOutBuf_005673d0 + 0x58);
        puVar21 = *(uint **)(PTR_gOutBuf_005673d0 + 0x60);
        *puVar50 = param_3;
        *puVar51 = param_3;
        *puVar40 = param_3;
        *puVar37 = param_3;
        *puVar34 = param_3;
        *puVar24 = param_3;
        *puVar20 = param_3;
        *puVar53 = param_3;
        *puVar49 = param_3;
        *puVar47 = param_3;
        *puVar44 = param_3;
        *puVar41 = param_3;
        *puVar52 = param_3;
        *puVar22 = param_3;
        *puVar21 = param_3;
        if (1 < uVar9) {
          if (uVar16 != 0) {
            if (uVar16 != 1) {
              if (uVar16 != 2) {
                puVar50[1] = param_3;
                lVar25 = 2;
                puVar51[1] = param_3;
                puVar40[1] = param_3;
                puVar37[1] = param_3;
                puVar34[1] = param_3;
                puVar24[1] = param_3;
                puVar20[1] = param_3;
                puVar53[1] = param_3;
                puVar49[1] = param_3;
                puVar47[1] = param_3;
                puVar44[1] = param_3;
                puVar41[1] = param_3;
                puVar52[1] = param_3;
                puVar22[1] = param_3;
                puVar21[1] = param_3;
              }
              puVar50[lVar25] = 0;
              puVar51[lVar25] = 0;
              puVar40[lVar25] = 0;
              puVar37[lVar25] = 0;
              puVar34[lVar25] = 0;
              puVar24[lVar25] = 0;
              puVar20[lVar25] = 0;
              puVar53[lVar25] = 0;
              puVar49[lVar25] = 0;
              puVar47[lVar25] = 0;
              puVar44[lVar25] = 0;
              puVar41[lVar25] = 0;
              puVar52[lVar25] = 0;
              puVar22[lVar25] = 0;
              puVar21[lVar25] = 0;
              lVar25 = lVar25 + 1;
            }
            puVar50[lVar25] = 0;
            puVar51[lVar25] = 0;
            puVar40[lVar25] = 0;
            puVar37[lVar25] = 0;
            puVar34[lVar25] = 0;
            puVar24[lVar25] = 0;
            puVar20[lVar25] = 0;
            puVar53[lVar25] = 0;
            puVar49[lVar25] = 0;
            puVar47[lVar25] = 0;
            puVar44[lVar25] = 0;
            puVar41[lVar25] = 0;
            puVar52[lVar25] = 0;
            puVar22[lVar25] = 0;
            puVar21[lVar25] = 0;
            lVar25 = lVar25 + 1;
            if (uVar9 <= (uint)lVar25) goto LAB_00132d08;
          }
          do {
            puVar50[lVar25] = 0;
            lVar1 = lVar25 + 1;
            puVar51[lVar25] = 0;
            lVar4 = lVar25 + 2;
            puVar40[lVar25] = 0;
            lVar5 = lVar25 + 3;
            puVar37[lVar25] = 0;
            puVar34[lVar25] = 0;
            puVar24[lVar25] = 0;
            puVar20[lVar25] = 0;
            puVar53[lVar25] = 0;
            puVar49[lVar25] = 0;
            puVar47[lVar25] = 0;
            puVar44[lVar25] = 0;
            puVar41[lVar25] = 0;
            puVar52[lVar25] = 0;
            puVar22[lVar25] = 0;
            puVar21[lVar25] = 0;
            lVar25 = lVar25 + 4;
            puVar50[lVar1] = 0;
            puVar51[lVar1] = 0;
            puVar40[lVar1] = 0;
            puVar37[lVar1] = 0;
            puVar34[lVar1] = 0;
            puVar24[lVar1] = 0;
            puVar20[lVar1] = 0;
            puVar53[lVar1] = 0;
            puVar49[lVar1] = 0;
            puVar47[lVar1] = 0;
            puVar44[lVar1] = 0;
            puVar41[lVar1] = 0;
            puVar52[lVar1] = 0;
            puVar22[lVar1] = 0;
            puVar21[lVar1] = 0;
            puVar50[lVar4] = 0;
            puVar51[lVar4] = 0;
            puVar40[lVar4] = 0;
            puVar37[lVar4] = 0;
            puVar34[lVar4] = 0;
            puVar24[lVar4] = 0;
            puVar20[lVar4] = 0;
            puVar53[lVar4] = 0;
            puVar49[lVar4] = 0;
            puVar47[lVar4] = 0;
            puVar44[lVar4] = 0;
            puVar41[lVar4] = 0;
            puVar52[lVar4] = 0;
            puVar22[lVar4] = 0;
            puVar21[lVar4] = 0;
            puVar50[lVar5] = 0;
            puVar51[lVar5] = 0;
            puVar40[lVar5] = 0;
            puVar37[lVar5] = 0;
            puVar34[lVar5] = 0;
            puVar24[lVar5] = 0;
            puVar20[lVar5] = 0;
            puVar53[lVar5] = 0;
            puVar49[lVar5] = 0;
            puVar47[lVar5] = 0;
            puVar44[lVar5] = 0;
            puVar41[lVar5] = 0;
            puVar52[lVar5] = 0;
            puVar22[lVar5] = 0;
            puVar21[lVar5] = 0;
          } while ((uint)lVar25 < uVar9);
        }
      }
    }
LAB_00132d08:
    puVar13 = PTR_gOutBuf_005673d0;
    ARM::FMCONTROL_Generate(uVar9,(_genbuf *)PTR_gOutBuf_005673d0);
    ARM::WTCONTROL_Generate(uVar9,(_genbuf *)puVar13);
    uVar15 = ARM::STMCONTROL_Generate(uVar9,(_genbuf *)puVar13);
    DAT_005829c0 = uVar15 & 0xf | DAT_005829c0;
    ARM::HVCONTROL_Generate(uVar9,(_genbuf *)puVar13);
    uVar16 = ARM::VIRTUALREGISTER_GetRegM('\0','\x18');
    iVar10 = *(int *)(&DAT_0027be30 + (long)(int)(uVar16 >> 2 & 0x1f) * 4);
    uVar17 = ARM::VIRTUALREGISTER_GetRegM('\0','\x19');
    ARM::DSPCONTROL_SetMasterVol
              (iVar10 << (ulong)(uVar16 & 3),
               *(int *)(&DAT_0027be30 + (long)(int)(uVar17 >> 2 & 0x1f) * 4) << (ulong)(uVar17 & 3))
    ;
    ARM::DSPCONTROL_Generate(uVar9,(_genbuf *)puVar13,param_3);
    if (param_3 != 0) {
      if (uVar9 != 0) {
        puVar40 = *(uint **)puVar13;
        puVar37 = *(uint **)(puVar13 + 8);
        puVar34 = *(uint **)(puVar13 + 0x28);
        uVar16 = uVar9 - 1 & 3;
        lVar25 = 1;
        puVar24 = *(uint **)(puVar13 + 0x30);
        puVar41 = *(uint **)(puVar13 + 0x38);
        puVar20 = *(uint **)(puVar13 + 0x40);
        puVar22 = *(uint **)(puVar13 + 0x58);
        puVar21 = *(uint **)(puVar13 + 0x60);
        *puVar50 = *puVar40;
        *puVar51 = *puVar37;
        *puVar30 = *puVar34;
        *puVar32 = *puVar24;
        *puVar35 = *puVar41;
        *puVar38 = *puVar20;
        *local_20 = *puVar22;
        *local_18 = *puVar21;
        if (1 < uVar9) {
          if (uVar16 != 0) {
            if (uVar16 != 1) {
              if (uVar16 != 2) {
                lVar25 = 2;
                puVar50[1] = puVar40[1];
                puVar51[1] = puVar37[1];
                puVar30[1] = puVar34[1];
                puVar32[1] = puVar24[1];
                puVar35[1] = puVar41[1];
                puVar38[1] = puVar20[1];
                local_20[1] = puVar22[1];
                local_18[1] = puVar21[1];
              }
              puVar50[lVar25] = puVar40[lVar25];
              puVar51[lVar25] = puVar37[lVar25];
              puVar30[lVar25] = puVar34[lVar25];
              puVar32[lVar25] = puVar24[lVar25];
              puVar35[lVar25] = puVar41[lVar25];
              puVar38[lVar25] = puVar20[lVar25];
              local_20[lVar25] = puVar22[lVar25];
              local_18[lVar25] = puVar21[lVar25];
              lVar25 = lVar25 + 1;
            }
            puVar50[lVar25] = puVar40[lVar25];
            puVar51[lVar25] = puVar37[lVar25];
            puVar30[lVar25] = puVar34[lVar25];
            puVar32[lVar25] = puVar24[lVar25];
            puVar35[lVar25] = puVar41[lVar25];
            puVar38[lVar25] = puVar20[lVar25];
            local_20[lVar25] = puVar22[lVar25];
            local_18[lVar25] = puVar21[lVar25];
            lVar25 = lVar25 + 1;
            if (uVar9 <= (uint)lVar25) goto LAB_001336d0;
          }
          do {
            lVar1 = lVar25 + 1;
            puVar50[lVar25] = puVar40[lVar25];
            lVar4 = lVar25 + 2;
            lVar5 = lVar25 + 3;
            puVar51[lVar25] = puVar37[lVar25];
            puVar30[lVar25] = puVar34[lVar25];
            puVar32[lVar25] = puVar24[lVar25];
            puVar35[lVar25] = puVar41[lVar25];
            puVar38[lVar25] = puVar20[lVar25];
            local_20[lVar25] = puVar22[lVar25];
            local_18[lVar25] = puVar21[lVar25];
            lVar25 = lVar25 + 4;
            puVar50[lVar1] = puVar40[lVar1];
            puVar51[lVar1] = puVar37[lVar1];
            puVar30[lVar1] = puVar34[lVar1];
            puVar32[lVar1] = puVar24[lVar1];
            puVar35[lVar1] = puVar41[lVar1];
            puVar38[lVar1] = puVar20[lVar1];
            local_20[lVar1] = puVar22[lVar1];
            local_18[lVar1] = puVar21[lVar1];
            puVar50[lVar4] = puVar40[lVar4];
            puVar51[lVar4] = puVar37[lVar4];
            puVar30[lVar4] = puVar34[lVar4];
            puVar32[lVar4] = puVar24[lVar4];
            puVar35[lVar4] = puVar41[lVar4];
            puVar38[lVar4] = puVar20[lVar4];
            local_20[lVar4] = puVar22[lVar4];
            local_18[lVar4] = puVar21[lVar4];
            puVar50[lVar5] = puVar40[lVar5];
            puVar51[lVar5] = puVar37[lVar5];
            puVar30[lVar5] = puVar34[lVar5];
            puVar32[lVar5] = puVar24[lVar5];
            puVar35[lVar5] = puVar41[lVar5];
            puVar38[lVar5] = puVar20[lVar5];
            local_20[lVar5] = puVar22[lVar5];
            local_18[lVar5] = puVar21[lVar5];
          } while ((uint)lVar25 < uVar9);
        }
      }
LAB_001336d0:
      param_2 = param_2 - uVar9;
      local_20 = local_20 + uVar45;
      local_18 = local_18 + uVar45;
      puVar30 = puVar30 + uVar45;
      puVar32 = puVar32 + uVar45;
      puVar35 = puVar35 + uVar45;
      puVar38 = puVar38 + uVar45;
      if ((char)DAT_00582971 < '\0') goto LAB_00133714;
LAB_00133110:
      LeaveCriticalSection((critical_section *)&DAT_00582978);
LAB_00133120:
      bVar12 = false;
      puVar50 = puVar50 + uVar45;
      puVar51 = puVar51 + uVar45;
      goto LAB_00132a98;
    }
    if (uVar9 != 0) {
      puVar20 = *(uint **)puVar13;
      puVar21 = puVar50 + 4;
      puVar22 = puVar51 + 4;
      puVar24 = *(uint **)(puVar13 + 8);
      if ((((uVar9 < 8 ||
            (puVar20 < puVar21 && puVar50 < puVar20 + 4 ||
            puVar20 < puVar22 && puVar51 < puVar20 + 4)) ||
           puVar24 < puVar21 && puVar50 < puVar24 + 4) || puVar24 < puVar22 && puVar51 < puVar24 + 4
          ) || (puVar50 < puVar22 && puVar51 < puVar21)) {
        *puVar50 = *puVar20;
        uVar16 = uVar9 - 1 & 7;
        lVar25 = 1;
        *puVar51 = *puVar24;
        if (1 < uVar9) {
          if (uVar16 != 0) {
            if (uVar16 != 1) {
              if (uVar16 != 2) {
                if (uVar16 != 3) {
                  if (uVar16 != 4) {
                    if (uVar16 != 5) {
                      if (uVar16 != 6) {
                        lVar25 = 2;
                        puVar50[1] = puVar20[1];
                        puVar51[1] = puVar24[1];
                      }
                      puVar50[lVar25] = puVar20[lVar25];
                      puVar51[lVar25] = puVar24[lVar25];
                      lVar25 = lVar25 + 1;
                    }
                    puVar50[lVar25] = puVar20[lVar25];
                    puVar51[lVar25] = puVar24[lVar25];
                    lVar25 = lVar25 + 1;
                  }
                  puVar50[lVar25] = puVar20[lVar25];
                  puVar51[lVar25] = puVar24[lVar25];
                  lVar25 = lVar25 + 1;
                }
                puVar50[lVar25] = puVar20[lVar25];
                puVar51[lVar25] = puVar24[lVar25];
                lVar25 = lVar25 + 1;
              }
              puVar50[lVar25] = puVar20[lVar25];
              puVar51[lVar25] = puVar24[lVar25];
              lVar25 = lVar25 + 1;
            }
            puVar50[lVar25] = puVar20[lVar25];
            puVar51[lVar25] = puVar24[lVar25];
            lVar25 = lVar25 + 1;
            if (uVar9 <= (uint)lVar25) goto LAB_001330e4;
          }
          do {
            lVar1 = lVar25 + 1;
            puVar50[lVar25] = puVar20[lVar25];
            lVar4 = lVar25 + 2;
            lVar5 = lVar25 + 3;
            lVar6 = lVar25 + 4;
            lVar7 = lVar25 + 5;
            puVar51[lVar25] = puVar24[lVar25];
            lVar2 = lVar25 + 6;
            lVar3 = lVar25 + 7;
            lVar25 = lVar25 + 8;
            puVar50[lVar1] = puVar20[lVar1];
            puVar51[lVar1] = puVar24[lVar1];
            puVar50[lVar4] = puVar20[lVar4];
            puVar51[lVar4] = puVar24[lVar4];
            puVar50[lVar5] = puVar20[lVar5];
            puVar51[lVar5] = puVar24[lVar5];
            puVar50[lVar6] = puVar20[lVar6];
            puVar51[lVar6] = puVar24[lVar6];
            puVar50[lVar7] = puVar20[lVar7];
            puVar51[lVar7] = puVar24[lVar7];
            puVar50[lVar2] = puVar20[lVar2];
            puVar51[lVar2] = puVar24[lVar2];
            puVar50[lVar3] = puVar20[lVar3];
            puVar51[lVar3] = puVar24[lVar3];
          } while ((uint)lVar25 < uVar9);
        }
      }
      else {
        uVar16 = -((uint)((ulong)puVar20 >> 2) & 3) & 3;
        uVar17 = uVar9;
        if (uVar16 < uVar9) {
          uVar17 = uVar16;
        }
        uVar18 = (ulong)uVar17;
        if (uVar17 == 0) {
          uVar16 = 0;
        }
        else {
          *puVar50 = *puVar20;
          *puVar51 = *puVar24;
          uVar16 = uVar17;
          if (uVar17 != 1) {
            puVar50[1] = puVar20[1];
            puVar51[1] = puVar24[1];
            if (uVar17 == 3) {
              puVar50[2] = puVar20[2];
              puVar51[2] = puVar24[2];
            }
            else {
              uVar16 = 2;
            }
          }
        }
        lVar1 = uVar18 * 4;
        uVar54 = *(undefined8 *)(puVar20 + uVar18);
        uVar11 = (uVar9 - uVar17) - 4 >> 2;
        uVar27 = 1;
        uVar8 = uVar11 & 3;
        lVar25 = 0x10;
        *(undefined8 *)(puVar50 + uVar18 + 2) = *(undefined8 *)(puVar20 + uVar18 + 2);
        *(undefined8 *)(puVar50 + uVar18) = uVar54;
        uVar11 = uVar11 + 1;
        uVar54 = *(undefined8 *)(puVar24 + uVar18);
        *(undefined8 *)(puVar51 + uVar18 + 2) = *(undefined8 *)(puVar24 + uVar18 + 2);
        *(undefined8 *)(puVar51 + uVar18) = uVar54;
        if (1 < uVar11) {
          if (uVar8 != 0) {
            if (uVar8 != 1) {
              if (uVar8 != 2) {
                uVar27 = 2;
                uVar54 = *(undefined8 *)(puVar20 + uVar18 + 4);
                lVar25 = 0x20;
                *(undefined8 *)(puVar50 + uVar18 + 4 + 2) =
                     *(undefined8 *)(puVar20 + uVar18 + 4 + 2);
                *(undefined8 *)(puVar50 + uVar18 + 4) = uVar54;
                uVar54 = *(undefined8 *)(puVar24 + uVar18 + 4);
                *(undefined8 *)(puVar51 + uVar18 + 4 + 2) =
                     *(undefined8 *)(puVar24 + uVar18 + 4 + 2);
                *(undefined8 *)(puVar51 + uVar18 + 4) = uVar54;
              }
              lVar4 = lVar25 + lVar1;
              uVar27 = uVar27 + 1;
              uVar54 = *(undefined8 *)((long)puVar20 + lVar4);
              lVar25 = lVar25 + 0x10;
              ((undefined8 *)((long)puVar50 + lVar4))[1] =
                   ((undefined8 *)((long)puVar20 + lVar4))[1];
              *(undefined8 *)((long)puVar50 + lVar4) = uVar54;
              uVar54 = *(undefined8 *)((long)puVar24 + lVar4);
              ((undefined8 *)((long)puVar51 + lVar4))[1] =
                   ((undefined8 *)((long)puVar24 + lVar4))[1];
              *(undefined8 *)((long)puVar51 + lVar4) = uVar54;
            }
            lVar4 = lVar25 + lVar1;
            uVar27 = uVar27 + 1;
            uVar54 = *(undefined8 *)((long)puVar20 + lVar4);
            lVar25 = lVar25 + 0x10;
            ((undefined8 *)((long)puVar50 + lVar4))[1] = ((undefined8 *)((long)puVar20 + lVar4))[1];
            *(undefined8 *)((long)puVar50 + lVar4) = uVar54;
            uVar54 = *(undefined8 *)((long)puVar24 + lVar4);
            ((undefined8 *)((long)puVar51 + lVar4))[1] = ((undefined8 *)((long)puVar24 + lVar4))[1];
            *(undefined8 *)((long)puVar51 + lVar4) = uVar54;
            if (uVar11 <= uVar27) goto LAB_00133084;
          }
          do {
            lVar4 = lVar25 + lVar1;
            uVar54 = *(undefined8 *)((long)puVar20 + lVar4);
            lVar5 = lVar25 + 0x10 + lVar1;
            lVar6 = lVar25 + 0x20 + lVar1;
            ((undefined8 *)((long)puVar50 + lVar4))[1] = ((undefined8 *)((long)puVar20 + lVar4))[1];
            *(undefined8 *)((long)puVar50 + lVar4) = uVar54;
            lVar7 = lVar25 + 0x30 + lVar1;
            uVar54 = *(undefined8 *)((long)puVar24 + lVar4);
            uVar27 = uVar27 + 4;
            lVar25 = lVar25 + 0x40;
            ((undefined8 *)((long)puVar51 + lVar4))[1] = ((undefined8 *)((long)puVar24 + lVar4))[1];
            *(undefined8 *)((long)puVar51 + lVar4) = uVar54;
            uVar54 = *(undefined8 *)((long)puVar20 + lVar5);
            ((undefined8 *)((long)puVar50 + lVar5))[1] = ((undefined8 *)((long)puVar20 + lVar5))[1];
            *(undefined8 *)((long)puVar50 + lVar5) = uVar54;
            uVar54 = *(undefined8 *)((long)puVar24 + lVar5);
            ((undefined8 *)((long)puVar51 + lVar5))[1] = ((undefined8 *)((long)puVar24 + lVar5))[1];
            *(undefined8 *)((long)puVar51 + lVar5) = uVar54;
            uVar54 = *(undefined8 *)((long)puVar20 + lVar6);
            ((undefined8 *)((long)puVar50 + lVar6))[1] = ((undefined8 *)((long)puVar20 + lVar6))[1];
            *(undefined8 *)((long)puVar50 + lVar6) = uVar54;
            uVar54 = *(undefined8 *)((long)puVar24 + lVar6);
            ((undefined8 *)((long)puVar51 + lVar6))[1] = ((undefined8 *)((long)puVar24 + lVar6))[1];
            *(undefined8 *)((long)puVar51 + lVar6) = uVar54;
            uVar54 = *(undefined8 *)((long)puVar20 + lVar7);
            ((undefined8 *)((long)puVar50 + lVar7))[1] = ((undefined8 *)((long)puVar20 + lVar7))[1];
            *(undefined8 *)((long)puVar50 + lVar7) = uVar54;
            uVar54 = *(undefined8 *)((long)puVar24 + lVar7);
            ((undefined8 *)((long)puVar51 + lVar7))[1] = ((undefined8 *)((long)puVar24 + lVar7))[1];
            *(undefined8 *)((long)puVar51 + lVar7) = uVar54;
          } while (uVar27 < uVar11);
        }
LAB_00133084:
        uVar16 = uVar16 + uVar11 * 4;
        if (uVar11 * 4 != uVar9 - uVar17) {
          uVar17 = uVar16 + 1;
          puVar50[uVar16] = puVar20[uVar16];
          puVar51[uVar16] = puVar24[uVar16];
          if (uVar17 < uVar9) {
            uVar16 = uVar16 + 2;
            puVar50[uVar17] = puVar20[uVar17];
            puVar51[uVar17] = puVar24[uVar17];
            if (uVar16 < uVar9) {
              puVar50[uVar16] = puVar20[uVar16];
              puVar51[uVar16] = puVar24[uVar16];
            }
          }
        }
      }
    }
LAB_001330e4:
    param_2 = param_2 - uVar9;
    if (-1 < (char)DAT_00582971) goto LAB_00133110;
LAB_00133714:
    uVar18 = ARM::SIrqFifo_GetStatus();
    if ((uVar18 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 | 0x10;
    }
    else {
      DAT_005829c0 = DAT_005829c0 & 0xffef;
    }
    uVar15 = DAT_005829c0 & DAT_00568038 & DAT_005829e0;
    LeaveCriticalSection((critical_section *)&DAT_00582978);
    if ((uVar15 == 0) || (DAT_005829e8 == (code *)0x0)) goto LAB_00133120;
    (*DAT_005829e8)();
    bVar12 = false;
    puVar50 = puVar50 + uVar45;
    puVar51 = puVar51 + uVar45;
  } while( true );
}

