/* CalcAlg0 @ 0004afc0 626B */


/* ARM::CFmSynth::CalcAlg0(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg0
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *local_30;
  
  iVar7 = *(int *)(param_1 + 0x204);
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar2 = (uint)(*(int *)(param_1 + 0x224) * iVar7) >> 0xf;
  iVar9 = DAT_0004b234 + 0x4b00a;
  uVar11 = (uint)(*(int *)(param_1 + 0x228) * iVar7) >> 0xf;
  uVar12 = (uint)(*(int *)(param_1 + 0x22c) * iVar7) >> 0xf;
  iVar7 = *(int *)(param_1 + 0x1dc);
  iVar3 = *(int *)(param_1 + 0x1e0);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar8 = param_2 + -1;
      piVar5 = param_3 + -1;
      uVar1 = 0;
      piVar6 = *(int **)(param_1 + 0x220);
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
        iVar3 = 0;
        if (*(code **)(param_1 + 0x90) != (code *)0x0) {
          (**(code **)(param_1 + 0x90))(param_1 + 0x74);
          iVar3 = 0;
          if (*(int *)(param_1 + 200) != 0) {
            iVar3 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   ((*(uint *)(*(int *)(iVar9 + DAT_0004b238) +
                                              (uint)(byte)param_1[0x86] * 4) & iVar7 >> 3) +
                                    (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        uVar1 = uVar1 + 1;
        iVar7 = *piVar6 * iVar3 >> 0xf;
        piVar8 = piVar8 + 1;
        *piVar8 = (int)(uVar2 * iVar7) >> 0xf;
        piVar5 = piVar5 + 1;
        *piVar5 = (int)(uVar11 * iVar7) >> 0xf;
        *param_4 = (int)(uVar12 * iVar7) >> 0xf;
        piVar6 = piVar6 + 1;
        param_4 = param_4 + 1;
      } while (uVar1 != param_5);
    }
    iVar3 = 0;
    iVar7 = 0;
  }
  else if (param_5 != 0) {
    local_30 = param_2 + -1;
    piVar8 = param_3 + -1;
    uVar10 = 0;
    iVar4 = iVar3;
    piVar5 = *(int **)(param_1 + 0x220);
    do {
      iVar3 = iVar7;
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
                                 ((*(uint *)(*(int *)(iVar9 + DAT_0004b238) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar3 + iVar4 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x70) + *(uint *)(param_1 + 0x40);
      }
      iVar4 = 0;
      if (*(code **)(param_1 + 0x90) != (code *)0x0) {
        (**(code **)(param_1 + 0x90))(param_1 + 0x74);
        iVar4 = 0;
        if (*(int *)(param_1 + 200) != 0) {
          iVar4 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                 ((*(uint *)(*(int *)(iVar9 + DAT_0004b238) +
                                            (uint)(byte)param_1[0x86] * 4) & iVar7 >> 3) +
                                  (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(int *)(param_1 + 0xcc) + *(uint *)(param_1 + 0x9c);
      }
      uVar10 = uVar10 + 1;
      iVar4 = *piVar5 * iVar4 >> 0xf;
      local_30 = local_30 + 1;
      *local_30 = (int)(uVar2 * iVar4) >> 0xf;
      piVar8 = piVar8 + 1;
      *piVar8 = (int)(uVar11 * iVar4) >> 0xf;
      *param_4 = (int)(uVar12 * iVar4) >> 0xf;
      iVar4 = iVar3;
      piVar5 = piVar5 + 1;
      param_4 = param_4 + 1;
    } while (uVar10 != param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar7;
  *(int *)(param_1 + 0x1e0) = iVar3;
  return;
}

