/* CalcAlg6 @ 0004bc18 1016B */


/* ARM::CFmSynth::CalcAlg6(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg6
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
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *local_4c;
  
  iVar9 = *(int *)(param_1 + 0x204);
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar8 = (uint)(*(int *)(param_1 + 0x224) * iVar9) >> 0xf;
  uVar6 = (uint)(*(int *)(param_1 + 0x228) * iVar9) >> 0xf;
  uVar4 = (uint)(*(int *)(param_1 + 0x22c) * iVar9) >> 0xf;
  iVar7 = DAT_0004c010 + 0x4bc78;
  iVar9 = *(int *)(param_1 + 0x1dc);
  iVar2 = *(int *)(param_1 + 0x1e0);
  local_4c = *(int **)(param_1 + 0x220);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar12 = param_2 + -1;
      piVar11 = param_3 + -1;
      uVar1 = 0;
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
          iVar2 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(param_1 + 0x74);
          if (*(int *)(param_1 + 200) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        if (*(code **)(param_1 + 0xec) == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
          if (*(int *)(param_1 + 0x124) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                   ((*(uint *)(*(int *)(iVar7 + DAT_0004c014) +
                                              (uint)(byte)param_1[0xe2] * 4) & iVar2 >> 3) +
                                    (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        iVar3 = 0;
        if (*(code **)(param_1 + 0x148) != (code *)0x0) {
          (**(code **)(param_1 + 0x148))(param_1 + 300);
          iVar3 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar3 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   ((*(uint *)(*(int *)(iVar7 + DAT_0004c014) +
                                              (uint)(byte)param_1[0x13e] * 4) & iVar2 >> 3) +
                                    (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        uVar1 = uVar1 + 1;
        iVar9 = *local_4c * (iVar9 + iVar3 >> 1) >> 0xf;
        piVar12 = piVar12 + 1;
        *piVar12 = (int)(uVar8 * iVar9) >> 0xe;
        piVar11 = piVar11 + 1;
        *piVar11 = (int)(uVar6 * iVar9) >> 0xe;
        *param_4 = (int)(uVar4 * iVar9) >> 0xe;
        param_4 = param_4 + 1;
        local_4c = local_4c + 1;
      } while (uVar1 != param_5);
    }
    iVar2 = 0;
    iVar9 = 0;
  }
  else if (param_5 != 0) {
    piVar12 = param_2 + -1;
    piVar11 = param_3 + -1;
    uVar10 = 0;
    iVar3 = iVar2;
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
                                 ((*(uint *)(*(int *)(iVar7 + DAT_0004c014) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar2 + iVar3 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        (**(code **)(param_1 + 0x90))(param_1 + 0x74);
        if (*(int *)(param_1 + 200) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)*(short *)(*(int *)(param_1 + 0x94) + (*(uint *)(param_1 + 0x9c) >> 0x16) * 2
                                 ) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      if (*(code **)(param_1 + 0xec) == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
        if (*(int *)(param_1 + 0x124) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                 ((*(uint *)(*(int *)(iVar7 + DAT_0004c014) +
                                            (uint)(byte)param_1[0xe2] * 4) & iVar3 >> 3) +
                                  (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
      }
      iVar5 = 0;
      if (*(code **)(param_1 + 0x148) != (code *)0x0) {
        (**(code **)(param_1 + 0x148))(param_1 + 300);
        iVar5 = 0;
        if (*(int *)(param_1 + 0x180) != 0) {
          iVar5 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                 ((*(uint *)(*(int *)(iVar7 + DAT_0004c014) +
                                            (uint)(byte)param_1[0x13e] * 4) & iVar3 >> 3) +
                                  (*(uint *)(param_1 + 0x154) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
      }
      uVar10 = uVar10 + 1;
      iVar3 = *local_4c * (iVar5 + iVar9 >> 1) >> 0xf;
      piVar12 = piVar12 + 1;
      *piVar12 = (int)(uVar8 * iVar3) >> 0xe;
      piVar11 = piVar11 + 1;
      *piVar11 = (int)(uVar6 * iVar3) >> 0xe;
      *param_4 = (int)(uVar4 * iVar3) >> 0xe;
      iVar3 = iVar2;
      param_4 = param_4 + 1;
      local_4c = local_4c + 1;
    } while (uVar10 != param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar9;
  *(int *)(param_1 + 0x1e0) = iVar2;
  return;
}

