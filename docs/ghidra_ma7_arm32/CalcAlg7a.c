/* CalcAlg7a @ 0004c810 1068B */


/* ARM::CFmSynth::CalcAlg7a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg7a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint *local_5c;
  int *local_4c;
  uint *local_48;
  uint *local_34;
  uint *local_30;
  
  iVar7 = *(int *)(param_1 + 0x204);
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar9 = (uint)(*(int *)(param_1 + 0x228) * iVar7) >> 0xf;
  uVar2 = (uint)(*(int *)(param_1 + 0x22c) * iVar7) >> 0xf;
  iVar11 = DAT_0004cc3c + 0x4c864;
  uVar8 = (uint)(*(int *)(param_1 + 0x224) * iVar7) >> 0xf;
  iVar7 = *(int *)(param_1 + 0x1dc);
  iVar5 = *(int *)(param_1 + 0x1e0);
  local_4c = *(int **)(param_1 + 0x220);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      puVar10 = (uint *)(param_3 + -1);
      local_5c = (uint *)(param_2 + -1);
      uVar1 = 0;
      local_48 = (uint *)param_4;
      do {
        iVar7 = 0;
        if (*(code **)(param_1 + 0x34) != (code *)0x0) {
          (**(code **)(param_1 + 0x34))(param_1 + 0x18);
          iVar7 = 0;
          if (*(int *)(param_1 + 0x6c) != 0) {
            iVar7 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                   (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        iVar5 = 0;
        if (*(code **)(param_1 + 0x90) != (code *)0x0) {
          (**(code **)(param_1 + 0x90))(param_1 + 0x74);
          if (*(int *)(param_1 + 200) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        iVar6 = 0;
        if (*(code **)(param_1 + 0xec) != (code *)0x0) {
          (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
          iVar6 = 0;
          if (*(int *)(param_1 + 0x124) != 0) {
            iVar6 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                   ((*(uint *)(*(int *)(iVar11 + DAT_0004cc40) +
                                              (uint)(byte)param_1[0xe2] * 4) & iVar5 >> 3) +
                                    (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        iVar5 = 0;
        if (*(code **)(param_1 + 0x148) != (code *)0x0) {
          (**(code **)(param_1 + 0x148))(param_1 + 300);
          iVar5 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar5 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        iVar7 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar5 + iVar7 + iVar6);
        uVar1 = uVar1 + 1;
        uVar4 = (uint)((longlong)iVar7 * (longlong)*local_4c) >> 0xf |
                (int)((ulonglong)((longlong)iVar7 * (longlong)*local_4c) >> 0x20) << 0x11;
        iVar7 = (int)uVar4 >> 0x1f;
        local_5c = local_5c + 1;
        *local_5c = (uint)((ulonglong)uVar8 * (ulonglong)uVar4) >> 0xf |
                    (uVar8 * iVar7 + (int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
        puVar10 = puVar10 + 1;
        *puVar10 = (uint)((ulonglong)uVar9 * (ulonglong)uVar4) >> 0xf |
                   (uVar9 * iVar7 + (int)((ulonglong)uVar9 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
        *local_48 = (uint)((ulonglong)uVar2 * (ulonglong)uVar4) >> 0xf |
                    (uVar2 * iVar7 + (int)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
        local_4c = local_4c + 1;
        local_48 = local_48 + 1;
      } while (uVar1 != param_5);
    }
    iVar5 = 0;
    iVar7 = 0;
  }
  else if (param_5 != 0) {
    local_30 = (uint *)(param_2 + -1);
    local_34 = (uint *)(param_3 + -1);
    local_5c = (uint *)0x0;
    iVar6 = iVar5;
    local_48 = (uint *)param_4;
    do {
      iVar5 = iVar7;
      iVar7 = DAT_0004cc40;
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
                                  (iVar6 + iVar5 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        iVar6 = 0;
      }
      else {
        (**(code **)(param_1 + 0x90))(param_1 + 0x74);
        if (*(int *)(param_1 + 200) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)*(short *)(*(int *)(param_1 + 0x94) + (*(uint *)(param_1 + 0x9c) >> 0x16) * 2
                                 ) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      if (*(code **)(param_1 + 0xec) == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
        iVar3 = 0;
        if (*(int *)(param_1 + 0x124) != 0) {
          iVar3 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                 ((*(uint *)(*(int *)(iVar11 + DAT_0004cc40) +
                                            (uint)(byte)param_1[0xe2] * 4) & iVar6 >> 3) +
                                  (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
      }
      if (*(code **)(param_1 + 0x148) == (code *)0x0) {
        iVar6 = 0;
      }
      else {
        (**(code **)(param_1 + 0x148))(param_1 + 300);
        iVar6 = 0;
        if (*(int *)(param_1 + 0x180) != 0) {
          iVar6 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                 (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                  ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
      }
      iVar6 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar6 + iVar7 + iVar3);
      local_5c = (uint *)((int)local_5c + 1);
      uVar4 = (uint)((longlong)iVar6 * (longlong)*local_4c) >> 0xf |
              (int)((ulonglong)((longlong)iVar6 * (longlong)*local_4c) >> 0x20) << 0x11;
      iVar6 = (int)uVar4 >> 0x1f;
      local_30 = local_30 + 1;
      *local_30 = (uint)((ulonglong)uVar8 * (ulonglong)uVar4) >> 0xf |
                  (uVar8 * iVar6 + (int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      local_34 = local_34 + 1;
      *local_34 = (uint)((ulonglong)uVar9 * (ulonglong)uVar4) >> 0xf |
                  (uVar9 * iVar6 + (int)((ulonglong)uVar9 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      *local_48 = (uint)((ulonglong)uVar2 * (ulonglong)uVar4) >> 0xf |
                  (uVar2 * iVar6 + (int)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      iVar6 = iVar5;
      local_4c = local_4c + 1;
      local_48 = local_48 + 1;
    } while (local_5c != (uint *)param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar7;
  *(int *)(param_1 + 0x1e0) = iVar5;
  return;
}

