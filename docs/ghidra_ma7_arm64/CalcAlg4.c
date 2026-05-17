/* CalcAlg4 @ 00151c14 1324B */


/* ARM::CFmSynth::CalcAlg4(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg4
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  iVar5 = *(int *)(param_1 + 0x238);
  uVar1 = *(uint *)(param_1 + 0x208);
  uVar2 = (uint)(iVar5 * *(int *)(param_1 + 0x274)) >> 0xf;
  uVar3 = (uint)(iVar5 * *(int *)(param_1 + 0x270)) >> 0xf;
  uVar4 = (uint)(iVar5 * *(int *)(param_1 + 0x278)) >> 0xf;
  lVar11 = *(long *)(param_1 + 0x268);
  iVar5 = *(int *)(param_1 + 0x210);
  iVar9 = *(int *)(param_1 + 0x214);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      lVar10 = 0;
      do {
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          pcVar7 = *(code **)(param_1 + 0xa0);
          iVar5 = 0;
          if (pcVar7 != (code *)0x0) goto LAB_00151f3c;
LAB_001520c8:
          pcVar7 = *(code **)(param_1 + 0x108);
          iVar9 = 0;
          if (pcVar7 != (code *)0x0) goto LAB_00151fa0;
LAB_001520d4:
          pcVar7 = *(code **)(param_1 + 0x170);
          iVar5 = 0;
          if (pcVar7 != (code *)0x0) goto LAB_00152004;
LAB_001520e0:
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
          pcVar7 = *(code **)(param_1 + 0xa0);
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
          if (pcVar7 == (code *)0x0) goto LAB_001520c8;
LAB_00151f3c:
          (*pcVar7)(param_1 + 0x80);
          iVar9 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar9 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                           iVar5 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) & 0x3ff
                                          ) * 2) >> 0xf;
          }
          pcVar7 = *(code **)(param_1 + 0x108);
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          if (pcVar7 == (code *)0x0) goto LAB_001520d4;
LAB_00151fa0:
          (*pcVar7)(param_1 + 0xe8);
          iVar5 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x110) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                           iVar9 >> 3) + (*(uint *)(param_1 + 0x11c) >> 0x16) &
                                          0x3ff) * 2) >> 0xf;
          }
          pcVar7 = *(code **)(param_1 + 0x170);
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
          if (pcVar7 == (code *)0x0) goto LAB_001520e0;
LAB_00152004:
          (*pcVar7)(param_1 + 0x150);
          if (*(int *)(param_1 + 0x1b0) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x178) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                           iVar5 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) &
                                          0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar5 = iVar5 * *(int *)(lVar11 + lVar10 * 4) >> 0xf;
        param_2[lVar10] = (int)(iVar5 * uVar3) >> 0xf;
        param_3[lVar10] = (int)(iVar5 * uVar2) >> 0xf;
        param_4[lVar10] = (int)(iVar5 * uVar4) >> 0xf;
        lVar10 = lVar10 + 1;
      } while (lVar10 != (ulong)(param_5 - 1) + 1);
    }
    iVar9 = 0;
    iVar5 = 0;
  }
  else if (param_5 != 0) {
    lVar10 = 0;
    iVar8 = iVar9;
    do {
      iVar9 = iVar5;
      iVar5 = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1 + 0x18);
        iVar5 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x40) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                         (iVar9 + iVar8 >> (uVar1 & 0x1f)) >> 3) +
                                         (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
        pcVar7 = *(code **)(param_1 + 0x108);
        iVar8 = 0;
        if (pcVar7 != (code *)0x0) goto LAB_00151d30;
LAB_00151ecc:
        iVar6 = 0;
      }
      else {
        (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
        iVar8 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar8 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                         iVar5 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) & 0x3ff)
                                 * 2) >> 0xf;
        }
        pcVar7 = *(code **)(param_1 + 0x108);
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        if (pcVar7 == (code *)0x0) goto LAB_00151ecc;
LAB_00151d30:
        (*pcVar7)(param_1 + 0xe8);
        iVar6 = 0;
        if (*(int *)(param_1 + 0x148) != 0) {
          iVar6 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x110) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                         iVar8 >> 3) + (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff)
                                 * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
      }
      iVar8 = 0;
      if (*(code **)(param_1 + 0x170) != (code *)0x0) {
        (**(code **)(param_1 + 0x170))(param_1 + 0x150);
        iVar8 = 0;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          iVar8 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x178) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                         iVar6 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) & 0x3ff)
                                 * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar8 = iVar8 * *(int *)(lVar11 + lVar10 * 4) >> 0xf;
      param_2[lVar10] = (int)(iVar8 * uVar3) >> 0xf;
      param_3[lVar10] = (int)(iVar8 * uVar2) >> 0xf;
      param_4[lVar10] = (int)(iVar8 * uVar4) >> 0xf;
      lVar10 = lVar10 + 1;
      iVar8 = iVar9;
    } while (lVar10 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar5;
  *(int *)(param_1 + 0x214) = iVar9;
  return;
}

