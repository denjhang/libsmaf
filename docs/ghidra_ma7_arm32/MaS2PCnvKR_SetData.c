/* MaS2PCnvKR_SetData @ 000d6dfc 148B */


/* YAMAHA::MaS2PCnvKR_SetData(unsigned char*, unsigned int, void*) */

undefined4 YAMAHA::MaS2PCnvKR_SetData(uchar *param_1,uint param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000d6e90;
  if (*(int *)(DAT_000d6e90 + 0xd6e04) == 1) {
    if (param_2 == 0 || param_1 == (uchar *)0x0) {
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0;
      if ((((param_2 < 4) || (*param_1 != 'H')) || (param_1[1] != 'V')) ||
         ((param_1[2] != '#' || (param_1[3] != 'K')))) {
        return 0xfffffffb;
      }
      *(uchar **)(DAT_000d6e90 + 0xd6e10) = param_1;
      *(uint *)(iVar1 + 0xd6e18) = param_2;
      *(undefined1 *)(iVar1 + 0xd6e20) = 1;
      *(undefined1 *)(iVar1 + 0xd6e25) = 0;
      *(undefined2 *)(iVar1 + 0xd6e2a) = 0;
      *(undefined1 *)(iVar1 + 0xd6e28) = 0;
      *(undefined1 *)(iVar1 + 0xd6e29) = 0;
      *(undefined4 *)(iVar1 + 0xd7798) = 0;
      *(undefined4 *)(iVar1 + 0xd77b8) = 0;
      *(undefined1 *)(iVar1 + 0xd77a4) = 0;
      *(undefined4 *)(iVar1 + 0xd77c0) = 0;
      *(undefined1 *)(iVar1 + 0xd7795) = 1;
      *(undefined4 *)(iVar1 + 0xd6e14) = 4;
      *(undefined1 *)(iVar1 + 0xd6e24) = 4;
      *(undefined1 *)(iVar1 + 0xd6e30) = 0x59;
      *(undefined1 *)(iVar1 + 0xd6e26) = 0x3c;
      *(undefined1 *)(iVar1 + 0xd6e27) = 2;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

