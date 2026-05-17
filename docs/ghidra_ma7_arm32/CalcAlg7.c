/* CalcAlg7 @ 0004b850 960B */


/* ARM::CFmSynth::CalcAlg7(ARM::_tagFMSLOTINFO*, int*, int*, int*, unsigned int) */

void ARM::CFmSynth::CalcAlg7
               (_tagFMSLOTINFO *param_1,int *param_2,int *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *local_50;
  int *local_30;
  
  iVar7 = *(int *)(param_1 + 0x204);
  uVar1 = *(uint *)(param_1 + 0x1d4);
  uVar2 = (uint)(*(int *)(param_1 + 0x228) * iVar7) >> 0xf;
  uVar12 = (uint)(*(int *)(param_1 + 0x22c) * iVar7) >> 0xf;
  iVar8 = DAT_0004bc10 + 0x4b8aa;
  uVar3 = (uint)(*(int *)(param_1 + 0x224) * iVar7) >> 0xf;
  iVar7 = *(int *)(param_1 + 0x1dc);
  iVar4 = *(int *)(param_1 + 0x1e0);
  local_50 = *(int **)(param_1 + 0x220);
  if (uVar1 == 0) {
    if (param_5 != 0) {
      piVar9 = param_2 + -1;
      piVar11 = param_3 + -1;
      uVar1 = 0;
      do {
        if (*(code **)(param_1 + 0x34) == (code *)0x0) {
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0x34))(param_1 + 0x18);
          if (*(int *)(param_1 + 0x6c) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                   (*(uint *)(param_1 + 0x40) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
        }
        if (*(code **)(param_1 + 0x90) == (code *)0x0) {
          iVar4 = 0;
        }
        else {
          (**(code **)(param_1 + 0x90))(param_1 + 0x74);
          if (*(int *)(param_1 + 200) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)*(short *)(*(int *)(param_1 + 0x94) +
                                   (*(uint *)(param_1 + 0x9c) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >>
                    0xf;
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
        }
        iVar6 = 0;
        if (*(code **)(param_1 + 0xec) != (code *)0x0) {
          (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
          iVar6 = 0;
          if (*(int *)(param_1 + 0x124) != 0) {
            iVar6 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                   ((*(uint *)(*(int *)(iVar8 + DAT_0004bc14) +
                                              (uint)(byte)param_1[0xe2] * 4) & iVar4 >> 3) +
                                    (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                    ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
        }
        if (*(code **)(param_1 + 0x148) == (code *)0x0) {
          iVar4 = 0;
        }
        else {
          (**(code **)(param_1 + 0x148))(param_1 + 300);
          iVar4 = 0;
          if (*(int *)(param_1 + 0x180) != 0) {
            iVar4 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                   (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                    ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf)
                    >> 0xf;
          }
          *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
        }
        uVar1 = uVar1 + 1;
        iVar7 = *local_50 * (iVar7 + iVar6 + iVar4 >> 2) >> 0xf;
        piVar9 = piVar9 + 1;
        *piVar9 = (int)(uVar3 * iVar7) >> 0xd;
        piVar11 = piVar11 + 1;
        *piVar11 = (int)(uVar2 * iVar7) >> 0xd;
        *param_4 = (int)(uVar12 * iVar7) >> 0xd;
        param_4 = param_4 + 1;
        local_50 = local_50 + 1;
      } while (uVar1 != param_5);
    }
    iVar4 = 0;
    iVar7 = 0;
  }
  else if (param_5 != 0) {
    local_30 = param_2 + -1;
    piVar9 = param_3 + -1;
    uVar10 = 0;
    iVar6 = iVar4;
    do {
      iVar4 = iVar7;
      if (*(code **)(param_1 + 0x34) == (code *)0x0) {
        iVar7 = 0;
      }
      else {
        (**(code **)(param_1 + 0x34))(param_1 + 0x18);
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)*(short *)(*(int *)(param_1 + 0x38) +
                                 ((*(uint *)(*(int *)(iVar8 + DAT_0004bc14) +
                                            (uint)(byte)param_1[0x2a] * 4) &
                                  (iVar6 + iVar4 >> (uVar1 & 0xff)) >> 3) +
                                  (*(uint *)(param_1 + 0x40) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x6c) * (uint)*(ushort *)(param_1 + 0x62)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + *(int *)(param_1 + 0x70);
      }
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        iVar6 = 0;
      }
      else {
        (**(code **)(param_1 + 0x90))(param_1 + 0x74);
        if (*(int *)(param_1 + 200) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)*(short *)(*(int *)(param_1 + 0x94) + (*(uint *)(param_1 + 0x9c) >> 0x16) * 2
                                 ) *
                  ((int)(*(int *)(param_1 + 200) * (uint)*(ushort *)(param_1 + 0xbe)) >> 0xf) >> 0xf
          ;
        }
        *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      }
      iVar5 = 0;
      if (*(code **)(param_1 + 0xec) != (code *)0x0) {
        (**(code **)(param_1 + 0xec))(param_1 + 0xd0);
        iVar5 = 0;
        if (*(int *)(param_1 + 0x124) != 0) {
          iVar5 = (int)*(short *)(*(int *)(param_1 + 0xf0) +
                                 ((*(uint *)(*(int *)(iVar8 + DAT_0004bc14) +
                                            (uint)(byte)param_1[0xe2] * 4) & iVar6 >> 3) +
                                  (*(uint *)(param_1 + 0xf8) >> 0x16) & 0x3ff) * 2) *
                  ((int)(*(int *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x11a)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) + *(int *)(param_1 + 0x128);
      }
      if (*(code **)(param_1 + 0x148) == (code *)0x0) {
        iVar6 = 0;
      }
      else {
        (**(code **)(param_1 + 0x148))(param_1 + 300);
        iVar6 = 0;
        if (*(int *)(param_1 + 0x180) != 0) {
          iVar6 = (int)*(short *)(*(int *)(param_1 + 0x14c) +
                                 (*(uint *)(param_1 + 0x154) >> 0x16) * 2) *
                  ((int)(*(int *)(param_1 + 0x180) * (uint)*(ushort *)(param_1 + 0x176)) >> 0xf) >>
                  0xf;
        }
        *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) + *(int *)(param_1 + 0x184);
      }
      uVar10 = uVar10 + 1;
      iVar6 = *local_50 * (iVar7 + iVar5 + iVar6 >> 2) >> 0xf;
      local_30 = local_30 + 1;
      *local_30 = (int)(uVar3 * iVar6) >> 0xd;
      piVar9 = piVar9 + 1;
      *piVar9 = (int)(uVar2 * iVar6) >> 0xd;
      *param_4 = (int)(uVar12 * iVar6) >> 0xd;
      param_4 = param_4 + 1;
      iVar6 = iVar4;
      local_50 = local_50 + 1;
    } while (uVar10 != param_5);
  }
  *(int *)(param_1 + 0x1dc) = iVar7;
  *(int *)(param_1 + 0x1e0) = iVar4;
  return;
}

