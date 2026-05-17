/* machdep_PowerManagement @ 00179024 3580B */


/* YAMAHA::machdep_PowerManagement(unsigned int, unsigned int) */

int YAMAHA::machdep_PowerManagement(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  iVar3 = -2;
  switch(param_2) {
  case 0:
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfe);
    machdep_Wait(2000000);
    machdep_WriteReg(1,'f');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0x7f);
    machdep_Wait(2000000);
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfd);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfb);
    if (param_1 - 0x23 < 2) {
      machdep_WriteReg(2,'\0');
      machdep_Wait(0xa2e4);
    }
    else {
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xf7);
    }
    iVar3 = 300;
    machdep_WriteReg(1,'\0');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 0xc0);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0x3f);
    machdep_Wait(0x239b0);
    uVar2 = machdep_ReadReg(0);
    if ((uVar2 >> 2 & 1) == 0) {
LAB_001794c8:
      iVar3 = MaDevDrv_VerifyRegisters();
      if (-1 < iVar3) {
        if (param_1 == 0x20) {
          iVar5 = 300;
          machdep_WriteReg(1,'f');
          bVar1 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar1 & 0xfe);
          machdep_WriteReg(1,0x80);
          uVar4 = machdep_ReadReg(2);
          if ((uVar4 & 1) == 0) {
            do {
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179b08;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179b08;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179b08;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179b08;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179b08;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179b08;
              iVar5 = iVar5 + -6;
            } while (iVar5 != 0);
            iVar3 = -5;
          }
          else {
LAB_00179b08:
            iVar5 = 300;
            machdep_WriteReg(1,'f');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xf7);
            machdep_WriteReg(1,'f');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xfd);
            machdep_WriteReg(1,'g');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xfd);
            machdep_Wait(10000);
            machdep_WriteReg(1,'f');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xfb);
            machdep_WriteReg(1,'g');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xfb);
            machdep_WriteReg(1,'m');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 | 1);
            machdep_StoreReg(0x6d,bVar1 | 1);
            machdep_WriteReg(1,'f');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xef);
            machdep_WriteReg(1,0x80);
            uVar2 = machdep_ReadReg(2);
            if ((uVar2 >> 1 & 1) == 0) {
              do {
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_00179cc0;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_00179cc0;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_00179cc0;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_00179cc0;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_00179cc0;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_00179cc0;
                iVar5 = iVar5 + -6;
              } while (iVar5 != 0);
              iVar3 = -5;
            }
            else {
LAB_00179cc0:
              machdep_WriteReg(1,'l');
              bVar1 = machdep_ReadReg(2);
              machdep_WriteReg(2,bVar1 | 0x11);
              machdep_StoreReg(0x6c,bVar1 | 0x11);
              machdep_WriteReg(1,'r');
              machdep_WriteReg(2,'\x1f');
              machdep_StoreReg(0x72,'\x1f');
              machdep_WriteReg(1,'s');
              machdep_WriteReg(2,'\x1f');
              machdep_StoreReg(0x73,'\x1f');
            }
          }
        }
        else if (param_1 == 0x21) {
          machdep_WriteReg(1,0x9f);
          machdep_WriteReg(2,'\v');
          machdep_WriteReg(1,0xed);
          machdep_WriteReg(2,'\x01');
          machdep_WriteReg(1,0xf7);
          machdep_WriteReg(2,'\x01');
        }
        else if (param_1 - 0x22 < 3) {
          iVar5 = 300;
          machdep_WriteReg(1,'f');
          bVar1 = machdep_ReadReg(2);
          machdep_WriteReg(2,bVar1 & 0xfe);
          machdep_WriteReg(1,0x80);
          uVar4 = machdep_ReadReg(2);
          if ((uVar4 & 1) == 0) {
            do {
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179750;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179750;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179750;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179750;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179750;
              machdep_Sleep(10);
              uVar4 = machdep_ReadReg(2);
              if ((uVar4 & 1) != 0) goto LAB_00179750;
              iVar5 = iVar5 + -6;
            } while (iVar5 != 0);
            iVar3 = -5;
          }
          else {
LAB_00179750:
            iVar5 = 300;
            machdep_WriteReg(1,'f');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xf7);
            machdep_WriteReg(1,'f');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xfd);
            machdep_WriteReg(1,'g');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xfd);
            machdep_Wait(10000);
            machdep_WriteReg(1,'f');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xfb);
            machdep_WriteReg(1,'g');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xfb);
            machdep_WriteReg(1,0xd3);
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 | 0x80);
            machdep_StoreReg(0xd3,bVar1 | 0x80);
            machdep_WriteReg(1,0xd4);
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 | 0x80);
            machdep_StoreReg(0xd4,bVar1 | 0x80);
            machdep_WriteReg(1,'f');
            bVar1 = machdep_ReadReg(2);
            machdep_WriteReg(2,bVar1 & 0xef);
            machdep_WriteReg(1,0x80);
            uVar2 = machdep_ReadReg(2);
            if ((uVar2 >> 1 & 1) == 0) {
              do {
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_0017993c;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_0017993c;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_0017993c;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_0017993c;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_0017993c;
                machdep_Sleep(10);
                uVar2 = machdep_ReadReg(2);
                if ((uVar2 >> 1 & 1) != 0) goto LAB_0017993c;
                iVar5 = iVar5 + -6;
              } while (iVar5 != 0);
              iVar3 = -5;
            }
            else {
LAB_0017993c:
              machdep_WriteReg(1,0xd1);
              bVar1 = machdep_ReadReg(2);
              machdep_WriteReg(2,bVar1 | 0x80);
              machdep_StoreReg(0xd1,bVar1 | 0x80);
              machdep_WriteReg(1,0xd2);
              bVar1 = machdep_ReadReg(2);
              machdep_WriteReg(2,bVar1 | 0x80);
              machdep_StoreReg(0xd2,bVar1 | 0x80);
              machdep_WriteReg(1,0xc5);
              machdep_WriteReg(2,'\x7f');
              machdep_StoreReg(0xc5,'\x7f');
              machdep_WriteReg(1,0xc6);
              machdep_WriteReg(2,'\x7f');
              machdep_StoreReg(0xc6,'\x7f');
            }
          }
        }
      }
    }
    else {
      do {
        machdep_Sleep(10);
        uVar2 = machdep_ReadReg(0);
        if ((uVar2 >> 2 & 1) == 0) goto LAB_001794c8;
        machdep_Sleep(10);
        uVar2 = machdep_ReadReg(0);
        if ((uVar2 >> 2 & 1) == 0) goto LAB_001794c8;
        machdep_Sleep(10);
        uVar2 = machdep_ReadReg(0);
        if ((uVar2 >> 2 & 1) == 0) goto LAB_001794c8;
        machdep_Sleep(10);
        uVar2 = machdep_ReadReg(0);
        if ((uVar2 >> 2 & 1) == 0) goto LAB_001794c8;
        machdep_Sleep(10);
        uVar2 = machdep_ReadReg(0);
        if ((uVar2 >> 2 & 1) == 0) goto LAB_001794c8;
        machdep_Sleep(10);
        uVar2 = machdep_ReadReg(0);
        if ((uVar2 >> 2 & 1) == 0) goto LAB_001794c8;
        iVar3 = iVar3 + -6;
      } while (iVar3 != 0);
      iVar3 = -5;
    }
    break;
  case 1:
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 8);
    if (param_1 - 0x23 < 2) {
      machdep_WriteReg(1,0xe7);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 4);
      machdep_WriteReg(1,0xe6);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfe);
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x20);
      if (param_1 == 0x23) {
        machdep_WriteReg(0x11,'\x13');
        machdep_WriteReg(0x12,'\0');
        machdep_WriteReg(0x11,'\x0f');
        machdep_WriteReg(0x12,'\0');
        machdep_WriteReg(1,'d');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 | 0x40);
      }
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x10);
    }
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 4);
    machdep_Wait(0x515e);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 2);
    machdep_WriteReg(1,'f');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 0x80);
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 1);
    iVar3 = 0;
    break;
  case 2:
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfe);
    machdep_Wait(2000000);
    machdep_WriteReg(1,'f');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0x7f);
    machdep_Wait(2000000);
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfd);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfb);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xf7);
    if (param_1 == 0x23) {
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xdf);
      machdep_WriteReg(1,'d');
      uVar2 = machdep_ReadReg(2);
      if ((uVar2 >> 6 & 1) != 0) {
        machdep_WriteReg(1,'d');
        bVar1 = machdep_ReadReg(2);
        machdep_WriteReg(2,bVar1 & 0xbf);
        machdep_Wait(0xa2e4);
        machdep_WriteReg(0x11,'\x0e');
        machdep_WriteReg(0x12,0x80);
        machdep_Wait(1000);
        machdep_WriteReg(0x11,'\x0e');
        machdep_WriteReg(0x12,'\0');
        machdep_WriteReg(0x11,'\x13');
        machdep_WriteReg(0x12,'|');
      }
LAB_00179674:
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xef);
    }
    else if (param_1 == 0x24) {
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xdf);
      goto LAB_00179674;
    }
    iVar3 = 300;
    machdep_WriteReg(1,'\0');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 0x80);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0x7f);
    machdep_Wait(0x239b0);
    uVar2 = machdep_ReadReg(0);
    if ((uVar2 >> 2 & 1) == 0) {
      return 0;
    }
    do {
      machdep_Sleep(10);
      uVar2 = machdep_ReadReg(0);
      if ((uVar2 >> 2 & 1) == 0) {
        return 0;
      }
      machdep_Sleep(10);
      uVar2 = machdep_ReadReg(0);
      if ((uVar2 >> 2 & 1) == 0) {
        return 0;
      }
      machdep_Sleep(10);
      uVar2 = machdep_ReadReg(0);
      if ((uVar2 >> 2 & 1) == 0) {
        return 0;
      }
      machdep_Sleep(10);
      uVar2 = machdep_ReadReg(0);
      if ((uVar2 >> 2 & 1) == 0) {
        return 0;
      }
      machdep_Sleep(10);
      uVar2 = machdep_ReadReg(0);
      if ((uVar2 >> 2 & 1) == 0) {
        return 0;
      }
      machdep_Sleep(10);
      uVar2 = machdep_ReadReg(0);
      if ((uVar2 >> 2 & 1) == 0) {
        return 0;
      }
      iVar3 = iVar3 + -6;
    } while (iVar3 != 0);
    iVar3 = -5;
    break;
  case 3:
    if (1 < param_1 - 0x23) {
      return 0;
    }
    machdep_WriteReg(1,0xe7);
    machdep_WriteReg(2,'\x04');
    machdep_WriteReg(1,0xe6);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfe);
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 0x20);
    return 0;
  case 4:
    if (param_1 != 0x23) {
      return 0;
    }
    machdep_WriteReg(0x11,'\x13');
    machdep_WriteReg(0x12,'\0');
    machdep_WriteReg(0x11,'\x0f');
    machdep_WriteReg(0x12,'\0');
    machdep_WriteReg(1,'d');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 0x40);
    iVar3 = 0;
  }
  return iVar3;
}

