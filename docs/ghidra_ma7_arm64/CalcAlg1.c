/* CalcAlg1 @ 00150074 816B */


/* ARM::CFmSynth::CalcAlg1(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg1
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  
  iVar6 = *(int *)(param_1 + 0x238);
  uVar1 = *(uint *)(param_1 + 0x208);
  uVar2 = (uint)(iVar6 * *(int *)(param_1 + 0x274)) >> 0xf;
  uVar3 = (uint)(iVar6 * *(int *)(param_1 + 0x270)) >> 0xf;
  uVar4 = (uint)(iVar6 * *(int *)(param_1 + 0x278)) >> 0xf;
  piVar8 = *(int **)(param_1 + 0x268);
  iVar6 = *(int *)(param_1 + 0x210);
  iVar11 = *(int *)(param_1 + 0x214);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar10 = piVar8;
      do {
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          pcVar7 = *(code **)(param_1 + 0xa0);
          iVar6 = 0;
          if (pcVar7 != (code *)0x0) goto LAB_0015029c;
LAB_00150344:
          iVar11 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(param_1 + 0x18);
          iVar6 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar6 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x40) +
                                   (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          pcVar7 = *(code **)(param_1 + 0xa0);
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
          if (pcVar7 == (code *)0x0) goto LAB_00150344;
LAB_0015029c:
          (*pcVar7)(param_1 + 0x80);
          if (*(int *)(param_1 + 0xe0) == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        piVar9 = piVar10 + 1;
        iVar6 = (iVar6 + iVar11 >> 1) * *piVar10 >> 0xf;
        *param_2 = (int)(iVar6 * uVar3) >> 0xe;
        *param_3 = (int)(iVar6 * uVar2) >> 0xe;
        *param_4 = (int)(iVar6 * uVar4) >> 0xe;
        piVar10 = piVar9;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      } while (piVar9 != piVar8 + (ulong)(param_5 - 1) + 1);
    }
    iVar11 = 0;
    iVar6 = 0;
  }
  else if (param_5 != 0) {
    lVar12 = 0;
    iVar5 = iVar11;
    do {
      iVar11 = iVar6;
      if (*(code **)(param_1 + 0x38) == (code *)0x0) {
        iVar6 = 0;
      }
      else {
        (**(code **)(param_1 + 0x38))(param_1 + 0x18);
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x40) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                         (iVar11 + iVar5 >> (uVar1 & 0x1f)) >> 3) +
                                         (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      iVar5 = 0;
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
        iVar5 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar5 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                 (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      iVar5 = (iVar6 + iVar5 >> 1) * piVar8[lVar12] >> 0xf;
      param_2[lVar12] = (int)(iVar5 * uVar3) >> 0xe;
      param_3[lVar12] = (int)(iVar5 * uVar2) >> 0xe;
      param_4[lVar12] = (int)(iVar5 * uVar4) >> 0xe;
      lVar12 = lVar12 + 1;
      iVar5 = iVar11;
    } while (lVar12 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar6;
  *(int *)(param_1 + 0x214) = iVar11;
  return;
}

