/* CalcAlg3a @ 0015262c 1284B */


/* ARM::CFmSynth::CalcAlg3a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg3a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  
  iVar6 = *(int *)(param_1 + 0x238);
  uVar1 = *(uint *)(param_1 + 0x208);
  uVar9 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x270)) >> 0xf);
  lVar12 = *(long *)(param_1 + 0x268);
  uVar3 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x274)) >> 0xf);
  uVar4 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x278)) >> 0xf);
  iVar6 = *(int *)(param_1 + 0x210);
  iVar10 = *(int *)(param_1 + 0x214);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      lVar11 = 0;
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
          pcVar8 = *(code **)(param_1 + 0x108);
          iVar10 = 0;
          if (pcVar8 != (code *)0x0) goto LAB_00152958;
LAB_00152ad4:
          iVar5 = 0;
        }
        else {
          (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
          iVar10 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar10 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          pcVar8 = *(code **)(param_1 + 0x108);
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
          if (pcVar8 == (code *)0x0) goto LAB_00152ad4;
LAB_00152958:
          (*pcVar8)(param_1 + 0xe8);
          iVar5 = 0;
          if (*(int *)(param_1 + 0x148) != 0) {
            iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x110) +
                                   (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                     (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                           iVar10 >> 3) + (*(uint *)(param_1 + 0x11c) >> 0x16) &
                                          0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x11c) = *(int *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x11c);
        }
        iVar10 = 0;
        if (*(code **)(param_1 + 0x170) != (code *)0x0) {
          (**(code **)(param_1 + 0x170))(param_1 + 0x150);
          iVar10 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            iVar10 = ((int)((uint)*(ushort *)(param_1 + 0x1a6) * *(int *)(param_1 + 0x1b0)) >> 0xf)
                     * (int)*(short *)(*(long *)(param_1 + 0x178) +
                                      (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                        (long)(int)(uint)(byte)param_1[0x162] * 4) &
                                              iVar6 + iVar5 >> 3) +
                                              (*(uint *)(param_1 + 0x184) >> 0x16) & 0x3ff) * 2) >>
                     0xf;
          }
          *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
        }
        iVar6 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar10);
        lVar2 = (long)iVar6 * (long)*(int *)(lVar12 + lVar11 * 4) * 0x20000 >> 0x20;
        param_2[lVar11] = (int)((long)(uVar9 * lVar2) >> 0xf);
        param_3[lVar11] = (int)((long)(lVar2 * uVar3) >> 0xf);
        param_4[lVar11] = (int)((long)(lVar2 * uVar4) >> 0xf);
        lVar11 = lVar11 + 1;
      } while (lVar11 != (ulong)(param_5 - 1) + 1);
    }
    iVar10 = 0;
    iVar6 = 0;
  }
  else if (param_5 != 0) {
    lVar11 = 0;
    iVar5 = iVar10;
    do {
      iVar10 = iVar6;
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
                                         (iVar10 + iVar5 >> (uVar1 & 0x1f)) >> 3) +
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
      iVar7 = 0;
      if (*(code **)(param_1 + 0x108) != (code *)0x0) {
        (**(code **)(param_1 + 0x108))(param_1 + 0xe8);
        iVar7 = 0;
        if (*(int *)(param_1 + 0x148) != 0) {
          iVar7 = ((int)((uint)*(ushort *)(param_1 + 0x13e) * *(int *)(param_1 + 0x148)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0x110) +
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0xfa] * 4) &
                                         iVar5 >> 3) + (*(uint *)(param_1 + 0x11c) >> 0x16) & 0x3ff)
                                 * 2) >> 0xf;
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
                                         iVar6 + iVar7 >> 3) + (*(uint *)(param_1 + 0x184) >> 0x16)
                                        & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x1b4) + *(uint *)(param_1 + 0x184);
      }
      iVar5 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar5);
      lVar2 = (long)iVar5 * (long)*(int *)(lVar12 + lVar11 * 4) * 0x20000 >> 0x20;
      param_2[lVar11] = (int)((long)(lVar2 * uVar9) >> 0xf);
      param_3[lVar11] = (int)((long)(lVar2 * uVar3) >> 0xf);
      param_4[lVar11] = (int)((long)(lVar2 * uVar4) >> 0xf);
      lVar11 = lVar11 + 1;
      iVar5 = iVar10;
    } while (lVar11 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar6;
  *(int *)(param_1 + 0x214) = iVar10;
  return;
}

