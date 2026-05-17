/* MaCmd_Init @ 000f3d70 264B */


/* YAMAHA::MaCmd_Init(unsigned int) */

void YAMAHA::MaCmd_Init(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1 * 0x65d0 + DAT_000f3e78 + 0xf3d7e;
  iVar4 = 0x20;
  *(undefined1 *)(iVar1 + 0x3c2) = 0x7f;
  *(undefined1 *)(iVar1 + 0x3c3) = 0x4c;
  *(undefined2 *)(iVar1 + 0x3cc) = 0x400;
  *(undefined2 *)(iVar1 + 0x3ce) = 0x400;
  *(undefined1 *)(iVar1 + 0x3c8) = 0;
  iVar2 = iVar1 + 1;
  iVar3 = iVar1 + 0x14;
  do {
    iVar4 = iVar4 + -2;
    *(undefined1 *)(iVar3 + -0x13) = 0;
    *(undefined1 *)(iVar3 + -0x12) = 0;
    *(undefined1 *)(iVar3 + -0x11) = 0xff;
    *(undefined1 *)(iVar3 + -0x10) = 0;
    *(undefined1 *)(iVar3 + -0xf) = 0;
    *(undefined1 *)(iVar3 + -0xe) = 1;
    *(undefined1 *)(iVar3 + -0xd) = 100;
    *(undefined1 *)(iVar3 + -10) = 0x40;
    *(undefined1 *)(iVar3 + -9) = 0x7f;
    *(undefined1 *)(iVar3 + -8) = 1;
    *(undefined1 *)(iVar3 + -7) = 0;
    *(undefined1 *)(iVar3 + -6) = 2;
    *(undefined2 *)(iVar2 + 0x13) = 0x400;
    *(undefined2 *)(iVar2 + 0x15) = 0x400;
    *(undefined2 *)(iVar3 + 4) = 0x400;
    *(undefined2 *)(iVar3 + 6) = 0x400;
    *(undefined2 *)(iVar3 + 8) = 0;
    *(undefined1 *)(iVar3 + 0xb) = 0;
    *(undefined1 *)(iVar3 + 0xc) = 0;
    *(undefined1 *)(iVar3 + 0xd) = 0xff;
    *(undefined1 *)(iVar3 + 0xe) = 0;
    *(undefined1 *)(iVar3 + 0xf) = 0;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined1 *)(iVar3 + 0x11) = 100;
    *(undefined1 *)(iVar3 + 0x14) = 0x40;
    *(undefined1 *)(iVar3 + 0x15) = 0x7f;
    *(undefined1 *)(iVar3 + 0x16) = 1;
    *(undefined1 *)(iVar3 + 0x17) = 0;
    *(undefined1 *)(iVar3 + 0x18) = 2;
    *(undefined2 *)(iVar2 + 0x31) = 0x400;
    *(undefined2 *)(iVar2 + 0x33) = 0x400;
    *(undefined2 *)(iVar3 + 0x22) = 0x400;
    *(undefined2 *)(iVar3 + 0x24) = 0x400;
    *(undefined2 *)(iVar3 + 0x26) = 0;
    iVar2 = iVar2 + 0x3c;
    iVar3 = iVar3 + 0x3c;
  } while (iVar4 != 0);
  *(undefined1 *)(iVar1 + 0x112) = 0x80;
  return;
}

