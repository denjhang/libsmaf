/* MaCmd_ChInit @ 000f3c1c 336B */


/* YAMAHA::MaCmd_ChInit(unsigned int) */

void YAMAHA::MaCmd_ChInit(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 * 0x65d0;
  iVar2 = DAT_000f3d6c + 0xf3c2a;
  *(undefined1 *)(iVar2 + iVar1 + 2) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x3e) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x5c) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x7a) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x98) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0xb6) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0xd4) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0xf2) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x110) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x12e) = 0;
  *(undefined1 *)(iVar2 + iVar1 + 0x14c) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x16a) = 0;
  *(undefined1 *)(iVar2 + iVar1 + 0x188) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x1a6) = 0;
  *(undefined1 *)(iVar2 + iVar1 + 0x1c4) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x1e2) = 0;
  *(undefined1 *)(iVar2 + iVar1 + 0x200) = 0;
  *(undefined1 *)(iVar2 + iVar1 + 0x21e) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x23c) = 0;
  *(undefined1 *)(iVar2 + iVar1 + 0x25a) = 0;
  *(undefined1 *)(iVar2 + iVar1 + 0x278) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x296) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x2b4) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x2d2) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x2f0) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x30e) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x32c) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x34a) = 0;
  *(undefined1 *)(iVar2 + iVar1 + 0x368) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x386) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x3a4) = 0;
  return;
}

