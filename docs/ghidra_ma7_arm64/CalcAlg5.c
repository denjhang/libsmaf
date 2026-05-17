/* CalcAlg5 @ 00153e70 2540B */


/* ARM::CFmSynth::CalcAlg5(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg5
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  _tagFMSLOTINFO *p_Var1;
  _tagFMSLOTINFO *p_Var2;
  _tagFMSLOTINFO *p_Var3;
  _tagFMSLOTINFO *p_Var4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  p_Var1 = param_1 + 0x18;
  iVar10 = *(int *)(param_1 + 0x238);
  p_Var2 = param_1 + 0x80;
  p_Var3 = param_1 + 0xe8;
  p_Var4 = param_1 + 0x150;
  uVar5 = *(uint *)(param_1 + 0x208);
  uVar7 = (uint)(iVar10 * *(int *)(param_1 + 0x270)) >> 0xf;
  lVar13 = *(long *)(param_1 + 0x268);
  uVar8 = (uint)(iVar10 * *(int *)(param_1 + 0x274)) >> 0xf;
  uVar6 = *(uint *)(param_1 + 0x20c);
  uVar9 = (uint)(iVar10 * *(int *)(param_1 + 0x278)) >> 0xf;
  iVar16 = *(int *)(param_1 + 0x210);
  iVar18 = *(int *)(param_1 + 0x214);
  iVar10 = *(int *)(param_1 + 0x218);
  iVar11 = *(int *)(param_1 + 0x21c);
  if (uVar5 == 0) {
    if (uVar6 == 0) {
      if (param_5 != 0) {
        lVar15 = 0;
        do {
          if (*(code **)(param_1 + 0x38) == (code *)0x0) {
            iVar10 = 0;
          }
          else {
            (**(code **)(param_1 + 0x38))(p_Var1);
            iVar10 = 0;
            if (*(int *)(param_1 + 0x78) != 0) {
              iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf)
                       * (int)*(short *)(*(long *)(param_1 + 0x40) +
                                        (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
          }
          iVar16 = 0;
          if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
            (**(code **)(param_1 + 0xa0))(p_Var2);
            iVar16 = 0;
            if (*(int *)(param_1 + 0xe0) != 0) {
              iVar16 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf)
                       * (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                        (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                          (long)(int)(uint)(byte)param_1[0x92] * 4)
                                                & iVar10 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16)
                                               & 0x3ff) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          }
          if (*(code **)(param_1 + 0x108) == (code *)0x0) {
            iVar10 = 0;
          }
          else {
            (**(code **)(param_1 + 0x108))(p_Var3);
            iVar10 = 0;
            if (*(int *)(param_1 + 0x148) != 0) {
              iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf
                       ) * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                          (ulong)(*(uint *)(param_1 + 0x11c) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
          }
          iVar18 = 0;
          if (*(code **)(param_1 + 0x170) != (code *)0x0) {
            (**(code **)(param_1 + 0x170))(p_Var4);
            iVar18 = 0;
            if (*(int *)(param_1 + 0x1b0) != 0) {
              iVar18 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf
                       ) * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                          (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                            (long)(int)(uint)(byte)param_1[0x162] *
                                                            4) & iVar10 >> 3) +
                                                  (*(uint *)(param_1 + 0x184) >> 0x16) & 0x3ff) * 2)
                       >> 0xf;
            }
            *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
          }
          iVar10 = (iVar16 + iVar18 >> 1) * *(int *)(lVar13 + lVar15 * 4) >> 0xf;
          param_2[lVar15] = (int)(iVar10 * uVar7) >> 0xe;
          param_3[lVar15] = (int)(iVar10 * uVar8) >> 0xe;
          param_4[lVar15] = (int)(iVar10 * uVar9) >> 0xe;
          lVar15 = lVar15 + 1;
        } while (lVar15 != (ulong)(param_5 - 1) + 1);
      }
      iVar11 = 0;
      iVar10 = 0;
      iVar18 = 0;
      iVar16 = 0;
    }
    else if (param_5 == 0) {
      iVar18 = 0;
      iVar16 = 0;
    }
    else {
      lVar15 = 0;
      iVar16 = iVar11;
      do {
        iVar11 = iVar10;
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          iVar10 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(p_Var1);
          iVar10 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0x40) +
                                    (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
        }
        iVar18 = 0;
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          (**(code **)(param_1 + 0xa0))(p_Var2);
          iVar18 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar18 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                      (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                            iVar10 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) &
                                           0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        if (*(code **)(param_1 + 0x108) == (code *)0x0) {
          iVar10 = 0;
        }
        else {
          (**(code **)(param_1 + 0x108))(p_Var3);
          if (*(int *)(param_1 + 0x148) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                      (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                        (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                              (iVar11 + iVar16 >> (uVar6 & 0x1f)) >> 3) +
                                              (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff) * 2) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
        }
        iVar16 = 0;
        if (*(code **)(param_1 + 0x170) != (code *)0x0) {
          (**(code **)(param_1 + 0x170))(p_Var4);
          iVar16 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar16 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                      (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                        (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                              iVar10 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) &
                                             0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar16 = (iVar18 + iVar16 >> 1) * *(int *)(lVar13 + lVar15 * 4) >> 0xf;
        param_2[lVar15] = (int)(iVar16 * uVar7) >> 0xe;
        param_3[lVar15] = (int)(iVar16 * uVar8) >> 0xe;
        param_4[lVar15] = (int)(iVar16 * uVar9) >> 0xe;
        lVar15 = lVar15 + 1;
        iVar16 = iVar11;
      } while (lVar15 != (ulong)(param_5 - 1) + 1);
      iVar18 = 0;
      iVar16 = 0;
    }
  }
  else if (uVar6 == 0) {
    if (param_5 == 0) {
      iVar11 = 0;
      iVar10 = 0;
    }
    else {
      lVar15 = 0;
      iVar10 = iVar18;
      do {
        iVar18 = iVar16;
        iVar16 = 0;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          (**(code **)(param_1 + 0x38))(p_Var1);
          iVar16 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar16 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0x40) +
                                    (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                      (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                            (iVar18 + iVar10 >> (uVar5 & 0x1f)) >> 3) +
                                            (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf
            ;
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
                                            iVar16 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) &
                                           0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        if (*(code **)(param_1 + 0x108) == (code *)0x0) {
          pcVar14 = *(code **)(param_1 + 0x170);
          iVar11 = 0;
          if (pcVar14 != (code *)0x0) goto LAB_0015419c;
LAB_00154340:
          iVar12 = 0;
        }
        else {
          (**(code **)(param_1 + 0x108))(p_Var3);
          iVar11 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                      (ulong)(*(uint *)(param_1 + 0x11c) >> 0x16) * 2) >> 0xf;
          }
          pcVar14 = *(code **)(param_1 + 0x170);
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
          if (pcVar14 == (code *)0x0) goto LAB_00154340;
LAB_0015419c:
          (*pcVar14)(p_Var4);
          iVar12 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar12 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                      (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                        (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                              iVar11 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) &
                                             0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar10 = (iVar10 + iVar12 >> 1) * *(int *)(lVar13 + lVar15 * 4) >> 0xf;
        param_2[lVar15] = (int)(iVar10 * uVar7) >> 0xe;
        param_3[lVar15] = (int)(iVar10 * uVar8) >> 0xe;
        param_4[lVar15] = (int)(iVar10 * uVar9) >> 0xe;
        lVar15 = lVar15 + 1;
        iVar10 = iVar18;
      } while (lVar15 != (ulong)(param_5 - 1) + 1);
      iVar11 = 0;
      iVar10 = 0;
    }
  }
  else if (param_5 != 0) {
    lVar15 = 0;
    iVar12 = iVar18;
    iVar17 = iVar11;
    do {
      iVar11 = iVar10;
      iVar18 = iVar16;
      iVar16 = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(p_Var1);
        iVar16 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar16 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x40) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                          (iVar18 + iVar12 >> (uVar5 & 0x1f)) >> 3) +
                                          (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      iVar12 = 0;
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(p_Var2);
        iVar12 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar12 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                          iVar16 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) & 0x3ff
                                         ) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      if (*(code **)(param_1 + 0x108) == (code *)0x0) {
        iVar10 = 0;
      }
      else {
        (**(code **)(param_1 + 0x108))(p_Var3);
        if (*(int *)(param_1 + 0x148) == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x110) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                          (iVar11 + iVar17 >> (uVar6 & 0x1f)) >> 3) +
                                          (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
      }
      iVar17 = 0;
      if (*(code **)(param_1 + 0x170) != (code *)0x0) {
        (**(code **)(param_1 + 0x170))(p_Var4);
        iVar17 = 0;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          iVar17 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x178) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                          iVar10 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) &
                                         0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar12 = (iVar12 + iVar17 >> 1) * *(int *)(lVar13 + lVar15 * 4) >> 0xf;
      param_2[lVar15] = (int)(iVar12 * uVar7) >> 0xe;
      param_3[lVar15] = (int)(iVar12 * uVar8) >> 0xe;
      param_4[lVar15] = (int)(iVar12 * uVar9) >> 0xe;
      lVar15 = lVar15 + 1;
      iVar12 = iVar18;
      iVar17 = iVar11;
    } while (lVar15 != (ulong)(param_5 - 1) + 1);
  }
  *(ulong *)(param_1 + 0x218) = CONCAT44(iVar11,iVar10);
  *(ulong *)(param_1 + 0x210) = CONCAT44(iVar18,iVar16);
  return;
}

