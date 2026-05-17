/* Hw_GetInfo @ 0013597c 3684B */


/* WARNING: Type propagation algorithm not settling */

uint Hw_GetInfo(undefined4 param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uchar uVar11;
  
  if (DAT_00568030 == -1) {
    return 0xffffffff;
  }
  uVar5 = 0xffffffff;
  EnterCriticalSection((critical_section *)&DAT_00582978);
  switch(param_1) {
  case 0:
    uVar5 = ARM::GetDllVersion();
    break;
  case 1:
  case 2:
  case 3:
    uVar5 = 0;
    break;
  case 4:
    bVar1 = DAT_00582971 & 8;
    if (bVar1 != 0) {
      uVar5 = 0xff;
      uVar7 = 0xff;
      uVar6 = 0xff;
      goto LAB_00135a24;
    }
    uVar5 = ARM::VIRTUALREGISTER_GetRegM('\0',0x87);
    switch(uVar5 & 7) {
    case 2:
      uVar5 = 0;
      uVar11 = '\0';
      do {
        ARM::SetCtrlReg('\0',uVar11,'\0');
        uVar6 = ARM::VIRTUALREGISTER_GetRegC(0);
        if ((uVar6 & 0x40) == 0) {
          bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
          lVar10 = ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar1 & 0x3f);
        }
        else {
          bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
          lVar10 = ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar1 & 0x3f);
        }
        bVar1 = *(byte *)(lVar10 + 9);
        ARM::SetCtrlReg('\0',uVar11 + '\x01','\0');
        uVar6 = ARM::VIRTUALREGISTER_GetRegC(0);
        if ((uVar6 & 0x40) == 0) {
          bVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
          lVar10 = ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar2 & 0x3f);
        }
        else {
          bVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
          lVar10 = ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar2 & 0x3f);
        }
        uVar11 = uVar11 + '\x02';
        uVar5 = uVar5 | bVar1 & 7 | *(byte *)(lVar10 + 9) & 7;
      } while (uVar11 != 0x80);
      uVar6 = ARM::VIRTUALREGISTER_GetRegC(0x55);
      ARM::SetCtrlReg(']','\0','\0');
      bVar1 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
      lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar1 & 3);
      bVar1 = *(byte *)(lVar10 + 6);
      ARM::SetCtrlReg(']','\x01','\0');
      bVar2 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
      lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar2 & 3);
      bVar2 = *(byte *)(lVar10 + 6);
      ARM::SetCtrlReg(']','\x02','\0');
      bVar3 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
      lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar3 & 3);
      bVar3 = *(byte *)(lVar10 + 6);
      ARM::SetCtrlReg(']','\x03','\0');
      bVar4 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
      lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar4 & 3);
      bVar4 = *(byte *)(lVar10 + 6);
      if ((DAT_00582971 & 8) == 0) {
        uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0','U');
        uVar5 = uVar7 & 7 | uVar6 & 7 | uVar5 | bVar1 & 7 | bVar2 & 7 | bVar3 & 7 | bVar4 & 7;
        if ((DAT_00582971 & 8) != 0) {
          uVar5 = 0xff;
          uVar6 = 0xff;
          uVar7 = 0xff;
LAB_00136604:
          uVar8 = 0xff;
          if ((DAT_00582971 & 8) == 0) {
            uVar8 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8b);
            uVar8 = uVar8 & 0xff;
          }
          goto LAB_00136398;
        }
        uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x88);
        if ((uVar6 >> 7 & 1) != 0) {
          if ((DAT_00582971 & 8) == 0) {
            uVar8 = ARM::VIRTUALREGISTER_GetRegM('\0',0x88);
            uVar6 = uVar8 & 0xff;
            if ((DAT_00582971 & 8) == 0) {
              uVar9 = ARM::VIRTUALREGISTER_GetRegM('\0',0x89);
              uVar5 = uVar9 & 0xff;
              if ((DAT_00582971 & 8) == 0) {
                uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8a);
                uVar7 = uVar7 & 0xff;
                uVar5 = uVar9 & 0xff;
                uVar6 = uVar8 & 0xff;
                goto LAB_00136604;
              }
              uVar8 = 0xff;
              uVar7 = 0xff;
            }
            else {
              uVar8 = 0xff;
              uVar7 = 0xff;
              uVar5 = 0xff;
            }
          }
          else {
            uVar8 = 0xff;
            uVar7 = 0xff;
            uVar5 = 0xff;
            uVar6 = 0xff;
          }
          goto LAB_00136398;
        }
      }
      else {
        uVar5 = 0xff;
        uVar6 = 0xff;
        uVar8 = 0xff;
        uVar7 = 0xff;
LAB_00136398:
        uVar9 = (uint)DAT_005829d0;
        uVar5 = (uVar7 >> (ulong)(DAT_005829d0 & 0x1f) & 1) << 1 |
                (uVar8 >> (ulong)(DAT_005829d0 & 0x1f) & 1) << 2 |
                uVar5 >> (ulong)(uVar9 & 0x1f) & 1;
        if (((uVar6 >> (ulong)(uVar9 & 0x1f) & 1) != 0) || (6 < uVar9)) {
          DAT_005829d0 = 0;
          goto joined_r0x00135d88;
        }
        DAT_005829d0 = DAT_005829d0 + 1;
      }
      bVar1 = DAT_00582971 & 8;
      break;
    case 3:
      uVar5 = 0;
      uVar11 = '\0';
      do {
        ARM::SetCtrlReg('\0',uVar11,'\0');
        uVar6 = ARM::VIRTUALREGISTER_GetRegC(0);
        if ((uVar6 & 0x40) == 0) {
          bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
          lVar10 = ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar1 & 0x3f);
        }
        else {
          bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
          lVar10 = ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar1 & 0x3f);
        }
        bVar1 = *(byte *)(lVar10 + 9);
        ARM::SetCtrlReg('\0',uVar11 + '\x01','\0');
        uVar6 = ARM::VIRTUALREGISTER_GetRegC(0);
        if ((uVar6 & 0x40) == 0) {
          bVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
          lVar10 = ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar2 & 0x3f);
        }
        else {
          bVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
          lVar10 = ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar2 & 0x3f);
        }
        uVar11 = uVar11 + '\x02';
        uVar5 = uVar5 | bVar1 & 7 | *(byte *)(lVar10 + 9) & 7;
      } while (uVar11 != 0x80);
      uVar6 = ARM::VIRTUALREGISTER_GetRegC(0x55);
      ARM::SetCtrlReg(']','\0','\0');
      bVar1 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
      lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar1 & 3);
      bVar1 = *(byte *)(lVar10 + 6);
      ARM::SetCtrlReg(']','\x01','\0');
      bVar2 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
      lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar2 & 3);
      bVar2 = *(byte *)(lVar10 + 6);
      ARM::SetCtrlReg(']','\x02','\0');
      bVar3 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
      lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar3 & 3);
      bVar3 = *(byte *)(lVar10 + 6);
      ARM::SetCtrlReg(']','\x03','\0');
      bVar4 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
      lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar4 & 3);
      bVar4 = *(byte *)(lVar10 + 6);
      if ((DAT_00582971 & 8) == 0) {
        uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0','U');
        uVar5 = uVar7 & 7 | uVar6 & 7 | uVar5 | bVar1 & 7 | bVar2 & 7 | bVar3 & 7 | bVar4 & 7;
        if ((DAT_00582971 & 8) != 0) {
          uVar5 = 0xff;
          uVar6 = 0xff;
          uVar7 = 0xff;
LAB_00136520:
          uVar8 = 0xff;
          if ((DAT_00582971 & 8) == 0) {
            uVar8 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8b);
            uVar8 = uVar8 & 0xff;
          }
          goto LAB_00136260;
        }
        uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x88);
        if ((uVar6 >> 7 & 1) != 0) {
          if ((DAT_00582971 & 8) == 0) {
            uVar8 = ARM::VIRTUALREGISTER_GetRegM('\0',0x88);
            uVar6 = uVar8 & 0xff;
            if ((DAT_00582971 & 8) == 0) {
              uVar9 = ARM::VIRTUALREGISTER_GetRegM('\0',0x89);
              uVar5 = uVar9 & 0xff;
              if ((DAT_00582971 & 8) == 0) {
                uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8a);
                uVar7 = uVar7 & 0xff;
                uVar5 = uVar9 & 0xff;
                uVar6 = uVar8 & 0xff;
                goto LAB_00136520;
              }
              uVar8 = 0xff;
              uVar7 = 0xff;
            }
            else {
              uVar8 = 0xff;
              uVar7 = 0xff;
              uVar5 = 0xff;
            }
          }
          else {
            uVar8 = 0xff;
            uVar7 = 0xff;
            uVar5 = 0xff;
            uVar6 = 0xff;
          }
          goto LAB_00136260;
        }
      }
      else {
        uVar5 = 0xff;
        uVar6 = 0xff;
        uVar8 = 0xff;
        uVar7 = 0xff;
LAB_00136260:
        uVar9 = (uint)DAT_005829d0;
        uVar5 = (uVar7 >> (ulong)(DAT_005829d0 & 0x1f) & 1) << 1 |
                (uVar8 >> (ulong)(DAT_005829d0 & 0x1f) & 1) << 2 |
                uVar5 >> (ulong)(uVar9 & 0x1f) & 1;
        if (((uVar6 >> (ulong)(uVar9 & 0x1f) & 1) == 0) && (uVar9 < 7)) {
          DAT_005829d0 = DAT_005829d0 + 1;
        }
        else {
          DAT_005829d0 = 0;
        }
      }
      if (DAT_005829cc == 0) goto switchD_00135acc_default;
      goto joined_r0x00135d88;
    case 4:
      uVar5 = 7;
      bVar1 = DAT_00582971 & 8;
      if (bVar1 == 0) {
        uVar5 = ARM::VIRTUALREGISTER_GetRegM('\0',0x86);
        uVar5 = uVar5 & 7;
        goto joined_r0x00135d88;
      }
      break;
    case 5:
      if ((DAT_00582971 & 8) != 0) {
        uVar5 = 0;
        if (DAT_005829cc != 0) {
          uVar5 = 7;
        }
        goto switchD_001359f8_default;
      }
      uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x86);
      uVar5 = 0;
      if (DAT_005829cc == 0) goto joined_r0x00135d88;
      bVar1 = DAT_00582971 & 8;
      uVar5 = uVar6 & 7;
      break;
    case 6:
      bVar1 = DAT_00582971 & 8;
      if (bVar1 == 0) {
        uVar5 = ARM::VIRTUALREGISTER_GetRegM('\0',0x86);
        uVar5 = uVar5 & 7;
        bVar1 = DAT_00582971 & 8;
        if (bVar1 == 0) {
          uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x88);
          bVar1 = DAT_00582971 & 8;
          if ((uVar6 >> 7 & 1) == 0) break;
          if (bVar1 == 0) {
            uVar5 = ARM::VIRTUALREGISTER_GetRegM('\0',0x89);
            uVar5 = uVar5 & 0xff;
            bVar1 = DAT_00582971 & 8;
            if (bVar1 == 0) {
              uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8a);
              uVar6 = uVar6 & 0xff;
              uVar7 = 0xff;
              bVar1 = DAT_00582971 & 8;
              if (bVar1 == 0) {
                uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8b);
                uVar7 = uVar7 & 0xff;
                bVar1 = DAT_00582971 & 8;
              }
            }
            else {
              uVar7 = 0xff;
              uVar6 = 0xff;
            }
          }
          else {
            uVar7 = 0xff;
            uVar6 = 0xff;
            uVar5 = uVar7;
          }
        }
        else {
          uVar7 = 0xff;
          uVar6 = 0xff;
          uVar5 = 0xff;
        }
      }
      else {
        uVar6 = 0xff;
        uVar7 = 0xff;
        uVar5 = 0xff;
      }
      uVar5 = (uVar6 >> (ulong)(DAT_005829d0 & 0x1f) & 1) << 1 |
              (uVar7 >> (ulong)(DAT_005829d0 & 0x1f) & 1) << 2 |
              uVar5 >> (ulong)(DAT_005829d0 & 0x1f) & 1;
      break;
    case 7:
      if ((DAT_00582971 & 8) == 0) {
        uVar5 = ARM::VIRTUALREGISTER_GetRegM('\0',0x86);
        uVar5 = uVar5 & 7;
        bVar1 = DAT_00582971 & 8;
        if (bVar1 != 0) {
          uVar7 = 0xff;
          uVar6 = 0xff;
          uVar5 = 0xff;
          goto LAB_00135a24;
        }
        uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x88);
        if ((uVar6 >> 7 & 1) != 0) {
          bVar1 = DAT_00582971 & 8;
          if (bVar1 == 0) {
            uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0',0x89);
            uVar5 = uVar7 & 0xff;
            bVar1 = DAT_00582971 & 8;
            if (bVar1 == 0) {
              uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8a);
              uVar6 = uVar6 & 0xff;
              uVar5 = uVar7 & 0xff;
              goto LAB_00136704;
            }
            uVar7 = 0xff;
            uVar6 = 0xff;
          }
          else {
            uVar7 = 0xff;
            uVar6 = 0xff;
            uVar5 = 0xff;
          }
          goto LAB_00135a24;
        }
        bVar1 = DAT_00582971 & 8;
      }
      else {
        uVar5 = 0xff;
        uVar6 = 0xff;
LAB_00136704:
        uVar7 = 0xff;
        bVar1 = DAT_00582971 & 8;
        if (bVar1 == 0) {
          uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8b);
          uVar7 = uVar7 & 0xff;
          bVar1 = DAT_00582971 & 8;
        }
LAB_00135a24:
        uVar5 = (uVar6 >> (ulong)(DAT_005829d0 & 0x1f) & 1) << 1 |
                (uVar7 >> (ulong)(DAT_005829d0 & 0x1f) & 1) << 2 |
                uVar5 >> (ulong)(DAT_005829d0 & 0x1f) & 1;
      }
      if (DAT_005829cc == 0) {
        uVar5 = 0;
      }
      break;
    default:
switchD_00135acc_default:
      uVar5 = 0;
joined_r0x00135d88:
      bVar1 = DAT_00582971 & 8;
    }
    if (bVar1 == 0) {
      uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8d);
      switch(uVar6 & 7) {
      case 2:
        uVar6 = 0;
        uVar11 = '\0';
        do {
          ARM::SetCtrlReg('\0',uVar11,'\0');
          uVar7 = ARM::VIRTUALREGISTER_GetRegC(0);
          if ((uVar7 & 0x40) == 0) {
            bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
            lVar10 = ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar1 & 0x3f);
          }
          else {
            bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
            lVar10 = ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar1 & 0x3f);
          }
          bVar1 = *(byte *)(lVar10 + 9);
          ARM::SetCtrlReg('\0',uVar11 + '\x01','\0');
          uVar7 = ARM::VIRTUALREGISTER_GetRegC(0);
          if ((uVar7 & 0x40) == 0) {
            bVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
            lVar10 = ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar2 & 0x3f);
          }
          else {
            bVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
            lVar10 = ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar2 & 0x3f);
          }
          uVar11 = uVar11 + '\x02';
          uVar6 = uVar6 | bVar1 & 8 | *(byte *)(lVar10 + 9) & 8;
        } while (uVar11 != 0x80);
        uVar8 = ARM::VIRTUALREGISTER_GetRegC(0x55);
        ARM::SetCtrlReg(']','\0','\0');
        bVar1 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
        lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar1 & 3);
        bVar1 = *(byte *)(lVar10 + 6);
        ARM::SetCtrlReg(']','\x01','\0');
        bVar2 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
        lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar2 & 3);
        bVar2 = *(byte *)(lVar10 + 6);
        ARM::SetCtrlReg(']','\x02','\0');
        bVar3 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
        lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar3 & 3);
        bVar3 = *(byte *)(lVar10 + 6);
        ARM::SetCtrlReg(']','\x03','\0');
        bVar4 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
        lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar4 & 3);
        bVar4 = *(byte *)(lVar10 + 6);
        uVar7 = 8;
        if ((DAT_00582971 & 8) == 0) {
          uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0','U');
          uVar7 = uVar7 & 8;
        }
        uVar5 = uVar5 + ((uVar7 | uVar8 & 8 | uVar6 | bVar1 & 8 | bVar2 & 8 | bVar3 & 8 | bVar4 & 8)
                        >> 3) * 0x10;
        break;
      case 3:
        uVar6 = 0;
        uVar11 = '\0';
        do {
          ARM::SetCtrlReg('\0',uVar11,'\0');
          uVar7 = ARM::VIRTUALREGISTER_GetRegC(0);
          if ((uVar7 & 0x40) == 0) {
            bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
            lVar10 = ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar1 & 0x3f);
          }
          else {
            bVar1 = ARM::VIRTUALREGISTER_GetRegC(0);
            lVar10 = ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar1 & 0x3f);
          }
          bVar1 = *(byte *)(lVar10 + 9);
          ARM::SetCtrlReg('\0',uVar11 + '\x01','\0');
          uVar7 = ARM::VIRTUALREGISTER_GetRegC(0);
          if ((uVar7 & 0x40) == 0) {
            bVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
            lVar10 = ARM::VIRTUALREGISTER_GetFmInfoPointer(bVar2 & 0x3f);
          }
          else {
            bVar2 = ARM::VIRTUALREGISTER_GetRegC(0);
            lVar10 = ARM::VIRTUALREGISTER_GetWtInfoPointer(bVar2 & 0x3f);
          }
          uVar11 = uVar11 + '\x02';
          uVar6 = uVar6 | bVar1 & 8 | *(byte *)(lVar10 + 9) & 8;
        } while (uVar11 != 0x80);
        uVar8 = ARM::VIRTUALREGISTER_GetRegC(0x55);
        ARM::SetCtrlReg(']','\0','\0');
        bVar1 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
        lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar1 & 3);
        bVar1 = *(byte *)(lVar10 + 6);
        ARM::SetCtrlReg(']','\x01','\0');
        bVar2 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
        lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar2 & 3);
        bVar2 = *(byte *)(lVar10 + 6);
        ARM::SetCtrlReg(']','\x02','\0');
        bVar3 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
        lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar3 & 3);
        bVar3 = *(byte *)(lVar10 + 6);
        ARM::SetCtrlReg(']','\x03','\0');
        bVar4 = ARM::VIRTUALREGISTER_GetRegC(0x5d);
        lVar10 = ARM::VIRTUALREGISTER_GetStreamInfoPointer(bVar4 & 3);
        bVar4 = *(byte *)(lVar10 + 6);
        uVar7 = 8;
        if ((DAT_00582971 & 8) == 0) {
          uVar7 = ARM::VIRTUALREGISTER_GetRegM('\0','U');
          uVar7 = uVar7 & 8;
        }
        uVar5 = uVar5 + (DAT_005829dc &
                        (uVar7 | uVar8 & 8 | uVar6 | bVar1 & 8 | bVar2 & 8 | bVar3 & 8 | bVar4 & 8)
                        >> 3) * 0x10;
        break;
      case 4:
        if ((DAT_00582971 & 8) == 0) {
          uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8c);
          uVar5 = (uVar6 & 1) * 0x10 + uVar5;
        }
        else {
          uVar5 = uVar5 + 0x10;
        }
        break;
      case 5:
        uVar6 = 1;
        if ((DAT_00582971 & 8) == 0) {
          uVar6 = ARM::VIRTUALREGISTER_GetRegM('\0',0x8c);
          uVar6 = uVar6 & 1;
        }
        uVar5 = uVar5 + (uVar6 & DAT_005829dc) * 0x10;
      }
    }
    break;
  case 5:
    uVar5 = ARM::DINCONTROL_GetPos(param_2);
  }
switchD_001359f8_default:
  LeaveCriticalSection((critical_section *)&DAT_00582978);
  return uVar5;
}

