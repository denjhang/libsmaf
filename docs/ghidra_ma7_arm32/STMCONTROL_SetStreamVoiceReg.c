/* STMCONTROL_SetStreamVoiceReg @ 00038840 1050B */


/* ARM::STMCONTROL_SetStreamVoiceReg(unsigned char, unsigned char, unsigned char) */

void ARM::STMCONTROL_SetStreamVoiceReg(uchar param_1,uchar param_2,uchar param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  CStmSynth *pCVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar10 = (uint)param_3;
  uVar5 = (uint)param_1;
  iVar8 = DAT_00038c80 + 0x38854;
  if (uVar5 < 4) {
    pbVar6 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if (uVar5 == 1) {
      if ((int)((uint)*pbVar6 << 0x19) < 0) {
        return;
      }
      VIRTUALREGISTER_GetStreamInfoPointer('\x02');
      pbVar6 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer(param_1);
      iVar3 = DAT_00038c84;
    }
    else {
      pbVar6 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer('\x02');
      if ((uVar5 == 3) && ((int)((uint)*pbVar6 << 0x19) < 0)) {
        return;
      }
      pbVar6 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer(param_1);
      iVar3 = DAT_00038c84;
    }
    DAT_00038c84 = iVar3;
    if (param_2 == '^') {
      if ((uVar5 & 0xfd) == 1) {
        uVar10 = uVar10 & 0x23;
      }
      *pbVar6 = (byte)uVar10 & 99;
      iVar4 = DAT_00038c88;
      puVar11 = *(undefined4 **)(iVar8 + iVar3);
      CStmSynth::SetFormat
                ((CStmSynth *)*puVar11,uVar5,(uVar10 & 0x7f) >> 6,(uVar10 & 0x3f) >> 5,uVar10 & 3);
      CStmSynth::SetStreamInt
                ((CStmSynth *)*puVar11,uVar5,**(uint **)(iVar8 + iVar4),
                 **(uint **)(iVar8 + DAT_00038c8c));
      return;
    }
    switch(param_2) {
    case '_':
      pbVar6[1] = param_3 & 0x7d;
      CStmSynth::SetPanpot
                ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,(uVar10 & 0x7f) >> 2,uVar10 & 1
                );
      return;
    case '`':
      pbVar6[2] = param_3 & 0x7d;
      CStmSynth::SetVelocity
                ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,(uVar10 & 0x7f) >> 2,uVar10 & 1
                );
      return;
    case 'a':
      pbVar6[3] = param_3 & 0x3f;
      break;
    case 'b':
      pbVar6[4] = (byte)(uVar10 & 0x7f);
      CStmSynth::SetBlockFnum
                ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,(pbVar6[3] & 0x3f) >> 3,
                 uVar10 & 0x7f | (pbVar6[3] & 7) << 7);
      return;
    case 'c':
      pbVar6[5] = (byte)(uVar10 & 0x3f);
      CStmSynth::SetCh((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,uVar10 & 0x3f);
      return;
    case 'd':
      uVar7 = VIRTUALREGISTER_GetRegM('\0','\x02');
      iVar4 = DAT_00038c84;
      iVar3 = (int)(uVar10 << 0x19) >> 0x1f;
      uVar13 = -iVar3;
      uVar15 = (uVar10 & 0x3f) >> 5;
      uVar12 = -((int)(uVar10 << 0x1b) >> 0x1f);
      if ((uVar7 & 0x7fff) >> 7 == 1) {
        uVar7 = iVar3 * -0x40 & 0xff;
      }
      else {
        bVar1 = pbVar6[6];
        uVar7 = bVar1 & 0x10;
        if (((bVar1 & 0x10) == 0) && (uVar12 != 0)) {
          STMCONTROL_ResetStreamFifo(param_1);
          puVar11 = *(undefined4 **)(iVar8 + iVar4);
          pCVar9 = (CStmSynth *)*puVar11;
          CStmSynth::SetLpfQ(pCVar9,uVar5,uVar7,uVar7);
          CStmSynth::SetLpfFc0(pCVar9,uVar5,uVar7);
          CStmSynth::SetLpfFc1(pCVar9,uVar5,uVar7);
          CStmSynth::SetLpfFc2(pCVar9,uVar5,uVar7);
          CStmSynth::SetLpfFc3(pCVar9,uVar5,uVar7);
          CStmSynth::SetAr(pCVar9,uVar5,uVar7);
          CStmSynth::SetDr(pCVar9,uVar5,uVar7);
          CStmSynth::SetSr(pCVar9,uVar5,uVar12,uVar7);
          CStmSynth::SetSr(pCVar9,uVar5,uVar7,uVar7);
          CStmSynth::SetLpfLfo(pCVar9,uVar5,uVar7,uVar7,uVar7);
          iVar8 = VIRTUALREGISTER_GetStreamInfoPointer(param_1);
          uVar2 = (undefined1)uVar7;
          *(undefined1 *)(iVar8 + 7) = uVar2;
          pCVar9 = (CStmSynth *)*puVar11;
          *(undefined1 *)(iVar8 + 8) = uVar2;
          *(undefined1 *)(iVar8 + 9) = uVar2;
          *(undefined1 *)(iVar8 + 10) = uVar2;
          *(undefined1 *)(iVar8 + 0xb) = uVar2;
          *(undefined1 *)(iVar8 + 0xc) = uVar2;
          *(undefined1 *)(iVar8 + 0xd) = uVar2;
          *(undefined1 *)(iVar8 + 0xe) = uVar2;
          *(undefined1 *)(iVar8 + 0xf) = uVar2;
          *(undefined1 *)(iVar8 + 0x10) = uVar2;
          *(undefined1 *)(iVar8 + 0x12) = uVar2;
          *(undefined1 *)(iVar8 + 0x11) = uVar2;
          *(undefined1 *)(iVar8 + 0x13) = uVar2;
          CStmSynth::KeyOn(pCVar9,uVar5,uVar7,uVar15,uVar12);
        }
        else {
          uVar7 = bVar1 & 0x40;
          if ((bVar1 & 0x40) == 0) {
            uVar14 = uVar7;
            if (uVar13 == 1) {
              uVar7 = 0x40;
              CStmSynth::SetSr((CStmSynth *)**(undefined4 **)(iVar8 + DAT_00038c84),uVar5,1,
                               pbVar6[0x12] & 0x1f);
              pbVar6[0x12] = pbVar6[0x12] | 0x40;
              uVar14 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 & 3) << 6;
            uVar14 = uVar13;
          }
          if (uVar12 == 0) {
            CStmSynth::KeyOn((CStmSynth *)**(undefined4 **)(iVar8 + DAT_00038c84),uVar5,uVar14,
                             uVar15,0);
          }
        }
      }
      pbVar6[6] = (byte)uVar7 | param_3 & 0x2f | (char)((int)(uVar10 << 0x1b) >> 0x1f) * -0x10;
      break;
    case 'e':
      pbVar6[7] = param_3 & 0x5f;
      CStmSynth::SetLpfQ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,(uVar10 & 0x7f) >> 6,
                         uVar10 & 0x1f);
      return;
    case 'f':
      pbVar6[8] = param_3 & 0x3f;
      break;
    case 'g':
      pbVar6[9] = (byte)(uVar10 & 0x7f);
      CStmSynth::SetLpfFc0
                ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,
                 uVar10 & 0x7f | (pbVar6[8] & 0x3f) << 7);
      return;
    case 'h':
      pbVar6[10] = param_3 & 0x3f;
      break;
    case 'i':
      pbVar6[0xb] = (byte)(uVar10 & 0x7f);
      CStmSynth::SetLpfFc1
                ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,
                 uVar10 & 0x7f | (pbVar6[10] & 0x3f) << 7);
      return;
    case 'j':
      pbVar6[0xc] = param_3 & 0x3f;
      break;
    case 'k':
      pbVar6[0xd] = (byte)(uVar10 & 0x7f);
      CStmSynth::SetLpfFc2
                ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,
                 uVar10 & 0x7f | (pbVar6[0xc] & 0x3f) << 7);
      return;
    case 'l':
      pbVar6[0xe] = param_3 & 0x3f;
      break;
    case 'm':
      pbVar6[0xf] = (byte)(uVar10 & 0x7f);
      CStmSynth::SetLpfFc3
                ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,
                 uVar10 & 0x7f | (pbVar6[0xe] & 0x3f) << 7);
      return;
    case 'n':
      pbVar6[0x10] = (byte)(uVar10 & 0x1f);
      CStmSynth::SetAr((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,uVar10 & 0x1f);
      return;
    case 'o':
      pbVar6[0x11] = (byte)(uVar10 & 0x1f);
      CStmSynth::SetDr((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,uVar10 & 0x1f);
      return;
    case 'p':
      pbVar6[0x12] = param_3 & 0x5f;
      CStmSynth::SetSr((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,(uVar10 & 0x7f) >> 6,
                       uVar10 & 0x1f);
      return;
    case 'q':
      pbVar6[0x13] = param_3 & 0x7f;
      CStmSynth::SetLpfLfo
                ((CStmSynth *)**(undefined4 **)(iVar8 + iVar3),uVar5,(uVar10 & 0x7f) >> 4,
                 (uVar10 & 0xf) >> 3,uVar10 & 7);
    }
  }
  return;
}

