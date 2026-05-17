/* CalcAlg7 @ 00150d6c 1236B */


/* ARM::CFmSynth::CalcAlg7(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg7
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
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
  iVar9 = *(int *)(param_1 + 0x210);
  iVar6 = *(int *)(param_1 + 0x214);
  lVar11 = *(long *)(param_1 + 0x268);
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
          pcVar5 = *(code **)(param_1 + 0x108);
          iVar6 = 0;
          if (pcVar5 != (code *)0x0) goto LAB_00151070;
LAB_001511dc:
          iVar6 = 0;
        }
        else {
          (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
          iVar6 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar6 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                   (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          pcVar5 = *(code **)(param_1 + 0x108);
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          if (pcVar5 == (code *)0x0) goto LAB_001511dc;
LAB_00151070:
          (*pcVar5)(param_1 + 0xe8);
          if (*(int *)(param_1 + 0x148) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x110) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                           iVar6 >> 3) + (*(uint *)(param_1 + 0x11c) >> 0x16) &
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
                                   (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar9 = (iVar9 + iVar6 + iVar8 >> 2) * *(int *)(lVar11 + lVar10 * 4) >> 0xf;
        param_2[lVar10] = (int)(iVar9 * uVar2) >> 0xd;
        param_3[lVar10] = (int)(iVar9 * uVar3) >> 0xd;
        param_4[lVar10] = (int)(iVar9 * uVar4) >> 0xd;
        lVar10 = lVar10 + 1;
      } while (lVar10 != (ulong)(param_5 - 1) + 1);
    }
    iVar6 = 0;
    iVar9 = 0;
  }
  else if (param_5 != 0) {
    lVar10 = 0;
    iVar8 = iVar6;
    do {
      iVar6 = iVar9;
      iVar9 = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1 + 0x18);
        iVar9 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar9 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x40) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                         (iVar6 + iVar8 >> (uVar1 & 0x1f)) >> 3) +
                                         (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
        pcVar5 = *(code **)(param_1 + 0x108);
        iVar8 = 0;
        if (pcVar5 != (code *)0x0) goto LAB_00150e6c;
LAB_00151004:
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
        pcVar5 = *(code **)(param_1 + 0x108);
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        if (pcVar5 == (code *)0x0) goto LAB_00151004;
LAB_00150e6c:
        (*pcVar5)(param_1 + 0xe8);
        if (*(int *)(param_1 + 0x148) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x110) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                         iVar8 >> 3) + (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff)
                                 * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
      }
      iVar7 = 0;
      if (*(code **)(param_1 + 0x170) != (code *)0x0) {
        (**(code **)(param_1 + 0x170))(param_1 + 0x150);
        iVar7 = 0;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          iVar7 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x178) +
                                 (ulong)(*(uint *)(param_1 + 0x184) >> 0x16) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar8 = (iVar9 + iVar8 + iVar7 >> 2) * *(int *)(lVar11 + lVar10 * 4) >> 0xf;
      param_2[lVar10] = (int)(iVar8 * uVar2) >> 0xd;
      param_3[lVar10] = (int)(iVar8 * uVar3) >> 0xd;
      param_4[lVar10] = (int)(iVar8 * uVar4) >> 0xd;
      lVar10 = lVar10 + 1;
      iVar8 = iVar6;
    } while (lVar10 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar9;
  *(int *)(param_1 + 0x214) = iVar6;
  return;
}

