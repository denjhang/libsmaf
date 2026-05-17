/* CalcAlg1a @ 001506dc 832B */


/* ARM::CFmSynth::CalcAlg1a(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg1a
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  
  iVar5 = *(int *)(param_1 + 0x238);
  uVar1 = *(uint *)(param_1 + 0x208);
  uVar6 = (ulong)((uint)(iVar5 * *(int *)(param_1 + 0x270)) >> 0xf);
  piVar13 = *(int **)(param_1 + 0x268);
  uVar7 = (ulong)((uint)(iVar5 * *(int *)(param_1 + 0x274)) >> 0xf);
  uVar3 = (ulong)((uint)(iVar5 * *(int *)(param_1 + 0x278)) >> 0xf);
  iVar5 = *(int *)(param_1 + 0x210);
  iVar12 = *(int *)(param_1 + 0x214);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar10 = param_3;
      do {
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          pcVar8 = *(code **)(param_1 + 0xa0);
          iVar5 = 0;
          if (pcVar8 != (code *)0x0) goto LAB_0015091c;
LAB_001509c4:
          iVar12 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(param_1 + 0x18);
          iVar5 = 0;
          if (*(int *)(param_1 + 0x78) != 0) {
            iVar5 = ((int)((uint)*(ushort *)(param_1 + 0x6e) * *(int *)(param_1 + 0x78)) >> 0xf) *
                    (int)*(short *)(*(long *)(param_1 + 0x40) +
                                   (ulong)(*(uint *)(param_1 + 0x4c) >> 0x16) * 2) >> 0xf;
          }
          pcVar8 = *(code **)(param_1 + 0xa0);
          *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
          if (pcVar8 == (code *)0x0) goto LAB_001509c4;
LAB_0015091c:
          (*pcVar8)(param_1 + 0x80);
          iVar12 = 0;
          if (*(int *)(param_1 + 0xe0) != 0) {
            iVar12 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                     (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                    (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
          }
          *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
        }
        iVar5 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar5 + iVar12);
        lVar11 = (long)iVar5 * (long)*piVar13 * 0x20000 >> 0x20;
        *param_2 = (int)((long)(uVar6 * lVar11) >> 0xf);
        piVar9 = piVar10 + 1;
        *piVar10 = (int)((long)(uVar7 * lVar11) >> 0xf);
        *param_4 = (int)((long)(uVar3 * lVar11) >> 0xf);
        piVar10 = piVar9;
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        piVar13 = piVar13 + 1;
      } while (piVar9 != param_3 + (ulong)(param_5 - 1) + 1);
    }
    iVar12 = 0;
    iVar5 = 0;
  }
  else if (param_5 != 0) {
    lVar11 = 0;
    iVar4 = iVar12;
    do {
      iVar12 = iVar5;
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
                                         (iVar12 + iVar4 >> (uVar1 & 0x1f)) >> 3) +
                                         (*(uint *)(param_1 + 0x4c) >> 0x16) & 0x3ff) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x4c);
      }
      iVar4 = 0;
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(param_1 + 0x80);
        iVar4 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar4 = ((int)((uint)*(ushort *)(param_1 + 0xd6) * *(int *)(param_1 + 0xe0)) >> 0xf) *
                  (int)*(short *)(*(long *)(param_1 + 0xa8) +
                                 (ulong)(*(uint *)(param_1 + 0xb4) >> 0x16) * 2) >> 0xf;
        }
        *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0xe4) + *(uint *)(param_1 + 0xb4);
      }
      iVar4 = CLpf::Generate(*(CLpf **)(param_1 + 0x240),iVar5 + iVar4);
      lVar2 = (long)iVar4 * (long)piVar13[lVar11] * 0x20000 >> 0x20;
      param_2[lVar11] = (int)((long)(uVar6 * lVar2) >> 0xf);
      param_3[lVar11] = (int)((long)(lVar2 * uVar7) >> 0xf);
      param_4[lVar11] = (int)((long)(uVar3 * lVar2) >> 0xf);
      lVar11 = lVar11 + 1;
      iVar4 = iVar12;
    } while (lVar11 != (ulong)(param_5 - 1) + 1);
  }
  *(int *)(param_1 + 0x210) = iVar5;
  *(int *)(param_1 + 0x214) = iVar12;
  return;
}

