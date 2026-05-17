/* CalcAlg5 @ 0004e0e0 2038B */


/* ARM::CFmSynth::CalcAlg5(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg5
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  _tagFMSLOTINFO *p_Var5;
  _tagFMSLOTINFO *p_Var6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  _tagFMSLOTINFO *p_Var12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  _tagFMSLOTINFO *p_Var19;
  int *local_5c;
  int *local_58;
  int *local_38;
  int *local_2c;
  
  iVar9 = *(int *)(param_1 + 0x204);
  p_Var5 = param_1 + 0x18;
  p_Var12 = param_1 + 0x74;
  p_Var19 = param_1 + 0xd0;
  local_5c = *(int **)(param_1 + 0x220);
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar13 = *(uint *)(param_1 + 0x1d8);
  p_Var6 = param_1 + 300;
  uVar7 = (uint)(*(int *)(param_1 + 0x22c) * iVar9) >> 0xf;
  uVar2 = (uint)(*(int *)(param_1 + 0x228) * iVar9) >> 0xf;
  uVar10 = (uint)(*(int *)(param_1 + 0x224) * iVar9) >> 0xf;
  iVar8 = DAT_0004e8d8 + 0x4e146;
  iVar9 = *(int *)(param_1 + 0x1dc);
  iVar3 = *(int *)(param_1 + 0x1e0);
  iVar11 = *(int *)(param_1 + 0x1e4);
  iVar15 = *(int *)(param_1 + 0x1e8);
  if (uVar1 == 0) {
    if (uVar13 == 0) {
      if (param_5 != 0) {
        piVar16 = param_2 + -1;
        piVar14 = param_3 + -1;
        uVar1 = 0;
        do {
          if (*(code **)(param_1 + 0x34) == (code *)0x0) {
            iVar9 = 0;
          }
          else {
            (**(code **)(param_1 + 0x34))(p_Var5);
            if (*(int *)(param_1 + 0x6c) == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                     (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                      ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf)
                      >> 0xf;
            }
            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
          }
          if (*(code **)(param_1 + 0x90) == (code *)0x0) {
            iVar9 = 0;
          }
          else {
            (**(code **)(param_1 + 0x90))(p_Var12);
            if (*(int *)(param_1 + 200) == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                     ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                                (uint)(byte)param_1[0x86] * 4) & iVar9 >> 3) +
                                      (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                      ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                      0xf;
            }
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
          }
          if (*(code **)(param_1 + 0xec) == (code *)0x0) {
            iVar11 = 0;
          }
          else {
            (**(code **)(param_1 + 0xec))(p_Var19);
            if (*(int *)(param_1 + 0x124) == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                      (*(uint *)(param_1 + 0xf8) >> 0x16) * 2) *
                       ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf
                       ) >> 0xf;
            }
            *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
          }
          iVar15 = 0;
          if (*(code **)(param_1 + 0x148) != (code *)0x0) {
            (**(code **)(param_1 + 0x148))(p_Var6);
            iVar15 = 0;
            if (*(int *)(param_1 + 0x180) != 0) {
              iVar15 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                      ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                                 (uint)(byte)param_1[0x13e] * 4) & iVar11 >> 3) +
                                       (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                       ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf
                       ) >> 0xf;
            }
            *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
          }
          uVar1 = uVar1 + 1;
          iVar9 = *local_5c * (iVar9 + iVar15 >> 1) >> 0xf;
          piVar16 = piVar16 + 1;
          *piVar16 = (int)(uVar10 * iVar9) >> 0xe;
          piVar14 = piVar14 + 1;
          *piVar14 = (int)(uVar2 * iVar9) >> 0xe;
          *param_4 = (int)(uVar7 * iVar9) >> 0xe;
          param_4 = param_4 + 1;
          local_5c = local_5c + 1;
        } while (uVar1 != param_5);
      }
      iVar15 = 0;
      iVar11 = 0;
      iVar3 = 0;
      iVar9 = 0;
    }
    else if (param_5 == 0) {
      iVar3 = 0;
      iVar9 = 0;
    }
    else {
      piVar16 = param_2 + -1;
      piVar14 = param_3 + -1;
      uVar1 = 0;
      iVar9 = iVar15;
      local_58 = param_4;
      do {
        iVar15 = iVar11;
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar11 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(p_Var5);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                    (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                     ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        if (*(code **)(param_1 + 0x90) == (code *)0x0) {
          iVar3 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(p_Var12);
          if (*(int *)(param_1 + 200) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                              (uint)(byte)param_1[0x86] * 4) & iVar11 >> 3) +
                                    (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        iVar11 = 0;
        if (*(code **)(param_1 + 0xec) != (code *)0x0) {
          (**(code **)(param_1 + 0xec))(p_Var19);
          iVar11 = 0;
          if (*(int *)(param_1 + 0x124) != 0) {
            iVar11 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                    ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                               (uint)(byte)param_1[0xe2] * 4) &
                                     (iVar9 + iVar15 >> (uVar13 & 0xff)) >> 3) +
                                     (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                     ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                     >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        iVar9 = 0;
        if (*(code **)(param_1 + 0x148) != (code *)0x0) {
          (**(code **)(param_1 + 0x148))(p_Var6);
          iVar9 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar9 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                              (uint)(byte)param_1[0x13e] * 4) & iVar11 >> 3) +
                                    (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        uVar1 = uVar1 + 1;
        iVar9 = *local_5c * (iVar3 + iVar9 >> 1) >> 0xf;
        piVar16 = piVar16 + 1;
        *piVar16 = (int)(uVar10 * iVar9) >> 0xe;
        piVar14 = piVar14 + 1;
        *piVar14 = (int)(uVar2 * iVar9) >> 0xe;
        *local_58 = (int)(uVar7 * iVar9) >> 0xe;
        iVar9 = iVar15;
        local_5c = local_5c + 1;
        local_58 = local_58 + 1;
      } while (uVar1 != param_5);
      iVar3 = 0;
      iVar9 = 0;
    }
  }
  else if (uVar13 == 0) {
    if (param_5 == 0) {
      iVar11 = 0;
      iVar15 = 0;
    }
    else {
      local_38 = param_2 + -1;
      piVar16 = param_3 + -1;
      uVar13 = 0;
      iVar11 = iVar3;
      local_58 = param_4;
      do {
        iVar3 = iVar9;
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar9 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(p_Var5);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                   ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                              (uint)(byte)param_1[0x2a] * 4) &
                                    (iVar11 + iVar3 >> (uVar1 & 0xff)) >> 3) +
                                    (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        if (*(code **)(param_1 + 0x90) == (code *)0x0) {
          iVar11 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(p_Var12);
          if (*(int *)(param_1 + 200) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                    ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                               (uint)(byte)param_1[0x86] * 4) & iVar9 >> 3) +
                                     (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                     ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        if (*(code **)(param_1 + 0xec) == (code *)0x0) {
          iVar15 = 0;
        }
        else {
          (**(code **)(param_1 + 0xec))(p_Var19);
          if (*(int *)(param_1 + 0x124) == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                    (*(uint *)(param_1 + 0xf8) >> 0x16) * 2) *
                     ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                     >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        iVar4 = 0;
        if (*(code **)(param_1 + 0x148) != (code *)0x0) {
          (**(code **)(param_1 + 0x148))(p_Var6);
          iVar4 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar4 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                              (uint)(byte)param_1[0x13e] * 4) & iVar15 >> 3) +
                                    (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        uVar13 = uVar13 + 1;
        iVar11 = *local_5c * (iVar11 + iVar4 >> 1) >> 0xf;
        local_38 = local_38 + 1;
        *local_38 = (int)(uVar10 * iVar11) >> 0xe;
        piVar16 = piVar16 + 1;
        *piVar16 = (int)(uVar2 * iVar11) >> 0xe;
        *local_58 = (int)(uVar7 * iVar11) >> 0xe;
        iVar11 = iVar3;
        local_5c = local_5c + 1;
        local_58 = local_58 + 1;
      } while (uVar13 != param_5);
      iVar15 = 0;
      iVar11 = 0;
    }
  }
  else if (param_5 != 0) {
    local_2c = param_2 + -1;
    local_38 = param_3 + -1;
    uVar17 = 0;
    iVar4 = iVar15;
    iVar18 = iVar3;
    local_58 = param_4;
    do {
      iVar3 = iVar9;
      iVar15 = iVar11;
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        iVar9 = 0;
      }
      else {
        (**(code **)(param_1 + 0x34))(p_Var5);
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar18 + iVar3 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        iVar18 = 0;
      }
      else {
        (**(code **)(param_1 + 0x90))(p_Var12);
        if (*(int *)(param_1 + 200) == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                  ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                             (uint)(byte)param_1[0x86] * 4) & iVar9 >> 3) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                   ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      iVar11 = 0;
      if (*(code **)(param_1 + 0xec) != (code *)0x0) {
        (**(code **)(param_1 + 0xec))(p_Var19);
        iVar11 = 0;
        if (*(int *)(param_1 + 0x124) != 0) {
          iVar11 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                  ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                             (uint)(byte)param_1[0xe2] * 4) &
                                   (iVar4 + iVar15 >> (uVar13 & 0xff)) >> 3) +
                                   (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                   ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0xf8) = *(int *)(param_1 + 0x128) + *(uint *)(param_1 + 0xf8);
      }
      iVar4 = 0;
      if (*(code **)(param_1 + 0x148) != (code *)0x0) {
        (**(code **)(param_1 + 0x148))(p_Var6);
        iVar4 = 0;
        if (*(int *)(param_1 + 0x180) != 0) {
          iVar4 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                 ((*(uint *)(*(int *)(iVar8 + DAT_0004e8dc) +
                                            (uint)(byte)param_1[0x13e] * 4) & iVar11 >> 3) +
                                  (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x154) = *(int *)(param_1 + 0x184) + *(uint *)(param_1 + 0x154);
      }
      uVar17 = uVar17 + 1;
      iVar4 = *local_5c * (iVar4 + iVar18 >> 1) >> 0xf;
      local_2c = local_2c + 1;
      *local_2c = (int)(uVar10 * iVar4) >> 0xe;
      local_38 = local_38 + 1;
      *local_38 = (int)(uVar2 * iVar4) >> 0xe;
      *local_58 = (int)(uVar7 * iVar4) >> 0xe;
      iVar4 = iVar15;
      iVar18 = iVar3;
      local_5c = local_5c + 1;
      local_58 = local_58 + 1;
    } while (uVar17 != param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar9;
  *(int *)(param_1 + 0x1e0) = iVar3;
  *(int *)(param_1 + 0x1e4) = iVar11;
  *(int *)(param_1 + 0x1e8) = iVar15;
  return;
}

