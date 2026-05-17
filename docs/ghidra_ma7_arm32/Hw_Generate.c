/* Hw_Generate @ 000342e0 2238B */


void Hw_Generate(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  critical_section *pcVar12;
  undefined4 uVar13;
  undefined4 extraout_r2;
  uint *puVar14;
  undefined4 extraout_r3;
  int iVar15;
  uint uVar16;
  critical_section *pcVar17;
  uint uVar18;
  _genbuf *p_Var19;
  critical_section *pcVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  char cVar29;
  uint uVar30;
  uint uVar31;
  undefined8 uVar32;
  uint local_54;
  uint local_4c;
  uint local_44;
  
  iVar6 = DAT_00034bac;
  iVar5 = DAT_00034ba4;
  if (*(char *)(DAT_00034ba0 + 0x342ee) != -1) {
    if (param_3 == 0) {
      bVar4 = true;
    }
    else {
      if (param_2 == (undefined2 *)0x0 || param_1 == (undefined2 *)0x0) {
        return;
      }
      bVar4 = false;
    }
    uVar28 = 0;
    local_4c = 0;
    pcVar17 = (critical_section *)(DAT_00034ba4 + 0x34326);
    pcVar20 = (critical_section *)(DAT_00034ba8 + 0x34332);
    pcVar12 = (critical_section *)(DAT_00034bac + 0x34334);
    local_44 = param_3;
    while( true ) {
      if (local_44 != 0) {
        bVar4 = true;
      }
      if (!bVar4) break;
      EnterCriticalSection(pcVar17);
      uVar16 = local_44;
      if (*(uint *)(iVar5 + 0x3432e) <= local_44) {
        uVar16 = *(uint *)(iVar5 + 0x3432e);
      }
      uVar18 = *(uint *)(iVar5 + 0x34332) + uVar16;
      iVar21 = *(int *)(iVar5 + 0x34336) + (uint)CARRY4(*(uint *)(iVar5 + 0x34332),uVar16);
      uVar13 = *(undefined4 *)(DAT_00034bb0 + 0x34374);
      lVar3 = (ulonglong)uVar18 * 1000;
      *(uint *)(iVar5 + 0x34332) = uVar18;
      *(int *)(iVar5 + 0x34336) = iVar21;
      uVar32 = __aeabi_ldivmod((int)lVar3,iVar21 * 1000 + (int)((ulonglong)lVar3 >> 0x20),uVar13,0);
      *(undefined8 *)(iVar5 + 0x3433a) = uVar32;
      iVar21 = ARM::Timer_Generate((ARM *)uVar32,CONCAT44(extraout_r3,extraout_r2));
      uVar18 = iVar21 << 5 & 0x60U | (uint)*(ushort *)(iVar5 + 0x34324);
      *(short *)(iVar5 + 0x34324) = (short)uVar18;
      uVar18 = ARM::Sequencer_Generate
                         (*(ARM **)(iVar5 + 0x3433a),CONCAT44(iVar21 << 5,uVar18) & 0x60ffffffff);
      *(ushort *)(iVar5 + 0x34324) =
           (ushort)(uVar18 >> 1) & 0x80 | *(ushort *)(iVar5 + 0x34324) |
           (ushort)(uVar18 << 0xe) & 0x4000;
      if ((int)(uVar18 << 0x1e) < 0) {
        bVar7 = ARM::SIrqFifo_SetData(0xf000);
        *(byte *)(iVar5 + 0x34323) = bVar7 | *(byte *)(iVar5 + 0x34323);
      }
      iVar21 = DAT_00034bd8;
      if ((int)(uVar18 << 0x16) < 0) {
        bVar7 = ARM::SIrqFifo_SetData(0xf001);
        *(byte *)(iVar21 + 0x34adf) = bVar7 | *(byte *)(iVar21 + 0x34adf);
        if (uVar16 == 0) goto LAB_00034aea;
LAB_000343e6:
        iVar21 = DAT_00034bb4;
        *param_1 = 0;
        local_54 = uVar16 * 2;
        p_Var19 = *(_genbuf **)(iVar21 + 0x343f6);
        *param_2 = 0;
        uVar18 = 2;
        **(undefined4 **)p_Var19 = 0;
        **(undefined4 **)(p_Var19 + 4) = 0;
        **(undefined4 **)(p_Var19 + 8) = 0;
        **(undefined4 **)(p_Var19 + 0xc) = 0;
        **(undefined4 **)(p_Var19 + 0x10) = 0;
        **(undefined4 **)(p_Var19 + 0x14) = 0;
        **(undefined4 **)(p_Var19 + 0x18) = 0;
        **(undefined4 **)(p_Var19 + 0x1c) = 0;
        **(undefined4 **)(p_Var19 + 0x20) = 0;
        **(undefined4 **)(p_Var19 + 0x24) = 0;
        **(undefined4 **)(p_Var19 + 0x28) = 0;
        **(undefined4 **)(p_Var19 + 0x2c) = 0;
        **(undefined4 **)(p_Var19 + 0x30) = 0;
        if (local_54 != 2) {
          if ((int)((local_54 - 2) * 0x40000000) < 0) {
            param_1[1] = 0;
            uVar18 = 4;
            param_2[1] = 0;
            *(undefined4 *)(*(int *)p_Var19 + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 4) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 8) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0xc) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x10) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x14) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x18) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x1c) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x20) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x24) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x28) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x2c) + 4) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x30) + 4) = 0;
            if (local_54 == 4) goto LAB_00034548;
          }
          do {
            *(undefined2 *)((int)param_1 + uVar18) = 0;
            iVar21 = uVar18 + 2;
            *(undefined2 *)((int)param_2 + uVar18) = 0;
            *(undefined4 *)(*(int *)p_Var19 + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 4) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 8) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0xc) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x10) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x14) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x18) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x1c) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x20) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x24) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x28) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x2c) + uVar18 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x30) + uVar18 * 2) = 0;
            uVar18 = uVar18 + 4;
            *(undefined2 *)((int)param_1 + iVar21) = 0;
            *(undefined2 *)((int)param_2 + iVar21) = 0;
            *(undefined4 *)(*(int *)p_Var19 + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 4) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 8) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0xc) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x10) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x14) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x18) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x1c) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x20) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x24) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x28) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x2c) + iVar21 * 2) = 0;
            *(undefined4 *)(*(int *)(p_Var19 + 0x30) + iVar21 * 2) = 0;
          } while (uVar18 != local_54);
        }
      }
      else {
        if (uVar16 != 0) goto LAB_000343e6;
LAB_00034aea:
        p_Var19 = *(_genbuf **)(DAT_00034bdc + 0x34af4);
        local_54 = uVar16;
      }
LAB_00034548:
      iVar21 = DAT_00034bb8;
      ARM::FMCONTROL_Generate(uVar16,p_Var19);
      ARM::WTCONTROL_Generate(uVar16,p_Var19);
      uVar8 = ARM::STMCONTROL_Generate(uVar16,p_Var19);
      *(ushort *)(DAT_00034bbc + 0x34570) = uVar8 & 0xf | *(ushort *)(DAT_00034bbc + 0x34570);
      ARM::HVCONTROL_Generate(uVar16,p_Var19);
      ARM::DINCONTROL_Generate(uVar16,p_Var19);
      ARM::DTMFCONTROL_Generate(uVar16,p_Var19);
      uVar18 = ARM::VIRTUALREGISTER_GetRegM('\0','\x18');
      iVar15 = *(int *)(iVar21 + 0x3455a + (uVar18 & 0x7c));
      uVar9 = ARM::VIRTUALREGISTER_GetRegM('\0','\x19');
      ARM::DSPCONTROL_SetMasterVol
                (iVar15 << (uVar18 & 3),*(int *)(iVar21 + 0x3455a + (uVar9 & 0x7c)) << (uVar9 & 3));
      ARM::DSPCONTROL_Generate(uVar16,p_Var19,0);
      if (uVar16 != 0) {
        puVar11 = *(uint **)p_Var19;
        iVar15 = uVar16 * 4;
        puVar14 = *(uint **)(p_Var19 + 4);
        uVar24 = (iVar15 - 4U & 0xf) >> 2;
        uVar22 = *puVar11;
        iVar21 = 4;
        uVar9 = *puVar14;
        uVar18 = uVar22 & ~((int)uVar22 >> 0x20);
        if ((int)uVar22 < 0) {
          uVar18 = ~uVar22;
        }
        if ((int)uVar28 < (int)uVar18) {
          uVar28 = uVar18;
        }
        uVar18 = uVar9 & ~((int)uVar9 >> 0x20);
        if ((int)uVar9 < 0) {
          uVar18 = ~uVar9;
        }
        if ((int)local_4c < (int)uVar18) {
          local_4c = uVar18;
        }
        if (iVar15 != 4) {
          if (uVar24 != 0) {
            if (uVar24 != 1) {
              if (uVar24 != 2) {
                uVar22 = puVar11[1];
                iVar21 = 8;
                uVar9 = puVar14[1];
                uVar18 = uVar22 & ~((int)uVar22 >> 0x20);
                if ((int)uVar22 < 0) {
                  uVar18 = ~uVar22;
                }
                if ((int)uVar28 < (int)uVar18) {
                  uVar28 = uVar18;
                }
                uVar18 = uVar9 & ~((int)uVar9 >> 0x20);
                if ((int)uVar9 < 0) {
                  uVar18 = ~uVar9;
                }
                if ((int)local_4c < (int)uVar18) {
                  local_4c = uVar18;
                }
              }
              uVar22 = *(uint *)((int)puVar11 + iVar21);
              uVar9 = *(uint *)((int)puVar14 + iVar21);
              iVar21 = iVar21 + 4;
              uVar18 = uVar22 & ~((int)uVar22 >> 0x20);
              if ((int)uVar22 < 0) {
                uVar18 = ~uVar22;
              }
              if ((int)uVar28 < (int)uVar18) {
                uVar28 = uVar18;
              }
              uVar18 = uVar9 & ~((int)uVar9 >> 0x20);
              if ((int)uVar9 < 0) {
                uVar18 = ~uVar9;
              }
              if ((int)local_4c < (int)uVar18) {
                local_4c = uVar18;
              }
            }
            uVar22 = *(uint *)((int)puVar11 + iVar21);
            uVar9 = *(uint *)((int)puVar14 + iVar21);
            iVar21 = iVar21 + 4;
            uVar18 = uVar22 & ~((int)uVar22 >> 0x20);
            if ((int)uVar22 < 0) {
              uVar18 = ~uVar22;
            }
            if ((int)uVar28 < (int)uVar18) {
              uVar28 = uVar18;
            }
            uVar18 = uVar9 & ~((int)uVar9 >> 0x20);
            if ((int)uVar9 < 0) {
              uVar18 = ~uVar9;
            }
            if ((int)local_4c < (int)uVar18) {
              local_4c = uVar18;
            }
            if (iVar21 == iVar15) goto LAB_00034788;
          }
          do {
            iVar26 = iVar21 + 4;
            iVar25 = iVar21 + 8;
            uVar9 = *(uint *)((int)puVar11 + iVar21);
            iVar27 = iVar21 + 0xc;
            uVar22 = *(uint *)((int)puVar14 + iVar21);
            iVar21 = iVar21 + 0x10;
            uVar31 = *(uint *)((int)puVar11 + iVar26);
            uVar30 = *(uint *)((int)puVar11 + iVar25);
            uVar24 = *(uint *)((int)puVar14 + iVar26);
            uVar18 = uVar9 & ~((int)uVar9 >> 0x20);
            if ((int)uVar9 < 0) {
              uVar18 = ~uVar9;
            }
            uVar9 = *(uint *)((int)puVar14 + iVar25);
            if ((int)uVar28 < (int)uVar18) {
              uVar28 = uVar18;
            }
            uVar23 = *(uint *)((int)puVar11 + iVar27);
            uVar10 = *(uint *)((int)puVar14 + iVar27);
            uVar18 = uVar30 & ~((int)uVar30 >> 0x20);
            if ((int)uVar30 < 0) {
              uVar18 = ~uVar30;
            }
            uVar30 = uVar31 & ~((int)uVar31 >> 0x20);
            if ((int)uVar31 < 0) {
              uVar30 = ~uVar31;
            }
            uVar31 = uVar22 & ~((int)uVar22 >> 0x20);
            if ((int)uVar22 < 0) {
              uVar31 = ~uVar22;
            }
            if ((int)uVar28 < (int)uVar30) {
              uVar28 = uVar30;
            }
            if ((int)uVar31 <= (int)local_4c) {
              uVar31 = local_4c;
            }
            uVar22 = uVar24 & ~((int)uVar24 >> 0x20);
            if ((int)uVar24 < 0) {
              uVar22 = ~uVar24;
            }
            if ((int)uVar31 < (int)uVar22) {
              uVar31 = uVar22;
            }
            uVar22 = uVar9 & ~((int)uVar9 >> 0x20);
            if ((int)uVar9 < 0) {
              uVar22 = ~uVar9;
            }
            if ((int)uVar31 < (int)uVar22) {
              uVar31 = uVar22;
            }
            if ((int)uVar28 < (int)uVar18) {
              uVar28 = uVar18;
            }
            uVar18 = uVar23 & ~((int)uVar23 >> 0x20);
            if ((int)uVar23 < 0) {
              uVar18 = ~uVar23;
            }
            uVar9 = uVar10 & ~((int)uVar10 >> 0x20);
            if ((int)uVar10 < 0) {
              uVar9 = ~uVar10;
            }
            if ((int)uVar28 < (int)uVar18) {
              uVar28 = uVar18;
            }
            local_4c = uVar31;
            if ((int)uVar31 < (int)uVar9) {
              local_4c = uVar9;
            }
          } while (iVar21 != iVar15);
        }
      }
LAB_00034788:
      uVar18 = ARM::VIRTUALREGISTER_GetRegM('\0',0xfc);
      if (uVar18 < (uVar28 & 0x7fff) >> 7) {
        ARM::VIRTUALREGISTER_SetRegM('\0',0xfc,(uchar)((uVar28 << 0x11) >> 0x18));
      }
      uVar18 = ARM::VIRTUALREGISTER_GetRegM('\0',0xfd);
      if (uVar18 < (local_4c & 0x7fff) >> 7) {
        ARM::VIRTUALREGISTER_SetRegM('\0',0xfd,(uchar)((local_4c << 0x11) >> 0x18));
      }
      if (uVar16 != 0) {
        uVar9 = 2;
        uVar18 = (local_54 - 2 & 0xf) >> 1;
        *param_1 = (short)**(undefined4 **)p_Var19;
        *param_2 = (short)**(undefined4 **)(p_Var19 + 4);
        if (local_54 != 2) {
          if (uVar18 != 0) {
            if (uVar18 != 1) {
              if (uVar18 != 2) {
                if (uVar18 != 3) {
                  if (uVar18 != 4) {
                    if (uVar18 != 5) {
                      if (uVar18 != 6) {
                        uVar9 = 4;
                        param_1[1] = (short)*(undefined4 *)(*(int *)p_Var19 + 4);
                        param_2[1] = (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + 4);
                      }
                      *(short *)((int)param_1 + uVar9) =
                           (short)*(undefined4 *)(*(int *)p_Var19 + uVar9 * 2);
                      *(short *)((int)param_2 + uVar9) =
                           (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + uVar9 * 2);
                      uVar9 = uVar9 + 2;
                    }
                    *(short *)((int)param_1 + uVar9) =
                         (short)*(undefined4 *)(*(int *)p_Var19 + uVar9 * 2);
                    *(short *)((int)param_2 + uVar9) =
                         (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + uVar9 * 2);
                    uVar9 = uVar9 + 2;
                  }
                  *(short *)((int)param_1 + uVar9) =
                       (short)*(undefined4 *)(*(int *)p_Var19 + uVar9 * 2);
                  *(short *)((int)param_2 + uVar9) =
                       (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + uVar9 * 2);
                  uVar9 = uVar9 + 2;
                }
                *(short *)((int)param_1 + uVar9) =
                     (short)*(undefined4 *)(*(int *)p_Var19 + uVar9 * 2);
                *(short *)((int)param_2 + uVar9) =
                     (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + uVar9 * 2);
                uVar9 = uVar9 + 2;
              }
              *(short *)((int)param_1 + uVar9) = (short)*(undefined4 *)(*(int *)p_Var19 + uVar9 * 2)
              ;
              *(short *)((int)param_2 + uVar9) =
                   (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + uVar9 * 2);
              uVar9 = uVar9 + 2;
            }
            *(short *)((int)param_1 + uVar9) = (short)*(undefined4 *)(*(int *)p_Var19 + uVar9 * 2);
            *(short *)((int)param_2 + uVar9) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + uVar9 * 2);
            uVar9 = uVar9 + 2;
            if (uVar9 == local_54) goto LAB_0003496c;
          }
          do {
            iVar26 = uVar9 + 2;
            iVar25 = uVar9 + 4;
            iVar15 = uVar9 + 6;
            iVar21 = uVar9 + 8;
            *(short *)((int)param_1 + uVar9) = (short)*(undefined4 *)(*(int *)p_Var19 + uVar9 * 2);
            *(short *)((int)param_2 + uVar9) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + uVar9 * 2);
            *(short *)((int)param_1 + iVar26) = (short)*(undefined4 *)(*(int *)p_Var19 + iVar26 * 2)
            ;
            *(short *)((int)param_2 + iVar26) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + iVar26 * 2);
            iVar27 = uVar9 + 10;
            *(short *)((int)param_1 + iVar25) = (short)*(undefined4 *)(*(int *)p_Var19 + iVar25 * 2)
            ;
            *(short *)((int)param_2 + iVar25) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + iVar25 * 2);
            iVar26 = uVar9 + 0xc;
            iVar25 = uVar9 + 0xe;
            uVar9 = uVar9 + 0x10;
            *(short *)((int)param_1 + iVar15) = (short)*(undefined4 *)(*(int *)p_Var19 + iVar15 * 2)
            ;
            *(short *)((int)param_2 + iVar15) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + iVar15 * 2);
            *(short *)((int)param_1 + iVar21) = (short)*(undefined4 *)(*(int *)p_Var19 + iVar21 * 2)
            ;
            *(short *)((int)param_2 + iVar21) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + iVar21 * 2);
            *(short *)((int)param_1 + iVar27) = (short)*(undefined4 *)(*(int *)p_Var19 + iVar27 * 2)
            ;
            *(short *)((int)param_2 + iVar27) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + iVar27 * 2);
            *(short *)((int)param_1 + iVar26) = (short)*(undefined4 *)(*(int *)p_Var19 + iVar26 * 2)
            ;
            *(short *)((int)param_2 + iVar26) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + iVar26 * 2);
            *(short *)((int)param_1 + iVar25) = (short)*(undefined4 *)(*(int *)p_Var19 + iVar25 * 2)
            ;
            *(short *)((int)param_2 + iVar25) =
                 (short)*(undefined4 *)(*(int *)(p_Var19 + 4) + iVar25 * 2);
          } while (uVar9 != local_54);
        }
      }
LAB_0003496c:
      iVar25 = DAT_00034bcc;
      iVar15 = DAT_00034bc8;
      iVar21 = DAT_00034bc4;
      local_44 = local_44 - uVar16;
      param_1 = (undefined2 *)((int)param_1 + local_54);
      param_2 = (undefined2 *)((int)param_2 + local_54);
      uVar18 = *(uint *)(DAT_00034bc0 + 0x3499a);
      bVar7 = *(byte *)(DAT_00034bc0 + 0x34977);
      uVar9 = *(int *)(DAT_00034bc0 + 0x34996) + uVar16;
      *(uint *)(DAT_00034bc0 + 0x34996) = uVar9;
LAB_0003499e:
      if (uVar18 <= uVar9) {
        do {
          uVar9 = uVar9 - uVar18;
          *(uint *)(iVar15 + 0x349b0) = uVar9;
          *(int *)(iVar15 + 0x349b8) = 1 - *(int *)(iVar15 + 0x349b8);
          if ((bVar7 & 8) == 0) {
            iVar26 = ARM::VIRTUALREGISTER_GetRegM('\0',0x88);
            if (-1 < iVar26 << 0x18) goto code_r0x00034ac2;
            bVar7 = *(byte *)(iVar15 + 0x34991);
            if ((bVar7 & 8) == 0) {
              iVar26 = ARM::VIRTUALREGISTER_GetRegM(bVar7 & 8,0x88);
              uVar9 = *(uint *)(iVar15 + 0x349b0);
              uVar18 = *(uint *)(iVar15 + 0x349b4);
              bVar7 = *(byte *)(iVar15 + 0x34991);
            }
            else {
              uVar9 = *(uint *)(iVar15 + 0x349b0);
              iVar26 = 0xff;
              uVar18 = *(uint *)(iVar15 + 0x349b4);
            }
          }
          else {
            iVar26 = 0xff;
          }
          if ((iVar26 >> (uint)*(byte *)(iVar25 + 0x349c2)) << 0x1f < 0) {
            cVar29 = '\0';
          }
          else {
            cVar29 = *(byte *)(iVar25 + 0x349c2) + 1;
          }
          *(char *)(iVar21 + 0x349b6) = cVar29;
          if (uVar9 < uVar18) break;
        } while( true );
      }
      iVar21 = DAT_00034bd0;
      uVar18 = *(uint *)(DAT_00034bd0 + 0x34a18);
      uVar16 = *(int *)(DAT_00034bd0 + 0x34a14) + uVar16;
      *(uint *)(DAT_00034bd0 + 0x34a14) = uVar16;
      iVar15 = DAT_00034bd4;
      if (uVar18 <= uVar16) {
        iVar21 = *(int *)(iVar21 + 0x34a1c);
        do {
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
          if (uVar16 < uVar18) break;
          uVar16 = uVar16 - uVar18;
          iVar21 = 1 - iVar21;
        } while (uVar18 <= uVar16);
        *(uint *)(DAT_00034bd4 + 0x34aca) = uVar16;
        *(int *)(iVar15 + 0x34ad2) = iVar21;
      }
      if ((int)((uint)bVar7 << 0x18) < 0) {
        iVar21 = ARM::SIrqFifo_GetStatus();
        if (iVar21 << 0x1f < 0) {
          uVar8 = *(ushort *)(DAT_00034be0 + 0x34b30) & 0xffef;
        }
        else {
          uVar8 = *(ushort *)(DAT_00034be8 + 0x34b70) | 0x10;
        }
        uVar1 = *(ushort *)(iVar6 + 0x3436c);
        uVar2 = *(ushort *)(DAT_00034be4 + 0x34b42);
        *(ushort *)(iVar6 + 0x34332) = uVar8;
        LeaveCriticalSection(pcVar12);
        if (((uVar8 & uVar2 & uVar1) != 0) && (*(code **)(iVar6 + 0x34370) != (code *)0x0)) {
          (**(code **)(iVar6 + 0x34370))();
        }
      }
      else {
        LeaveCriticalSection(pcVar20);
      }
      bVar4 = false;
    }
  }
  return;
code_r0x00034ac2:
  uVar9 = *(uint *)(iVar15 + 0x349b0);
  uVar18 = *(uint *)(iVar15 + 0x349b4);
  bVar7 = *(byte *)(iVar15 + 0x34991);
  goto LAB_0003499e;
}

