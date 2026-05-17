/* CalcAlg0a @ 0004b50c 826B */


/* ARM::CFmSynth::CalcAlg0a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg0a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int *local_4c;
  uint *local_48;
  uint *local_38;
  uint *local_34;
  
  iVar6 = *(int *)(param_1 + 0x204);
  uVar2 = *(uint *)(param_1 + 0x1d4);
  iVar13 = DAT_0004b848 + 0x4b54c;
  uVar7 = (uint)(*(int *)(param_1 + 0x228) * iVar6) >> 0xf;
  uVar5 = (uint)(*(int *)(param_1 + 0x224) * iVar6) >> 0xf;
  uVar3 = (uint)(*(int *)(param_1 + 0x22c) * iVar6) >> 0xf;
  iVar6 = *(int *)(param_1 + 0x1dc);
  iVar8 = *(int *)(param_1 + 0x1e0);
  local_4c = *(int **)(param_1 + 0x220);
  if (uVar2 == 0) {
    if (param_5 != 0) {
      puVar12 = (uint *)(param_2 + -1);
      puVar10 = (uint *)(param_3 + -1);
      uVar2 = 0;
      local_48 = (uint *)param_4;
      do {
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar6 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(param_1 + 0x18);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)*(short *)(*(int *)(param_1 + 0x38) +
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
          (**(code **)(param_1 + 0x90))(param_1 + 0x74);
          if (*(int *)(param_1 + 200) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   ((*(uint *)(*(int *)(iVar13 + DAT_0004b84c) +
                                              (uint)(byte)param_1[0x86] * 4) & iVar6 >> 3) +
                                    (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        uVar2 = uVar2 + 1;
        iVar6 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar6);
        uVar9 = (uint)((longlong)iVar6 * (longlong)*local_4c) >> 0xf |
                (int)((ulonglong)((longlong)iVar6 * (longlong)*local_4c) >> 0x20) << 0x11;
        iVar6 = (int)uVar9 >> 0x1f;
        puVar12 = puVar12 + 1;
        *puVar12 = (uint)((ulonglong)uVar5 * (ulonglong)uVar9) >> 0xf |
                   (uVar5 * iVar6 + (int)((ulonglong)uVar5 * (ulonglong)uVar9 >> 0x20)) * 0x20000;
        puVar10 = puVar10 + 1;
        *puVar10 = (uint)((ulonglong)uVar7 * (ulonglong)uVar9) >> 0xf |
                   (uVar7 * iVar6 + (int)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x20)) * 0x20000;
        *local_48 = (uint)((ulonglong)uVar3 * (ulonglong)uVar9) >> 0xf |
                    (uVar3 * iVar6 + (int)((ulonglong)uVar3 * (ulonglong)uVar9 >> 0x20)) * 0x20000;
        local_4c = local_4c + 1;
        local_48 = local_48 + 1;
      } while (uVar2 != param_5);
    }
    iVar8 = 0;
    iVar6 = 0;
  }
  else if (param_5 != 0) {
    local_34 = (uint *)(param_2 + -1);
    local_38 = (uint *)(param_3 + -1);
    uVar9 = 0;
    local_48 = (uint *)param_4;
    do {
      iVar11 = iVar6;
      iVar6 = DAT_0004b84c;
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        iVar6 = 0;
      }
      else {
        (**(code **)(param_1 + 0x34))(param_1 + 0x18);
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(iVar13 + iVar6) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar8 + iVar11 >> (uVar2 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      iVar1 = DAT_0004b84c;
      iVar8 = 0;
      if (*(code **)(param_1 + 0x90) != (code *)0x0) {
        (**(code **)(param_1 + 0x90))(param_1 + 0x74);
        if (*(int *)(param_1 + 200) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                 ((*(uint *)(*(int *)(iVar13 + iVar1) +
                                            (uint)(byte)param_1[0x86] * 4) & iVar6 >> 3) +
                                  (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      uVar9 = uVar9 + 1;
      iVar8 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar8);
      uVar4 = (uint)((longlong)iVar8 * (longlong)*local_4c) >> 0xf |
              (int)((ulonglong)((longlong)iVar8 * (longlong)*local_4c) >> 0x20) << 0x11;
      iVar8 = (int)uVar4 >> 0x1f;
      local_34 = local_34 + 1;
      *local_34 = (uint)((ulonglong)uVar5 * (ulonglong)uVar4) >> 0xf |
                  (uVar5 * iVar8 + (int)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      local_38 = local_38 + 1;
      *local_38 = (uint)((ulonglong)uVar7 * (ulonglong)uVar4) >> 0xf |
                  (uVar7 * iVar8 + (int)((ulonglong)uVar7 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      *local_48 = (uint)((ulonglong)uVar3 * (ulonglong)uVar4) >> 0xf |
                  (uVar3 * iVar8 + (int)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      iVar8 = iVar11;
      local_4c = local_4c + 1;
      local_48 = local_48 + 1;
    } while (uVar9 != param_5);
    *(int *)(param_1 + 0x1dc) = iVar6;
    *(int *)(param_1 + 0x1e0) = iVar11;
    return;
  }
  *(int *)(param_1 + 0x1dc) = iVar6;
  *(int *)(param_1 + 0x1e0) = iVar8;
  return;
}

