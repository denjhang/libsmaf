/* CalcAlg2 @ 0004d9ec 1770B */


/* ARM::CFmSynth::CalcAlg2(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg2
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  _tagFMSLOTINFO *p_Var4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  _tagFMSLOTINFO *p_Var11;
  _tagFMSLOTINFO *p_Var12;
  int *piVar13;
  int iVar14;
  _tagFMSLOTINFO *p_Var15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int *local_5c;
  int *local_58;
  int *local_38;
  int *local_2c;
  
  iVar14 = *(int *)(param_1 + 0x204);
  p_Var11 = param_1 + 0x74;
  p_Var4 = param_1 + 0x18;
  local_5c = *(int **)(param_1 + 0x220);
  uVar2 = *(uint *)(param_1 + 0x1d4);
  uVar9 = (uint)(*(int *)(param_1 + 0x228) * iVar14) >> 0xf;
  uVar3 = *(uint *)(param_1 + 0x1d8);
  p_Var15 = param_1 + 0xd0;
  uVar5 = (uint)(*(int *)(param_1 + 0x224) * iVar14) >> 0xf;
  p_Var12 = param_1 + 300;
  iVar18 = DAT_0004e0d8 + 0x4da48;
  uVar16 = (uint)(*(int *)(param_1 + 0x22c) * iVar14) >> 0xf;
  iVar14 = *(int *)(param_1 + 0x1dc);
  iVar6 = *(int *)(param_1 + 0x1e0);
  iVar10 = *(int *)(param_1 + 0x1e4);
  iVar20 = *(int *)(param_1 + 0x1e8);
  if (uVar2 == 0) {
    if (uVar3 == 0) {
      if (param_5 != 0) {
        piVar13 = param_2 + -1;
        piVar17 = param_3 + -1;
        uVar2 = 0;
        do {
          if (*(code **)(param_1 + 0x34) == (code *)0x0) {
            iVar14 = 0;
          }
          else {
            (**(code **)(param_1 + 0x34))(p_Var4);
            if (*(int *)(param_1 + 0x6c) == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                      (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                       ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf)
                       >> 0xf;
            }
            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
          }
          iVar10 = 0;
          if (*(code **)(param_1 + 0x90) != (code *)0x0) {
            (**(code **)(param_1 + 0x90))(p_Var11);
            iVar10 = 0;
            if (*(int *)(param_1 + 200) != 0) {
              iVar10 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                      (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                       ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf)
                       >> 0xf;
            }
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
          }
          if (*(code **)(param_1 + 0xec) == (code *)0x0) {
            iVar20 = 0;
          }
          else {
            (**(code **)(param_1 + 0xec))(p_Var15);
            iVar20 = 0;
            if (*(int *)(param_1 + 0x124) != 0) {
              iVar20 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                      (*(uint *)(param_1 + 0xf8) >> 0x16) * 2) *
                       ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf
                       ) >> 0xf;
            }
            *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
          }
          if (*(code **)(param_1 + 0x148) == (code *)0x0) {
            iVar6 = 0;
          }
          else {
            (**(code **)(param_1 + 0x148))(p_Var12);
            iVar6 = 0;
            if (*(int *)(param_1 + 0x180) != 0) {
              iVar6 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                     (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                      ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                      >> 0xf;
            }
            *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
          }
          uVar2 = uVar2 + 1;
          iVar14 = *local_5c * (iVar14 + iVar10 + iVar20 + iVar6 >> 2) >> 0xf;
          piVar13 = piVar13 + 1;
          *piVar13 = (int)(uVar5 * iVar14) >> 0xd;
          piVar17 = piVar17 + 1;
          *piVar17 = (int)(uVar9 * iVar14) >> 0xd;
          *param_4 = (int)(uVar16 * iVar14) >> 0xd;
          local_5c = local_5c + 1;
          param_4 = param_4 + 1;
        } while (uVar2 != param_5);
      }
      iVar20 = 0;
      iVar10 = 0;
      iVar14 = 0;
      iVar6 = iVar20;
    }
    else if (param_5 == 0) {
      iVar14 = 0;
      iVar6 = 0;
    }
    else {
      local_38 = param_2 + -1;
      piVar13 = param_3 + -1;
      uVar2 = 0;
      iVar14 = iVar20;
      do {
        iVar20 = iVar10;
        iVar10 = 0;
        if (*(code **)(param_1 + 0xec) != (code *)0x0) {
          (**(code **)(param_1 + 0xec))(p_Var15);
          iVar10 = 0;
          if (*(int *)(param_1 + 0x124) != 0) {
            iVar10 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                    ((*(uint *)(*(int *)(iVar18 + DAT_0004e0dc) +
                                               (uint)(byte)param_1[0xe2] * 4) &
                                     (iVar14 + iVar20 >> (uVar3 & 0xff)) >> 3) +
                                     (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                     ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                     >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        iVar14 = 0;
        if (*(code **)(param_1 + 0x34) != (code *)0x0) {
          (**(code **)(param_1 + 0x34))(p_Var4);
          iVar14 = 0;
          if (*(int *)(param_1 + 0x6c) != 0) {
            iVar14 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                    (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                     ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        if (*(code **)(param_1 + 0x90) == (code *)0x0) {
          iVar6 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(p_Var11);
          iVar6 = 0;
          if (*(int *)(param_1 + 200) != 0) {
            iVar6 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        if (*(code **)(param_1 + 0x148) == (code *)0x0) {
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0x148))(p_Var12);
          iVar7 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar7 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        uVar2 = uVar2 + 1;
        iVar14 = *local_5c * (iVar10 + iVar14 + iVar6 + iVar7 >> 2) >> 0xf;
        local_38 = local_38 + 1;
        *local_38 = (int)(uVar5 * iVar14) >> 0xd;
        piVar13 = piVar13 + 1;
        *piVar13 = (int)(uVar9 * iVar14) >> 0xd;
        *param_4 = (int)(uVar16 * iVar14) >> 0xd;
        param_4 = param_4 + 1;
        iVar14 = iVar20;
        local_5c = local_5c + 1;
      } while (uVar2 != param_5);
      iVar14 = 0;
      iVar6 = 0;
    }
  }
  else if (uVar3 == 0) {
    if (param_5 == 0) {
      iVar20 = 0;
      iVar10 = 0;
    }
    else {
      piVar13 = param_2 + -1;
      piVar17 = param_3 + -1;
      uVar3 = 0;
      iVar10 = iVar6;
      local_58 = param_4;
      do {
        iVar6 = iVar14;
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar14 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(p_Var4);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                    ((*(uint *)(*(int *)(iVar18 + DAT_0004e0dc) +
                                               (uint)(byte)param_1[0x2a] * 4) &
                                     (iVar10 + iVar6 >> (uVar2 & 0xff)) >> 3) +
                                     (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                     ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        iVar10 = 0;
        if (*(code **)(param_1 + 0x90) != (code *)0x0) {
          (**(code **)(param_1 + 0x90))(p_Var11);
          iVar10 = 0;
          if (*(int *)(param_1 + 200) != 0) {
            iVar10 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                    (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                     ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        if (*(code **)(param_1 + 0xec) == (code *)0x0) {
          iVar20 = 0;
        }
        else {
          (**(code **)(param_1 + 0xec))(p_Var15);
          iVar20 = 0;
          if (*(int *)(param_1 + 0x124) != 0) {
            iVar20 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                    (*(uint *)(param_1 + 0xf8) >> 0x16) * 2) *
                     ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                     >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        if (*(code **)(param_1 + 0x148) == (code *)0x0) {
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0x148))(p_Var12);
          iVar7 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar7 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        uVar3 = uVar3 + 1;
        iVar10 = *local_5c * (iVar14 + iVar10 + iVar20 + iVar7 >> 2) >> 0xf;
        piVar13 = piVar13 + 1;
        *piVar13 = (int)(uVar5 * iVar10) >> 0xd;
        piVar17 = piVar17 + 1;
        *piVar17 = (int)(uVar9 * iVar10) >> 0xd;
        *local_58 = (int)(uVar16 * iVar10) >> 0xd;
        iVar10 = iVar6;
        local_5c = local_5c + 1;
        local_58 = local_58 + 1;
      } while (uVar3 != param_5);
      iVar20 = 0;
      iVar10 = 0;
    }
  }
  else if (param_5 != 0) {
    local_2c = param_2 + -1;
    local_38 = param_3 + -1;
    uVar19 = 0;
    iVar7 = iVar6;
    iVar8 = iVar20;
    local_58 = param_4;
    do {
      iVar6 = iVar14;
      iVar20 = iVar10;
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        iVar14 = 0;
      }
      else {
        (**(code **)(param_1 + 0x34))(p_Var4);
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                  ((*(uint *)(*(int *)(iVar18 + DAT_0004e0dc) +
                                             (uint)(byte)param_1[0x2a] * 4) &
                                   (iVar6 + iVar7 >> (uVar2 & 0xff)) >> 3) +
                                   (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                   ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      iVar7 = 0;
      if (*(code **)(param_1 + 0x90) != (code *)0x0) {
        (**(code **)(param_1 + 0x90))(p_Var11);
        iVar7 = 0;
        if (*(int *)(param_1 + 200) != 0) {
          iVar7 = (int)*(short *)(*(int *)(param_1 + 0x94) + (*(uint *)(param_1 + 0x9c) >> 0x16) * 2
                                 ) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      iVar1 = DAT_0004e0dc;
      if (*(code **)(param_1 + 0xec) == (code *)0x0) {
        iVar10 = 0;
      }
      else {
        (**(code **)(param_1 + 0xec))(p_Var15);
        iVar10 = 0;
        if (*(int *)(param_1 + 0x124) != 0) {
          iVar10 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                  ((*(uint *)(*(int *)(iVar18 + iVar1) +
                                             (uint)(byte)param_1[0xe2] * 4) &
                                   (iVar20 + iVar8 >> (uVar3 & 0xff)) >> 3) +
                                   (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                   ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
      }
      iVar8 = 0;
      if (*(code **)(param_1 + 0x148) != (code *)0x0) {
        (**(code **)(param_1 + 0x148))(p_Var12);
        iVar8 = 0;
        if (*(int *)(param_1 + 0x180) != 0) {
          iVar8 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                 (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                  ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
      }
      uVar19 = uVar19 + 1;
      iVar7 = *local_5c * (iVar8 + iVar14 + iVar7 + iVar10 >> 2) >> 0xf;
      local_2c = local_2c + 1;
      *local_2c = (int)(uVar5 * iVar7) >> 0xd;
      local_38 = local_38 + 1;
      *local_38 = (int)(uVar9 * iVar7) >> 0xd;
      *local_58 = (int)(uVar16 * iVar7) >> 0xd;
      iVar7 = iVar6;
      iVar8 = iVar20;
      local_5c = local_5c + 1;
      local_58 = local_58 + 1;
    } while (uVar19 != param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar14;
  *(int *)(param_1 + 0x1e0) = iVar6;
  *(int *)(param_1 + 0x1e4) = iVar10;
  *(int *)(param_1 + 0x1e8) = iVar20;
  return;
}

