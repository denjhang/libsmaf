/* CalcAlg2 @ 00153568 2312B */


/* ARM::CFmSynth::CalcAlg2(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg2
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
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  
  p_Var1 = param_1 + 0x18;
  p_Var2 = param_1 + 0x80;
  iVar12 = *(int *)(param_1 + 0x238);
  p_Var3 = param_1 + 0xe8;
  p_Var4 = param_1 + 0x150;
  uVar5 = *(uint *)(param_1 + 0x208);
  uVar6 = *(uint *)(param_1 + 0x20c);
  uVar7 = (uint)(iVar12 * *(int *)(param_1 + 0x278)) >> 0xf;
  iVar13 = *(int *)(param_1 + 0x210);
  uVar8 = (uint)(iVar12 * *(int *)(param_1 + 0x270)) >> 0xf;
  uVar9 = (uint)(iVar12 * *(int *)(param_1 + 0x274)) >> 0xf;
  lVar17 = *(long *)(param_1 + 0x268);
  iVar14 = *(int *)(param_1 + 0x214);
  iVar12 = *(int *)(param_1 + 0x218);
  iVar16 = *(int *)(param_1 + 0x21c);
  if (uVar5 == 0) {
    if (uVar6 == 0) {
      if (param_5 != 0) {
        lVar15 = 0;
        do {
          iVar13 = 0;
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(p_Var1);
            iVar13 = 0;
            if (*(int *)(param_1 + 0x78) != 0) {
              iVar13 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf)
                       * (int)*(short *)(*(long *)(param_1 + 0x40) +
                                        (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
          }
          if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
            iVar12 = 0;
          }
          else {
            (**(code **)(param_1 + 0xa0))(p_Var2);
            iVar12 = 0;
            if (*(int *)(param_1 + 0xe0) != 0) {
              iVar12 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf)
                       * (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                        (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          }
          iVar14 = 0;
          if (*(code **)(param_1 + 0x108) != (code *)0x0) {
            (**(code **)(param_1 + 0x108))(p_Var3);
            iVar14 = 0;
            if (*(int *)(param_1 + 0x148) != 0) {
              iVar14 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf
                       ) * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                          (ulong)(*(uint *)(param_1 + 0x11c) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
          }
          iVar16 = 0;
          if (*(code **)(param_1 + 0x170) != (code *)0x0) {
            (**(code **)(param_1 + 0x170))(p_Var4);
            iVar16 = 0;
            if (*(int *)(param_1 + 0x1b0) != 0) {
              iVar16 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf
                       ) * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                          (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
          }
          iVar13 = (iVar13 + iVar12 + iVar14 + iVar16 >> 2) * *(int *)(lVar17 + lVar15 * 4) >> 0xf;
          param_2[lVar15] = (int)(iVar13 * uVar8) >> 0xd;
          param_3[lVar15] = (int)(iVar13 * uVar9) >> 0xd;
          param_4[lVar15] = (int)(iVar13 * uVar7) >> 0xd;
          lVar15 = lVar15 + 1;
        } while (lVar15 != (ulong)(param_5 - 1) + 1);
      }
      iVar16 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
    }
    else if (param_5 == 0) {
      iVar14 = 0;
      iVar13 = 0;
    }
    else {
      lVar15 = 0;
      iVar13 = iVar16;
      do {
        iVar16 = iVar12;
        iVar12 = 0;
        if (*(code **)(param_1 + 0x108) != (code *)0x0) {
          (**(code **)(param_1 + 0x108))(p_Var3);
          iVar12 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar12 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                      (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                        (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                              (iVar16 + iVar13 >> (uVar6 & 0x1f)) >> 3) +
                                              (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff) * 2) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
        }
        iVar13 = 0;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          (**(code **)(param_1 + 0x38))(p_Var1);
          iVar13 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar13 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0x40) +
                                    (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
        }
        iVar14 = 0;
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          (**(code **)(param_1 + 0xa0))(p_Var2);
          iVar14 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar14 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        iVar10 = 0;
        if (*(code **)(param_1 + 0x170) != (code *)0x0) {
          (**(code **)(param_1 + 0x170))(p_Var4);
          iVar10 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                      (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar13 = (iVar12 + iVar13 + iVar14 + iVar10 >> 2) * *(int *)(lVar17 + lVar15 * 4) >> 0xf;
        param_2[lVar15] = (int)(iVar13 * uVar8) >> 0xd;
        param_3[lVar15] = (int)(iVar13 * uVar9) >> 0xd;
        param_4[lVar15] = (int)(iVar13 * uVar7) >> 0xd;
        lVar15 = lVar15 + 1;
        iVar13 = iVar16;
      } while (lVar15 != (ulong)(param_5 - 1) + 1);
      iVar13 = 0;
      iVar14 = 0;
    }
  }
  else if (uVar6 == 0) {
    if (param_5 == 0) {
      iVar16 = 0;
      iVar12 = 0;
    }
    else {
      lVar15 = 0;
      iVar12 = iVar14;
      do {
        iVar14 = iVar13;
        iVar13 = 0;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          (**(code **)(param_1 + 0x38))(p_Var1);
          iVar13 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar13 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0x40) +
                                    (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                      (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                            (iVar14 + iVar12 >> (uVar5 & 0x1f)) >> 3) +
                                            (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf
            ;
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
                                    (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        iVar16 = 0;
        if (*(code **)(param_1 + 0x108) != (code *)0x0) {
          (**(code **)(param_1 + 0x108))(p_Var3);
          iVar16 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar16 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                      (ulong)(*(uint *)(param_1 + 0x11c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
        }
        iVar10 = 0;
        if (*(code **)(param_1 + 0x170) != (code *)0x0) {
          (**(code **)(param_1 + 0x170))(p_Var4);
          iVar10 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                      (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar12 = (iVar13 + iVar12 + iVar16 + iVar10 >> 2) * *(int *)(lVar17 + lVar15 * 4) >> 0xf;
        param_2[lVar15] = (int)(iVar12 * uVar8) >> 0xd;
        param_3[lVar15] = (int)(iVar12 * uVar9) >> 0xd;
        param_4[lVar15] = (int)(iVar12 * uVar7) >> 0xd;
        lVar15 = lVar15 + 1;
        iVar12 = iVar14;
      } while (lVar15 != (ulong)(param_5 - 1) + 1);
      iVar16 = 0;
      iVar12 = 0;
    }
  }
  else if (param_5 != 0) {
    lVar15 = 0;
    iVar10 = iVar14;
    iVar11 = iVar16;
    do {
      iVar14 = iVar13;
      iVar16 = iVar12;
      iVar13 = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(p_Var1);
        iVar13 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar13 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x40) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                          (iVar14 + iVar10 >> (uVar5 & 0x1f)) >> 3) +
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
                                  (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      if (*(code **)(param_1 + 0x108) == (code *)0x0) {
        iVar12 = 0;
      }
      else {
        (**(code **)(param_1 + 0x108))(p_Var3);
        if (*(int *)(param_1 + 0x148) == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x110) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                          (iVar16 + iVar11 >> (uVar6 & 0x1f)) >> 3) +
                                          (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
      }
      iVar11 = 0;
      if (*(code **)(param_1 + 0x170) != (code *)0x0) {
        (**(code **)(param_1 + 0x170))(p_Var4);
        iVar11 = 0;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x178) +
                                  (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar10 = (iVar13 + iVar10 + iVar12 + iVar11 >> 2) * *(int *)(lVar17 + lVar15 * 4) >> 0xf;
      param_2[lVar15] = (int)(iVar10 * uVar8) >> 0xd;
      param_3[lVar15] = (int)(iVar10 * uVar9) >> 0xd;
      param_4[lVar15] = (int)(iVar10 * uVar7) >> 0xd;
      lVar15 = lVar15 + 1;
      iVar10 = iVar14;
      iVar11 = iVar16;
    } while (lVar15 != (ulong)(param_5 - 1) + 1);
  }
  *(ulong *)(param_1 + 0x218) = CONCAT44(iVar16,iVar12);
  *(ulong *)(param_1 + 0x210) = CONCAT44(iVar14,iVar13);
  return;
}

