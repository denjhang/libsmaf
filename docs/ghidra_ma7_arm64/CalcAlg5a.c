/* CalcAlg5a @ 001551b0 2560B */


/* ARM::CFmSynth::CalcAlg5a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg5a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  _tagFMSLOTINFO *p_Var1;
  _tagFMSLOTINFO *p_Var2;
  _tagFMSLOTINFO *p_Var3;
  _tagFMSLOTINFO *p_Var4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  
  p_Var1 = param_1 + 0x18;
  p_Var2 = param_1 + 0x80;
  iVar11 = *(int *)(param_1 + 0x238);
  p_Var3 = param_1 + 0xe8;
  p_Var4 = param_1 + 0x150;
  uVar5 = *(uint *)(param_1 + 0x208);
  lVar13 = *(long *)(param_1 + 0x268);
  uVar6 = *(uint *)(param_1 + 0x20c);
  iVar9 = *(int *)(param_1 + 0x210);
  uVar16 = (ulong)((uint)(iVar11 * *(int *)(param_1 + 0x278)) >> 0xf);
  uVar8 = (ulong)((uint)(iVar11 * *(int *)(param_1 + 0x270)) >> 0xf);
  uVar15 = (ulong)((uint)(iVar11 * *(int *)(param_1 + 0x274)) >> 0xf);
  iVar17 = *(int *)(param_1 + 0x214);
  iVar11 = *(int *)(param_1 + 0x218);
  iVar12 = *(int *)(param_1 + 0x21c);
  if (uVar5 == 0) {
    if (uVar6 == 0) {
      if (param_5 != 0) {
        lVar18 = 0;
        do {
          if (*(code **)(param_1 + 0x38) == (code *)0x0) {
            iVar11 = 0;
          }
          else {
            (**(code **)(param_1 + 0x38))(p_Var1);
            iVar11 = 0;
            if (*(int *)(param_1 + 0x78) != 0) {
              iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf)
                       * (int)*(short *)(*(long *)(param_1 + 0x40) +
                                        (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
          }
          iVar9 = 0;
          if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
            (**(code **)(param_1 + 0xa0))(p_Var2);
            iVar9 = 0;
            if (*(int *)(param_1 + 0xe0) != 0) {
              iVar9 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                      (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                     (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                       (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                             iVar11 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) &
                                            0x3ff) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          }
          if (*(code **)(param_1 + 0x108) == (code *)0x0) {
            iVar11 = 0;
          }
          else {
            (**(code **)(param_1 + 0x108))(p_Var3);
            iVar11 = 0;
            if (*(int *)(param_1 + 0x148) != 0) {
              iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf
                       ) * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                          (ulong)(*(uint *)(param_1 + 0x11c) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
          }
          iVar17 = 0;
          if (*(code **)(param_1 + 0x170) != (code *)0x0) {
            (**(code **)(param_1 + 0x170))(p_Var4);
            iVar17 = 0;
            if (*(int *)(param_1 + 0x1b0) != 0) {
              iVar17 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf
                       ) * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                          (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                            (long)(int)(uint)(byte)param_1[0x162] *
                                                            4) & iVar11 >> 3) +
                                                  (*(uint *)(param_1 + 0x184) >> 0x16) & 0x3ff) * 2)
                       >> 0xf;
            }
            *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
          }
          iVar11 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar9 + iVar17);
          lVar7 = (long)iVar11 * (long)*(int *)(lVar13 + lVar18 * 4) * 0x20000 >> 0x20;
          param_2[lVar18] = (int)((long)(lVar7 * uVar8) >> 0xf);
          param_3[lVar18] = (int)((long)(lVar7 * uVar15) >> 0xf);
          param_4[lVar18] = (int)((long)(lVar7 * uVar16) >> 0xf);
          lVar18 = lVar18 + 1;
        } while (lVar18 != (ulong)(param_5 - 1) + 1);
      }
      iVar12 = 0;
      iVar11 = 0;
      iVar9 = 0;
      iVar17 = 0;
    }
    else if (param_5 == 0) {
      iVar17 = 0;
      iVar9 = 0;
    }
    else {
      lVar18 = 0;
      iVar9 = iVar12;
      do {
        iVar12 = iVar11;
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          iVar11 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(p_Var1);
          iVar11 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0x40) +
                                    (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
        }
        iVar17 = 0;
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          (**(code **)(param_1 + 0xa0))(p_Var2);
          iVar17 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar17 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                      (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                            iVar11 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) &
                                           0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        iVar11 = 0;
        if (*(code **)(param_1 + 0x108) != (code *)0x0) {
          (**(code **)(param_1 + 0x108))(p_Var3);
          iVar11 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                      (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                        (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                              (iVar12 + iVar9 >> (uVar6 & 0x1f)) >> 3) +
                                              (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff) * 2) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
        }
        iVar9 = 0;
        if (*(code **)(param_1 + 0x170) != (code *)0x0) {
          (**(code **)(param_1 + 0x170))(p_Var4);
          iVar9 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar9 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x178) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                           iVar11 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) &
                                          0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar9 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar17 + iVar9);
        lVar7 = (long)iVar9 * (long)*(int *)(lVar13 + lVar18 * 4) * 0x20000 >> 0x20;
        param_2[lVar18] = (int)((long)(uVar8 * lVar7) >> 0xf);
        param_3[lVar18] = (int)((long)(uVar15 * lVar7) >> 0xf);
        param_4[lVar18] = (int)((long)(uVar16 * lVar7) >> 0xf);
        lVar18 = lVar18 + 1;
        iVar9 = iVar12;
      } while (lVar18 != (ulong)(param_5 - 1) + 1);
      iVar17 = 0;
      iVar9 = iVar17;
    }
  }
  else if (uVar6 == 0) {
    if (param_5 == 0) {
      iVar12 = 0;
      iVar11 = 0;
    }
    else {
      lVar18 = 0;
      iVar11 = iVar17;
      do {
        iVar17 = iVar9;
        iVar9 = 0;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          (**(code **)(param_1 + 0x38))(p_Var1);
          iVar9 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar9 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x40) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                           (iVar17 + iVar11 >> (uVar5 & 0x1f)) >> 3) +
                                           (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
        }
        iVar11 = 0;
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          (**(code **)(param_1 + 0xa0))(p_Var2);
          iVar11 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar11 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                      (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                            iVar9 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) &
                                           0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        if (*(code **)(param_1 + 0x108) == (code *)0x0) {
          pcVar14 = *(code **)(param_1 + 0x170);
          iVar12 = 0;
          if (pcVar14 != (code *)0x0) goto LAB_001554f8;
LAB_001556a8:
          iVar10 = 0;
        }
        else {
          (**(code **)(param_1 + 0x108))(p_Var3);
          iVar12 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar12 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                      (ulong)(*(uint *)(param_1 + 0x11c) >> 0x16) * 2) >> 0xf;
          }
          pcVar14 = *(code **)(param_1 + 0x170);
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
          if (pcVar14 == (code *)0x0) goto LAB_001556a8;
LAB_001554f8:
          (*pcVar14)(p_Var4);
          iVar10 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                      (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                        (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                              iVar12 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) &
                                             0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar11 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar11 + iVar10);
        lVar7 = (long)iVar11 * (long)*(int *)(lVar13 + lVar18 * 4) * 0x20000 >> 0x20;
        param_2[lVar18] = (int)((long)(lVar7 * uVar8) >> 0xf);
        param_3[lVar18] = (int)((long)(lVar7 * uVar15) >> 0xf);
        param_4[lVar18] = (int)((long)(uVar16 * lVar7) >> 0xf);
        lVar18 = lVar18 + 1;
        iVar11 = iVar17;
      } while (lVar18 != (ulong)(param_5 - 1) + 1);
      iVar12 = 0;
      iVar11 = 0;
    }
  }
  else if (param_5 != 0) {
    lVar18 = 0;
    iVar10 = iVar17;
    iVar19 = iVar12;
    do {
      iVar17 = iVar9;
      iVar12 = iVar11;
      iVar9 = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(p_Var1);
        iVar9 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar9 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x40) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                         (iVar17 + iVar10 >> (uVar5 & 0x1f)) >> 3) +
                                         (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      iVar10 = 0;
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(p_Var2);
        iVar10 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar10 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                          iVar9 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) & 0x3ff)
                                  * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      iVar11 = 0;
      if (*(code **)(param_1 + 0x108) != (code *)0x0) {
        (**(code **)(param_1 + 0x108))(p_Var3);
        iVar11 = 0;
        if (*(int *)(param_1 + 0x148) != 0) {
          iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x110) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                          (iVar12 + iVar19 >> (uVar6 & 0x1f)) >> 3) +
                                          (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
      }
      iVar19 = 0;
      if (*(code **)(param_1 + 0x170) != (code *)0x0) {
        (**(code **)(param_1 + 0x170))(p_Var4);
        iVar19 = 0;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          iVar19 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x178) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                          iVar11 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) &
                                         0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar10 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar10 + iVar19);
      lVar7 = (long)iVar10 * (long)*(int *)(lVar13 + lVar18 * 4) * 0x20000 >> 0x20;
      param_2[lVar18] = (int)((long)(uVar8 * lVar7) >> 0xf);
      param_3[lVar18] = (int)((long)(uVar15 * lVar7) >> 0xf);
      param_4[lVar18] = (int)((long)(uVar16 * lVar7) >> 0xf);
      lVar18 = lVar18 + 1;
      iVar10 = iVar17;
      iVar19 = iVar12;
    } while (lVar18 != (ulong)(param_5 - 1) + 1);
  }
  *(ulong *)(param_1 + 0x218) = CONCAT44(iVar12,iVar11);
  *(ulong *)(param_1 + 0x210) = CONCAT44(iVar17,iVar9);
  return;
}

