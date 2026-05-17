/* ProgramReset @ 00055e1c 260B */


/* ARM::CDsp2::ProgramReset() */

void __thiscall ARM::CDsp2::ProgramReset(CDsp2 *this)

{
  int iVar1;
  int iVar2;
  CDsp2 *pCVar3;
  
  this[4] = (CDsp2)0x0;
  this[5] = (CDsp2)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x1e3c) = 2;
  *(undefined4 *)(this + 0x1e40) = 3;
  *(undefined4 *)(this + 0x1e58) = 3;
  *(undefined4 *)(this + 0x1e44) = 4;
  *(undefined4 *)(this + 0x1e5c) = 4;
  *(undefined4 *)(this + 0x1e4c) = 2;
  *(undefined4 *)(this + 0x1e54) = 2;
  *(undefined4 *)(this + 0x1e48) = 0xb;
  *(undefined4 *)(this + 0x1e50) = 5;
  *(undefined4 *)(this + 0x1e64) = 2;
  *(undefined4 *)(this + 0x1e60) = 0xb;
  *(undefined4 *)(this + 0x1e68) = 5;
  *(undefined4 *)(this + 0x2ecad0) = 0;
  *(undefined4 *)(this + 0x32d2d4) = 0;
  iVar1 = 0;
  pCVar3 = this + 0x18;
  do {
    *(undefined4 *)(pCVar3 + 8) = 0;
    *(undefined4 *)(pCVar3 + 0xc) = 0;
    *(undefined2 *)(pCVar3 + 0x1e56) = 0xffff;
    *(undefined2 *)(this + iVar1 + 0x7436) = 0xffff;
    *(undefined4 *)(pCVar3 + 0x10) = 0;
    *(undefined4 *)(pCVar3 + 0x14) = 0;
    *(undefined2 *)(pCVar3 + 0x1e5e) = 0xffff;
    *(undefined2 *)(this + iVar1 + 0x7442) = 0xffff;
    *(undefined4 *)(pCVar3 + 0x18) = 0;
    *(undefined4 *)(pCVar3 + 0x1c) = 0;
    iVar2 = iVar1 + 0x48;
    *(undefined2 *)(pCVar3 + 0x1e66) = 0xffff;
    *(undefined2 *)(this + iVar1 + 0x744e) = 0xffff;
    *(undefined4 *)(pCVar3 + 0x20) = 0;
    *(undefined4 *)(pCVar3 + 0x24) = 0;
    *(undefined2 *)(pCVar3 + 0x1e6e) = 0xffff;
    *(undefined2 *)(this + iVar1 + 0x745a) = 0xffff;
    *(undefined4 *)(pCVar3 + 0x28) = 0;
    *(undefined4 *)(pCVar3 + 0x2c) = 0;
    *(undefined2 *)(pCVar3 + 0x1e76) = 0xffff;
    *(undefined2 *)(this + iVar1 + 0x7466) = 0xffff;
    *(undefined4 *)(pCVar3 + 0x30) = 0;
    *(undefined4 *)(pCVar3 + 0x34) = 0;
    *(undefined2 *)(pCVar3 + 0x1e7e) = 0xffff;
    *(undefined2 *)(this + iVar1 + 0x7472) = 0xffff;
    iVar1 = iVar2;
    pCVar3 = pCVar3 + 0x30;
  } while (iVar2 != 0x2400);
  return;
}

