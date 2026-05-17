/* MaDevDrv_HwInit @ 002206f4 2672B */


/* YAMAHA::MaDevDrv_HwInit(unsigned int*) */

undefined8 YAMAHA::MaDevDrv_HwInit(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  machdep_WriteReg(0,'\0');
  machdep_StoreRegInit();
  bVar2 = machdep_ReadReg(5);
  bVar1 = bVar2 & 0xf0;
  if (bVar1 == 0x80) {
    uVar4 = 0x21;
    *(undefined1 *)(DAT_00748ef8 + 8) = 0x21;
  }
  else if (bVar1 < 0x81) {
    if (bVar1 != 0x70) {
      return 0xffffffff;
    }
    uVar4 = 0x20;
    *(undefined1 *)(DAT_00748ef8 + 8) = 0x20;
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
    if (bVar1 == 0x90) {
      if (bVar2 == 0x92) {
        uVar5 = 1;
        uVar4 = 0x24;
      }
      else {
        uVar5 = 0xffffffff;
        uVar4 = 0x22;
      }
    }
    else {
      if (bVar1 != 0xa0) {
        return 0xffffffff;
      }
      uVar4 = 0x23;
      uVar5 = 0;
    }
    *(char *)(DAT_00748ef8 + 8) = (char)uVar4;
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
    if (uVar5 < 2) {
      machdep_WriteReg(1,0x82);
      machdep_WriteReg(2,'\b');
    }
    machdep_WriteReg(1,0xb6);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xb7);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xb8);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xb9);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xba);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xbb);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xbc);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xbd);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xbe);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xbf);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xc0);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xc1);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xc2);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xc3);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xc4);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xc5);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xc6);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,200);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xc9);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xca);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xcb);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xcc);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xcd);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xce);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xcf);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xd0);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xd1);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xd2);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xd3);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xd4);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xd5);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xd6);
    machdep_WriteReg(2,'\0');
  }
  machdep_WriteReg(1,'h');
  machdep_WriteReg(2,'\f');
  machdep_WriteReg(1,'i');
  machdep_WriteReg(2,'H');
  uVar3 = machdep_PowerManagement(uVar4,0);
  if (-1 < (int)uVar3) {
    machdep_PowerManagement(uVar4,3);
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
    machdep_WriteReg(1,0xa0);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa1);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa2);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa3);
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,0xa0);
    machdep_WriteReg(2,'\x01');
    machdep_WriteReg(1,0xa1);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa2);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa3);
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,0xa0);
    machdep_WriteReg(2,'\x02');
    machdep_WriteReg(1,0xa1);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa2);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa3);
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,0xa0);
    machdep_WriteReg(2,'\x03');
    machdep_WriteReg(1,0xa1);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa2);
    machdep_WriteReg(2,'\0');
    machdep_WriteReg(1,0xa3);
    machdep_WriteReg(2,'|');
    machdep_WriteReg(1,'~');
    machdep_WriteReg(2,'\0');
    if (uVar4 == 0x22) {
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
    else if (uVar4 - 0x23 < 2) {
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
    *param_1 = uVar4;
    uVar3 = 0;
  }
  return uVar3;
}

