/* MaSrm_GetVol @ 0008b344 36B */


/* YAMAHA::MaSrm_GetVol(unsigned int) */

uint YAMAHA::MaSrm_GetVol(uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0008b368 + 0x8b34e) + (param_1 & 3) * 0x70;
  if (*(int *)(iVar1 + 0x44) != 0) {
    return (uint)*(byte *)(iVar1 + 0x3b);
  }
  return 0xffffffff;
}

