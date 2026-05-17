/* MaDevDrv_HwInit @ 000de194 1262B */


/* YAMAHA::MaDevDrv_HwInit(unsigned int*) */

int YAMAHA::MaDevDrv_HwInit(uint *param_1)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  machdep_WriteReg(0,'\0');
  machdep_StoreRegInit();
  uVar2 = machdep_ReadReg(5);
  uVar4 = uVar2 & 0xf0;
  if (uVar4 == 0x80) {
    uVar2 = 0x21;
    *(undefined1 *)(*(int *)(DAT_000de68c + 0xde598) + 8) = 0x21;
  }
  else if (uVar4 < 0x81) {
    if (uVar4 != 0x70) {
      return -1;
    }
    uVar2 = 0x20;
    *(undefined1 *)(*(int *)(DAT_000de688 + 0xde4a6) + 8) = 0x20;
    machdep_WriteReg(1,'j');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'k');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'l');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'m');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'r');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'s');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'t');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'u');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'w');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'x');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'y');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'z');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'{');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'|');
    machdep_WriteReg(2,'\0');
  }
  else {
    if (uVar4 == 0x90) {
      if (uVar2 == 0x92) {
        uVar2 = 0x24;
        uVar4 = 1;
      }
      else {
        uVar2 = 0x22;
        uVar4 = 0xffffffff;
      }
    }
    else {
      if (uVar4 != 0xa0) {
        return -1;
      }
      uVar2 = 0x23;
      uVar4 = 0;
    }
    *(char *)(*(int *)(DAT_000de684 + 0xde1d8) + 8) = (char)uVar2;
    machdep_WriteReg(1,'x');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'y');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'z');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'{');
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,'|');
    machdep_WriteReg(2,'\0');
    if (uVar4 < 2) {
      machdep_WriteReg(1,0x82);
      machdep_WriteReg(2,'\b');
    }
    machdep_WriteReg(1,0xb6);
    iVar3 = 0xb7;
    machdep_WriteReg(2,'\0');
    do {
      uVar1 = (uchar)iVar3;
      machdep_WriteReg(1,uVar1);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,uVar1 + '\x01');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,uVar1 + '\x02');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,uVar1 + '\x03');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,uVar1 + '\x04');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,uVar1 + '\x05');
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,uVar1 + '\x06');
      machdep_WriteReg(2,'\0');
      iVar3 = iVar3 + 8;
      machdep_WriteReg(1,uVar1 + '\a');
      machdep_WriteReg(2,'\0');
    } while (iVar3 != 199);
    iVar3 = 200;
    do {
      machdep_WriteReg(1,(uchar)iVar3);
      iVar3 = iVar3 + 1;
      machdep_WriteReg(2,'\0');
    } while (iVar3 != 0xd7);
  }
  machdep_WriteReg(1,'h');
  machdep_WriteReg(2,'\f');
  machdep_WriteReg(1,'i');
  machdep_WriteReg(2,'H');
  iVar3 = machdep_PowerManagement(uVar2,0);
  if (-1 < iVar3) {
    machdep_PowerManagement(uVar2,3);
    iVar3 = 0;
    machdep_WriteReg(1,' ');
    machdep_WriteReg(2,'M');
    machdep_WriteReg(1,'\"');
    machdep_WriteReg(2,'\a');
    machdep_WriteReg(1,'#');
    machdep_WriteReg(2,'\x01');
    machdep_WriteReg(0,0x80);
    machdep_WriteReg(1,'\x18');
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,'\x19');
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,'\x1a');
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,'\x1b');
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,'\x1c');
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,0xa8);
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,0xa9);
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,0xaa);
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,0xab);
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,')');
    machdep_WriteReg(2,'\x04');
    machdep_WriteReg(1,'\x1d');
    machdep_WriteReg(2,'\x7f');
    do {
      machdep_WriteReg(1,0xa0);
      uVar1 = (uchar)iVar3;
      iVar3 = iVar3 + 1;
      machdep_WriteReg(2,uVar1);
      machdep_WriteReg(1,0xa1);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xa2);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xa3);
      machdep_WriteReg(2,'|');
    } while (iVar3 != 4);
    machdep_WriteReg(1,'~');
    machdep_WriteReg(2,'\0');
    if (uVar2 == 0x22) {
      machdep_WriteReg(1,0xcd);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xcf);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc9);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xcb);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xf1);
      machdep_WriteReg(2,'\x10');
      machdep_WriteReg(1,0xf6);
      machdep_WriteReg(2,'\x19');
    }
    else if (uVar2 - 0x23 < 2) {
      machdep_WriteReg(1,0xcd);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xcf);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xc9);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xcb);
      machdep_WriteReg(2,'\0');
      machdep_WriteReg(1,0xee);
      machdep_WriteReg(2,'\x10');
      machdep_WriteReg(1,0xf6);
      machdep_WriteReg(2,'\x19');
      machdep_WriteReg(1,0xd9);
      machdep_WriteReg(2,'D');
    }
    *param_1 = uVar2;
    return 0;
  }
  return iVar3;
}

