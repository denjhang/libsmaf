/* CalcAlg2a @ 0015485c 2388B */


/* ARM::CFmSynth::CalcAlg2a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg2a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  _tagFMSLOTINFO *p_Var1;
  _tagFMSLOTINFO *p_Var2;
  _tagFMSLOTINFO *p_Var3;
  _tagFMSLOTINFO *p_Var4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  
  p_Var1 = param_1 + 0x18;
  p_Var2 = param_1 + 0x80;
  iVar11 = *(int *)(param_1 + 0x238);
  p_Var3 = param_1 + 0xe8;
  p_Var4 = param_1 + 0x150;
  lVar16 = *(long *)(param_1 + 0x268);
  uVar5 = *(uint *)(param_1 + 0x208);
  uVar6 = *(uint *)(param_1 + 0x20c);
  iVar13 = *(int *)(param_1 + 0x218);
  iVar19 = *(int *)(param_1 + 0x21c);
  uVar7 = (uint)(iVar11 * *(int *)(param_1 + 0x274)) >> 0xf;
  uVar9 = (ulong)((uint)(iVar11 * *(int *)(param_1 + 0x270)) >> 0xf);
  uVar10 = (ulong)((uint)(iVar11 * *(int *)(param_1 + 0x278)) >> 0xf);
  iVar11 = *(int *)(param_1 + 0x210);
  iVar18 = *(int *)(param_1 + 0x214);
  if (uVar5 == 0) {
    if (uVar6 == 0) {
      if (param_5 != 0) {
        lVar17 = 0;
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
            iVar11 = 0;
          }
          else {
            (**(code **)(param_1 + 0xa0))(p_Var2);
            iVar11 = 0;
            if (*(int *)(param_1 + 0xe0) != 0) {
              iVar11 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf)
                       * (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                        (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          }
          iVar19 = 0;
          if (*(code **)(param_1 + 0x108) != (code *)0x0) {
            (**(code **)(param_1 + 0x108))(p_Var3);
            iVar19 = 0;
            if (*(int *)(param_1 + 0x148) != 0) {
              iVar19 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf
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
                                          (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
            }
            *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
          }
          iVar13 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar13 + iVar11 + iVar19 + iVar18);
          lVar8 = (long)iVar13 * (long)*(int *)(lVar16 + lVar17 * 4) * 0x20000 >> 0x20;
          param_2[lVar17] = (int)((long)(uVar9 * lVar8) >> 0xf);
          param_3[lVar17] = (int)((long)((ulong)uVar7 * lVar8) >> 0xf);
          param_4[lVar17] = (int)((long)(uVar10 * lVar8) >> 0xf);
          lVar17 = lVar17 + 1;
        } while (lVar17 != (ulong)(param_5 - 1) + 1);
      }
      iVar11 = 0;
      iVar13 = 0;
      iVar18 = 0;
      iVar19 = 0;
    }
    else if (param_5 == 0) {
      iVar18 = 0;
      iVar11 = 0;
    }
    else {
      lVar17 = 0;
      iVar11 = iVar19;
      do {
        iVar19 = iVar13;
        iVar13 = 0;
        if (*(code **)(param_1 + 0x108) != (code *)0x0) {
          (**(code **)(param_1 + 0x108))(p_Var3);
          iVar13 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar13 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                      (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                        (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                              (iVar19 + iVar11 >> (uVar6 & 0x1f)) >> 3) +
                                              (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff) * 2) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
        }
        iVar11 = 0;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          (**(code **)(param_1 + 0x38))(p_Var1);
          iVar11 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
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
                                    (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        iVar12 = 0;
        if (*(code **)(param_1 + 0x170) != (code *)0x0) {
          (**(code **)(param_1 + 0x170))(p_Var4);
          iVar12 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar12 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                      (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar11 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar13 + iVar11 + iVar18 + iVar12);
        lVar8 = (long)iVar11 * (long)*(int *)(lVar16 + lVar17 * 4) * 0x20000 >> 0x20;
        param_2[lVar17] = (int)((long)(uVar9 * lVar8) >> 0xf);
        param_3[lVar17] = (int)((long)(lVar8 * (ulong)uVar7) >> 0xf);
        param_4[lVar17] = (int)((long)(lVar8 * uVar10) >> 0xf);
        lVar17 = lVar17 + 1;
        iVar11 = iVar19;
      } while (lVar17 != (ulong)(param_5 - 1) + 1);
      iVar18 = 0;
      iVar11 = 0;
    }
  }
  else if (uVar6 == 0) {
    if (param_5 == 0) {
      iVar19 = 0;
      iVar13 = 0;
    }
    else {
      lVar17 = 0;
      iVar13 = iVar18;
      do {
        iVar18 = iVar11;
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          iVar11 = 0;
          pcVar14 = *(code **)(param_1 + 0xa0);
          if (pcVar14 != (code *)0x0) goto LAB_00154bd4;
LAB_00154d44:
          iVar13 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(p_Var1);
          if (*(int *)(param_1 + 0x78) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0x40) +
                                    (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                      (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                            (iVar18 + iVar13 >> (uVar5 & 0x1f)) >> 3) +
                                            (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf
            ;
          }
          pcVar14 = *(code **)(param_1 + 0xa0);
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
          if (pcVar14 == (code *)0x0) goto LAB_00154d44;
LAB_00154bd4:
          (*pcVar14)(p_Var2);
          if (*(int *)(param_1 + 0xe0) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        iVar19 = 0;
        if (*(code **)(param_1 + 0x108) != (code *)0x0) {
          (**(code **)(param_1 + 0x108))(p_Var3);
          iVar19 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar19 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x110) +
                                      (ulong)(*(uint *)(param_1 + 0x11c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
        }
        iVar12 = 0;
        if (*(code **)(param_1 + 0x170) != (code *)0x0) {
          (**(code **)(param_1 + 0x170))(p_Var4);
          iVar12 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar12 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                      (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar13 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar11 + iVar13 + iVar19 + iVar12);
        lVar8 = (long)iVar13 * (long)*(int *)(lVar16 + lVar17 * 4) * 0x20000 >> 0x20;
        param_2[lVar17] = (int)((long)(uVar9 * lVar8) >> 0xf);
        param_3[lVar17] = (int)((long)((ulong)uVar7 * lVar8) >> 0xf);
        param_4[lVar17] = (int)((long)(lVar8 * uVar10) >> 0xf);
        lVar17 = lVar17 + 1;
        iVar13 = iVar18;
      } while (lVar17 != (ulong)(param_5 - 1) + 1);
      iVar13 = 0;
      iVar19 = 0;
    }
  }
  else if (param_5 != 0) {
    lVar17 = 0;
    iVar12 = iVar19;
    iVar15 = iVar18;
    do {
      iVar19 = iVar13;
      iVar18 = iVar11;
      iVar11 = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(p_Var1);
        iVar11 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x40) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                          (iVar18 + iVar15 >> (uVar5 & 0x1f)) >> 3) +
                                          (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      iVar15 = 0;
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(p_Var2);
        iVar15 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar15 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                  (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      iVar13 = 0;
      if (*(code **)(param_1 + 0x108) != (code *)0x0) {
        (**(code **)(param_1 + 0x108))(p_Var3);
        iVar13 = 0;
        if (*(int *)(param_1 + 0x148) != 0) {
          iVar13 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x110) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                          (iVar19 + iVar12 >> (uVar6 & 0x1f)) >> 3) +
                                          (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
      }
      if (*(code **)(param_1 + 0x170) == (code *)0x0) {
        iVar12 = 0;
      }
      else {
        (**(code **)(param_1 + 0x170))(p_Var4);
        iVar12 = 0;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          iVar12 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x178) +
                                  (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar12 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar11 + iVar15 + iVar13 + iVar12);
      lVar8 = (long)iVar12 * (long)*(int *)(lVar16 + lVar17 * 4) * 0x20000 >> 0x20;
      param_2[lVar17] = (int)((long)(lVar8 * uVar9) >> 0xf);
      param_3[lVar17] = (int)((long)(lVar8 * (ulong)uVar7) >> 0xf);
      param_4[lVar17] = (int)((long)(lVar8 * uVar10) >> 0xf);
      lVar17 = lVar17 + 1;
      iVar12 = iVar19;
      iVar15 = iVar18;
    } while (lVar17 != (ulong)(param_5 - 1) + 1);
  }
  *(ulong *)(param_1 + 0x218) = CONCAT44(iVar19,iVar13);
  *(ulong *)(param_1 + 0x210) = CONCAT44(iVar18,iVar11);
  return;
}

