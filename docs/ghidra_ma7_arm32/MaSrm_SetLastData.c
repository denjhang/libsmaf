/* MaSrm_SetLastData @ 0008b684 138B */


/* YAMAHA::MaSrm_SetLastData(unsigned int, _MASMW_LAST*) */

undefined4 YAMAHA::MaSrm_SetLastData(uint param_1,_MASMW_LAST *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1 & 3;
  if (*(uint *)param_2 == 0) {
    iVar4 = *(int *)(DAT_0008b710 + 0x8b69a) + uVar1 * 0x70;
    *(undefined1 *)(iVar4 + 0x6c) = 0;
  }
  else {
    if (2 < *(uint *)param_2) {
      return 0xfffffffe;
    }
    uVar2 = *(uint *)(param_2 + 4);
    iVar4 = *(int *)(DAT_0008b714 + 0x8b6c0) + uVar1 * 0x70;
    if (*(uint *)(iVar4 + 0x10) < uVar2) {
      return 0xfffffffe;
    }
    *(uint *)(iVar4 + 0x68) = uVar2;
    if ((*(char *)(iVar4 + 0x6c) == '\0') || (uVar2 != *(uint *)(iVar4 + 0xc))) {
      iVar3 = *(int *)(iVar4 + 0x44);
      *(undefined1 *)(iVar4 + 0x6c) = 1;
      goto joined_r0x0008b6f2;
    }
    *(undefined1 *)(iVar4 + 0x6c) = 2;
  }
  iVar3 = *(int *)(iVar4 + 0x44);
joined_r0x0008b6f2:
  if (iVar3 == 2) {
    MaDevDrv_SetIrqCtrl((uchar)(1 << uVar1),'\0');
    return 0;
  }
  return 0;
}

