/* CalcAlg4a @ 0004d52c 1208B */


/* ARM::CFmSynth::CalcAlg4a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg4a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *local_5c;
  int *local_4c;
  uint *local_48;
  uint *local_34;
  uint *local_30;
  
  iVar7 = *(int *)(param_1 + 0x204);
  uVar2 = *(uint *)(param_1 + 0x1d4);
  uVar8 = (uint)(*(int *)(param_1 + 0x224) * iVar7) >> 0xf;
  uVar3 = (uint)(*(int *)(param_1 + 0x22c) * iVar7) >> 0xf;
  iVar11 = DAT_0004d9e4 + 0x4d580;
  uVar9 = (uint)(*(int *)(param_1 + 0x228) * iVar7) >> 0xf;
  iVar7 = *(int *)(param_1 + 0x1dc);
  iVar6 = *(int *)(param_1 + 0x1e0);
  local_4c = *(int **)(param_1 + 0x220);
  if (uVar2 == 0) {
    if (param_5 != 0) {
      puVar12 = (uint *)(param_3 + -1);
      local_5c = (uint *)(param_2 + -1);
      uVar2 = 0;
      local_48 = (uint *)param_4;
      do {
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(param_1 + 0x18);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                   (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        if (*(code **)(param_1 + 0x90) == (code *)0x0) {
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(param_1 + 0x74);
          if (*(int *)(param_1 + 200) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   ((*(uint *)(*(int *)(iVar11 + DAT_0004d9e8) +
                                              (uint)(byte)param_1[0x86] * 4) & iVar7 >> 3) +
                                    (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        iVar6 = DAT_0004d9e8;
        if (*(code **)(param_1 + 0xec) == (code *)0x0) {
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
          if (*(int *)(param_1 + 0x124) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                   ((*(uint *)(*(int *)(iVar11 + iVar6) +
                                              (uint)(byte)param_1[0xe2] * 4) & iVar7 >> 3) +
                                    (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        iVar6 = DAT_0004d9e8;
        if (*(code **)(param_1 + 0x148) == (code *)0x0) {
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0x148))(param_1 + 300);
          if (*(int *)(param_1 + 0x180) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   ((*(uint *)(*(int *)(iVar11 + iVar6) +
                                              (uint)(byte)param_1[0x13e] * 4) & iVar7 >> 3) +
                                    (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        uVar2 = uVar2 + 1;
        iVar7 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar7);
        uVar5 = (uint)((longlong)iVar7 * (longlong)*local_4c) >> 0xf |
                (int)((ulonglong)((longlong)iVar7 * (longlong)*local_4c) >> 0x20) << 0x11;
        iVar7 = (int)uVar5 >> 0x1f;
        local_5c = local_5c + 1;
        *local_5c = (uint)((ulonglong)uVar5 * (ulonglong)uVar8) >> 0xf |
                    (uVar8 * iVar7 + (int)((ulonglong)uVar5 * (ulonglong)uVar8 >> 0x20)) * 0x20000;
        puVar12 = puVar12 + 1;
        *puVar12 = (uint)((ulonglong)uVar5 * (ulonglong)uVar9) >> 0xf |
                   (uVar9 * iVar7 + (int)((ulonglong)uVar5 * (ulonglong)uVar9 >> 0x20)) * 0x20000;
        *local_48 = (uint)((ulonglong)uVar5 * (ulonglong)uVar3) >> 0xf |
                    (uVar3 * iVar7 + (int)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x20)) * 0x20000;
        local_4c = local_4c + 1;
        local_48 = local_48 + 1;
      } while (uVar2 != param_5);
    }
    iVar6 = 0;
    iVar7 = 0;
  }
  else if (param_5 != 0) {
    local_30 = (uint *)(param_2 + -1);
    local_34 = (uint *)(param_3 + -1);
    local_5c = (uint *)0x0;
    iVar10 = iVar6;
    local_48 = (uint *)param_4;
    do {
      iVar6 = iVar7;
      iVar7 = DAT_0004d9e8;
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        iVar7 = 0;
      }
      else {
        (**(code **)(param_1 + 0x34))(param_1 + 0x18);
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(iVar11 + iVar7) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar10 + iVar6 >> (uVar2 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      iVar10 = DAT_0004d9e8;
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        iVar10 = 0;
      }
      else {
        (**(code **)(param_1 + 0x90))(param_1 + 0x74);
        if (*(int *)(param_1 + 200) == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                  ((*(uint *)(*(int *)(iVar11 + iVar10) +
                                             (uint)(byte)param_1[0x86] * 4) & iVar7 >> 3) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                   ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      iVar4 = DAT_0004d9e8;
      if (*(code **)(param_1 + 0xec) == (code *)0x0) {
        iVar10 = 0;
      }
      else {
        (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
        if (*(int *)(param_1 + 0x124) == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                  ((*(uint *)(*(int *)(iVar11 + iVar4) +
                                             (uint)(byte)param_1[0xe2] * 4) & iVar10 >> 3) +
                                   (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                   ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf) >>
                   0xf;
        }
        *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
      }
      iVar1 = DAT_0004d9e8;
      iVar4 = 0;
      if (*(code **)(param_1 + 0x148) != (code *)0x0) {
        (**(code **)(param_1 + 0x148))(param_1 + 300);
        if (*(int *)(param_1 + 0x180) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                 ((*(uint *)(*(int *)(iVar11 + iVar1) +
                                            (uint)(byte)param_1[0x13e] * 4) & iVar10 >> 3) +
                                  (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
      }
      iVar10 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar4);
      local_5c = (uint *)((int)local_5c + 1);
      uVar5 = (uint)((longlong)iVar10 * (longlong)*local_4c) >> 0xf |
              (int)((ulonglong)((longlong)iVar10 * (longlong)*local_4c) >> 0x20) << 0x11;
      iVar10 = (int)uVar5 >> 0x1f;
      local_30 = local_30 + 1;
      *local_30 = (uint)((ulonglong)uVar5 * (ulonglong)uVar8) >> 0xf |
                  (uVar8 * iVar10 + (int)((ulonglong)uVar5 * (ulonglong)uVar8 >> 0x20)) * 0x20000;
      local_34 = local_34 + 1;
      *local_34 = (uint)((ulonglong)uVar5 * (ulonglong)uVar9) >> 0xf |
                  (uVar9 * iVar10 + (int)((ulonglong)uVar5 * (ulonglong)uVar9 >> 0x20)) * 0x20000;
      *local_48 = (uint)((ulonglong)uVar5 * (ulonglong)uVar3) >> 0xf |
                  (uVar3 * iVar10 + (int)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x20)) * 0x20000;
      iVar10 = iVar6;
      local_4c = local_4c + 1;
      local_48 = local_48 + 1;
    } while (local_5c != (uint *)param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar7;
  *(int *)(param_1 + 0x1e0) = iVar6;
  return;
}

