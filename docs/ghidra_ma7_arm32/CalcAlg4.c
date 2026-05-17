/* CalcAlg4 @ 0004c400 1032B */


/* ARM::CFmSynth::CalcAlg4(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg4
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *local_4c;
  
  iVar9 = *(int *)(param_1 + 0x204);
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar8 = (uint)(*(int *)(param_1 + 0x224) * iVar9) >> 0xf;
  uVar6 = (uint)(*(int *)(param_1 + 0x228) * iVar9) >> 0xf;
  uVar4 = (uint)(*(int *)(param_1 + 0x22c) * iVar9) >> 0xf;
  iVar7 = DAT_0004c808 + 0x4c460;
  iVar9 = *(int *)(param_1 + 0x1dc);
  iVar2 = *(int *)(param_1 + 0x1e0);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar13 = param_2 + -1;
      piVar12 = param_3 + -1;
      uVar1 = 0;
      piVar10 = *(int **)(param_1 + 0x220);
      do {
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar9 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(param_1 + 0x18);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                   (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        if (*(code **)(param_1 + 0x90) == (code *)0x0) {
          iVar9 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(param_1 + 0x74);
          if (*(int *)(param_1 + 200) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   ((*(uint *)(*(int *)(iVar7 + DAT_0004c80c) +
                                              (uint)(byte)param_1[0x86] * 4) & iVar9 >> 3) +
                                    (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        if (*(code **)(param_1 + 0xec) == (code *)0x0) {
          iVar9 = 0;
        }
        else {
          (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
          if (*(int *)(param_1 + 0x124) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                   ((*(uint *)(*(int *)(iVar7 + DAT_0004c80c) +
                                              (uint)(byte)param_1[0xe2] * 4) & iVar9 >> 3) +
                                    (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        iVar2 = 0;
        if (*(code **)(param_1 + 0x148) != (code *)0x0) {
          (**(code **)(param_1 + 0x148))(param_1 + 300);
          iVar2 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar2 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   ((*(uint *)(*(int *)(iVar7 + DAT_0004c80c) +
                                              (uint)(byte)param_1[0x13e] * 4) & iVar9 >> 3) +
                                    (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        uVar1 = uVar1 + 1;
        iVar9 = *piVar10 * iVar2 >> 0xf;
        piVar13 = piVar13 + 1;
        *piVar13 = (int)(uVar8 * iVar9) >> 0xf;
        piVar12 = piVar12 + 1;
        *piVar12 = (int)(uVar6 * iVar9) >> 0xf;
        *param_4 = (int)(uVar4 * iVar9) >> 0xf;
        param_4 = param_4 + 1;
        piVar10 = piVar10 + 1;
      } while (uVar1 != param_5);
    }
    iVar2 = 0;
    iVar9 = 0;
  }
  else if (param_5 != 0) {
    piVar13 = param_2 + -1;
    piVar12 = param_3 + -1;
    uVar11 = 0;
    iVar5 = iVar2;
    local_4c = *(int **)(param_1 + 0x220);
    do {
      iVar2 = iVar9;
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        iVar9 = 0;
      }
      else {
        (**(code **)(param_1 + 0x34))(param_1 + 0x18);
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(iVar7 + DAT_0004c80c) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar2 + iVar5 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        iVar5 = 0;
      }
      else {
        (**(code **)(param_1 + 0x90))(param_1 + 0x74);
        if (*(int *)(param_1 + 200) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                 ((*(uint *)(*(int *)(iVar7 + DAT_0004c80c) +
                                            (uint)(byte)param_1[0x86] * 4) & iVar9 >> 3) +
                                  (*(uint *)(param_1 + 0x9c) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(int *)(param_1 + 0xcc) + *(uint *)(param_1 + 0x9c);
      }
      iVar3 = 0;
      if (*(code **)(param_1 + 0xec) != (code *)0x0) {
        (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
        iVar3 = 0;
        if (*(int *)(param_1 + 0x124) != 0) {
          iVar3 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                 ((*(uint *)(*(int *)(iVar7 + DAT_0004c80c) +
                                            (uint)(byte)param_1[0xe2] * 4) & iVar5 >> 3) +
                                  (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0xf8) = *(int *)(param_1 + 0x128) + *(uint *)(param_1 + 0xf8);
      }
      iVar5 = 0;
      if (*(code **)(param_1 + 0x148) != (code *)0x0) {
        (**(code **)(param_1 + 0x148))(param_1 + 300);
        iVar5 = 0;
        if (*(int *)(param_1 + 0x180) != 0) {
          iVar5 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                 ((*(uint *)(*(int *)(iVar7 + DAT_0004c80c) +
                                            (uint)(byte)param_1[0x13e] * 4) & iVar3 >> 3) +
                                  (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
      }
      uVar11 = uVar11 + 1;
      iVar5 = *local_4c * iVar5 >> 0xf;
      piVar13 = piVar13 + 1;
      *piVar13 = (int)(uVar8 * iVar5) >> 0xf;
      piVar12 = piVar12 + 1;
      *piVar12 = (int)(uVar6 * iVar5) >> 0xf;
      *param_4 = (int)(uVar4 * iVar5) >> 0xf;
      iVar5 = iVar2;
      param_4 = param_4 + 1;
      local_4c = local_4c + 1;
    } while (uVar11 != param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar9;
  *(int *)(param_1 + 0x1e0) = iVar2;
  return;
}

