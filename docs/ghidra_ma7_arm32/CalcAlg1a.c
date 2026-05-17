/* CalcAlg1a @ 0004b23c 716B */


/* ARM::CFmSynth::CalcAlg1a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg1a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int *local_44;
  uint *local_40;
  uint *local_34;
  uint *local_30;
  
  iVar6 = *(int *)(param_1 + 0x204);
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar7 = (uint)(*(int *)(param_1 + 0x224) * iVar6) >> 0xf;
  uVar8 = (uint)(*(int *)(param_1 + 0x228) * iVar6) >> 0xf;
  uVar2 = (uint)(*(int *)(param_1 + 0x22c) * iVar6) >> 0xf;
  iVar6 = *(int *)(param_1 + 0x1dc);
  iVar5 = *(int *)(param_1 + 0x1e0);
  local_44 = *(int **)(param_1 + 0x220);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      puVar11 = (uint *)(param_2 + -1);
      puVar10 = (uint *)(param_3 + -1);
      uVar1 = 0;
      local_40 = (uint *)param_4;
      do {
        iVar6 = 0;
        if (*(code **)(param_1 + 0x34) != (code *)0x0) {
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
          iVar5 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(param_1 + 0x74);
          iVar5 = 0;
          if (*(int *)(param_1 + 200) != 0) {
            iVar5 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        iVar6 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar5 + iVar6);
        uVar1 = uVar1 + 1;
        uVar9 = (uint)((longlong)iVar6 * (longlong)*local_44) >> 0xf |
                (int)((ulonglong)((longlong)iVar6 * (longlong)*local_44) >> 0x20) << 0x11;
        iVar6 = (int)uVar9 >> 0x1f;
        puVar11 = puVar11 + 1;
        *puVar11 = (uint)((ulonglong)uVar7 * (ulonglong)uVar9) >> 0xf |
                   (uVar7 * iVar6 + (int)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x20)) * 0x20000;
        puVar10 = puVar10 + 1;
        *puVar10 = (uint)((ulonglong)uVar8 * (ulonglong)uVar9) >> 0xf |
                   (uVar8 * iVar6 + (int)((ulonglong)uVar8 * (ulonglong)uVar9 >> 0x20)) * 0x20000;
        *local_40 = (uint)((ulonglong)uVar2 * (ulonglong)uVar9) >> 0xf |
                    (uVar2 * iVar6 + (int)((ulonglong)uVar2 * (ulonglong)uVar9 >> 0x20)) * 0x20000;
        local_44 = local_44 + 1;
        local_40 = local_40 + 1;
      } while (uVar1 != param_5);
    }
    iVar5 = 0;
    iVar6 = 0;
  }
  else if (param_5 != 0) {
    local_30 = (uint *)(param_2 + -1);
    local_34 = (uint *)(param_3 + -1);
    uVar9 = 0;
    iVar3 = iVar5;
    local_40 = (uint *)param_4;
    do {
      iVar5 = iVar6;
      iVar6 = 0;
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))(param_1 + 0x18);
        iVar6 = 0;
        if (*(int *)(param_1 + 0x6c) != 0) {
          iVar6 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(DAT_0004b508 + 0x4b396) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar3 + iVar5 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        (**(code **)(param_1 + 0x90))(param_1 + 0x74);
        iVar3 = 0;
        if (*(int *)(param_1 + 200) != 0) {
          iVar3 = (int)*(short *)(*(int *)(param_1 + 0x94) + (*(uint *)(param_1 + 0x9c) >> 0x16) * 2
                                 ) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      iVar3 = CLpf::Generate(*(CLpf **)(param_1 + 0x20c),iVar3 + iVar6);
      uVar9 = uVar9 + 1;
      uVar4 = (uint)((longlong)iVar3 * (longlong)*local_44) >> 0xf |
              (int)((ulonglong)((longlong)iVar3 * (longlong)*local_44) >> 0x20) << 0x11;
      iVar3 = (int)uVar4 >> 0x1f;
      local_30 = local_30 + 1;
      *local_30 = (uint)((ulonglong)uVar7 * (ulonglong)uVar4) >> 0xf |
                  (uVar7 * iVar3 + (int)((ulonglong)uVar7 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      local_34 = local_34 + 1;
      *local_34 = (uint)((ulonglong)uVar8 * (ulonglong)uVar4) >> 0xf |
                  (uVar8 * iVar3 + (int)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      *local_40 = (uint)((ulonglong)uVar2 * (ulonglong)uVar4) >> 0xf |
                  (uVar2 * iVar3 + (int)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x20)) * 0x20000;
      iVar3 = iVar5;
      local_44 = local_44 + 1;
      local_40 = local_40 + 1;
    } while (uVar9 != param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar6;
  *(int *)(param_1 + 0x1e0) = iVar5;
  return;
}

