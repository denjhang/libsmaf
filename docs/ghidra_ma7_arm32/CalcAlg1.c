/* CalcAlg1 @ 0004ad64 598B */


/* ARM::CFmSynth::CalcAlg1(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg1
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  
  iVar5 = *(int *)(param_1 + 0x204);
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar2 = (uint)(*(int *)(param_1 + 0x224) * iVar5) >> 0xf;
  uVar9 = (uint)(*(int *)(param_1 + 0x228) * iVar5) >> 0xf;
  uVar11 = (uint)(*(int *)(param_1 + 0x22c) * iVar5) >> 0xf;
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar10 = param_2 + -1;
      piVar8 = param_3 + -1;
      uVar1 = 0;
      piVar4 = *(int **)(param_1 + 0x220);
      do {
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar5 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(param_1 + 0x18);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)*(short *)(*(int *)(param_1 + 0x38) +
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
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        uVar1 = uVar1 + 1;
        iVar5 = *piVar4 * (iVar5 + iVar3 >> 1) >> 0xf;
        piVar10 = piVar10 + 1;
        *piVar10 = (int)(uVar2 * iVar5) >> 0xe;
        piVar8 = piVar8 + 1;
        *piVar8 = (int)(uVar9 * iVar5) >> 0xe;
        *param_4 = (int)(uVar11 * iVar5) >> 0xe;
        piVar4 = piVar4 + 1;
        param_4 = param_4 + 1;
      } while (uVar1 != param_5);
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    return;
  }
  piVar10 = param_2 + -1;
  piVar8 = param_3 + -1;
  uVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x1e0);
  piVar4 = *(int **)(param_1 + 0x220);
  iVar5 = *(int *)(param_1 + 0x1dc);
  if (param_5 != 0) {
    do {
      iVar6 = iVar5;
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        iVar5 = 0;
      }
      else {
        (**(code **)(param_1 + 0x34))(param_1 + 0x18);
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(DAT_0004afbc + 0x4ae0c) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar6 + iVar3 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
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
          iVar3 = (int)*(short *)(*(int *)(param_1 + 0x94) + (*(uint *)(param_1 + 0x9c) >> 0x16) * 2
                                 ) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      uVar7 = uVar7 + 1;
      iVar3 = *piVar4 * (iVar3 + iVar5 >> 1) >> 0xf;
      piVar10 = piVar10 + 1;
      *piVar10 = (int)(uVar2 * iVar3) >> 0xe;
      piVar8 = piVar8 + 1;
      *piVar8 = (int)(uVar9 * iVar3) >> 0xe;
      *param_4 = (int)(uVar11 * iVar3) >> 0xe;
      iVar3 = iVar6;
      piVar4 = piVar4 + 1;
      param_4 = param_4 + 1;
    } while (uVar7 != param_5);
    *(int *)(param_1 + 0x1dc) = iVar5;
    *(int *)(param_1 + 0x1e0) = iVar6;
    return;
  }
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc);
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0);
  return;
}

