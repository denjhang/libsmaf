/* CalcAlg0a @ 00150a1c 848B */


/* ARM::CFmSynth::CalcAlg0a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg0a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  
  iVar6 = *(int *)(param_1 + 0x238);
  uVar1 = *(uint *)(param_1 + 0x208);
  uVar3 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x270)) >> 0xf);
  piVar12 = *(int **)(param_1 + 0x268);
  uVar9 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x274)) >> 0xf);
  uVar4 = (ulong)((uint)(iVar6 * *(int *)(param_1 + 0x278)) >> 0xf);
  iVar6 = *(int *)(param_1 + 0x210);
  iVar11 = *(int *)(param_1 + 0x214);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar8 = param_3;
      do {
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          iVar6 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(param_1 + 0x18);
          iVar6 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar6 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x40) +
                                   (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
        }
        iVar11 = 0;
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
          iVar11 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar11 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                      (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                            iVar6 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) &
                                           0x3ff) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        iVar6 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar11);
        lVar10 = (long)iVar6 * (long)*piVar12 * 0x20000 >> 0x20;
        *param_2 = (int)((long)(uVar3 * lVar10) >> 0xf);
        piVar7 = piVar8 + 1;
        *piVar8 = (int)((long)(lVar10 * uVar9) >> 0xf);
        *param_4 = (int)((long)(lVar10 * uVar4) >> 0xf);
        piVar8 = piVar7;
        piVar12 = piVar12 + 1;
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
      } while (piVar7 != param_3 + (ulong)(param_5 - 1) + 1);
    }
    iVar11 = 0;
    iVar6 = 0;
  }
  else if (param_5 != 0) {
    lVar10 = 0;
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
                                 (ulong)((*(uint *)(PTR_adMask_00567598 +
                                                   (long)(int)(uint)(byte)param_1[0x92] * 4) &
                                         iVar6 >> 3) + (*(uint *)(param_1 + 0xb4) >> 0x16) & 0x3ff)
                                 * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      iVar5 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar5);
      lVar2 = (long)iVar5 * (long)piVar12[lVar10] * 0x20000 >> 0x20;
      param_2[lVar10] = (int)((long)(uVar3 * lVar2) >> 0xf);
      param_3[lVar10] = (int)((long)(uVar9 * lVar2) >> 0xf);
      param_4[lVar10] = (int)((long)(uVar4 * lVar2) >> 0xf);
      lVar10 = lVar10 + 1;
      iVar5 = iVar11;
    } while (lVar10 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar6;
  *(int *)(param_1 + 0x214) = iVar11;
  return;
}

