/* CalcAlg3 @ 00151240 1244B */


/* ARM::CFmSynth::CalcAlg3(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg3
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  iVar9 = *(int *)(param_1 + 0x238);
  uVar1 = *(uint *)(param_1 + 0x208);
  uVar2 = (uint)(iVar9 * *(int *)(param_1 + 0x270)) >> 0xf;
  uVar3 = (uint)(iVar9 * *(int *)(param_1 + 0x274)) >> 0xf;
  uVar4 = (uint)(iVar9 * *(int *)(param_1 + 0x278)) >> 0xf;
  lVar11 = *(long *)(param_1 + 0x268);
  iVar9 = *(int *)(param_1 + 0x210);
  iVar7 = *(int *)(param_1 + 0x214);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      lVar10 = 0;
      do {
        iVar9 = 0;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          (**(code **)(param_1 + 0x38))(param_1 + 0x18);
          iVar9 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar9 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x40) +
                                   (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
        }
        if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
          pcVar6 = *(code **)(param_1 + 0x108);
          iVar7 = 0;
          if (pcVar6 != (code *)0x0) goto LAB_00151548;
LAB_001516bc:
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
          iVar7 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar7 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                   (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          pcVar6 = *(code **)(param_1 + 0x108);
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          if (pcVar6 == (code *)0x0) goto LAB_001516bc;
LAB_00151548:
          (*pcVar6)(param_1 + 0xe8);
          if (*(int *)(param_1 + 0x148) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x110) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                           iVar7 >> 3) + (*(uint *)(param_1 + 0x11c) >> 0x16) &
                                          0x3ff) * 2) >> 0xf;
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
                                           iVar9 + iVar7 >> 3) +
                                           (*(uint *)(param_1 + 0x184) >> 0x16) & 0x3ff) * 2) >>
                    0x10;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar9 = iVar8 * *(int *)(lVar11 + lVar10 * 4) >> 0xf;
        param_2[lVar10] = (int)(iVar9 * uVar2) >> 0xe;
        param_3[lVar10] = (int)(iVar9 * uVar3) >> 0xe;
        param_4[lVar10] = (int)(iVar9 * uVar4) >> 0xe;
        lVar10 = lVar10 + 1;
      } while (lVar10 != (ulong)(param_5 - 1) + 1);
    }
    iVar7 = 0;
    iVar9 = 0;
  }
  else if (param_5 != 0) {
    lVar10 = 0;
    iVar8 = iVar7;
    do {
      iVar7 = iVar9;
      iVar9 = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1 + 0x18);
        iVar9 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar9 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x40) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                         (iVar7 + iVar8 >> (uVar1 & 0x1f)) >> 3) +
                                         (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
        iVar8 = 0;
      }
      else {
        (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
        iVar8 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar8 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                 (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      iVar5 = 0;
      if (*(code **)(param_1 + 0x108) != (code *)0x0) {
        (**(code **)(param_1 + 0x108))(param_1 + 0xe8);
        iVar5 = 0;
        if (*(int *)(param_1 + 0x148) != 0) {
          iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
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
                                         iVar9 + iVar5 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16)
                                        & 0x3ff) * 2) >> 0x10;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar8 = iVar8 * *(int *)(lVar11 + lVar10 * 4) >> 0xf;
      param_2[lVar10] = (int)(iVar8 * uVar2) >> 0xe;
      param_3[lVar10] = (int)(iVar8 * uVar3) >> 0xe;
      param_4[lVar10] = (int)(iVar8 * uVar4) >> 0xe;
      lVar10 = lVar10 + 1;
      iVar8 = iVar7;
    } while (lVar10 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar9;
  *(int *)(param_1 + 0x214) = iVar7;
  return;
}

