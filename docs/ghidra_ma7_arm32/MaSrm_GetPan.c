/* MaSrm_GetPan @ 0008b3d4 36B */


/* YAMAHA::MaSrm_GetPan(unsigned int) */

uint YAMAHA::MaSrm_GetPan(uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0008b3f8 + 0x8b3de) + (param_1 & 3) * 0x70;
  if (*(int *)(iVar1 + 0x44) != 0) {
    return (uint)*(byte *)(iVar1 + 0x3c);
  }
  return 0xffffffff;
}

