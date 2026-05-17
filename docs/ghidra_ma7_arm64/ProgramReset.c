/* ProgramReset @ 0015fc58 288B */


/* ARM::CDsp2::ProgramReset() */

void __thiscall ARM::CDsp2::ProgramReset(CDsp2 *this)

{
  CDsp2 *pCVar1;
  CDsp2 *pCVar2;
  CDsp2 *pCVar3;
  
  this[8] = (CDsp2)0x0;
  this[9] = (CDsp2)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1e3c) = 2;
  *(undefined4 *)(this + 0x1e40) = 3;
  *(undefined4 *)(this + 0x1e44) = 4;
  *(undefined4 *)(this + 0x1e48) = 0xb;
  *(undefined4 *)(this + 0x1e4c) = 2;
  *(undefined4 *)(this + 0x1e50) = 5;
  *(undefined4 *)(this + 0x1e54) = 2;
  *(undefined4 *)(this + 0x1e58) = 3;
  *(undefined4 *)(this + 0x1e5c) = 4;
  *(undefined4 *)(this + 0x1e60) = 0xb;
  *(undefined4 *)(this + 0x1e64) = 2;
  *(undefined4 *)(this + 0x1e68) = 5;
  *(undefined4 *)(this + 0x2ecad0) = 0;
  *(undefined4 *)(this + 0x32d2d4) = 0;
  pCVar2 = this + 0x20;
  pCVar3 = this + 0x7436;
  do {
    *(undefined8 *)pCVar2 = 0;
    *(undefined2 *)(pCVar2 + 0x1e4e) = 0xffff;
    pCVar1 = pCVar2 + 0x60;
    *(undefined2 *)pCVar3 = 0xffff;
    *(undefined8 *)(pCVar2 + 8) = 0;
    *(undefined2 *)(pCVar2 + 0x1e56) = 0xffff;
    *(undefined2 *)(pCVar3 + 0xc) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x10) = 0;
    *(undefined2 *)(pCVar2 + 0x1e5e) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x18) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x18) = 0;
    *(undefined2 *)(pCVar2 + 0x1e66) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x24) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x20) = 0;
    *(undefined2 *)(pCVar2 + 0x1e6e) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x30) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x28) = 0;
    *(undefined2 *)(pCVar2 + 0x1e76) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x3c) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x30) = 0;
    *(undefined2 *)(pCVar2 + 0x1e7e) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x48) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x38) = 0;
    *(undefined2 *)(pCVar2 + 0x1e86) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x54) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x40) = 0;
    *(undefined2 *)(pCVar2 + 0x1e8e) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x60) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x48) = 0;
    *(undefined2 *)(pCVar2 + 0x1e96) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x6c) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x50) = 0;
    *(undefined2 *)(pCVar2 + 0x1e9e) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x78) = 0xffff;
    *(undefined8 *)(pCVar2 + 0x58) = 0;
    *(undefined2 *)(pCVar2 + 0x1ea6) = 0xffff;
    *(undefined2 *)(pCVar3 + 0x84) = 0xffff;
    pCVar2 = pCVar1;
    pCVar3 = pCVar3 + 0x90;
  } while (pCVar1 != this + 0x1820);
  return;
}

