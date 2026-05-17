/* Hw_WriteReg @ 00138864 1756B */


void Hw_WriteReg(byte param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_00568030 != '\0') {
    return;
  }
  EnterCriticalSection((critical_section *)&DAT_00582978);
  uVar4 = DAT_00582a24;
  if (0xe < param_1) goto LAB_001388b4;
  uVar2 = (uint)param_2;
  uVar5 = (uint)param_2;
  switch(param_1) {
  case 0:
    uVar4 = (uint)DAT_00582971;
    if (((DAT_00582971 >> 6 & 1) != 0) && ((param_2 >> 6 & 1) != 0)) {
      uVar4 = DAT_00582971 & 0xffffffbf;
    }
    bVar1 = (byte)uVar4;
    if (((uVar4 >> 1 & 1) != 0) && ((param_2 >> 1 & 1) != 0)) {
      bVar1 = bVar1 & 0xcd;
    }
    DAT_00582971 = bVar1 & 0x7f | param_2 & 0x80;
    break;
  case 1:
    DAT_00582970 = param_2;
    break;
  case 2:
    FUN_001378fc(DAT_00582970,param_2);
    break;
  case 3:
    switch(DAT_00582a10) {
    case 3:
      DAT_00582a14 = uVar5 & 0x7f;
      if (-1 < (char)param_2) {
        DAT_00582a10 = 4;
        goto LAB_001388b4;
      }
      goto LAB_00138d24;
    case 4:
      DAT_00582a14 = (uVar5 & 0x7f) << 7 | DAT_00582a14;
      if (-1 < (char)param_2) {
        DAT_00582a10 = 5;
        goto LAB_001388b4;
      }
LAB_00138d24:
      DAT_00582a10 = 8;
      goto LAB_001388b4;
    case 5:
      DAT_00582a10 = 6;
      DAT_00582a14 = ((uVar5 & 0x7f) << 0xe | DAT_00582a14) & 0x1ffff;
      goto LAB_001388b4;
    case 6:
      DAT_00582a18 = uVar2 & 0x7f;
      if (-1 < (char)param_2) {
        DAT_00582a10 = 7;
        goto LAB_001388b4;
      }
      if ((param_2 & 0x7f) != 0) goto LAB_00138b34;
      break;
    case 7:
      DAT_00582a18 = (uVar5 & 0x7f) << 7 | DAT_00582a18;
      if (DAT_00582a18 != 0) {
LAB_00138b34:
        DAT_00582a10 = 9;
        goto LAB_001388b4;
      }
      break;
    case 8:
      ARM::SetCtrlReg((uchar)DAT_00582a14,param_2,'\0');
      DAT_00582a14 = DAT_00582a14 + 1;
      if (-1 < (char)param_2) goto LAB_001388b4;
      break;
    case 9:
      ARM::VIRTUALMEMORY_SetMemoryData(DAT_00582a14,param_2);
      DAT_00582a18 = DAT_00582a18 - 1;
      DAT_00582a14 = DAT_00582a14 + 1;
      if (DAT_00582a18 != 0) goto LAB_001388b4;
      break;
    default:
      DAT_00582a10 = 3;
      goto LAB_001388b4;
    }
    DAT_00582a10 = 3;
    break;
  case 4:
    ARM::Sequencer_SetData('\0',param_2);
    break;
  case 5:
    ARM::Sequencer_SetData('\x01',param_2);
    break;
  case 6:
    ARM::STMCONTROL_WriteData('\0',param_2);
    break;
  case 7:
    ARM::STMCONTROL_WriteData('\x01',param_2);
    break;
  case 8:
    ARM::STMCONTROL_WriteData('\x02',param_2);
    break;
  case 9:
    ARM::STMCONTROL_WriteData('\x03',param_2);
    break;
  case 10:
    switch(DAT_00582a20) {
    case 3:
      DAT_00582a24 = uVar5 & 0x7f;
      if (-1 < (char)param_2) {
        DAT_00582a20 = 4;
        break;
      }
      goto LAB_00138d14;
    case 4:
      DAT_00582a24 = (uVar5 & 0x7f) << 7 | DAT_00582a24;
      if (-1 < (char)param_2) {
        DAT_00582a20 = 5;
        break;
      }
LAB_00138d14:
      DAT_00582a20 = 8;
      break;
    case 5:
      DAT_00582a20 = 9;
      DAT_00582a24 = (uVar2 & 0x7f) << 0xe | DAT_00582a24;
      break;
    default:
      DAT_00582a20 = 3;
      break;
    case 8:
      uVar2 = uVar2 & 1;
      if ((param_2 & 1) != 0) break;
      uVar5 = DAT_00582a24 & 0xff;
      if ((DAT_00582a24 & 0xff) < 0xb) {
        uVar4 = ARM::VIRTUALREGISTER_GetRegC((ushort)uVar2);
        if ((uVar4 & 0x40) == 0) {
          bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
          pbVar3 = (byte *)ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar1 & 0x3f);
        }
        else {
          bVar1 = ARM::VIRTUALREGISTER_GetRegC((ushort)uVar2);
          pbVar3 = (byte *)ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar1 & 0x3f);
        }
        switch(uVar5) {
        case 1:
switchD_00138e30_caseD_73:
          uVar2 = (uint)*pbVar3;
          break;
        case 2:
switchD_00138e30_caseD_74:
          uVar2 = (uint)pbVar3[1];
          break;
        case 3:
switchD_00138e30_caseD_75:
          uVar2 = (uint)pbVar3[2];
          break;
        case 4:
switchD_00138e30_caseD_76:
          uVar2 = (uint)pbVar3[3];
          break;
        case 5:
switchD_00138e30_caseD_77:
          uVar2 = (uint)pbVar3[4];
          break;
        case 6:
switchD_00138e30_caseD_78:
          uVar2 = (uint)pbVar3[5];
          break;
        case 7:
switchD_00138e30_caseD_79:
          uVar2 = (uint)pbVar3[6];
          break;
        case 8:
switchD_00138e6c_caseD_65:
          uVar2 = (uint)pbVar3[7];
          break;
        case 9:
switchD_00138e6c_caseD_66:
          uVar2 = (uint)pbVar3[8];
          break;
        case 10:
switchD_00138e6c_caseD_67:
          uVar2 = (uint)pbVar3[9];
          break;
        default:
          uVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
          uVar2 = uVar2 & 0xff;
        }
      }
      else {
        uVar6 = DAT_00582a24 & 0xff;
        if (uVar5 < 0x18) {
          bVar1 = ARM::VIRTUALREGISTER_GetRegC(0xb);
          pbVar3 = (byte *)ARM::VIRTUALREGISTER_GetChannelInfoPointer(bVar1 & 0x3f);
          uVar2 = 0xff;
          switch(uVar4 & 0xff) {
          case 0xb:
            uVar2 = ARM::VIRTUALREGISTER_GetRegC(0xb);
            uVar2 = uVar2 & 0xff;
            break;
          case 0xc:
            goto switchD_00138e30_caseD_73;
          case 0xd:
            goto switchD_00138e30_caseD_74;
          case 0xe:
            goto switchD_00138e30_caseD_75;
          case 0xf:
            goto switchD_00138e30_caseD_76;
          case 0x10:
            goto switchD_00138e30_caseD_77;
          case 0x11:
            goto switchD_00138e30_caseD_78;
          case 0x12:
            goto switchD_00138e30_caseD_79;
          case 0x13:
            goto switchD_00138e6c_caseD_65;
          case 0x14:
            goto switchD_00138e6c_caseD_66;
          case 0x15:
            goto switchD_00138e6c_caseD_67;
          case 0x16:
switchD_00138e6c_caseD_68:
            uVar2 = (uint)pbVar3[10];
            break;
          case 0x17:
switchD_00138e6c_caseD_69:
            uVar2 = (uint)pbVar3[0xb];
          }
        }
        else if (uVar6 < 0x27) {
LAB_00138d3c:
          uVar2 = ARM::VIRTUALREGISTER_GetRegC((ushort)(DAT_00582a24 & 0xff));
          uVar2 = uVar2 & 0xff;
        }
        else if (1 < (uVar6 - 0x27 & 0xff)) {
          if (uVar6 < 0x5d) goto LAB_00138d3c;
          if (uVar6 < 0x72) {
            bVar1 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
            pbVar3 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar1 & 3);
            uVar2 = 0xff;
            switch(uVar4 & 0xff) {
            case 0x5d:
              uVar2 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
              uVar2 = uVar2 & 0xff;
              break;
            case 0x5e:
              goto switchD_00138e30_caseD_73;
            case 0x5f:
              goto switchD_00138e30_caseD_74;
            case 0x60:
              goto switchD_00138e30_caseD_75;
            case 0x61:
              goto switchD_00138e30_caseD_76;
            case 0x62:
              goto switchD_00138e30_caseD_77;
            case 99:
              goto switchD_00138e30_caseD_78;
            case 100:
              goto switchD_00138e30_caseD_79;
            case 0x65:
              goto switchD_00138e6c_caseD_65;
            case 0x66:
              goto switchD_00138e6c_caseD_66;
            case 0x67:
              goto switchD_00138e6c_caseD_67;
            case 0x68:
              goto switchD_00138e6c_caseD_68;
            case 0x69:
              goto switchD_00138e6c_caseD_69;
            case 0x6a:
              uVar2 = (uint)pbVar3[0xc];
              break;
            case 0x6b:
              uVar2 = (uint)pbVar3[0xd];
              break;
            case 0x6c:
              uVar2 = (uint)pbVar3[0xe];
              break;
            case 0x6d:
              uVar2 = (uint)pbVar3[0xf];
              break;
            case 0x6e:
              uVar2 = (uint)pbVar3[0x10];
              break;
            case 0x6f:
              uVar2 = (uint)pbVar3[0x11];
              break;
            case 0x70:
              uVar2 = (uint)pbVar3[0x12];
              break;
            case 0x71:
              uVar2 = (uint)pbVar3[0x13];
            }
          }
          else if ((DAT_00582a24 & 0xff) < 0x7a) {
            bVar1 = ARM::VIRTUALREGISTER_GetRegC(0x72);
            pbVar3 = (byte *)ARM::VIRTUALREGISTER_GetExParamInfoPointer(bVar1 & 0xf);
            uVar2 = 0xff;
            switch(uVar4 & 0xff) {
            case 0x72:
              uVar2 = ARM::VIRTUALREGISTER_GetRegC(0x72);
              uVar2 = uVar2 & 0xff;
              break;
            case 0x73:
              goto switchD_00138e30_caseD_73;
            case 0x74:
              goto switchD_00138e30_caseD_74;
            case 0x75:
              goto switchD_00138e30_caseD_75;
            case 0x76:
              goto switchD_00138e30_caseD_76;
            case 0x77:
              goto switchD_00138e30_caseD_77;
            case 0x78:
              goto switchD_00138e30_caseD_78;
            case 0x79:
              goto switchD_00138e30_caseD_79;
            }
          }
          else {
            uVar2 = 0xff;
            if ((DAT_00582a24 >> 7 & 1) == 0) goto LAB_00138d3c;
          }
        }
      }
      DAT_005829f0 = (undefined1)uVar2;
      DAT_00582971 = DAT_00582971 | 2;
      DAT_00582a20 = 3;
      break;
    case 9:
      if ((param_2 & 1) == 0) {
        DAT_005829f0 = ARM::VIRTUALMEMORY_GetMemoryData(DAT_00582a24);
        DAT_00582a20 = 3;
        DAT_00582971 = DAT_00582971 | 2;
      }
    }
    break;
  case 0xb:
    DAT_005829c0 = DAT_005829c0 & (DAT_005829c0 & DAT_005829e0 & (ushort)param_2 ^ 0xffff);
    break;
  case 0xc:
    DAT_005829c0 = DAT_005829c0 & (DAT_005829c0 & DAT_005829e0 & (ushort)param_2 << 8 ^ 0xffff);
    break;
  case 0xd:
    DAT_005829e0 = (ushort)param_2 | DAT_005829e0 & 0xff00;
    bVar1 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    ARM::STMCONTROL_SetStreamInt('\0',bVar1 & 7,(byte)DAT_005829e0 & 1);
    bVar1 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    ARM::STMCONTROL_SetStreamInt('\x01',bVar1 & 7,(byte)(DAT_005829e0 >> 1) & 1);
    bVar1 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    ARM::STMCONTROL_SetStreamInt('\x02',bVar1 & 7,(byte)(DAT_005829e0 >> 2) & 1);
    bVar1 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    ARM::STMCONTROL_SetStreamInt('\x03',bVar1 & 7,(byte)(DAT_005829e0 >> 3) & 1);
    break;
  case 0xe:
    DAT_005829e0 = CONCAT11(param_2,(undefined1)DAT_005829e0);
  }
LAB_001388b4:
  LeaveCriticalSection((critical_section *)&DAT_00582978);
  return;
}

