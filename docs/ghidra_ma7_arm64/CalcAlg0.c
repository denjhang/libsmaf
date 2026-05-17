/* CalcAlg0 @ 001503a4 824B */


/* ARM::CFmSynth::CalcAlg0(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg0
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  
  iVar5 = *(int *)(param_1 + 0x238);
  uVar1 = *(uint *)(param_1 + 0x208);
  uVar3 = (uint)(iVar5 * *(int *)(param_1 + 0x270)) >> 0xf;
  uVar4 = (uint)(iVar5 * *(int *)(param_1 + 0x274)) >> 0xf;
  uVar2 = (uint)(iVar5 * *(int *)(param_1 + 0x278)) >> 0xf;
  piVar8 = *(int **)(param_1 + 0x268);
  iVar5 = *(int *)(param_1 + 0x210);
  iVar7 = *(int *)(param_1 + 0x214);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar10 = piVar8;
      do {
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          iVar5 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(param_1 + 0x18);
          iVar5 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x40) +
                                   (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
        }
        iVar7 = 0;
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
          iVar7 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar7 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                           iVar5 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) & 0x3ff
                                          ) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        piVar9 = piVar10 + 1;
        iVar5 = iVar7 * *piVar10 >> 0xf;
        *param_2 = (int)(iVar5 * uVar3) >> 0xf;
        *param_3 = (int)(iVar5 * uVar4) >> 0xf;
        *param_4 = (int)(iVar5 * uVar2) >> 0xf;
        piVar10 = piVar9;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      } while (piVar9 != piVar8 + (ulong)(param_5 - 1) + 1);
    }
    iVar7 = 0;
    iVar5 = 0;
  }
  else if (param_5 != 0) {
    lVar11 = 0;
    iVar6 = iVar7;
    do {
      iVar7 = iVar5;
      if (*(code **)(param_1 + 0x38) == (code *)0x0) {
        iVar5 = 0;
      }
      else {
        (**(code **)(param_1 + 0x38))(param_1 + 0x18);
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x40) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                         (iVar7 + iVar6 >> (uVar1 & 0x1f)) >> 3) +
                                         (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      iVar6 = 0;
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
        iVar6 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar6 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                         iVar5 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) & 0x3ff)
                                 * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      iVar6 = iVar6 * piVar8[lVar11] >> 0xf;
      param_2[lVar11] = (int)(iVar6 * uVar3) >> 0xf;
      param_3[lVar11] = (int)(iVar6 * uVar4) >> 0xf;
      param_4[lVar11] = (int)(iVar6 * uVar2) >> 0xf;
      lVar11 = lVar11 + 1;
      iVar6 = iVar7;
    } while (lVar11 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar5;
  *(int *)(param_1 + 0x214) = iVar7;
  return;
}

