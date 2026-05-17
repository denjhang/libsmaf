/* machdep_PowerManagement @ 00066fc8 3024B */


/* YAMAHA::machdep_PowerManagement(unsigned int, unsigned int) */

int YAMAHA::machdep_PowerManagement(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
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
    machdep_WriteReg(1,'\0');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 0xc0);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0x3f);
    machdep_Wait(0x239b0);
    iVar2 = machdep_ReadReg(0);
    if (iVar2 << 0x1d < 0) {
      iVar2 = 300;
      while( true ) {
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        iVar2 = iVar2 + -10;
        if (iVar2 == 0) {
          return -5;
        }
      }
    }
    iVar2 = MaDevDrv_VerifyRegisters();
    if (iVar2 < 0) {
      return iVar2;
    }
    if (param_1 == 0x20) {
      machdep_WriteReg(1,'f');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfe);
      machdep_WriteReg(1,0x80);
      iVar3 = machdep_ReadReg(2);
      if (-1 < iVar3 << 0x1f) {
        iVar3 = 300;
        while( true ) {
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1f < 0) break;
          iVar3 = iVar3 + -10;
          if (iVar3 == 0) {
            return -5;
          }
        }
      }
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
      iVar3 = machdep_ReadReg(2);
      if (-1 < iVar3 << 0x1e) {
        iVar3 = 300;
        while( true ) {
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          machdep_Sleep(10);
          iVar4 = machdep_ReadReg(2);
          if (iVar4 << 0x1e < 0) break;
          iVar3 = iVar3 + -10;
          if (iVar3 == 0) {
            return -5;
          }
        }
      }
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
      return iVar2;
    }
    if (param_1 == 0x21) {
      machdep_WriteReg(1,0x9f);
      machdep_WriteReg(2,'\v');
      machdep_WriteReg(1,0xed);
      machdep_WriteReg(2,'\x01');
      machdep_WriteReg(1,0xf7);
      machdep_WriteReg(2,'\x01');
      return iVar2;
    }
    if (2 < param_1 - 0x22) {
      return iVar2;
    }
    machdep_WriteReg(1,'f');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0xfe);
    machdep_WriteReg(1,0x80);
    iVar3 = machdep_ReadReg(2);
    if (-1 < iVar3 << 0x1f) {
      iVar3 = 300;
      while( true ) {
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1f < 0) break;
        iVar3 = iVar3 + -10;
        if (iVar3 == 0) {
          return -5;
        }
      }
    }
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
    iVar3 = machdep_ReadReg(2);
    if (-1 < iVar3 << 0x1e) {
      iVar3 = 300;
      while( true ) {
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        machdep_Sleep(10);
        iVar4 = machdep_ReadReg(2);
        if (iVar4 << 0x1e < 0) break;
        iVar3 = iVar3 + -10;
        if (iVar3 == 0) {
          return -5;
        }
      }
    }
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
    return iVar2;
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
    return 0;
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
      iVar2 = machdep_ReadReg(2);
      if (iVar2 << 0x19 < 0) {
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
LAB_0006756c:
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xef);
    }
    else if (param_1 == 0x24) {
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xdf);
      goto LAB_0006756c;
    }
    machdep_WriteReg(1,'\0');
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 | 0x80);
    bVar1 = machdep_ReadReg(2);
    machdep_WriteReg(2,bVar1 & 0x7f);
    machdep_Wait(0x239b0);
    iVar2 = machdep_ReadReg(0);
    if (iVar2 << 0x1d < 0) {
      iVar2 = 300;
      while( true ) {
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) break;
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        machdep_Sleep(10);
        iVar3 = machdep_ReadReg(0);
        if (-1 < iVar3 << 0x1d) {
          return 0;
        }
        iVar2 = iVar2 + -10;
        if (iVar2 == 0) {
          return -5;
        }
      }
      return 0;
    }
    break;
  case 3:
    if (param_1 - 0x23 < 2) {
      machdep_WriteReg(1,0xe7);
      machdep_WriteReg(2,'\x04');
      machdep_WriteReg(1,0xe6);
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 & 0xfe);
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x20);
      return 0;
    }
    break;
  case 4:
    if (param_1 == 0x23) {
      machdep_WriteReg(0x11,'\x13');
      machdep_WriteReg(0x12,'\0');
      machdep_WriteReg(0x11,'\x0f');
      machdep_WriteReg(0x12,'\0');
      machdep_WriteReg(1,'d');
      bVar1 = machdep_ReadReg(2);
      machdep_WriteReg(2,bVar1 | 0x40);
    }
    break;
  default:
    return -2;
  }
  return 0;
}

