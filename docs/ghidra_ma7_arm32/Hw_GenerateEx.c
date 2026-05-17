/* Hw_GenerateEx @ 00034bec 2206B */


void Hw_GenerateEx(undefined4 *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  critical_section *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  critical_section *pcVar12;
  undefined4 extraout_r2;
  uint uVar13;
  int iVar14;
  undefined4 extraout_r3;
  int iVar15;
  critical_section *pcVar16;
  uint uVar17;
  _genbuf *p_Var18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  ushort uVar24;
  int iVar25;
  bool bVar26;
  undefined8 uVar27;
  uint local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  
  iVar5 = DAT_0003549c;
  iVar4 = DAT_00035498;
  iVar3 = DAT_00035494;
  iVar15 = DAT_00035490 + 0x34c08;
  if (*(char *)(DAT_0003548c + 0x34bfa) != -1) {
    if (param_2 == 0) {
      bVar26 = true;
      puVar22 = (undefined4 *)0x0;
      puVar20 = (undefined4 *)0x0;
      puVar21 = (undefined4 *)0x0;
      puVar23 = (undefined4 *)0x0;
      local_54 = (undefined4 *)0x0;
      local_50 = (undefined4 *)0x0;
      local_4c = (undefined4 *)0x0;
      local_48 = (undefined4 *)0x0;
    }
    else {
      if (param_1 == (undefined4 *)0x0) {
        return;
      }
      puVar21 = (undefined4 *)*param_1;
      if (puVar21 == (undefined4 *)0x0) {
        return;
      }
      puVar20 = (undefined4 *)param_1[1];
      if (puVar20 == (undefined4 *)0x0) {
        return;
      }
      if (param_3 == 0) {
        local_48 = (undefined4 *)param_1[7];
        local_4c = (undefined4 *)param_1[6];
        local_50 = (undefined4 *)param_1[5];
        local_54 = (undefined4 *)param_1[4];
        puVar22 = (undefined4 *)param_1[3];
        puVar23 = (undefined4 *)param_1[2];
      }
      else {
        puVar23 = (undefined4 *)param_1[2];
        if (puVar23 == (undefined4 *)0x0) {
          return;
        }
        puVar22 = (undefined4 *)param_1[3];
        if (puVar22 == (undefined4 *)0x0) {
          return;
        }
        local_54 = (undefined4 *)param_1[4];
        if (local_54 == (undefined4 *)0x0) {
          return;
        }
        local_50 = (undefined4 *)param_1[5];
        if (local_50 == (undefined4 *)0x0) {
          return;
        }
        local_4c = (undefined4 *)param_1[6];
        if (local_4c == (undefined4 *)0x0) {
          return;
        }
        local_48 = (undefined4 *)param_1[7];
        if (local_48 == (undefined4 *)0x0) {
          return;
        }
      }
      bVar26 = false;
    }
    pcVar16 = (critical_section *)(DAT_0003549c + 0x34c42);
    pcVar12 = (critical_section *)(DAT_00035494 + 0x34c34);
    pcVar8 = (critical_section *)(DAT_00035498 + 0x34c38);
    local_58 = param_2;
    while( true ) {
      if (local_58 != 0) {
        bVar26 = true;
      }
      if (!bVar26) break;
      EnterCriticalSection(pcVar16);
      iVar10 = DAT_000354a0;
      uVar9 = local_58;
      if (*(uint *)(iVar5 + 0x34c4a) <= local_58) {
        uVar9 = *(uint *)(iVar5 + 0x34c4a);
      }
      uVar17 = *(uint *)(iVar5 + 0x34c4e) + uVar9;
      iVar19 = *(int *)(iVar5 + 0x34c52) + (uint)CARRY4(*(uint *)(iVar5 + 0x34c4e),uVar9);
      lVar2 = (ulonglong)uVar17 * 1000;
      *(uint *)(iVar5 + 0x34c4e) = uVar17;
      *(int *)(iVar5 + 0x34c52) = iVar19;
      uVar27 = __aeabi_ldivmod((int)lVar2,iVar19 * 1000 + (int)((ulonglong)lVar2 >> 0x20),
                               *(undefined4 *)(iVar10 + 0x34c94),0);
      *(undefined8 *)(iVar5 + 0x34c56) = uVar27;
      iVar10 = ARM::Timer_Generate((ARM *)uVar27,CONCAT44(extraout_r3,extraout_r2));
      uVar17 = iVar10 << 5 & 0x60U | (uint)*(ushort *)(iVar5 + 0x34c40);
      *(short *)(iVar5 + 0x34c40) = (short)uVar17;
      uVar17 = ARM::Sequencer_Generate
                         (*(ARM **)(iVar5 + 0x34c56),
                          CONCAT44(uVar17,iVar10 << 5) & 0xffffffff00000060);
      *(ushort *)(iVar5 + 0x34c40) =
           (ushort)(uVar17 >> 1) & 0x80 | *(ushort *)(iVar5 + 0x34c40) |
           (ushort)(uVar17 << 0xe) & 0x4000;
      if ((int)(uVar17 << 0x1e) < 0) {
        bVar6 = ARM::SIrqFifo_SetData(0xf000);
        *(byte *)(iVar5 + 0x34c3f) = bVar6 | *(byte *)(iVar5 + 0x34c3f);
      }
      iVar10 = DAT_000354b4;
      if ((int)(uVar17 << 0x16) < 0) {
        bVar6 = ARM::SIrqFifo_SetData(0xf001);
        *(byte *)(iVar10 + 0x3541d) = bVar6 | *(byte *)(iVar10 + 0x3541d);
      }
      if (param_3 == 0) {
        if (uVar9 != 0) {
          uVar17 = uVar9 * 4;
          uVar13 = 4;
          p_Var18 = *(_genbuf **)(iVar15 + DAT_000354a4);
          *puVar21 = 0;
          *puVar20 = 0;
          **(undefined4 **)p_Var18 = 0;
          **(undefined4 **)(p_Var18 + 4) = 0;
          **(undefined4 **)(p_Var18 + 8) = 0;
          **(undefined4 **)(p_Var18 + 0xc) = 0;
          **(undefined4 **)(p_Var18 + 0x10) = 0;
          **(undefined4 **)(p_Var18 + 0x14) = 0;
          **(undefined4 **)(p_Var18 + 0x18) = 0;
          **(undefined4 **)(p_Var18 + 0x1c) = 0;
          **(undefined4 **)(p_Var18 + 0x20) = 0;
          **(undefined4 **)(p_Var18 + 0x24) = 0;
          **(undefined4 **)(p_Var18 + 0x28) = 0;
          **(undefined4 **)(p_Var18 + 0x2c) = 0;
          **(undefined4 **)(p_Var18 + 0x30) = 0;
          if (uVar17 != 4) {
            if ((int)((uVar17 - 4) * 0x20000000) < 0) {
              puVar21[1] = 0;
              uVar13 = 8;
              puVar20[1] = 0;
              *(undefined4 *)(*(int *)p_Var18 + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 4) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 8) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0xc) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x10) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x14) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x18) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x20) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x24) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x28) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + 4) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x30) + 4) = 0;
              if (uVar17 == 8) goto LAB_00034e92;
            }
            do {
              *(undefined4 *)((int)puVar21 + uVar13) = 0;
              iVar10 = uVar13 + 4;
              *(undefined4 *)((int)puVar20 + uVar13) = 0;
              *(undefined4 *)(*(int *)p_Var18 + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 8) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0xc) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x10) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x14) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x18) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x20) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x24) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x28) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + uVar13) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x30) + uVar13) = 0;
              uVar13 = uVar13 + 8;
              *(undefined4 *)((int)puVar21 + iVar10) = 0;
              *(undefined4 *)((int)puVar20 + iVar10) = 0;
              *(undefined4 *)(*(int *)p_Var18 + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 8) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0xc) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x10) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x14) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x18) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x20) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x24) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x28) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + iVar10) = 0;
              *(undefined4 *)(*(int *)(p_Var18 + 0x30) + iVar10) = 0;
            } while (uVar13 != uVar17);
          }
          goto LAB_00034e92;
        }
LAB_00035460:
        p_Var18 = *(_genbuf **)(iVar15 + DAT_000354a4);
        uVar17 = uVar9;
      }
      else {
        if (uVar9 == 0) goto LAB_00035460;
        uVar17 = uVar9 * 4;
        uVar13 = 4;
        p_Var18 = *(_genbuf **)(iVar15 + DAT_000354a4);
        *puVar21 = 0;
        *puVar20 = 0;
        *puVar23 = 0;
        *puVar22 = 0;
        *local_54 = 0;
        *local_50 = 0;
        *local_4c = 0;
        *local_48 = 0;
        **(undefined4 **)p_Var18 = 0;
        **(undefined4 **)(p_Var18 + 4) = 0;
        **(undefined4 **)(p_Var18 + 8) = 0;
        **(undefined4 **)(p_Var18 + 0xc) = 0;
        **(undefined4 **)(p_Var18 + 0x10) = 0;
        **(undefined4 **)(p_Var18 + 0x14) = 0;
        **(undefined4 **)(p_Var18 + 0x18) = 0;
        **(undefined4 **)(p_Var18 + 0x1c) = 0;
        **(undefined4 **)(p_Var18 + 0x20) = 0;
        **(undefined4 **)(p_Var18 + 0x24) = 0;
        **(undefined4 **)(p_Var18 + 0x28) = 0;
        **(undefined4 **)(p_Var18 + 0x2c) = 0;
        **(undefined4 **)(p_Var18 + 0x30) = 0;
        if (uVar17 != 4) {
          if ((int)((uVar17 - 4) * 0x20000000) < 0) {
            uVar13 = 8;
            puVar21[1] = 0;
            puVar20[1] = 0;
            puVar23[1] = 0;
            puVar22[1] = 0;
            local_54[1] = 0;
            local_50[1] = 0;
            local_4c[1] = 0;
            local_48[1] = 0;
            *(undefined4 *)(*(int *)p_Var18 + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 4) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 8) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0xc) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x10) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x14) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x18) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x20) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x24) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x28) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x30) + 4) = 0;
            if (uVar17 == 8) goto LAB_00034e92;
          }
          do {
            *(undefined4 *)((int)puVar21 + uVar13) = 0;
            iVar10 = uVar13 + 4;
            *(undefined4 *)((int)puVar20 + uVar13) = 0;
            *(undefined4 *)((int)puVar23 + uVar13) = 0;
            *(undefined4 *)((int)puVar22 + uVar13) = 0;
            *(undefined4 *)((int)local_54 + uVar13) = 0;
            *(undefined4 *)((int)local_50 + uVar13) = 0;
            *(undefined4 *)((int)local_4c + uVar13) = 0;
            *(undefined4 *)((int)local_48 + uVar13) = 0;
            *(undefined4 *)(*(int *)p_Var18 + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 8) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0xc) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x10) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x14) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x18) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x20) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x24) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x28) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + uVar13) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x30) + uVar13) = 0;
            uVar13 = uVar13 + 8;
            *(undefined4 *)((int)puVar21 + iVar10) = 0;
            *(undefined4 *)((int)puVar20 + iVar10) = 0;
            *(undefined4 *)((int)puVar23 + iVar10) = 0;
            *(undefined4 *)((int)puVar22 + iVar10) = 0;
            *(undefined4 *)((int)local_54 + iVar10) = 0;
            *(undefined4 *)((int)local_50 + iVar10) = 0;
            *(undefined4 *)((int)local_4c + iVar10) = 0;
            *(undefined4 *)((int)local_48 + iVar10) = 0;
            *(undefined4 *)(*(int *)p_Var18 + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 8) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0xc) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x10) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x14) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x18) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x20) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x24) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x28) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + iVar10) = 0;
            *(undefined4 *)(*(int *)(p_Var18 + 0x30) + iVar10) = 0;
          } while (uVar13 != uVar17);
        }
      }
LAB_00034e92:
      ARM::FMCONTROL_Generate(uVar9,p_Var18);
      ARM::WTCONTROL_Generate(uVar9,p_Var18);
      uVar7 = ARM::STMCONTROL_Generate(uVar9,p_Var18);
      iVar10 = DAT_000354ac + 0x34eba;
      *(ushort *)(DAT_000354a8 + 0x34eba) = uVar7 & 0xf | *(ushort *)(DAT_000354a8 + 0x34eba);
      ARM::HVCONTROL_Generate(uVar9,p_Var18);
      uVar13 = ARM::VIRTUALREGISTER_GetRegM('\0','\x18');
      iVar19 = *(int *)(iVar10 + (uVar13 & 0x7c));
      uVar11 = ARM::VIRTUALREGISTER_GetRegM('\0','\x19');
      ARM::DSPCONTROL_SetMasterVol
                (iVar19 << (uVar13 & 3),*(int *)(iVar10 + (uVar11 & 0x7c)) << (uVar11 & 3));
      ARM::DSPCONTROL_Generate(uVar9,p_Var18,param_3);
      if (param_3 == 0) {
        if (uVar9 != 0) {
          uVar13 = (uVar17 - 4 & 0x1f) >> 2;
          uVar11 = 4;
          *puVar21 = **(undefined4 **)p_Var18;
          *puVar20 = **(undefined4 **)(p_Var18 + 4);
          if (uVar17 != 4) {
            if (uVar13 != 0) {
              if (uVar13 != 1) {
                if (uVar13 != 2) {
                  if (uVar13 != 3) {
                    if (uVar13 != 4) {
                      if (uVar13 != 5) {
                        if (uVar13 != 6) {
                          uVar11 = 8;
                          puVar21[1] = *(undefined4 *)(*(int *)p_Var18 + 4);
                          puVar20[1] = *(undefined4 *)(*(int *)(p_Var18 + 4) + 4);
                        }
                        *(undefined4 *)((int)puVar21 + uVar11) =
                             *(undefined4 *)(*(int *)p_Var18 + uVar11);
                        *(undefined4 *)((int)puVar20 + uVar11) =
                             *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar11);
                        uVar11 = uVar11 + 4;
                      }
                      *(undefined4 *)((int)puVar21 + uVar11) =
                           *(undefined4 *)(*(int *)p_Var18 + uVar11);
                      *(undefined4 *)((int)puVar20 + uVar11) =
                           *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar11);
                      uVar11 = uVar11 + 4;
                    }
                    *(undefined4 *)((int)puVar21 + uVar11) =
                         *(undefined4 *)(*(int *)p_Var18 + uVar11);
                    *(undefined4 *)((int)puVar20 + uVar11) =
                         *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar11);
                    uVar11 = uVar11 + 4;
                  }
                  *(undefined4 *)((int)puVar21 + uVar11) = *(undefined4 *)(*(int *)p_Var18 + uVar11)
                  ;
                  *(undefined4 *)((int)puVar20 + uVar11) =
                       *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar11);
                  uVar11 = uVar11 + 4;
                }
                *(undefined4 *)((int)puVar21 + uVar11) = *(undefined4 *)(*(int *)p_Var18 + uVar11);
                *(undefined4 *)((int)puVar20 + uVar11) =
                     *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar11);
                uVar11 = uVar11 + 4;
              }
              *(undefined4 *)((int)puVar21 + uVar11) = *(undefined4 *)(*(int *)p_Var18 + uVar11);
              *(undefined4 *)((int)puVar20 + uVar11) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar11);
              uVar11 = uVar11 + 4;
              if (uVar11 == uVar17) goto LAB_0003507c;
            }
            do {
              iVar14 = uVar11 + 4;
              iVar25 = uVar11 + 8;
              iVar10 = uVar11 + 0xc;
              *(undefined4 *)((int)puVar21 + uVar11) = *(undefined4 *)(*(int *)p_Var18 + uVar11);
              iVar19 = uVar11 + 0x10;
              *(undefined4 *)((int)puVar20 + uVar11) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar11);
              *(undefined4 *)((int)puVar21 + iVar14) = *(undefined4 *)(*(int *)p_Var18 + iVar14);
              *(undefined4 *)((int)puVar20 + iVar14) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar14);
              iVar14 = uVar11 + 0x14;
              *(undefined4 *)((int)puVar21 + iVar25) = *(undefined4 *)(*(int *)p_Var18 + iVar25);
              *(undefined4 *)((int)puVar20 + iVar25) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar25);
              iVar25 = uVar11 + 0x18;
              *(undefined4 *)((int)puVar21 + iVar10) = *(undefined4 *)(*(int *)p_Var18 + iVar10);
              *(undefined4 *)((int)puVar20 + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar10);
              iVar10 = uVar11 + 0x1c;
              uVar11 = uVar11 + 0x20;
              *(undefined4 *)((int)puVar21 + iVar19) = *(undefined4 *)(*(int *)p_Var18 + iVar19);
              *(undefined4 *)((int)puVar20 + iVar19) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar19);
              *(undefined4 *)((int)puVar21 + iVar14) = *(undefined4 *)(*(int *)p_Var18 + iVar14);
              *(undefined4 *)((int)puVar20 + iVar14) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar14);
              *(undefined4 *)((int)puVar21 + iVar25) = *(undefined4 *)(*(int *)p_Var18 + iVar25);
              *(undefined4 *)((int)puVar20 + iVar25) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar25);
              *(undefined4 *)((int)puVar21 + iVar10) = *(undefined4 *)(*(int *)p_Var18 + iVar10);
              *(undefined4 *)((int)puVar20 + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar10);
            } while (uVar11 != uVar17);
          }
        }
LAB_0003507c:
        local_58 = local_58 - uVar9;
        if (*(char *)(iVar4 + 0x34c35) < '\0') goto LAB_00035254;
LAB_00035094:
        LeaveCriticalSection(pcVar8);
      }
      else {
        if (uVar9 != 0) {
          uVar13 = 4;
          *puVar21 = **(undefined4 **)p_Var18;
          *puVar20 = **(undefined4 **)(p_Var18 + 4);
          *puVar23 = **(undefined4 **)(p_Var18 + 0x14);
          *puVar22 = **(undefined4 **)(p_Var18 + 0x18);
          *local_54 = **(undefined4 **)(p_Var18 + 0x1c);
          *local_50 = **(undefined4 **)(p_Var18 + 0x20);
          *local_4c = **(undefined4 **)(p_Var18 + 0x2c);
          *local_48 = **(undefined4 **)(p_Var18 + 0x30);
          if (uVar17 != 4) {
            if ((int)((uVar17 - 4) * 0x20000000) < 0) {
              uVar13 = 8;
              puVar21[1] = *(undefined4 *)(*(int *)p_Var18 + 4);
              puVar20[1] = *(undefined4 *)(*(int *)(p_Var18 + 4) + 4);
              puVar23[1] = *(undefined4 *)(*(int *)(p_Var18 + 0x14) + 4);
              puVar22[1] = *(undefined4 *)(*(int *)(p_Var18 + 0x18) + 4);
              local_54[1] = *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + 4);
              local_50[1] = *(undefined4 *)(*(int *)(p_Var18 + 0x20) + 4);
              local_4c[1] = *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + 4);
              local_48[1] = *(undefined4 *)(*(int *)(p_Var18 + 0x30) + 4);
              if (uVar17 == 8) goto LAB_00035220;
            }
            do {
              iVar10 = uVar13 + 4;
              *(undefined4 *)((int)puVar21 + uVar13) = *(undefined4 *)(*(int *)p_Var18 + uVar13);
              *(undefined4 *)((int)puVar20 + uVar13) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + uVar13);
              *(undefined4 *)((int)puVar23 + uVar13) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x14) + uVar13);
              *(undefined4 *)((int)puVar22 + uVar13) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x18) + uVar13);
              *(undefined4 *)((int)local_54 + uVar13) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + uVar13);
              *(undefined4 *)((int)local_50 + uVar13) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x20) + uVar13);
              *(undefined4 *)((int)local_4c + uVar13) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + uVar13);
              *(undefined4 *)((int)local_48 + uVar13) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x30) + uVar13);
              uVar13 = uVar13 + 8;
              *(undefined4 *)((int)puVar21 + iVar10) = *(undefined4 *)(*(int *)p_Var18 + iVar10);
              *(undefined4 *)((int)puVar20 + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 4) + iVar10);
              *(undefined4 *)((int)puVar23 + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x14) + iVar10);
              *(undefined4 *)((int)puVar22 + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x18) + iVar10);
              *(undefined4 *)((int)local_54 + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x1c) + iVar10);
              *(undefined4 *)((int)local_50 + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x20) + iVar10);
              *(undefined4 *)((int)local_4c + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x2c) + iVar10);
              *(undefined4 *)((int)local_48 + iVar10) =
                   *(undefined4 *)(*(int *)(p_Var18 + 0x30) + iVar10);
            } while (uVar13 != uVar17);
          }
        }
LAB_00035220:
        local_54 = (undefined4 *)((int)local_54 + uVar17);
        local_50 = (undefined4 *)((int)local_50 + uVar17);
        local_4c = (undefined4 *)((int)local_4c + uVar17);
        local_48 = (undefined4 *)((int)local_48 + uVar17);
        puVar23 = (undefined4 *)((int)puVar23 + uVar17);
        puVar22 = (undefined4 *)((int)puVar22 + uVar17);
        local_58 = local_58 - uVar9;
        if (-1 < *(char *)(iVar4 + 0x34c35)) goto LAB_00035094;
LAB_00035254:
        iVar10 = ARM::SIrqFifo_GetStatus();
        uVar7 = *(ushort *)(iVar3 + 0x34c6c);
        uVar1 = *(ushort *)(DAT_000354b0 + 0x35260);
        bVar26 = iVar10 << 0x1f < 0;
        if (bVar26) {
          uVar24 = *(ushort *)(iVar4 + 0x34c36);
        }
        else {
          uVar24 = *(ushort *)(iVar4 + 0x34c36) | 0x10;
        }
        if (bVar26) {
          uVar24 = uVar24 & 0xffef;
        }
        *(ushort *)(iVar3 + 0x34c32) = uVar24;
        LeaveCriticalSection(pcVar12);
        if (((uVar24 & uVar1 & uVar7) != 0) && (*(code **)(iVar3 + 0x34c70) != (code *)0x0)) {
          (**(code **)(iVar3 + 0x34c70))();
        }
      }
      puVar21 = (undefined4 *)((int)puVar21 + uVar17);
      puVar20 = (undefined4 *)((int)puVar20 + uVar17);
      bVar26 = false;
    }
  }
  return;
}

