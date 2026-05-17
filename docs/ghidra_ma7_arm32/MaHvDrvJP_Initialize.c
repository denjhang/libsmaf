/* MaHvDrvJP_Initialize @ 000dfe38 510B */


/* YAMAHA::MaHvDrvJP_Initialize(unsigned int) */

undefined4 YAMAHA::MaHvDrvJP_Initialize(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar2 = DAT_000e0040;
  iVar1 = DAT_000e003c;
  iVar3 = DAT_000e0038;
  piVar5 = (int *)(DAT_000e0038 + 0xdfe46);
  if (*piVar5 == 0) {
    if (param_1 == 0x14) {
      *(undefined4 *)(DAT_000e0038 + 0xdfe4e) = 0x14;
      *(undefined2 *)(iVar3 + 0xe093a) = 0x14;
      *(int *)(iVar3 + 0xe0936) = iVar1 + 0xe0330;
      *(undefined4 *)(iVar3 + 0xdfe5e) = 1;
      *(undefined1 *)(iVar3 + 0xe088e) = 1;
      *(undefined1 *)(iVar3 + 0xe088f) = 1;
      *(undefined1 *)(iVar3 + 0xe0aa9) = 1;
      *(undefined2 *)(iVar3 + 0xe092a) = 200;
      *(undefined2 *)(iVar3 + 0xe0932) = 0x4b0;
      *(undefined4 *)(iVar3 + 0xe093e) = 8;
      *(undefined2 *)(iVar3 + 0xe0946) = 0xf88;
      *(undefined4 *)(iVar3 + 0xdfe52) = 0;
      *(undefined4 *)(iVar3 + 0xdfe56) = 0;
      *(undefined4 *)(iVar3 + 0xdfe5a) = 0;
      *(undefined4 *)(iVar3 + 0xdfe62) = 0;
      *(undefined4 *)(iVar3 + 0xdfe66) = 0;
      *(undefined4 *)(iVar3 + 0xdfe6a) = 0;
      *(undefined2 *)(iVar3 + 0xdfe6e) = 0;
      *(undefined1 *)(iVar3 + 0xdfe70) = 0;
      *(undefined1 *)(iVar3 + 0xdfe71) = 0;
      *(undefined1 *)(iVar3 + 0xe027a) = 0;
      *(undefined1 *)(iVar3 + 0xe0686) = 0;
      *(undefined4 *)(iVar3 + 0xe0892) = 0;
      *(undefined1 *)(iVar3 + 0xe0896) = 0;
      *(undefined1 *)(iVar3 + 0xe08a2) = 0;
      *(undefined1 *)(iVar3 + 0xe0926) = 0;
      *(undefined1 *)(iVar3 + 0xe0927) = 0;
      *(undefined1 *)(iVar3 + 0xe0928) = 0;
      *(undefined4 *)(iVar3 + 0xe092e) = 0;
      *(undefined2 *)(iVar3 + 0xe0aa6) = 0;
      *(undefined1 *)(iVar3 + 0xe0aa8) = 0;
      *(undefined2 *)(iVar3 + 0xe0948) = 0x16;
      *piVar5 = 1;
      iVar1 = DAT_000e0044;
      *(int *)(iVar3 + 0xe09d6) = iVar2 + 0xe07ae;
      *(undefined4 *)(iVar3 + 0xe094a) = 0x86;
      *(undefined4 *)(iVar3 + 0xe094e) = 0x8ac;
      *(undefined4 *)(iVar3 + 0xe095a) = 8;
      *(undefined2 *)(iVar3 + 0xe0964) = 0x16;
      *(undefined4 *)(iVar3 + 0xe0966) = 0x86;
      *(undefined4 *)(iVar3 + 0xe096a) = 0x8ac;
      *(undefined2 *)(iVar3 + 0xe0956) = 0x14;
      *(int *)(iVar3 + 0xe0952) = iVar1 + 0xe0d38;
      *(int *)(iVar3 + 0xe09d2) = iVar2 + 0xe0780;
      *(int *)(iVar3 + 0xe09da) = iVar2 + 0xe07dc;
      *(int *)(iVar3 + 0xe09de) = iVar2 + 0xe080a;
      *(undefined4 *)(iVar3 + 0xe096e) = 0;
      *(undefined2 *)(iVar3 + 0xe0980) = 0;
      *(undefined4 *)(iVar3 + 0xe0976) = 0;
      *(undefined4 *)(iVar3 + 0xe0982) = 0;
      *(undefined4 *)(iVar3 + 0xe0986) = 0;
      *(undefined4 *)(iVar3 + 0xe097a) = 0;
      *(undefined2 *)(iVar3 + 0xe0972) = 0;
      *(undefined2 *)(iVar3 + 0xe097e) = 0;
      *(undefined4 *)(iVar3 + 0xe099a) = 0;
      *(undefined2 *)(iVar3 + 0xe0994) = 0;
      *(undefined2 *)(iVar3 + 0xe0992) = 0;
      *(undefined2 *)(iVar3 + 0xe0990) = 0;
      *(undefined2 *)(iVar3 + 0xe098e) = 0;
      *(undefined2 *)(iVar3 + 0xe0996) = 0;
      *(undefined4 *)(iVar3 + 0xdfe4a) = 0;
      *(int *)(iVar3 + 0xe09e2) = iVar2 + 0xe0838;
      *(undefined4 *)(iVar3 + 0xe0942) = 0x911c;
      *(undefined2 *)(iVar3 + 0xe0962) = 0x1373;
      *(undefined4 *)(iVar3 + 0xe095e) = 0x93a6;
      *(int *)(iVar3 + 0xe09e6) = iVar2 + 0xe0866;
      *(int *)(iVar3 + 0xe09ea) = iVar2 + 0xe0894;
      *(int *)(iVar3 + 0xe098a) = iVar3 + 0xe0936;
      *(int *)(iVar3 + 0xe09f2) = iVar2 + 0xe08f0;
      *(int *)(iVar3 + 0xe09f6) = iVar2 + 0xe091e;
      *(int *)(iVar3 + 0xe0a0e) = iVar2 + 0xe0a32;
      *(int *)(iVar3 + 0xe09ee) = iVar2 + 0xe08c2;
      *(int *)(iVar3 + 0xe09fa) = iVar2 + 0xe094c;
      *(int *)(iVar3 + 0xe09fe) = iVar2 + 0xe097a;
      *(int *)(iVar3 + 0xe0a02) = iVar2 + 0xe09a8;
      *(int *)(iVar3 + 0xe0a06) = iVar2 + 0xe09d6;
      *(int *)(iVar3 + 0xe0a0a) = iVar2 + 0xe0a04;
      memset((void *)(iVar3 + 0xe0a12),0,0x40);
      *(undefined1 *)(iVar3 + 0xe0a52) = 0;
      iVar3 = FUN_000df724(0);
      if (iVar3 < 0) {
        *piVar5 = 0;
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xfffffffe;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

