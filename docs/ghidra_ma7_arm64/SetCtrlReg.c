/* SetCtrlReg @ 00135534 1096B */


/* ARM::SetCtrlReg(unsigned char, unsigned char, unsigned char) */

void ARM::SetCtrlReg(uchar param_1,uchar param_2,uchar param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uchar uVar7;
  long lVar8;
  ushort uVar9;
  
  if ((char)param_1 < '\0') {
    return;
  }
  uVar5 = (uint)param_1;
  if (10 < param_1) {
    if (param_1 < 0x18) {
      if (uVar5 != 0xb) {
        bVar3 = VIRTUALREGISTER_GetRegC(0xb);
        CCh::SetChParamReg(*(CCh **)PTR_gpCh_00567b40,bVar3 & 0x3f,param_1,param_2 & 0x7f);
        return;
      }
      uVar5 = param_2 & 0x3f;
      uVar7 = (uchar)uVar5;
      VIRTUALREGISTER_SetRegC((ushort)param_1,uVar7);
      if ((param_2 >> 6 & 1) == 0) {
        return;
      }
      VIRTUALREGISTER_ChReset(uVar7);
      puVar2 = PTR_gChCi_00567290;
      lVar8 = (ulong)uVar5 * 0x20;
      PTR_gChCi_00567290[lVar8] = 0;
      puVar2[lVar8 + 3] = 0;
      puVar2[lVar8 + 4] = 0;
      puVar2[lVar8 + 5] = 0;
      puVar2[lVar8 + 6] = 0;
      puVar2[lVar8 + 7] = 0;
      puVar2[lVar8 + 8] = 0x1f;
      *(undefined4 *)(puVar2 + lVar8 + 0xc) = 0x19;
      *(undefined4 *)(puVar2 + lVar8 + 0x10) = 0x10;
      *(undefined4 *)(puVar2 + lVar8 + 0x14) = 0x20;
      *(undefined4 *)(puVar2 + lVar8 + 0x18) = 0x40;
      *(undefined4 *)(puVar2 + lVar8 + 0x1c) = 0x10000;
      return;
    }
    if (param_1 < 0x26) {
      if ((param_1 & 1) == 0) {
        uVar4 = (ushort)param_1;
        bVar3 = param_2 & 0xf;
        goto LAB_0013577c;
      }
      uVar1 = param_2 & 0x7f;
      VIRTUALREGISTER_SetRegC((ushort)param_1,(uchar)uVar1);
      uVar6 = VIRTUALREGISTER_GetRegC(param_1 - 1);
      uVar4 = (ushort)uVar1 | (ushort)((uVar6 | ((int)(uVar5 - 0x18) >> 1) << 4 | 0x80U) << 8);
    }
    else {
      if (param_1 != '&') {
        if ((byte)(param_1 - 0x27) < 2) {
          return;
        }
        if (param_1 < 0x32) {
          FMCONTROL_SetFMWaveReg(param_1,param_2 & 0x7f);
          HVCONTROL_SetWave(param_1,param_2 & 0x7f);
          return;
        }
        if (uVar5 < 0x5d) {
          HVCONTROL_SetHvVoiceReg(param_1,param_2 & 0x7f);
          return;
        }
        if (0x71 < param_1) {
          if (0x79 < param_1) {
            if (((uVar5 - 0x7a & 0xfd) == 0) || ((byte)(param_1 + 0x82) < 2)) {
              VIRTUALREGISTER_SetRegC((ushort)param_1,param_2 & 0x7f);
            }
            else if (param_1 == '{') {
              VIRTUALREGISTER_SetRegC(0x7b,param_2 & 7);
            }
            else {
              VIRTUALREGISTER_SetRegC((ushort)param_1,param_2 & 3);
            }
            DSPCONTROL_SetDspVoiceReg(param_1,param_2);
            return;
          }
          if (param_1 == 'r') {
            uVar7 = (uchar)(param_2 & 0xf);
            VIRTUALREGISTER_SetRegC(0x72,uVar7);
            if ((param_2 >> 6 & 1) == 0) {
              return;
            }
            VIRTUALREGISTER_ExChReset(uVar7);
            puVar2 = PTR_gChEi_00567400;
            lVar8 = (long)(int)(param_2 & 0xf) * 0x14;
            PTR_gChEi_00567400[lVar8] = 0;
            puVar2[lVar8 + 1] = 0;
            *(undefined4 *)(puVar2 + lVar8 + 4) = 0x19;
            *(undefined4 *)(puVar2 + lVar8 + 8) = 0x10;
            *(undefined4 *)(puVar2 + lVar8 + 0xc) = 0x10000;
            *(undefined4 *)(puVar2 + lVar8 + 0x10) = 0x10000;
            return;
          }
          bVar3 = VIRTUALREGISTER_GetRegC(0x72);
          CCh::SetExParamReg(*(CCh **)PTR_gpCh_00567b40,bVar3 & 0xf,param_1,param_2 & 0x7f);
          return;
        }
        uVar4 = 0x5d;
        bVar3 = param_2 & 3;
        if (param_1 != ']') {
          bVar3 = VIRTUALREGISTER_GetRegC(0x5d);
          STMCONTROL_SetStreamVoiceReg(bVar3 & 3,param_1,param_2 & 0x7f);
          return;
        }
        goto LAB_0013577c;
      }
      if ((param_2 & 3) == 0) {
        return;
      }
      if ((param_2 & 1) == 0) {
        uVar9 = 0xf102;
        uVar4 = 0xf100;
      }
      else {
        bVar3 = VIRTUALREGISTER_GetRegM('\0','\v');
        if ((bVar3 & 1) == 0) {
          uVar9 = 0xf103;
          uVar4 = 0xf101;
        }
        else {
          uVar9 = 0xf103;
          Sequencer_Control('\0','\0','\0',0);
          VIRTUALREGISTER_SetRegM('\0','\v',bVar3 & 0xfe);
          uVar4 = 0xf101;
        }
      }
      if (((param_2 >> 1 & 1) != 0) &&
         (uVar5 = VIRTUALREGISTER_GetRegM('\0','\v'), uVar4 = uVar9, ((uVar5 & 0xff) >> 1 & 1) != 0)
         ) {
        Sequencer_Control('\x01','\0','\0',0);
        VIRTUALREGISTER_SetRegM('\0','\v',(byte)uVar5 & 0xfd);
      }
    }
    bVar3 = SIrqFifo_SetData(uVar4);
    DAT_00582971 = bVar3 | DAT_00582971;
    return;
  }
  if (param_1 != '\0') {
    bVar3 = VIRTUALREGISTER_GetRegC(0);
    uVar5 = VIRTUALREGISTER_GetRegC(0);
    if ((uVar5 >> 6 & 1) == 0) {
      FMCONTROL_SetFMVoiceReg(bVar3 & 0x3f,param_1,param_2 & 0x7f,param_3);
      return;
    }
    WTCONTROL_SetWTVoiceReg(bVar3 & 0x3f,param_1,param_2 & 0x7f,param_3);
    return;
  }
  uVar4 = 0;
  bVar3 = param_2 & 0x7f;
LAB_0013577c:
  VIRTUALREGISTER_SetRegC(uVar4,bVar3);
  return;
}

