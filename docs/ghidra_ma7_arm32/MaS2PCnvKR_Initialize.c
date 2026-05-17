/* MaS2PCnvKR_Initialize @ 000d6ebc 170B */


/* YAMAHA::MaS2PCnvKR_Initialize(unsigned int) */

undefined4 YAMAHA::MaS2PCnvKR_Initialize(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = DAT_000d6f68;
  piVar3 = (int *)(DAT_000d6f68 + 0xd6ec6);
  if (*piVar3 == 0) {
    if (param_1 == 0x14) {
      *(undefined4 *)(DAT_000d6f68 + 0xd6eca) = 0x14;
      *(undefined4 *)(iVar1 + 0xd6ed2) = 0;
      *(undefined4 *)(iVar1 + 0xd6eda) = 0;
      *(undefined4 *)(iVar1 + 0xd6ed6) = 0;
      *(undefined1 *)(iVar1 + 0xd6ee7) = 0;
      *(undefined2 *)(iVar1 + 0xd6eec) = 0;
      *(undefined1 *)(iVar1 + 0xd6eea) = 0;
      *(undefined1 *)(iVar1 + 0xd6eeb) = 0;
      *(undefined1 *)(iVar1 + 0xd7856) = 0;
      *(undefined4 *)(iVar1 + 0xd785a) = 0;
      *(undefined4 *)(iVar1 + 0xd787a) = 0;
      *(undefined4 *)(iVar1 + 0xd787e) = 0;
      *(undefined1 *)(iVar1 + 0xd7866) = 0;
      *(undefined4 *)(iVar1 + 0xd7882) = 0;
      *(undefined4 *)(iVar1 + 0xd786a) = 0;
      *(undefined4 *)(iVar1 + 0xd786e) = 0;
      *(undefined2 *)(iVar1 + 0xd7872) = 0;
      *(undefined1 *)(iVar1 + 0xd7874) = 0;
      *(undefined4 *)(iVar1 + 0xd7876) = 0;
      *(undefined4 *)(iVar1 + 0xd785e) = 0;
      *(undefined1 *)(iVar1 + 0xd7862) = 0;
      *(undefined1 *)(iVar1 + 0xd7863) = 0;
      *(undefined1 *)(iVar1 + 0xd7864) = 0;
      *(undefined1 *)(iVar1 + 0xd7865) = 0;
      *(undefined4 *)(iVar1 + 0xd6ece) = 0x666;
      *(undefined1 *)(iVar1 + 0xd6ef2) = 0x59;
      *(undefined1 *)(iVar1 + 0xd6ee8) = 0x3c;
      *(undefined1 *)(iVar1 + 0xd6ee9) = 2;
      *(undefined1 *)(iVar1 + 0xd6ee6) = 4;
      *(undefined1 *)(iVar1 + 0xd7858) = 1;
      *(undefined1 *)(iVar1 + 0xd7859) = 1;
      *(undefined1 *)(iVar1 + 0xd7857) = 1;
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

