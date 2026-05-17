/* MaS2PCnvCN_SetData @ 000cba70 152B */


/* YAMAHA::MaS2PCnvCN_SetData(unsigned char*, unsigned int, void*) */

void * YAMAHA::MaS2PCnvCN_SetData(uchar *param_1,uint param_2,void *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = DAT_000cbb08;
  if (*(int *)(DAT_000cbb08 + 0xcba78) == 1) {
    bVar4 = param_1 == (uchar *)0x0;
    uVar2 = 0;
    if (!bVar4) {
      uVar2 = param_2;
    }
    if ((!bVar4 && param_2 != 0) && (int)uVar2 >= 0) {
      param_3 = (void *)0x0;
    }
    if ((bVar4 || param_2 == 0) || (int)uVar2 < 0) {
      param_3 = (void *)0xfffffffe;
    }
    else {
      if ((((param_2 < 4) || (*param_1 != 'H')) || (param_1[1] != 'V')) ||
         ((param_1[2] != '#' || (param_1[3] != 'C')))) {
        return (void *)0xfffffffb;
      }
      *(uchar **)(DAT_000cbb08 + 0xcba84) = param_1;
      *(uint *)(iVar3 + 0xcba8c) = param_2;
      *(undefined1 *)(iVar3 + 0xcba94) = 1;
      uVar1 = SUB41(param_3,0);
      *(undefined1 *)(iVar3 + 0xcba99) = uVar1;
      *(undefined1 *)(iVar3 + 0xcba9c) = uVar1;
      *(short *)(iVar3 + 0xcba9e) = (short)param_3;
      *(undefined1 *)(iVar3 + 0xcc595) = 1;
      *(void **)(iVar3 + 0xcc598) = param_3;
      *(undefined1 *)(iVar3 + 0xcc59c) = uVar1;
      *(void **)(iVar3 + 0xcc5a0) = param_3;
      *(undefined1 *)(iVar3 + 0xcc5ac) = uVar1;
      *(void **)(iVar3 + 0xcc5bc) = param_3;
      *(void **)(iVar3 + 0xcc5c4) = param_3;
      *(undefined4 *)(iVar3 + 0xcba88) = 4;
      *(undefined1 *)(iVar3 + 0xcba98) = 4;
      *(undefined1 *)(iVar3 + 0xcba9a) = 0x3c;
      *(undefined1 *)(iVar3 + 0xcba9b) = 2;
      *(undefined1 *)(iVar3 + 0xcbaa0) = 0x59;
    }
  }
  else {
    param_3 = (void *)0xffffffff;
  }
  return param_3;
}

