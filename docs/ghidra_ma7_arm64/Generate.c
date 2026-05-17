/* Generate @ 0014c810 3852B */


/* ARM::CDinSynth::Generate(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CDinSynth::Generate(CDinSynth *this,uint param_1,_genbuf *param_2)

{
  CDinSynth *pCVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  CDinSynth CVar13;
  uint uVar14;
  uint uVar15;
  CDinSynth *pCVar16;
  undefined *puVar17;
  bool bVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  int iVar36;
  uint uVar37;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  uVar34 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == 0) {
LAB_0014ca9c:
    if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0014c870:
  if (param_1 < 0x41) {
    uVar37 = 0;
  }
  else {
    uVar37 = param_1 - 0x40;
    param_1 = 0x40;
  }
  uVar15 = param_1 - 1;
  uVar35 = (ulong)uVar15;
  lVar4 = uVar35 + 1;
  iVar36 = 0;
  iVar33 = (int)uVar34;
  pCVar16 = this + 0xb9;
  iVar8 = *(int *)(this + 0x24);
  puVar17 = PTR_gChEi_00567400;
  iVar7 = local_28;
  iVar10 = local_24;
  do {
    local_24 = iVar8;
    PTR_gChEi_00567400 = puVar17;
    if ((local_24 == 1) && (local_28 = *(int *)(pCVar16 + -0xa9), local_28 == 0)) {
      local_30 = *(undefined4 *)(pCVar16 + -0x99);
      local_20[0] = *(undefined4 *)(pCVar16 + -0xa1);
      lVar30 = (long)(iVar36 * 2 + 9) * 0x14;
      local_c = *(undefined4 *)(pCVar16 + -0x9d);
      local_2c = *(undefined4 *)(puVar17 + lVar30 + 4);
      local_18 = *(undefined4 *)(puVar17 + lVar30 + 8);
      local_14 = local_24;
      local_10 = local_24;
      CVolIP::Generate(*(CVolIP **)(pCVar16 + -0x11),(_ipvol *)&local_30,&DAT_00599990,param_1);
      CPanIP::Generate(*(CPanIP **)(pCVar16 + -9),(_ip_panpot *)local_20,&DAT_00599a90,&DAT_00599b90
                       ,param_1);
      lVar21 = 0;
      uVar6 = *(uint *)(pCVar16 + -0x29);
      bVar12 = puVar17[lVar30 + 1];
      iVar7 = *(int *)(pCVar16 + -0x25);
      iVar8 = *(int *)(pCVar16 + -0x21);
      uVar24 = *(uint *)(pCVar16 + -0x31);
      uVar9 = *(uint *)(pCVar16 + 0x2f);
      lVar31 = *(long *)(pCVar16 + 0x1f);
      lVar29 = *(long *)(pCVar16 + 0x27);
      iVar10 = *(int *)(pCVar16 + -0x35);
      pCVar16[-1] = (CDinSynth)(bVar12 & 0xc0 | puVar17[lVar30] << 6);
      *pCVar16 = (CDinSynth)(bVar12 & 3);
      do {
        uVar14 = uVar24 >> 0x10;
        uVar3 = uVar14 - uVar9;
        if (uVar14 < uVar9) {
          uVar3 = uVar14;
        }
        uVar14 = uVar24 & 0xffff;
        iVar19 = (int)*(short *)(lVar29 + (ulong)uVar3 * 2);
        iVar23 = (int)*(short *)(lVar31 + (ulong)uVar3 * 2);
        if (uVar14 == 0) {
          iVar25 = iVar19;
          if (*(int *)(pCVar16 + -0xa9) != 0) {
            iVar25 = iVar23;
          }
        }
        else {
          uVar3 = uVar3 + 1;
          uVar5 = uVar3 - uVar9;
          if (uVar3 < uVar9) {
            uVar5 = uVar3;
          }
          iVar23 = iVar23 + (int)((long)(*(short *)(lVar31 + (ulong)uVar5 * 2) - iVar23) *
                                  (ulong)uVar14 >> 0x10);
          iVar25 = iVar23;
          if (*(int *)(pCVar16 + -0xa9) == 0) {
            iVar25 = iVar19 + (int)((ulong)uVar14 *
                                    (long)(*(short *)(lVar29 + (ulong)uVar5 * 2) - iVar19) >> 0x10);
          }
        }
        uVar24 = uVar24 + iVar10;
        *(uint *)(pCVar16 + -0x31) = uVar24;
        iVar11 = *(int *)((long)&DAT_00599990 + lVar21);
        iVar19 = iVar11 * iVar25 >> 0xf;
        iVar23 = iVar11 * iVar23 >> 0xf;
        *(int *)((long)&DAT_00599d90 + lVar21) = iVar11 * iVar23 >> 0xf;
        *(int *)((long)&DAT_00599c90 + lVar21) = iVar23 + iVar19 >> 1;
        *(int *)((long)&DAT_00599e90 + lVar21) = iVar11 * iVar19 >> 0xf;
        lVar21 = lVar21 + 4;
      } while (lVar21 != lVar4 * 4);
      if (uVar6 != 0) {
        CVar13 = pCVar16[-1];
        if (CVar13 == (CDinSynth)0x40) {
          lVar21 = uVar34 * 4;
          lVar30 = *(long *)(param_2 + 0x58);
          lVar29 = *(long *)(param_2 + 0x60);
          uVar24 = uVar6 * DAT_00599b90;
          *(int *)(lVar30 + lVar21) =
               *(int *)(lVar30 + lVar21) +
               (int)((long)((long)DAT_00599d90 * (ulong)(uVar6 * DAT_00599a90 >> 0xf)) >> 0xf);
          *(int *)(lVar29 + lVar21) =
               *(int *)(lVar29 + lVar21) +
               (int)((long)((long)DAT_00599e90 * (ulong)(uVar24 >> 0xf)) >> 0xf);
          if (lVar4 != 1) {
            lVar21 = 1;
            if ((uVar15 & 1) != 0) {
              lVar21 = (ulong)(iVar33 + 1) * 4;
              uVar24 = uVar6 * DAT_00599b94;
              *(int *)(lVar30 + lVar21) =
                   *(int *)(lVar30 + lVar21) +
                   (int)((long)((long)DAT_00599d94 * (ulong)(uVar6 * DAT_00599a94 >> 0xf)) >> 0xf);
              *(int *)(lVar29 + lVar21) =
                   *(int *)(lVar29 + lVar21) +
                   (int)((long)((long)DAT_00599e94 * (ulong)(uVar24 >> 0xf)) >> 0xf);
              lVar21 = 2;
              if (lVar4 == 2) goto switchD_0014cfcc_default;
            }
            do {
              lVar22 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
              lVar31 = lVar21 + 1;
              lVar20 = (ulong)(uint)(iVar33 + (int)lVar31) * 4;
              iVar10 = (&DAT_00599b90)[lVar21];
              lVar27 = lVar21 + 2;
              *(int *)(lVar30 + lVar22) =
                   *(int *)(lVar30 + lVar22) +
                   (int)((long)((long)(&DAT_00599d90)[lVar21] *
                               (ulong)(uVar6 * (&DAT_00599a90)[lVar21] >> 0xf)) >> 0xf);
              *(int *)(lVar29 + lVar22) =
                   *(int *)(lVar29 + lVar22) +
                   (int)((long)((long)(&DAT_00599e90)[lVar21] * (ulong)(uVar6 * iVar10 >> 0xf)) >>
                        0xf);
              iVar10 = (&DAT_00599b90)[lVar31];
              *(int *)(lVar30 + lVar20) =
                   *(int *)(lVar30 + lVar20) +
                   (int)((long)((long)(&DAT_00599d90)[lVar31] *
                               (ulong)(uVar6 * (&DAT_00599a90)[lVar31] >> 0xf)) >> 0xf);
              *(int *)(lVar29 + lVar20) =
                   *(int *)(lVar29 + lVar20) +
                   (int)((long)((long)(&DAT_00599e90)[lVar31] * (ulong)(uVar6 * iVar10 >> 0xf)) >>
                        0xf);
              lVar21 = lVar27;
            } while (lVar27 != lVar4);
          }
        }
        else if (CVar13 == (CDinSynth)0x80) {
          switch(*pCVar16) {
          case (CDinSynth)0x0:
            lVar29 = *(long *)(param_2 + 0x28);
            uVar28 = (ulong)uVar6;
            lVar21 = 1;
            *(int *)(lVar29 + uVar34 * 4) =
                 *(int *)(lVar29 + uVar34 * 4) + (int)((long)((long)DAT_00599c90 * uVar28) >> 0xf);
            if (lVar4 != 1) {
              if ((uVar15 & 3) != 0) {
                if ((uVar35 & 3) != 1) {
                  if ((uVar35 & 3) != 2) {
                    lVar30 = (ulong)(iVar33 + 1) * 4;
                    lVar21 = 2;
                    *(int *)(lVar29 + lVar30) =
                         *(int *)(lVar29 + lVar30) +
                         (int)((long)((long)DAT_00599c94 * uVar28) >> 0xf);
                  }
                  lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                  piVar2 = &DAT_00599c90 + lVar21;
                  lVar21 = lVar21 + 1;
                  *(int *)(lVar29 + lVar30) =
                       *(int *)(lVar29 + lVar30) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                }
                lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                piVar2 = &DAT_00599c90 + lVar21;
                lVar21 = lVar21 + 1;
                *(int *)(lVar29 + lVar30) =
                     *(int *)(lVar29 + lVar30) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                if (lVar21 == lVar4) break;
              }
              do {
                lVar32 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                lVar30 = lVar21 + 1;
                lVar31 = lVar21 + 2;
                piVar2 = &DAT_00599c90 + lVar21;
                lVar26 = (ulong)(uint)(iVar33 + (int)lVar30) * 4;
                lVar20 = (ulong)(uint)(iVar33 + (int)lVar31) * 4;
                lVar27 = lVar21 + 3;
                lVar21 = lVar21 + 4;
                lVar22 = (ulong)(uint)(iVar33 + (int)lVar27) * 4;
                *(int *)(lVar29 + lVar32) =
                     *(int *)(lVar29 + lVar32) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar26) =
                     *(int *)(lVar29 + lVar26) +
                     (int)((long)((long)(&DAT_00599c90)[lVar30] * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar20) =
                     *(int *)(lVar29 + lVar20) +
                     (int)((long)((long)(&DAT_00599c90)[lVar31] * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar22) =
                     *(int *)(lVar29 + lVar22) +
                     (int)((long)((long)(&DAT_00599c90)[lVar27] * uVar28) >> 0xf);
              } while (lVar21 != lVar4);
            }
            break;
          case (CDinSynth)0x1:
            lVar29 = *(long *)(param_2 + 0x30);
            uVar28 = (ulong)uVar6;
            lVar21 = 1;
            *(int *)(lVar29 + uVar34 * 4) =
                 *(int *)(lVar29 + uVar34 * 4) + (int)((long)((long)DAT_00599c90 * uVar28) >> 0xf);
            if (lVar4 != 1) {
              if ((uVar15 & 3) != 0) {
                if ((uVar35 & 3) != 1) {
                  if ((uVar35 & 3) != 2) {
                    lVar30 = (ulong)(iVar33 + 1) * 4;
                    lVar21 = 2;
                    *(int *)(lVar29 + lVar30) =
                         *(int *)(lVar29 + lVar30) +
                         (int)((long)((long)DAT_00599c94 * uVar28) >> 0xf);
                  }
                  lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                  piVar2 = &DAT_00599c90 + lVar21;
                  lVar21 = lVar21 + 1;
                  *(int *)(lVar29 + lVar30) =
                       *(int *)(lVar29 + lVar30) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                }
                lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                piVar2 = &DAT_00599c90 + lVar21;
                lVar21 = lVar21 + 1;
                *(int *)(lVar29 + lVar30) =
                     *(int *)(lVar29 + lVar30) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                if (lVar21 == lVar4) break;
              }
              do {
                lVar32 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                lVar30 = lVar21 + 1;
                lVar31 = lVar21 + 2;
                piVar2 = &DAT_00599c90 + lVar21;
                lVar22 = (ulong)(uint)(iVar33 + (int)lVar30) * 4;
                lVar20 = (ulong)(uint)(iVar33 + (int)lVar31) * 4;
                lVar27 = lVar21 + 3;
                lVar21 = lVar21 + 4;
                lVar26 = (ulong)(uint)(iVar33 + (int)lVar27) * 4;
                *(int *)(lVar29 + lVar32) =
                     *(int *)(lVar29 + lVar32) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar22) =
                     *(int *)(lVar29 + lVar22) +
                     (int)((long)((long)(&DAT_00599c90)[lVar30] * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar20) =
                     *(int *)(lVar29 + lVar20) +
                     (int)((long)((long)(&DAT_00599c90)[lVar31] * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar26) =
                     *(int *)(lVar29 + lVar26) +
                     (int)((long)((long)(&DAT_00599c90)[lVar27] * uVar28) >> 0xf);
              } while (lVar21 != lVar4);
            }
            break;
          case (CDinSynth)0x2:
            lVar29 = *(long *)(param_2 + 0x38);
            uVar28 = (ulong)uVar6;
            lVar21 = 1;
            *(int *)(lVar29 + uVar34 * 4) =
                 *(int *)(lVar29 + uVar34 * 4) + (int)((long)((long)DAT_00599c90 * uVar28) >> 0xf);
            if (lVar4 != 1) {
              if ((uVar15 & 3) != 0) {
                if ((uVar35 & 3) != 1) {
                  if ((uVar35 & 3) != 2) {
                    lVar30 = (ulong)(iVar33 + 1) * 4;
                    lVar21 = 2;
                    *(int *)(lVar29 + lVar30) =
                         *(int *)(lVar29 + lVar30) +
                         (int)((long)((long)DAT_00599c94 * uVar28) >> 0xf);
                  }
                  lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                  piVar2 = &DAT_00599c90 + lVar21;
                  lVar21 = lVar21 + 1;
                  *(int *)(lVar29 + lVar30) =
                       *(int *)(lVar29 + lVar30) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                }
                lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                piVar2 = &DAT_00599c90 + lVar21;
                lVar21 = lVar21 + 1;
                *(int *)(lVar29 + lVar30) =
                     *(int *)(lVar29 + lVar30) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                if (lVar21 == lVar4) break;
              }
              do {
                lVar20 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                lVar30 = lVar21 + 1;
                lVar31 = lVar21 + 2;
                piVar2 = &DAT_00599c90 + lVar21;
                lVar26 = (ulong)(uint)(iVar33 + (int)lVar30) * 4;
                lVar32 = (ulong)(uint)(iVar33 + (int)lVar31) * 4;
                lVar27 = lVar21 + 3;
                lVar21 = lVar21 + 4;
                lVar22 = (ulong)(uint)(iVar33 + (int)lVar27) * 4;
                *(int *)(lVar29 + lVar20) =
                     *(int *)(lVar29 + lVar20) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar26) =
                     *(int *)(lVar29 + lVar26) +
                     (int)((long)((long)(&DAT_00599c90)[lVar30] * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar32) =
                     *(int *)(lVar29 + lVar32) +
                     (int)((long)((long)(&DAT_00599c90)[lVar31] * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar22) =
                     *(int *)(lVar29 + lVar22) +
                     (int)((long)((long)(&DAT_00599c90)[lVar27] * uVar28) >> 0xf);
              } while (lVar21 != lVar4);
            }
            break;
          case (CDinSynth)0x3:
            lVar29 = *(long *)(param_2 + 0x40);
            uVar28 = (ulong)uVar6;
            lVar21 = 1;
            *(int *)(lVar29 + uVar34 * 4) =
                 *(int *)(lVar29 + uVar34 * 4) + (int)((long)((long)DAT_00599c90 * uVar28) >> 0xf);
            if (lVar4 != 1) {
              if ((uVar15 & 3) != 0) {
                if ((uVar35 & 3) != 1) {
                  if ((uVar35 & 3) != 2) {
                    lVar30 = (ulong)(iVar33 + 1) * 4;
                    lVar21 = 2;
                    *(int *)(lVar29 + lVar30) =
                         *(int *)(lVar29 + lVar30) +
                         (int)((long)((long)DAT_00599c94 * uVar28) >> 0xf);
                  }
                  lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                  piVar2 = &DAT_00599c90 + lVar21;
                  lVar21 = lVar21 + 1;
                  *(int *)(lVar29 + lVar30) =
                       *(int *)(lVar29 + lVar30) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                }
                lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                piVar2 = &DAT_00599c90 + lVar21;
                lVar21 = lVar21 + 1;
                *(int *)(lVar29 + lVar30) =
                     *(int *)(lVar29 + lVar30) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                if (lVar21 == lVar4) break;
              }
              do {
                lVar32 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
                lVar30 = lVar21 + 1;
                lVar31 = lVar21 + 2;
                piVar2 = &DAT_00599c90 + lVar21;
                lVar26 = (ulong)(uint)(iVar33 + (int)lVar30) * 4;
                lVar20 = (ulong)(uint)(iVar33 + (int)lVar31) * 4;
                lVar27 = lVar21 + 3;
                lVar21 = lVar21 + 4;
                lVar22 = (ulong)(uint)(iVar33 + (int)lVar27) * 4;
                *(int *)(lVar29 + lVar32) =
                     *(int *)(lVar29 + lVar32) + (int)((long)((long)*piVar2 * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar26) =
                     *(int *)(lVar29 + lVar26) +
                     (int)((long)((long)(&DAT_00599c90)[lVar30] * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar20) =
                     *(int *)(lVar29 + lVar20) +
                     (int)((long)((long)(&DAT_00599c90)[lVar31] * uVar28) >> 0xf);
                *(int *)(lVar29 + lVar22) =
                     *(int *)(lVar29 + lVar22) +
                     (int)((long)((long)(&DAT_00599c90)[lVar27] * uVar28) >> 0xf);
              } while (lVar21 != lVar4);
            }
          }
        }
        else if (CVar13 == (CDinSynth)0x0) {
          lVar21 = uVar34 * 4;
          lVar30 = *(long *)param_2;
          lVar29 = *(long *)(param_2 + 8);
          uVar24 = uVar6 * DAT_00599b90;
          *(int *)(lVar30 + lVar21) =
               *(int *)(lVar30 + lVar21) +
               (int)((long)((long)DAT_00599d90 * (ulong)(uVar6 * DAT_00599a90 >> 0xf)) >> 0xf);
          *(int *)(lVar29 + lVar21) =
               *(int *)(lVar29 + lVar21) +
               (int)((long)((long)DAT_00599e90 * (ulong)(uVar24 >> 0xf)) >> 0xf);
          if (lVar4 != 1) {
            lVar21 = 1;
            if ((uVar15 & 1) != 0) {
              lVar21 = (ulong)(iVar33 + 1) * 4;
              uVar24 = uVar6 * DAT_00599b94;
              *(int *)(lVar30 + lVar21) =
                   *(int *)(lVar30 + lVar21) +
                   (int)((long)((long)DAT_00599d94 * (ulong)(uVar6 * DAT_00599a94 >> 0xf)) >> 0xf);
              *(int *)(lVar29 + lVar21) =
                   *(int *)(lVar29 + lVar21) +
                   (int)((long)((long)DAT_00599e94 * (ulong)(uVar24 >> 0xf)) >> 0xf);
              lVar21 = 2;
              if (lVar4 == 2) goto switchD_0014cfcc_default;
            }
            do {
              lVar31 = lVar21 + 1;
              lVar22 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
              lVar20 = (ulong)(uint)(iVar33 + (int)lVar31) * 4;
              iVar10 = (&DAT_00599b90)[lVar21];
              lVar27 = lVar21 + 2;
              *(int *)(lVar30 + lVar22) =
                   *(int *)(lVar30 + lVar22) +
                   (int)((long)((long)(&DAT_00599d90)[lVar21] *
                               (ulong)(uVar6 * (&DAT_00599a90)[lVar21] >> 0xf)) >> 0xf);
              *(int *)(lVar29 + lVar22) =
                   *(int *)(lVar29 + lVar22) +
                   (int)((long)((long)(&DAT_00599e90)[lVar21] * (ulong)(uVar6 * iVar10 >> 0xf)) >>
                        0xf);
              iVar10 = (&DAT_00599b90)[lVar31];
              *(int *)(lVar30 + lVar20) =
                   *(int *)(lVar30 + lVar20) +
                   (int)((long)((long)(&DAT_00599d90)[lVar31] *
                               (ulong)(uVar6 * (&DAT_00599a90)[lVar31] >> 0xf)) >> 0xf);
              *(int *)(lVar29 + lVar20) =
                   *(int *)(lVar29 + lVar20) +
                   (int)((long)((long)(&DAT_00599e90)[lVar31] * (ulong)(uVar6 * iVar10 >> 0xf)) >>
                        0xf);
              lVar21 = lVar27;
            } while (lVar27 != lVar4);
          }
        }
      }
switchD_0014cfcc_default:
      if (iVar7 != 0) {
        lVar29 = *(long *)(param_2 + 0x10);
        lVar21 = 1;
        *(int *)(lVar29 + uVar34 * 4) =
             *(int *)(lVar29 + uVar34 * 4) + (int)((long)DAT_00599c90 * (long)iVar7 >> 0xf);
        if (lVar4 != 1) {
          if ((uVar15 & 3) != 0) {
            if ((uVar35 & 3) != 1) {
              if ((uVar35 & 3) != 2) {
                lVar30 = (ulong)(iVar33 + 1) * 4;
                lVar21 = 2;
                *(int *)(lVar29 + lVar30) =
                     *(int *)(lVar29 + lVar30) + (int)((long)DAT_00599c94 * (long)iVar7 >> 0xf);
              }
              lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
              piVar2 = &DAT_00599c90 + lVar21;
              lVar21 = lVar21 + 1;
              *(int *)(lVar29 + lVar30) =
                   *(int *)(lVar29 + lVar30) + (int)((long)*piVar2 * (long)iVar7 >> 0xf);
            }
            lVar30 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
            piVar2 = &DAT_00599c90 + lVar21;
            lVar21 = lVar21 + 1;
            *(int *)(lVar29 + lVar30) =
                 *(int *)(lVar29 + lVar30) + (int)((long)*piVar2 * (long)iVar7 >> 0xf);
            if (lVar21 == lVar4) goto LAB_0014cc68;
          }
          do {
            lVar32 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
            lVar30 = lVar21 + 1;
            lVar31 = lVar21 + 2;
            piVar2 = &DAT_00599c90 + lVar21;
            lVar22 = (ulong)(uint)(iVar33 + (int)lVar30) * 4;
            lVar27 = lVar21 + 3;
            lVar26 = (ulong)(uint)(iVar33 + (int)lVar31) * 4;
            lVar21 = lVar21 + 4;
            lVar20 = (ulong)(uint)(iVar33 + (int)lVar27) * 4;
            *(int *)(lVar29 + lVar32) =
                 *(int *)(lVar29 + lVar32) + (int)((long)*piVar2 * (long)iVar7 >> 0xf);
            *(int *)(lVar29 + lVar22) =
                 *(int *)(lVar29 + lVar22) +
                 (int)((long)(&DAT_00599c90)[lVar30] * (long)iVar7 >> 0xf);
            *(int *)(lVar29 + lVar26) =
                 *(int *)(lVar29 + lVar26) +
                 (int)((long)(&DAT_00599c90)[lVar31] * (long)iVar7 >> 0xf);
            *(int *)(lVar29 + lVar20) =
                 *(int *)(lVar29 + lVar20) +
                 (int)((long)(&DAT_00599c90)[lVar27] * (long)iVar7 >> 0xf);
          } while (lVar21 != lVar4);
        }
      }
LAB_0014cc68:
      iVar7 = local_28;
      iVar10 = local_24;
      if (iVar8 != 0) {
        lVar21 = uVar34 * 4;
        lVar30 = *(long *)(param_2 + 0x18);
        DAT_00599d90 = iVar8 * DAT_00599d90 >> 0xf;
        lVar29 = *(long *)(param_2 + 0x20);
        iVar23 = iVar8 * DAT_00599e90 >> 0xf;
        DAT_00599e90 = iVar23;
        *(int *)(lVar30 + lVar21) =
             *(int *)(lVar30 + lVar21) + (int)((long)DAT_00599d90 * (long)DAT_00599a90 >> 0xf);
        *(int *)(lVar29 + lVar21) =
             *(int *)(lVar29 + lVar21) + (int)((long)iVar23 * (long)DAT_00599b90 >> 0xf);
        if (lVar4 != 1) {
          lVar21 = 1;
          if ((uVar15 & 1) == 0) goto LAB_0014cd40;
          lVar27 = (ulong)(iVar33 + 1) * 4;
          lVar31 = 2;
          DAT_00599d94 = iVar8 * DAT_00599d94 >> 0xf;
          iVar23 = iVar8 * DAT_00599e94 >> 0xf;
          DAT_00599e94 = iVar23;
          *(int *)(lVar30 + lVar27) =
               *(int *)(lVar30 + lVar27) + (int)((long)DAT_00599d94 * (long)DAT_00599a94 >> 0xf);
          bVar18 = lVar4 == 2;
          iVar19 = DAT_00599b94;
          while (*(int *)(lVar29 + lVar27) =
                      *(int *)(lVar29 + lVar27) + (int)((long)iVar23 * (long)iVar19 >> 0xf),
                lVar21 = lVar31, !bVar18) {
LAB_0014cd40:
            lVar20 = lVar21 + 1;
            lVar22 = (ulong)(uint)(iVar33 + (int)lVar21) * 4;
            lVar27 = (ulong)(uint)(iVar33 + (int)lVar20) * 4;
            iVar23 = iVar8 * (&DAT_00599d90)[lVar21] >> 0xf;
            (&DAT_00599d90)[lVar21] = iVar23;
            iVar19 = iVar8 * (&DAT_00599e90)[lVar21] >> 0xf;
            (&DAT_00599e90)[lVar21] = iVar19;
            lVar31 = lVar21 + 2;
            *(int *)(lVar30 + lVar22) =
                 *(int *)(lVar30 + lVar22) +
                 (int)((long)iVar23 * (long)(&DAT_00599a90)[lVar21] >> 0xf);
            *(int *)(lVar29 + lVar22) =
                 *(int *)(lVar29 + lVar22) +
                 (int)((long)iVar19 * (long)(&DAT_00599b90)[lVar21] >> 0xf);
            iVar19 = iVar8 * (&DAT_00599d90)[lVar20] >> 0xf;
            (&DAT_00599d90)[lVar20] = iVar19;
            iVar23 = iVar8 * (&DAT_00599e90)[lVar20] >> 0xf;
            (&DAT_00599e90)[lVar20] = iVar23;
            *(int *)(lVar30 + lVar27) =
                 *(int *)(lVar30 + lVar27) +
                 (int)((long)iVar19 * (long)(&DAT_00599a90)[lVar20] >> 0xf);
            iVar19 = (&DAT_00599b90)[lVar20];
            bVar18 = lVar31 == lVar4;
          }
        }
      }
    }
    local_24 = iVar10;
    local_28 = iVar7;
    if (iVar36 != 0) break;
    pCVar1 = pCVar16 + 0x53;
    iVar36 = 1;
    pCVar16 = pCVar16 + 0xe8;
    iVar8 = *(int *)pCVar1;
    puVar17 = PTR_gChEi_00567400;
    iVar7 = local_28;
    iVar10 = local_24;
  } while( true );
  uVar34 = (ulong)(iVar33 + param_1);
  param_1 = uVar37;
  if (uVar37 == 0) goto LAB_0014ca9c;
  goto LAB_0014c870;
}

