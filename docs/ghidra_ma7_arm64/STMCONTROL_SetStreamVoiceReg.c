/* STMCONTROL_SetStreamVoiceReg @ 0013a028 1700B */


/* ARM::STMCONTROL_SetStreamVoiceReg(unsigned char, unsigned char, unsigned char) */

void ARM::STMCONTROL_SetStreamVoiceReg(uchar param_1,uchar param_2,uchar param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  uint uVar9;
  ulong uVar12;
  byte bVar13;
  CStmSynth *pCVar14;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  
  uVar12 = (ulong)param_3;
  if (3 < param_1) {
    return;
  }
  pbVar5 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer('\0');
  uVar7 = (uint)param_1;
  uVar8 = (uint)param_1;
  if (param_1 == '\x01') {
    if ((*pbVar5 >> 6 & 1) != 0) {
      return;
    }
    VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    pbVar5 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer('\x01');
  }
  else {
    pbVar5 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if (param_1 != '\x03') {
      pbVar5 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer(param_1);
      iVar3 = param_2 - 0x5d;
      if (iVar3 == 1) goto LAB_0013a0b8;
      goto LAB_0013a148;
    }
    if ((*pbVar5 >> 6 & 1) != 0) {
      return;
    }
    pbVar5 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer('\x03');
  }
  iVar3 = param_2 - 0x5d;
  if (iVar3 == 1) {
    uVar12 = (ulong)(param_3 & 0x23);
LAB_0013a0b8:
    *pbVar5 = (byte)uVar12 & 99;
    puVar2 = PTR_gpVstm_00567d68;
    CStmSynth::SetFormat
              (*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,(uint)(uVar12 >> 6) & 1,
               (uint)(uVar12 >> 5) & 1,(uint)uVar12 & 3);
    CStmSynth::SetStreamInt
              (*(CStmSynth **)puVar2,uVar7,*(uint *)PTR_gdwIrqPoint_00567158,
               *(uint *)PTR_gdwStmIntEnable_00567548);
    return;
  }
LAB_0013a148:
  if (iVar3 - 2U < 0x13) {
    uVar9 = (uint)param_3;
    uVar10 = (uint)param_3;
    uVar11 = (uint)param_3;
    switch(iVar3) {
    case 2:
      pbVar5[1] = param_3 & 0x7d;
      CStmSynth::SetPanpot(*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,param_3 >> 2 & 0x1f,uVar9 & 1);
      return;
    case 3:
      pbVar5[2] = param_3 & 0x7d;
      CStmSynth::SetVelocity
                (*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,param_3 >> 2 & 0x1f,uVar11 & 1);
      return;
    case 4:
      pbVar5[3] = param_3 & 0x3f;
      break;
    case 5:
      pbVar5[4] = (byte)(uVar11 & 0x7f);
      CStmSynth::SetBlockFnum
                (*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,pbVar5[3] >> 3 & 7,
                 uVar11 & 0x7f | (pbVar5[3] & 7) << 7);
      return;
    case 6:
      pbVar5[5] = (byte)(uVar10 & 0x3f);
      CStmSynth::SetCh(*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,uVar10 & 0x3f);
      return;
    case 7:
      uVar9 = (uint)(param_3 >> 6);
      uVar11 = uVar9 & 1;
      uVar10 = param_3 >> 5 & 1;
      bVar1 = param_3 >> 4;
      uVar4 = VIRTUALREGISTER_GetRegM('\0','\x02');
      if ((uVar4 >> 7 & 1) == 0) {
        bVar13 = pbVar5[6];
        if (((bVar1 & 1) == 0) || ((bVar13 >> 4 & 1) != 0)) {
          uVar7 = bVar13 & 0x40;
          if ((bVar13 & 0x40) == 0) {
            uVar9 = uVar7;
            if (uVar11 == 1) {
              uVar7 = 0x40;
              CStmSynth::SetSr(*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,1,pbVar5[0x12] & 0x1f);
              pbVar5[0x12] = pbVar5[0x12] | 0x40;
              uVar9 = uVar11;
            }
          }
          else {
            uVar7 = (uVar9 & 1) << 6;
            uVar9 = uVar11;
          }
          bVar13 = (byte)uVar7;
          if ((bVar1 & 1) == 0) {
            CStmSynth::KeyOn(*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,uVar9,uVar10,bVar1 & 1);
          }
        }
        else {
          bVar13 = 0;
          STMCONTROL_ResetStreamFifo(param_1);
          puVar2 = PTR_gpVstm_00567d68;
          pCVar14 = *(CStmSynth **)PTR_gpVstm_00567d68;
          CStmSynth::SetLpfQ(pCVar14,uVar8,0,0);
          CStmSynth::SetLpfFc0(pCVar14,uVar8,0);
          CStmSynth::SetLpfFc1(pCVar14,uVar8,0);
          CStmSynth::SetLpfFc2(pCVar14,uVar8,0);
          CStmSynth::SetLpfFc3(pCVar14,uVar8,0);
          CStmSynth::SetAr(pCVar14,uVar8,0);
          CStmSynth::SetDr(pCVar14,uVar8,0);
          CStmSynth::SetSr(pCVar14,uVar7,1,0);
          CStmSynth::SetSr(pCVar14,uVar7,0,0);
          CStmSynth::SetLpfLfo(pCVar14,uVar7,0,0,0);
          lVar6 = VIRTUALREGISTER_GetStreamInfoPointer(param_1);
          *(undefined1 *)(lVar6 + 7) = 0;
          *(undefined1 *)(lVar6 + 8) = 0;
          pCVar14 = *(CStmSynth **)puVar2;
          *(undefined1 *)(lVar6 + 9) = 0;
          *(undefined1 *)(lVar6 + 10) = 0;
          *(undefined1 *)(lVar6 + 0xb) = 0;
          *(undefined1 *)(lVar6 + 0xc) = 0;
          *(undefined1 *)(lVar6 + 0xd) = 0;
          *(undefined1 *)(lVar6 + 0xe) = 0;
          *(undefined1 *)(lVar6 + 0xf) = 0;
          *(undefined1 *)(lVar6 + 0x10) = 0;
          *(undefined1 *)(lVar6 + 0x12) = 0;
          *(undefined1 *)(lVar6 + 0x11) = 0;
          *(undefined1 *)(lVar6 + 0x13) = 0;
          CStmSynth::KeyOn(pCVar14,uVar8,0,uVar10,1);
        }
      }
      else {
        bVar13 = (byte)((uVar9 & 1) << 6);
      }
      pbVar5[6] = bVar13 | param_3 & 0x2f | (byte)((bVar1 & 1) << 4);
      break;
    case 8:
      pbVar5[7] = param_3 & 0x5f;
      CStmSynth::SetLpfQ(*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,param_3 >> 6 & 1,uVar11 & 0x1f);
      return;
    case 9:
      pbVar5[8] = param_3 & 0x3f;
      break;
    case 10:
      pbVar5[9] = (byte)(uVar10 & 0x7f);
      CStmSynth::SetLpfFc0
                (*(CStmSynth **)PTR_gpVstm_00567d68,uVar8,uVar10 & 0x7f | (pbVar5[8] & 0x3f) << 7);
      return;
    case 0xb:
      pbVar5[10] = param_3 & 0x3f;
      break;
    case 0xc:
      pbVar5[0xb] = (byte)(uVar10 & 0x7f);
      CStmSynth::SetLpfFc1
                (*(CStmSynth **)PTR_gpVstm_00567d68,uVar7,uVar10 & 0x7f | (pbVar5[10] & 0x3f) << 7);
      return;
    case 0xd:
      pbVar5[0xc] = param_3 & 0x3f;
      break;
    case 0xe:
      pbVar5[0xd] = (byte)(uVar10 & 0x7f);
      CStmSynth::SetLpfFc2
                (*(CStmSynth **)PTR_gpVstm_00567d68,uVar7,uVar10 & 0x7f | (pbVar5[0xc] & 0x3f) << 7)
      ;
      return;
    case 0xf:
      pbVar5[0xe] = param_3 & 0x3f;
      break;
    case 0x10:
      pbVar5[0xf] = (byte)(uVar9 & 0x7f);
      CStmSynth::SetLpfFc3
                (*(CStmSynth **)PTR_gpVstm_00567d68,uVar7,uVar9 & 0x7f | (pbVar5[0xe] & 0x3f) << 7);
      return;
    case 0x11:
      pbVar5[0x10] = (byte)(uVar9 & 0x1f);
      CStmSynth::SetAr(*(CStmSynth **)PTR_gpVstm_00567d68,uVar7,uVar9 & 0x1f);
      return;
    case 0x12:
      pbVar5[0x11] = (byte)(uVar9 & 0x1f);
      CStmSynth::SetDr(*(CStmSynth **)PTR_gpVstm_00567d68,uVar7,uVar9 & 0x1f);
      return;
    case 0x13:
      pbVar5[0x12] = param_3 & 0x5f;
      CStmSynth::SetSr(*(CStmSynth **)PTR_gpVstm_00567d68,uVar7,param_3 >> 6 & 1,uVar11 & 0x1f);
      return;
    case 0x14:
      pbVar5[0x13] = param_3 & 0x7f;
      CStmSynth::SetLpfLfo
                (*(CStmSynth **)PTR_gpVstm_00567d68,uVar7,param_3 >> 4 & 7,param_3 >> 3 & 1,
                 uVar11 & 7);
      return;
    }
  }
  return;
}

