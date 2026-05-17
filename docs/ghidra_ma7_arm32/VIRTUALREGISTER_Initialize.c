/* VIRTUALREGISTER_Initialize @ 000392b4 558B */


/* ARM::VIRTUALREGISTER_Initialize() */

undefined4 ARM::VIRTUALREGISTER_Initialize(void)

{
  uchar uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = 3;
  VIRTUALREGISTER_SetRegM('\0','\0','\0');
  VIRTUALREGISTER_SetRegM('\0','\x01','\0');
  VIRTUALREGISTER_SetRegM('\0','\x02','\0');
  do {
    uVar1 = (uchar)iVar3;
    VIRTUALREGISTER_SetRegM('\0',uVar1,'\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x01','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x02','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x03','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x04','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x05','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x06','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\a','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\b','\0');
    iVar3 = iVar3 + 0xb;
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\t','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\n','\0');
  } while (iVar3 != 0x100);
  iVar3 = 3;
  VIRTUALREGISTER_SetRegM('\x01','\0','\0');
  VIRTUALREGISTER_SetRegM('\x01','\x01','\0');
  VIRTUALREGISTER_SetRegM('\x01','\x02','\0');
  do {
    uVar1 = (uchar)iVar3;
    VIRTUALREGISTER_SetRegM('\x01',uVar1,'\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\x01','\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\x02','\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\x03','\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\x04','\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\x05','\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\x06','\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\a','\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\b','\0');
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\t','\0');
    iVar3 = iVar3 + 0xb;
    VIRTUALREGISTER_SetRegM('\x01',uVar1 + '\n','\0');
  } while (iVar3 != 0x100);
  iVar3 = 0;
  do {
    uVar2 = (ushort)iVar3;
    VIRTUALREGISTER_SetRegC(uVar2,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 1,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 2,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 3,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 4,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 5,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 6,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 7,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 8,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 9,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 10,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 0xb,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 0xc,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 0xd,'\0');
    iVar3 = iVar3 + 0x10;
    VIRTUALREGISTER_SetRegC(uVar2 + 0xe,'\0');
    VIRTUALREGISTER_SetRegC(uVar2 + 0xf,'\0');
  } while (iVar3 != 0x80);
  return 0;
}

