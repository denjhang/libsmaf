/* CalcAlg5a @ 0004f148 2324B */


/* ARM::CFmSynth::CalcAlg5a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg5a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  _tagFMSLOTINFO *p_Var6;
  _tagFMSLOTINFO *p_Var7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  _tagFMSLOTINFO *p_Var13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  _tagFMSLOTINFO *p_Var18;
  uint *local_68;
  uint *local_64;
  int *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_30;
  uint *local_2c;
  
  iVar10 = *(int *)(param_1 + 0x204);
  p_Var13 = param_1 + 0x74;
  p_Var18 = param_1 + 0xd0;
  uVar1 = *(uint *)(param_1 + 0x1d4);
  local_54 = *(int **)(param_1 + 0x220);
  uVar11 = (uint)(*(int *)(param_1 + 0x224) * iVar10) >> 0xf;
  uVar15 = *(uint *)(param_1 + 0x1d8);
  uVar2 = *(uint *)(param_1 + 0x1dc);
  puVar12 = *(uint **)(param_1 + 0x1e4);
  p_Var6 = param_1 + 0x18;
  uVar14 = (uint)(*(int *)(param_1 + 0x228) * iVar10) >> 0xf;
  p_Var7 = param_1 + 300;
  iVar17 = DAT_0004fa5c + 0x4f1ae;
  uVar8 = (uint)(*(int *)(param_1 + 0x22c) * iVar10) >> 0xf;
  local_64 = *(uint **)(param_1 + 0x1e0);
  local_68 = *(uint **)(param_1 + 0x1e8);
  if (uVar1 == 0) {
    if (uVar15 == 0) {
      if (param_5 != 0) {
        puVar12 = (uint *)(param_3 + -1);
        local_68 = (uint *)(param_2 + -1);
        uVar2 = 0;
        local_50 = (uint *)param_4;
        do {
          if (*(code **)(param_1 + 0x34) == (code *)0x0) {
            iVar10 = 0;
          }
          else {
            (**(code **)(param_1 + 0x34))(p_Var6);
            if (*(int *)(param_1 + 0x6c) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                      (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                       ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf)
                       >> 0xf;
            }
            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
          }
          iVar16 = 0;
          if (*(code **)(param_1 + 0x90) != (code *)0x0) {
            (**(code **)(param_1 + 0x90))(p_Var13);
            if (*(int *)(param_1 + 200) == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                      ((*(uint *)(*(int *)(iVar17 + DAT_0004fa60) +
                                                 (uint)(byte)param_1[0x86] * 4) & iVar10 >> 3) +
                                       (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                       ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf)
                       >> 0xf;
            }
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
          }
          if (*(code **)(param_1 + 0xec) == (code *)0x0) {
            iVar10 = 0;
          }
          else {
            (**(code **)(param_1 + 0xec))(p_Var18);
            if (*(int *)(param_1 + 0x124) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                      (*(uint *)(param_1 + 0xf8) >> 0x16) * 2) *
                       ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf
                       ) >> 0xf;
            }
            *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
          }
          iVar3 = DAT_0004fa60;
          if (*(code **)(param_1 + 0x148) == (code *)0x0) {
            iVar5 = 0;
          }
          else {
            (**(code **)(param_1 + 0x148))(p_Var7);
            iVar5 = 0;
            if (*(int *)(param_1 + 0x180) != 0) {
              iVar5 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                     ((*(uint *)(*(int *)(iVar17 + iVar3) +
                                                (uint)(byte)param_1[0x13e] * 4) & iVar10 >> 3) +
                                      (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                      ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                      >> 0xf;
            }
            *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
          }
          iVar10 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar5 + iVar16);
          uVar2 = uVar2 + 1;
          uVar1 = (uint)((longlong)iVar10 * (longlong)*local_54) >> 0xf |
                  (int)((ulonglong)((longlong)iVar10 * (longlong)*local_54) >> 0x20) << 0x11;
          iVar10 = (int)uVar1 >> 0x1f;
          local_68 = local_68 + 1;
          *local_68 = (uint)((ulonglong)uVar1 * (ulonglong)uVar11) >> 0xf |
                      (uVar11 * iVar10 + (int)((ulonglong)uVar1 * (ulonglong)uVar11 >> 0x20)) *
                      0x20000;
          puVar12 = puVar12 + 1;
          *puVar12 = (uint)((ulonglong)uVar1 * (ulonglong)uVar14) >> 0xf |
                     (uVar14 * iVar10 + (int)((ulonglong)uVar1 * (ulonglong)uVar14 >> 0x20)) *
                     0x20000;
          *local_50 = (uint)((ulonglong)uVar1 * (ulonglong)uVar8) >> 0xf |
                      (uVar8 * iVar10 + (int)((ulonglong)uVar1 * (ulonglong)uVar8 >> 0x20)) *
                      0x20000;
          local_54 = local_54 + 1;
          local_50 = local_50 + 1;
        } while (uVar2 != param_5);
      }
      puVar12 = (uint *)0x0;
      local_68 = (uint *)0x0;
      local_64 = (uint *)0x0;
      uVar2 = 0;
    }
    else {
      local_64 = (uint *)param_5;
      if (param_5 == 0) {
        uVar2 = 0;
      }
      else {
        local_4c = (uint *)(param_2 + -1);
        local_64 = (uint *)(param_3 + -1);
        uVar2 = 0;
        puVar9 = local_68;
        local_50 = (uint *)param_4;
        do {
          local_68 = puVar12;
          iVar10 = 0;
          if (*(code **)(param_1 + 0x34) != (code *)0x0) {
            (**(code **)(param_1 + 0x34))(p_Var6);
            if (*(int *)(param_1 + 0x6c) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                      (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                       ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf)
                       >> 0xf;
            }
            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
          }
          iVar3 = DAT_0004fa60;
          iVar16 = 0;
          if (*(code **)(param_1 + 0x90) != (code *)0x0) {
            (**(code **)(param_1 + 0x90))(p_Var13);
            if (*(int *)(param_1 + 200) == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                      ((*(uint *)(*(int *)(iVar17 + iVar3) +
                                                 (uint)(byte)param_1[0x86] * 4) & iVar10 >> 3) +
                                       (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                       ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf)
                       >> 0xf;
            }
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
          }
          if (*(code **)(param_1 + 0xec) == (code *)0x0) {
            puVar12 = (uint *)0x0;
          }
          else {
            (**(code **)(param_1 + 0xec))(p_Var18);
            if (*(int *)(param_1 + 0x124) == 0) {
              puVar12 = (uint *)0x0;
            }
            else {
              puVar12 = (uint *)((int)*(short *)(*(int *)(param_1 + 0xf0) +
                                                ((*(uint *)(*(int *)(iVar17 + DAT_0004fa60) +
                                                           (uint)(byte)param_1[0xe2] * 4) &
                                                 ((int)puVar9 + (int)local_68 >> (uVar15 & 0xff)) >>
                                                 3) + (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) *
                                                2) *
                                 ((int)(*(int *)(param_1 + 0x124) *
                                       (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf) >> 0xf);
            }
            *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
          }
          iVar3 = DAT_0004fa60;
          iVar10 = 0;
          if (*(code **)(param_1 + 0x148) != (code *)0x0) {
            (**(code **)(param_1 + 0x148))(p_Var7);
            iVar10 = 0;
            if (*(int *)(param_1 + 0x180) != 0) {
              iVar10 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                      ((*(uint *)(*(int *)(iVar17 + iVar3) +
                                                 (uint)(byte)param_1[0x13e] * 4) & (int)puVar12 >> 3
                                       ) + (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                       ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf
                       ) >> 0xf;
            }
            *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
          }
          iVar10 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar10 + iVar16);
          uVar2 = uVar2 + 1;
          uVar1 = (uint)((longlong)iVar10 * (longlong)*local_54) >> 0xf |
                  (int)((ulonglong)((longlong)iVar10 * (longlong)*local_54) >> 0x20) << 0x11;
          iVar10 = (int)uVar1 >> 0x1f;
          local_4c = local_4c + 1;
          *local_4c = (uint)((ulonglong)uVar1 * (ulonglong)uVar11) >> 0xf |
                      (uVar11 * iVar10 + (int)((ulonglong)uVar1 * (ulonglong)uVar11 >> 0x20)) *
                      0x20000;
          local_64 = local_64 + 1;
          *local_64 = (uint)((ulonglong)uVar14 * (ulonglong)uVar1) >> 0xf |
                      (uVar14 * iVar10 + (int)((ulonglong)uVar14 * (ulonglong)uVar1 >> 0x20)) *
                      0x20000;
          *local_50 = (uint)((ulonglong)uVar1 * (ulonglong)uVar8) >> 0xf |
                      (uVar8 * iVar10 + (int)((ulonglong)uVar1 * (ulonglong)uVar8 >> 0x20)) *
                      0x20000;
          puVar9 = local_68;
          local_54 = local_54 + 1;
          local_50 = local_50 + 1;
        } while (uVar2 != param_5);
        local_64 = (uint *)0x0;
        uVar2 = 0;
      }
    }
  }
  else if (uVar15 == 0) {
    if (param_5 == 0) {
      local_68 = (uint *)param_5;
      puVar12 = (uint *)0x0;
    }
    else {
      local_4c = (uint *)(param_2 + -1);
      local_68 = (uint *)(param_3 + -1);
      uVar15 = 0;
      uVar4 = (uint)local_64;
      local_50 = (uint *)param_4;
      do {
        local_64 = (uint *)uVar2;
        iVar10 = DAT_0004fa60;
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          uVar2 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(p_Var6);
          if (*(int *)(param_1 + 0x6c) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                   ((*(uint *)(*(int *)(iVar17 + iVar10) +
                                              (uint)(byte)param_1[0x2a] * 4) &
                                    ((int)(uVar4 + (int)local_64) >> (uVar1 & 0xff)) >> 3) +
                                    (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        iVar10 = 0;
        if (*(code **)(param_1 + 0x90) != (code *)0x0) {
          (**(code **)(param_1 + 0x90))(p_Var13);
          if (*(int *)(param_1 + 200) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                    ((*(uint *)(*(int *)(iVar17 + DAT_0004fa60) +
                                               (uint)(byte)param_1[0x86] * 4) & (int)uVar2 >> 3) +
                                     (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                     ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        if (*(code **)(param_1 + 0xec) == (code *)0x0) {
          iVar16 = 0;
        }
        else {
          (**(code **)(param_1 + 0xec))(p_Var18);
          if (*(int *)(param_1 + 0x124) == 0) {
            iVar16 = 0;
          }
          else {
            iVar16 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                    (*(uint *)(param_1 + 0xf8) >> 0x16) * 2) *
                     ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                     >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        if (*(code **)(param_1 + 0x148) == (code *)0x0) {
          iVar3 = 0;
        }
        else {
          (**(code **)(param_1 + 0x148))(p_Var7);
          iVar3 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar3 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   ((*(uint *)(*(int *)(iVar17 + DAT_0004fa60) +
                                              (uint)(byte)param_1[0x13e] * 4) & iVar16 >> 3) +
                                    (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        iVar10 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar3 + iVar10);
        uVar15 = uVar15 + 1;
        uVar4 = (uint)((longlong)iVar10 * (longlong)*local_54) >> 0xf |
                (int)((ulonglong)((longlong)iVar10 * (longlong)*local_54) >> 0x20) << 0x11;
        iVar10 = (int)uVar4 >> 0x1f;
        local_4c = local_4c + 1;
        *local_4c = (uint)((ulonglong)uVar4 * (ulonglong)uVar11) >> 0xf |
                    (uVar11 * iVar10 + (int)((ulonglong)uVar4 * (ulonglong)uVar11 >> 0x20)) *
                    0x20000;
        local_68 = local_68 + 1;
        *local_68 = (uint)((ulonglong)uVar4 * (ulonglong)uVar14) >> 0xf |
                    (uVar14 * iVar10 + (int)((ulonglong)uVar4 * (ulonglong)uVar14 >> 0x20)) *
                    0x20000;
        *local_50 = (uint)((ulonglong)uVar4 * (ulonglong)uVar8) >> 0xf |
                    (uVar8 * iVar10 + (int)((ulonglong)uVar4 * (ulonglong)uVar8 >> 0x20)) * 0x20000;
        uVar4 = (uint)local_64;
        local_54 = local_54 + 1;
        local_50 = local_50 + 1;
      } while (uVar15 != param_5);
      local_68 = (uint *)0x0;
      puVar12 = (uint *)0x0;
    }
  }
  else if (param_5 != 0) {
    local_2c = (uint *)(param_2 + -1);
    local_30 = (uint *)(param_3 + -1);
    local_4c = (uint *)0x0;
    puVar9 = local_68;
    uVar4 = (uint)local_64;
    local_50 = (uint *)param_4;
    do {
      local_68 = puVar12;
      local_64 = (uint *)uVar2;
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        uVar2 = 0;
      }
      else {
        (**(code **)(param_1 + 0x34))(p_Var6);
        if (*(int *)(param_1 + 0x6c) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(iVar17 + DAT_0004fa60) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  ((int)(uVar4 + (int)local_64) >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      iVar10 = 0;
      if (*(code **)(param_1 + 0x90) != (code *)0x0) {
        (**(code **)(param_1 + 0x90))(p_Var13);
        iVar10 = 0;
        if (*(int *)(param_1 + 200) != 0) {
          iVar10 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                  ((*(uint *)(*(int *)(iVar17 + DAT_0004fa60) +
                                             (uint)(byte)param_1[0x86] * 4) & (int)uVar2 >> 3) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                   ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      iVar16 = DAT_0004fa60;
      if (*(code **)(param_1 + 0xec) == (code *)0x0) {
        puVar12 = (uint *)0x0;
      }
      else {
        (**(code **)(param_1 + 0xec))(p_Var18);
        if (*(int *)(param_1 + 0x124) == 0) {
          puVar12 = (uint *)0x0;
        }
        else {
          puVar12 = (uint *)((int)*(short *)(*(int *)(param_1 + 0xf0) +
                                            ((*(uint *)(*(int *)(iVar17 + iVar16) +
                                                       (uint)(byte)param_1[0xe2] * 4) &
                                             ((int)puVar9 + (int)local_68 >> (uVar15 & 0xff)) >> 3)
                                             + (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                             ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a))
                             >> 0xf) >> 0xf);
        }
        *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
      }
      iVar3 = DAT_0004fa60;
      iVar16 = 0;
      if (*(code **)(param_1 + 0x148) != (code *)0x0) {
        (**(code **)(param_1 + 0x148))(p_Var7);
        iVar16 = 0;
        if (*(int *)(param_1 + 0x180) != 0) {
          iVar16 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                  ((*(uint *)(*(int *)(iVar17 + iVar3) +
                                             (uint)(byte)param_1[0x13e] * 4) & (int)puVar12 >> 3) +
                                   (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                   ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
      }
      iVar10 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar16 + iVar10);
      local_4c = (uint *)((int)local_4c + 1);
      uVar4 = (uint)((longlong)iVar10 * (longlong)*local_54) >> 0xf |
              (int)((ulonglong)((longlong)iVar10 * (longlong)*local_54) >> 0x20) << 0x11;
      iVar10 = (int)uVar4 >> 0x1f;
      local_2c = local_2c + 1;
      *local_2c = (uint)((ulonglong)uVar11 * (ulonglong)uVar4) >> 0xf |
                  (uVar11 * iVar10 + (int)((ulonglong)uVar11 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      local_30 = local_30 + 1;
      *local_30 = (uint)((ulonglong)uVar14 * (ulonglong)uVar4) >> 0xf |
                  (uVar14 * iVar10 + (int)((ulonglong)uVar14 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      *local_50 = (uint)((ulonglong)uVar8 * (ulonglong)uVar4) >> 0xf |
                  (uVar8 * iVar10 + (int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      puVar9 = local_68;
      uVar4 = (uint)local_64;
      local_54 = local_54 + 1;
      local_50 = local_50 + 1;
    } while (local_4c != (uint *)param_5);
  }
  *(uint *)(param_1 + 0x1dc) = uVar2;
  *(uint **)(param_1 + 0x1e0) = local_64;
  *(uint **)(param_1 + 0x1e4) = puVar12;
  *(uint **)(param_1 + 0x1e8) = local_68;
  return;
}

