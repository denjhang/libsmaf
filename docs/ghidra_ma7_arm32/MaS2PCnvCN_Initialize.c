/* MaS2PCnvCN_Initialize @ 000cbb34 168B */


/* YAMAHA::MaS2PCnvCN_Initialize(unsigned int) */

undefined4 YAMAHA::MaS2PCnvCN_Initialize(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = DAT_000cbbdc;
  piVar3 = (int *)(DAT_000cbbdc + 0xcbb3c);
  if (*piVar3 == 0) {
    if (param_1 == 0x14) {
      *(undefined4 *)(DAT_000cbbdc + 0xcbb40) = 0x14;
      *(undefined4 *)(iVar1 + 0xcbb48) = 0;
      *(undefined4 *)(iVar1 + 0xcbb4c) = 0;
      *(undefined4 *)(iVar1 + 0xcbb50) = 0;
      *(undefined1 *)(iVar1 + 0xcbb5d) = 0;
      *(undefined1 *)(iVar1 + 0xcbb60) = 0;
      *(undefined2 *)(iVar1 + 0xcbb62) = 0;
      *(undefined1 *)(iVar1 + 0xcc658) = 0;
      *(undefined4 *)(iVar1 + 0xcc65c) = 0;
      *(undefined1 *)(iVar1 + 0xcc660) = 0;
      *(undefined4 *)(iVar1 + 0xcc664) = 0;
      *(undefined4 *)(iVar1 + 0xcc668) = 0;
      *(undefined1 *)(iVar1 + 0xcc66c) = 0;
      *(undefined1 *)(iVar1 + 0xcc66d) = 0;
      *(undefined1 *)(iVar1 + 0xcc66e) = 0;
      *(undefined1 *)(iVar1 + 0xcc66f) = 0;
      *(undefined1 *)(iVar1 + 0xcc670) = 0;
      *(undefined4 *)(iVar1 + 0xcc674) = 0;
      *(undefined2 *)(iVar1 + 0xcc678) = 0;
      *(undefined1 *)(iVar1 + 0xcc67a) = 0;
      *(undefined4 *)(iVar1 + 0xcc67c) = 0;
      *(undefined4 *)(iVar1 + 0xcc680) = 0;
      *(undefined4 *)(iVar1 + 0xcc684) = 0;
      *(undefined4 *)(iVar1 + 0xcc688) = 0;
      *(undefined4 *)(iVar1 + 0xcbb44) = 0x666;
      *(undefined1 *)(iVar1 + 0xcbb5c) = 4;
      *(undefined1 *)(iVar1 + 0xcbb5e) = 0x3c;
      *(undefined1 *)(iVar1 + 0xcbb5f) = 2;
      *(undefined1 *)(iVar1 + 0xcbb64) = 0x59;
      *(undefined1 *)(iVar1 + 0xcc659) = 1;
      *(undefined1 *)(iVar1 + 0xcc65a) = 1;
      *(undefined1 *)(iVar1 + 0xcc65b) = 1;
      *piVar3 = 1;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

