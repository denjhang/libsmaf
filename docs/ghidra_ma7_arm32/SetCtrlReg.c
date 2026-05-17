/* SetCtrlReg @ 00035b34 736B */


/* ARM::SetCtrlReg(unsigned char, unsigned char, unsigned char) */

void ARM::SetCtrlReg(uchar param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uchar uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  
  uVar7 = (uint)param_2;
  uVar3 = (uint)param_1;
  iVar10 = DAT_00035e14 + 0x35b46;
  if (-1 < (int)(uVar3 << 0x18)) {
    if (uVar3 < 0xb) {
      bVar5 = param_2 & 0x7f;
      if (uVar3 != 0) {
        bVar5 = VIRTUALREGISTER_GetRegC(0);
        uVar3 = VIRTUALREGISTER_GetRegC(0);
        if ((uVar3 & 0x40) != 0) {
          WTCONTROL_SetWTVoiceReg(bVar5 & 0x3f,param_1,param_2 & 0x7f,param_3);
          return;
        }
        FMCONTROL_SetFMVoiceReg(bVar5 & 0x3f,param_1,param_2 & 0x7f,param_3);
        return;
      }
LAB_00035c90:
      VIRTUALREGISTER_SetRegC((ushort)uVar3,bVar5);
      return;
    }
    if (uVar3 < 0x18) {
      if (uVar3 != 0xb) {
        bVar5 = VIRTUALREGISTER_GetRegC(0xb);
        CCh::SetChParamReg((CCh *)**(undefined4 **)(iVar10 + DAT_00035e18),bVar5 & 0x3f,param_1,
                           param_2 & 0x7f);
        return;
      }
      uVar6 = (uchar)(uVar7 & 0x3f);
      VIRTUALREGISTER_SetRegC((ushort)param_1,uVar6);
      iVar1 = DAT_00035e20;
      if ((int)(uVar7 << 0x19) < 0) {
        VIRTUALREGISTER_ChReset(uVar6);
        iVar9 = (uVar7 & 0x3f) * 0x20;
        iVar8 = *(int *)(iVar10 + iVar1) + iVar9;
        *(undefined1 *)(*(int *)(iVar10 + iVar1) + iVar9) = 0;
        *(undefined1 *)(iVar8 + 3) = 0;
        *(undefined1 *)(iVar8 + 4) = 0;
        *(undefined1 *)(iVar8 + 5) = 0;
        *(undefined1 *)(iVar8 + 6) = 0;
        *(undefined1 *)(iVar8 + 7) = 0;
        *(undefined1 *)(iVar8 + 8) = 0x1f;
        *(undefined4 *)(iVar8 + 0xc) = 0x19;
        *(undefined4 *)(iVar8 + 0x10) = 0x10;
        *(undefined4 *)(iVar8 + 0x14) = 0x20;
        *(undefined4 *)(iVar8 + 0x18) = 0x40;
        *(undefined4 *)(iVar8 + 0x1c) = 0x10000;
      }
    }
    else if (uVar3 < 0x26) {
      if (-1 < (int)(uVar3 << 0x1f)) {
        bVar5 = param_2 & 0xf;
        goto LAB_00035c90;
      }
      VIRTUALREGISTER_SetRegC((ushort)param_1,(uchar)(uVar7 & 0x7f));
      uVar4 = VIRTUALREGISTER_GetRegC(param_1 - 1);
      bVar5 = SIrqFifo_SetData((ushort)(uVar7 & 0x7f) |
                               (ushort)(((uVar4 | ((int)(uVar3 - 0x18) >> 1) << 4) & 0xff | 0x80) <<
                                       8));
      *(byte *)(DAT_00035e24 + 0x35cd5) = bVar5 | *(byte *)(DAT_00035e24 + 0x35cd5);
    }
    else if (uVar3 == 0x26) {
      if ((param_2 & 3) != 0) {
        if ((int)(uVar7 << 0x1f) < 0) {
          bVar5 = VIRTUALREGISTER_GetRegM('\0','\v');
          if ((bVar5 & 1) == 0) {
            uVar11 = 0xf103;
            uVar2 = 0xf101;
          }
          else {
            Sequencer_Control('\0','\0','\0',0);
            VIRTUALREGISTER_SetRegM('\0','\v',bVar5 & 0xfe);
            uVar11 = 0xf103;
            uVar2 = 0xf101;
          }
        }
        else {
          uVar11 = 0xf102;
          uVar2 = 0xf100;
        }
        if (((int)(uVar7 << 0x1e) < 0) &&
           (iVar10 = VIRTUALREGISTER_GetRegM('\0','\v'), uVar2 = uVar11, iVar10 << 0x1e < 0)) {
          Sequencer_Control('\x01','\0','\0',0);
          VIRTUALREGISTER_SetRegM('\0','\v',(byte)iVar10 & 0xfd);
        }
        bVar5 = SIrqFifo_SetData(uVar2);
        *(byte *)(DAT_00035e1c + 0x35bcf) = bVar5 | *(byte *)(DAT_00035e1c + 0x35bcf);
      }
    }
    else if (1 < uVar3 - 0x27) {
      if (uVar3 < 0x32) {
        FMCONTROL_SetFMWaveReg(param_1,param_2 & 0x7f);
        HVCONTROL_SetWave(param_1,param_2 & 0x7f);
        return;
      }
      if (uVar3 < 0x5d) {
        HVCONTROL_SetHvVoiceReg(param_1,param_2 & 0x7f);
        return;
      }
      if (uVar3 < 0x72) {
        if (uVar3 != 0x5d) {
          bVar5 = VIRTUALREGISTER_GetRegC(0x5d);
          STMCONTROL_SetStreamVoiceReg(bVar5 & 3,param_1,param_2 & 0x7f);
          return;
        }
        bVar5 = param_2 & 3;
        uVar3 = 0x5d;
        goto LAB_00035c90;
      }
      if (0x79 < uVar3) {
        if ((uVar3 == 0x7c || uVar3 == 0x7a) || (uVar3 - 0x7e < 2)) {
          VIRTUALREGISTER_SetRegC((ushort)param_1,param_2 & 0x7f);
        }
        else {
          if (uVar3 == 0x7b) {
            bVar5 = param_2 & 7;
          }
          else {
            bVar5 = param_2 & 3;
          }
          VIRTUALREGISTER_SetRegC((ushort)param_1,bVar5);
        }
        DSPCONTROL_SetDspVoiceReg(param_1,param_2);
        return;
      }
      if (uVar3 != 0x72) {
        bVar5 = VIRTUALREGISTER_GetRegC(0x72);
        CCh::SetExParamReg((CCh *)**(undefined4 **)(iVar10 + DAT_00035e18),bVar5 & 0xf,param_1,
                           param_2 & 0x7f);
        return;
      }
      uVar6 = (uchar)(uVar7 & 0xf);
      VIRTUALREGISTER_SetRegC((ushort)param_1,uVar6);
      iVar1 = DAT_00035e28;
      if ((int)(uVar7 << 0x19) < 0) {
        VIRTUALREGISTER_ExChReset(uVar6);
        iVar8 = (uVar7 & 0xf) * 0x14;
        iVar9 = *(int *)(iVar10 + iVar1) + iVar8;
        *(undefined1 *)(*(int *)(iVar10 + iVar1) + iVar8) = 0;
        *(undefined1 *)(iVar9 + 1) = 0;
        *(undefined4 *)(iVar9 + 4) = 0x19;
        *(undefined4 *)(iVar9 + 8) = 0x10;
        *(undefined4 *)(iVar9 + 0xc) = 0x10000;
        *(undefined4 *)(iVar9 + 0x10) = 0x10000;
      }
    }
  }
  return;
}

