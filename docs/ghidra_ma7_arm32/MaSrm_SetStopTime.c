/* MaSrm_SetStopTime @ 0008b62c 28B */


/* YAMAHA::MaSrm_SetStopTime(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetStopTime(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0008b648 + 0x8b638) + (param_1 & 3) * 0x70;
  *(uint *)(iVar1 + 0x18) = param_2;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  return;
}

