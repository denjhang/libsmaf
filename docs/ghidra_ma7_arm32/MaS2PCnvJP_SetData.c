/* MaS2PCnvJP_SetData @ 000c72e8 148B */


/* YAMAHA::MaS2PCnvJP_SetData(unsigned char*, unsigned int, void*) */

undefined4 YAMAHA::MaS2PCnvJP_SetData(uchar *param_1,uint param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000c737c;
  if (*(int *)(DAT_000c737c + 0xc72f0) == 1) {
    if (param_2 == 0 || param_1 == (uchar *)0x0) {
      uVar2 = 0xfffffffe;
    }
    else {
      if ((((3 < param_2) && (*param_1 == 'H')) && (param_1[1] == 'V')) &&
         ((param_1[2] == '#' && (param_1[3] == 'J')))) {
        *(uchar **)(DAT_000c737c + 0xc72fc) = param_1;
        *(uint *)(iVar1 + 0xc7304) = param_2;
        *(undefined1 *)(iVar1 + 0xc730c) = 1;
        *(undefined1 *)(iVar1 + 0xc7311) = 0;
        *(undefined2 *)(iVar1 + 0xc7316) = 0;
        *(undefined1 *)(iVar1 + 0xc7314) = 0;
        *(undefined1 *)(iVar1 + 0xc7315) = 0;
        (&UNK_000c7fa1)[iVar1] = 1;
        *(undefined4 *)(&UNK_000c7fa4 + iVar1) = 0;
        *(undefined4 *)(&UNK_000c7fc4 + iVar1) = 0;
        (&UNK_000c7fb0)[iVar1] = 0;
        *(undefined4 *)(&UNK_000c7fcc + iVar1) = 0;
        *(undefined4 *)(iVar1 + 0xc7300) = 4;
        *(undefined1 *)(iVar1 + 0xc7310) = 4;
        *(undefined1 *)(iVar1 + 0xc731c) = 0x59;
        *(undefined1 *)(iVar1 + 0xc7312) = 0x3c;
        *(undefined1 *)(iVar1 + 0xc7313) = 2;
        return 0;
      }
      uVar2 = 0xfffffffb;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

