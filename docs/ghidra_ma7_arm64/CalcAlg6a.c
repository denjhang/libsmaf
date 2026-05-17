/* CalcAlg6a @ 00152b30 1288B */


/* ARM::CFmSynth::CalcAlg6a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg6a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  
  iVar6 = *(int *)(param_1 + 0x238);
  lVar8 = *(long *)(param_1 + 0x268);
  uVar1 = *(uint *)(param_1 + 0x208);
  uVar10 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x274)) >> 0xf);
  uVar3 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x270)) >> 0xf);
  uVar4 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x278)) >> 0xf);
  iVar6 = *(int *)(param_1 + 0x210);
  iVar9 = *(int *)(param_1 + 0x214);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      lVar12 = 0;
      do {
        iVar6 = 0;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          (**(code **)(param_1 + 0x38))(param_1 + 0x18);
          iVar6 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar6 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x40) +
                                   (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
        }
        if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
          pcVar7 = *(code **)(param_1 + 0x108);
          iVar9 = 0;
          if (pcVar7 != (code *)0x0) goto LAB_00152e64;
LAB_00152fe4:
          iVar5 = 0;
        }
        else {
          (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
          iVar9 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar9 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                   (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          pcVar7 = *(code **)(param_1 + 0x108);
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          if (pcVar7 == (code *)0x0) goto LAB_00152fe4;
LAB_00152e64:
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
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
        }
        iVar9 = 0;
        if (*(code **)(param_1 + 0x170) != (code *)0x0) {
          (**(code **)(param_1 + 0x170))(param_1 + 0x150);
          iVar9 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar9 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x178) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                           iVar5 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) &
                                          0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar6 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar6 + iVar9);
        lVar2 = (long)iVar6 * (long)*(int *)(lVar8 + lVar12 * 4) * 0x20000 >> 0x20;
        param_2[lVar12] = (int)((long)(lVar2 * uVar3) >> 0xf);
        param_3[lVar12] = (int)((long)(lVar2 * uVar10) >> 0xf);
        param_4[lVar12] = (int)((long)(lVar2 * uVar4) >> 0xf);
        lVar12 = lVar12 + 1;
      } while (lVar12 != (ulong)(param_5 - 1) + 1);
    }
    iVar9 = 0;
    iVar6 = 0;
  }
  else if (param_5 != 0) {
    lVar12 = 0;
    iVar5 = iVar9;
    do {
      iVar9 = iVar6;
      iVar6 = 0;
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1 + 0x18);
        iVar6 = 0;
        if (*(int *)(param_1 + 0x78) != 0) {
          iVar6 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x40) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x2a] * 4) &
                                         (iVar9 + iVar5 >> (uVar1 & 0x1f)) >> 3) +
                                         (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
        pcVar7 = *(code **)(param_1 + 0x108);
        iVar5 = 0;
        if (pcVar7 != (code *)0x0) goto LAB_00152c30;
LAB_00152de4:
        iVar11 = 0;
      }
      else {
        (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
        iVar5 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar5 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                 (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
        }
        pcVar7 = *(code **)(param_1 + 0x108);
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        if (pcVar7 == (code *)0x0) goto LAB_00152de4;
LAB_00152c30:
        (*pcVar7)(param_1 + 0xe8);
        iVar11 = 0;
        if (*(int *)(param_1 + 0x148) != 0) {
          iVar11 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                   (int)*(short *)(*(long *)(param_1 + 0x110) +
                                  (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                    (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                          iVar5 >> 3) + (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff
                                         ) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
      }
      iVar5 = 0;
      if (*(code **)(param_1 + 0x170) != (code *)0x0) {
        (**(code **)(param_1 + 0x170))(param_1 + 0x150);
        iVar5 = 0;
        if (*(int *)(param_1 + 0x1b0) != 0) {
          iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x178) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                         iVar11 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16) & 0x3ff
                                        ) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar5 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar6 + iVar5);
      lVar2 = (long)iVar5 * (long)*(int *)(lVar8 + lVar12 * 4) * 0x20000 >> 0x20;
      param_2[lVar12] = (int)((long)(uVar3 * lVar2) >> 0xf);
      param_3[lVar12] = (int)((long)(lVar2 * uVar10) >> 0xf);
      param_4[lVar12] = (int)((long)(lVar2 * uVar4) >> 0xf);
      lVar12 = lVar12 + 1;
      iVar5 = iVar9;
    } while (lVar12 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar6;
  *(int *)(param_1 + 0x214) = iVar9;
  return;
}

