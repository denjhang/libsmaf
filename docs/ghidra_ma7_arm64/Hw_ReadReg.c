/* Hw_ReadReg @ 00133964 6360B */


uint Hw_ReadReg(char param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  ulong uVar8;
  
  uVar3 = 0xff;
  if (DAT_00568030 != '\0') {
    return 0xff;
  }
  EnterCriticalSection((critical_section *)&DAT_00582978);
  switch(param_1) {
  case '\0':
    uVar3 = (uint)DAT_00582971;
    uVar5 = ARM::SIrqFifo_GetStatus();
    if ((uVar5 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 | 0x10;
    }
    else {
      DAT_005829c0 = DAT_005829c0 & 0xffef;
    }
    uVar4 = ARM::Sequencer_GetStatus('\0');
    if ((uVar4 >> 2 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 & 0xbfff;
    }
    else {
      DAT_005829c0 = DAT_005829c0 | 0x4000;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    bVar1 = *pbVar6;
    uVar4 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar4 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar4 & 0xff);
    if (uVar4 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar4 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = 2;
        }
      }
    }
    uVar2 = ARM::STMCONTROL_GetStreamPG('\0');
    if (uVar4 < uVar2) {
      DAT_005829c0 = DAT_005829c0 & 0xfffe;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 1;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x01');
    bVar1 = *pbVar6;
    uVar4 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar4 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar4 & 0xff);
    if (uVar4 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x01');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar4 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = 2;
        }
      }
    }
    uVar2 = ARM::STMCONTROL_GetStreamPG('\x01');
    if (uVar4 < uVar2) {
      DAT_005829c0 = DAT_005829c0 & 0xfffd;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 2;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    bVar1 = *pbVar6;
    uVar4 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar4 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar4 & 0xff);
    if (uVar4 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar4 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = 2;
        }
      }
    }
    uVar2 = ARM::STMCONTROL_GetStreamPG('\x02');
    if (uVar4 < uVar2) {
      DAT_005829c0 = DAT_005829c0 & 0xfffb;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 4;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x03');
    bVar1 = *pbVar6;
    uVar4 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar4 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar4 & 0xff);
    if (uVar4 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x03');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar4 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = 2;
        }
      }
    }
    uVar2 = ARM::STMCONTROL_GetStreamPG('\x03');
    if (uVar4 < uVar2) {
      DAT_005829c0 = DAT_005829c0 & 0xfff7;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 8;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    uVar4 = ARM::Sequencer_GetStatus('\x01');
    if ((uVar4 >> 2 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 & 0xff7f;
    }
    else {
      DAT_005829c0 = DAT_005829c0 | 0x80;
    }
    if ((DAT_005829c0 & DAT_00568038 & DAT_005829e0) != 0) {
      uVar3 = uVar3 | 1;
    }
    break;
  case '\x01':
    uVar3 = (uint)DAT_00582970;
    break;
  case '\x02':
    uVar3 = FUN_001315cc(DAT_00582970);
    uVar3 = uVar3 & 0xff;
    break;
  case '\x03':
    uVar3 = (uint)DAT_005829f0;
    DAT_00582971 = DAT_00582971 & 0xcd;
    break;
  case '\x04':
    uVar3 = ARM::SIrqFifo_GetData();
    uVar3 = uVar3 & 0xff;
    break;
  case '\x05':
    uVar3 = 0x71;
    break;
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
    bVar1 = param_1 - 6;
    uVar5 = ARM::STMCONTROL_GetStreamPG(bVar1);
    uVar8 = uVar5 & 0xffffffff;
    uVar4 = (uint)uVar5;
    (&DAT_00582a00)[(int)(uint)bVar1] = uVar4;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar1);
    bVar1 = *pbVar6;
    if ((bVar1 & 3) == 1) {
      uVar3 = 5;
      if ((bVar1 & 0x40) != 0) {
        uVar2 = 9;
        goto LAB_0013476c;
      }
LAB_00134ed0:
      uVar2 = 0x80;
      bVar7 = 0;
      if (uVar3 <= uVar4) goto LAB_00134798;
      uVar3 = (uint)(uVar8 >> 3);
LAB_001347a4:
      uVar3 = uVar2 | uVar3 & 0x7f;
    }
    else {
      if ((bVar1 & 3) == 0) {
        bVar7 = bVar1 & 0x40;
        if (2 < uVar4) goto LAB_00134798;
        uVar2 = 0x80;
        uVar3 = 0x80;
        bVar7 = bVar1 & 0x40;
joined_r0x001347c0:
        if (bVar7 == 0) {
          uVar3 = (uint)(uVar8 >> 3);
          goto LAB_001347a4;
        }
      }
      else {
        uVar3 = 3;
        if ((bVar1 & 0x40) == 0) goto LAB_00134ed0;
        uVar2 = 5;
LAB_0013476c:
        bVar7 = bVar1 & 0x40;
        uVar3 = 0x80;
        if (uVar2 <= uVar4) {
LAB_00134798:
          uVar2 = 0;
          uVar3 = 0;
          goto joined_r0x001347c0;
        }
      }
      uVar3 = uVar3 | (uint)(uVar8 >> 4) & 0x7f;
    }
    break;
  case '\n':
    uVar3 = 0;
    break;
  case '\v':
    uVar5 = ARM::SIrqFifo_GetStatus();
    if ((uVar5 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 | 0x10;
    }
    else {
      DAT_005829c0 = DAT_005829c0 & 0xffef;
    }
    uVar3 = ARM::Sequencer_GetStatus('\0');
    if ((uVar3 >> 2 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 & 0xbfff;
    }
    else {
      DAT_005829c0 = DAT_005829c0 | 0x4000;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\0');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffe;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 1;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x01');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x01');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x01');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffd;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 2;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x02');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffb;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 4;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x03');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x03');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x03');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfff7;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 8;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    uVar3 = ARM::Sequencer_GetStatus('\x01');
    if ((uVar3 >> 2 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 & 0xff7f;
    }
    else {
      DAT_005829c0 = DAT_005829c0 | 0x80;
    }
    uVar3 = (uint)((byte)DAT_00568038 & (byte)DAT_005829e0) & (uint)DAT_005829c0;
    break;
  case '\f':
    uVar5 = ARM::SIrqFifo_GetStatus();
    if ((uVar5 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 | 0x10;
    }
    else {
      DAT_005829c0 = DAT_005829c0 & 0xffef;
    }
    uVar3 = ARM::Sequencer_GetStatus('\0');
    if ((uVar3 >> 2 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 & 0xbfff;
    }
    else {
      DAT_005829c0 = DAT_005829c0 | 0x4000;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\0');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffe;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 1;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x01');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x01');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x01');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffd;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 2;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x02');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffb;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 4;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x03');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x03');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x03');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfff7;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 8;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    uVar3 = ARM::Sequencer_GetStatus('\x01');
    if ((uVar3 >> 2 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 & 0xff7f;
    }
    else {
      DAT_005829c0 = DAT_005829c0 | 0x80;
    }
    uVar3 = (uint)(ushort)((DAT_005829c0 & DAT_005829e0) >> 8);
    break;
  case '\r':
    uVar3 = (uint)(byte)DAT_005829e0;
    break;
  case '\x0e':
    uVar3 = (uint)DAT_005829e0._1_1_;
    break;
  case '\x0f':
    uVar5 = ARM::SIrqFifo_GetStatus();
    if ((uVar5 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 | 0x10;
    }
    else {
      DAT_005829c0 = DAT_005829c0 & 0xffef;
    }
    uVar3 = ARM::Sequencer_GetStatus('\0');
    if ((uVar3 >> 2 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 & 0xbfff;
    }
    else {
      DAT_005829c0 = DAT_005829c0 | 0x4000;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\0');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffe;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 1;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x01');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x01');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x01');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffd;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 2;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x02');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfffb;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 4;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x03');
    bVar1 = *pbVar6;
    uVar3 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    uVar3 = ((bVar1 >> 6 & 1) + 1) * 0x80 * (uVar3 & 0xff);
    if (uVar3 == 0) {
      pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x03');
      bVar1 = *pbVar6;
      if ((bVar1 & 3) == 1) {
        uVar3 = 8;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 4;
        }
      }
      else if ((bVar1 & 3) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
        if ((bVar1 & 0x40) == 0) {
          uVar3 = 2;
        }
      }
    }
    uVar4 = ARM::STMCONTROL_GetStreamPG('\x03');
    if (uVar3 < uVar4) {
      DAT_005829c0 = DAT_005829c0 & 0xfff7;
    }
    else if ((pbVar6[6] & 0x50) == 0x40) {
      DAT_005829c0 = DAT_005829c0 | 8;
    }
    DAT_00568038 = 0xfff0;
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\0');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 3;
    }
    else {
      DAT_00568038 = DAT_00568038 | 1;
    }
    pbVar6 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer('\x02');
    if ((*pbVar6 >> 6 & 1) == 0) {
      DAT_00568038 = DAT_00568038 | 0xc;
    }
    else {
      DAT_00568038 = DAT_00568038 | 4;
    }
    uVar3 = ARM::Sequencer_GetStatus('\x01');
    if ((uVar3 >> 2 & 1) == 0) {
      DAT_005829c0 = DAT_005829c0 & 0xff7f;
    }
    else {
      DAT_005829c0 = DAT_005829c0 | 0x80;
    }
    uVar3 = (uint)DAT_005829c0;
    uVar3 = (int)uVar3 >> 7 & 0x80U | (int)uVar3 >> 1 & 0x40U | uVar3 & 0x1f;
  }
  LeaveCriticalSection((critical_section *)&DAT_00582978);
  return uVar3;
}

