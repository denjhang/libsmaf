/* CalcAlg2a @ 0004e8e0 2144B */


/* ARM::CFmSynth::CalcAlg2a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg2a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  _tagFMSLOTINFO *p_Var6;
  _tagFMSLOTINFO *p_Var7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  _tagFMSLOTINFO *p_Var13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  _tagFMSLOTINFO *p_Var18;
  int *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_30;
  uint *local_2c;
  
  iVar9 = *(int *)(param_1 + 0x204);
  p_Var13 = param_1 + 0x74;
  p_Var18 = param_1 + 0xd0;
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar16 = *(uint *)(param_1 + 0x1d8);
  local_60 = *(int **)(param_1 + 0x220);
  uVar10 = (uint)(*(int *)(param_1 + 0x224) * iVar9) >> 0xf;
  iVar2 = *(int *)(param_1 + 0x1dc);
  p_Var6 = param_1 + 0x18;
  p_Var7 = param_1 + 300;
  uVar14 = (uint)(*(int *)(param_1 + 0x228) * iVar9) >> 0xf;
  iVar8 = DAT_0004f140 + 0x4e944;
  uVar11 = (uint)(*(int *)(param_1 + 0x22c) * iVar9) >> 0xf;
  iVar9 = *(int *)(param_1 + 0x1e0);
  puVar17 = *(uint **)(param_1 + 0x1e4);
  local_50 = *(uint **)(param_1 + 0x1e8);
  if (uVar1 == 0) {
    if (uVar16 == 0) {
      if (param_5 != 0) {
        puVar17 = (uint *)(param_2 + -1);
        puVar12 = (uint *)(param_3 + -1);
        uVar1 = 0;
        local_5c = (uint *)param_4;
        do {
          iVar2 = 0;
          if (*(code **)(param_1 + 0x34) != (code *)0x0) {
            (**(code **)(param_1 + 0x34))(p_Var6);
            iVar2 = 0;
            if (*(int *)(param_1 + 0x6c) != 0) {
              iVar2 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                     (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                      ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf)
                      >> 0xf;
            }
            *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
          }
          iVar9 = 0;
          if (*(code **)(param_1 + 0x90) != (code *)0x0) {
            (**(code **)(param_1 + 0x90))(p_Var13);
            iVar9 = 0;
            if (*(int *)(param_1 + 200) != 0) {
              iVar9 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                     (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                      ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                      0xf;
            }
            *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
          }
          if (*(code **)(param_1 + 0xec) == (code *)0x0) {
            iVar8 = 0;
          }
          else {
            (**(code **)(param_1 + 0xec))(p_Var18);
            iVar8 = 0;
            if (*(int *)(param_1 + 0x124) != 0) {
              iVar8 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                     (*(uint *)(param_1 + 0xf8) >> 0x16) * 2) *
                      ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                      >> 0xf;
            }
            *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
          }
          if (*(code **)(param_1 + 0x148) == (code *)0x0) {
            iVar15 = 0;
          }
          else {
            (**(code **)(param_1 + 0x148))(p_Var7);
            iVar15 = 0;
            if (*(int *)(param_1 + 0x180) != 0) {
              iVar15 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                      (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                       ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf
                       ) >> 0xf;
            }
            *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
          }
          iVar2 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar15 + iVar2 + iVar9 + iVar8);
          uVar1 = uVar1 + 1;
          uVar16 = (uint)((longlong)iVar2 * (longlong)*local_60) >> 0xf |
                   (int)((ulonglong)((longlong)iVar2 * (longlong)*local_60) >> 0x20) << 0x11;
          iVar2 = (int)uVar16 >> 0x1f;
          puVar17 = puVar17 + 1;
          *puVar17 = (uint)((ulonglong)uVar16 * (ulonglong)uVar10) >> 0xf |
                     (uVar10 * iVar2 + (int)((ulonglong)uVar16 * (ulonglong)uVar10 >> 0x20)) *
                     0x20000;
          puVar12 = puVar12 + 1;
          *puVar12 = (uint)((ulonglong)uVar14 * (ulonglong)uVar16) >> 0xf |
                     (uVar14 * iVar2 + (int)((ulonglong)uVar14 * (ulonglong)uVar16 >> 0x20)) *
                     0x20000;
          *local_5c = (uint)((ulonglong)uVar16 * (ulonglong)uVar11) >> 0xf |
                      (uVar11 * iVar2 + (int)((ulonglong)uVar16 * (ulonglong)uVar11 >> 0x20)) *
                      0x20000;
          local_60 = local_60 + 1;
          local_5c = local_5c + 1;
        } while (uVar1 != param_5);
      }
      local_50 = (uint *)0x0;
      puVar17 = (uint *)0x0;
      iVar2 = 0;
      iVar9 = 0;
    }
    else if (param_5 == 0) {
      iVar9 = 0;
      iVar2 = 0;
    }
    else {
      local_58 = (uint *)(param_2 + -1);
      local_54 = (uint *)(param_3 + -1);
      uVar1 = 0;
      iVar2 = (int)local_50;
      local_5c = (uint *)param_4;
      do {
        local_50 = puVar17;
        if (*(code **)(param_1 + 0xec) == (code *)0x0) {
          puVar17 = (uint *)0x0;
        }
        else {
          (**(code **)(param_1 + 0xec))(p_Var18);
          if (*(int *)(param_1 + 0x124) == 0) {
            puVar17 = (uint *)0x0;
          }
          else {
            puVar17 = (uint *)((int)*(short *)(*(int *)(param_1 + 0xf0) +
                                              ((*(uint *)(*(int *)(iVar8 + DAT_0004f144) +
                                                         (uint)(byte)param_1[0xe2] * 4) &
                                               (iVar2 + (int)local_50 >> (uVar16 & 0xff)) >> 3) +
                                               (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                               ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)
                                     ) >> 0xf) >> 0xf);
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(p_Var6);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                   (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        iVar9 = 0;
        if (*(code **)(param_1 + 0x90) != (code *)0x0) {
          (**(code **)(param_1 + 0x90))(p_Var13);
          iVar9 = 0;
          if (*(int *)(param_1 + 200) != 0) {
            iVar9 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        if (*(code **)(param_1 + 0x148) == (code *)0x0) {
          iVar15 = 0;
        }
        else {
          (**(code **)(param_1 + 0x148))(p_Var7);
          iVar15 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar15 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                    (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                     ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                     >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        iVar2 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar15 + iVar2 + (int)puVar17 + iVar9);
        uVar1 = uVar1 + 1;
        uVar4 = (uint)((longlong)iVar2 * (longlong)*local_60) >> 0xf |
                (int)((ulonglong)((longlong)iVar2 * (longlong)*local_60) >> 0x20) << 0x11;
        iVar2 = (int)uVar4 >> 0x1f;
        local_58 = local_58 + 1;
        *local_58 = (uint)((ulonglong)uVar4 * (ulonglong)uVar10) >> 0xf |
                    (uVar10 * iVar2 + (int)((ulonglong)uVar4 * (ulonglong)uVar10 >> 0x20)) * 0x20000
        ;
        local_54 = local_54 + 1;
        *local_54 = (uint)((ulonglong)uVar4 * (ulonglong)uVar14) >> 0xf |
                    (uVar14 * iVar2 + (int)((ulonglong)uVar4 * (ulonglong)uVar14 >> 0x20)) * 0x20000
        ;
        *local_5c = (uint)((ulonglong)uVar4 * (ulonglong)uVar11) >> 0xf |
                    (uVar11 * iVar2 + (int)((ulonglong)uVar4 * (ulonglong)uVar11 >> 0x20)) * 0x20000
        ;
        iVar2 = (int)local_50;
        local_60 = local_60 + 1;
        local_5c = local_5c + 1;
      } while (uVar1 != param_5);
      iVar2 = 0;
      iVar9 = 0;
    }
  }
  else if (uVar16 == 0) {
    if (param_5 == 0) {
      puVar17 = (uint *)0x0;
      local_50 = (uint *)0x0;
    }
    else {
      local_58 = (uint *)(param_2 + -1);
      local_50 = (uint *)(param_3 + -1);
      uVar16 = 0;
      iVar15 = iVar9;
      local_5c = (uint *)param_4;
      do {
        iVar9 = iVar2;
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(p_Var6);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                   ((*(uint *)(*(int *)(iVar8 + DAT_0004f144) +
                                              (uint)(byte)param_1[0x2a] * 4) &
                                    (iVar15 + iVar9 >> (uVar1 & 0xff)) >> 3) +
                                    (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        if (*(code **)(param_1 + 0x90) == (code *)0x0) {
          iVar15 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(p_Var13);
          iVar15 = 0;
          if (*(int *)(param_1 + 200) != 0) {
            iVar15 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                    (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                     ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        iVar3 = 0;
        if (*(code **)(param_1 + 0xec) != (code *)0x0) {
          (**(code **)(param_1 + 0xec))(p_Var18);
          iVar3 = 0;
          if (*(int *)(param_1 + 0x124) != 0) {
            iVar3 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                   (*(uint *)(param_1 + 0xf8) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        if (*(code **)(param_1 + 0x148) == (code *)0x0) {
          iVar5 = 0;
        }
        else {
          (**(code **)(param_1 + 0x148))(p_Var7);
          iVar5 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar5 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        iVar15 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar5 + iVar15 + iVar2 + iVar3);
        uVar16 = uVar16 + 1;
        uVar4 = (uint)((longlong)iVar15 * (longlong)*local_60) >> 0xf |
                (int)((ulonglong)((longlong)iVar15 * (longlong)*local_60) >> 0x20) << 0x11;
        iVar15 = (int)uVar4 >> 0x1f;
        local_58 = local_58 + 1;
        *local_58 = (uint)((ulonglong)uVar10 * (ulonglong)uVar4) >> 0xf |
                    (uVar10 * iVar15 + (int)((ulonglong)uVar10 * (ulonglong)uVar4 >> 0x20)) *
                    0x20000;
        local_50 = local_50 + 1;
        *local_50 = (uint)((ulonglong)uVar14 * (ulonglong)uVar4) >> 0xf |
                    (uVar14 * iVar15 + (int)((ulonglong)uVar14 * (ulonglong)uVar4 >> 0x20)) *
                    0x20000;
        *local_5c = (uint)((ulonglong)uVar11 * (ulonglong)uVar4) >> 0xf |
                    (uVar11 * iVar15 + (int)((ulonglong)uVar11 * (ulonglong)uVar4 >> 0x20)) *
                    0x20000;
        iVar15 = iVar9;
        local_60 = local_60 + 1;
        local_5c = local_5c + 1;
      } while (uVar16 != param_5);
      local_50 = (uint *)0x0;
      puVar17 = (uint *)0x0;
    }
  }
  else if (param_5 != 0) {
    local_2c = (uint *)(param_2 + -1);
    local_30 = (uint *)(param_3 + -1);
    local_58 = (uint *)0x0;
    iVar15 = iVar9;
    puVar12 = local_50;
    local_5c = (uint *)param_4;
    do {
      local_50 = puVar17;
      iVar9 = iVar2;
      iVar3 = DAT_0004f144;
      iVar2 = 0;
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))(p_Var6);
        iVar2 = 0;
        if (*(int *)(param_1 + 0x6c) != 0) {
          iVar2 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(iVar8 + iVar3) + (uint)(byte)param_1[0x2a] * 4
                                            ) & (iVar15 + iVar9 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        iVar15 = 0;
      }
      else {
        (**(code **)(param_1 + 0x90))(p_Var13);
        if (*(int *)(param_1 + 200) == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                  (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                   ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      if (*(code **)(param_1 + 0xec) == (code *)0x0) {
        puVar17 = (uint *)0x0;
      }
      else {
        (**(code **)(param_1 + 0xec))(p_Var18);
        if (*(int *)(param_1 + 0x124) == 0) {
          puVar17 = (uint *)0x0;
        }
        else {
          puVar17 = (uint *)((int)*(short *)(*(int *)(param_1 + 0xf0) +
                                            ((*(uint *)(*(int *)(iVar8 + DAT_0004f144) +
                                                       (uint)(byte)param_1[0xe2] * 4) &
                                             ((int)puVar12 + (int)local_50 >> (uVar16 & 0xff)) >> 3)
                                             + (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                             ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a))
                             >> 0xf) >> 0xf);
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
                                 (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                  ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
      }
      iVar15 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar3 + iVar15 + iVar2 + (int)puVar17);
      local_58 = (uint *)((int)local_58 + 1);
      uVar4 = (uint)((longlong)iVar15 * (longlong)*local_60) >> 0xf |
              (int)((ulonglong)((longlong)iVar15 * (longlong)*local_60) >> 0x20) << 0x11;
      iVar15 = (int)uVar4 >> 0x1f;
      local_2c = local_2c + 1;
      *local_2c = (uint)((ulonglong)uVar10 * (ulonglong)uVar4) >> 0xf |
                  (uVar10 * iVar15 + (int)((ulonglong)uVar10 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      local_30 = local_30 + 1;
      *local_30 = (uint)((ulonglong)uVar14 * (ulonglong)uVar4) >> 0xf |
                  (uVar14 * iVar15 + (int)((ulonglong)uVar14 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      *local_5c = (uint)((ulonglong)uVar11 * (ulonglong)uVar4) >> 0xf |
                  (uVar11 * iVar15 + (int)((ulonglong)uVar11 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      iVar15 = iVar9;
      puVar12 = local_50;
      local_60 = local_60 + 1;
      local_5c = local_5c + 1;
    } while (local_58 != (uint *)param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar2;
  *(int *)(param_1 + 0x1e0) = iVar9;
  *(uint **)(param_1 + 0x1e4) = puVar17;
  *(uint **)(param_1 + 0x1e8) = local_50;
  return;
}

