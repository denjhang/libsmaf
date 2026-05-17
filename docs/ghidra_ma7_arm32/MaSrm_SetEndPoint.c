/* MaSrm_SetEndPoint @ 0008b64c 46B */


/* YAMAHA::MaSrm_SetEndPoint(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetEndPoint(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(uint *)(*(int *)(DAT_0008b67c + 0x8b65c) + (param_1 & 3) * 0x70 + 0x1c) = param_2;
    return;
  }
  iVar1 = *(int *)(DAT_0008b680 + 0x8b670) + (param_1 & 3) * 0x70;
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 4);
  return;
}

