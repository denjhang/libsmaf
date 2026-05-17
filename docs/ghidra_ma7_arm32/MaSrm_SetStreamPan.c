/* MaSrm_SetStreamPan @ 0008a36c 36B */


/* YAMAHA::MaSrm_SetStreamPan(unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetStreamPan(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = 0x3e < param_2;
  bVar2 = param_2 == 0x3f;
  if (param_2 < 0x40) {
    bVar3 = 2 < param_1;
    bVar2 = param_1 == 3;
  }
  if ((!bVar3 || bVar2) &&
     (iVar1 = DAT_0008a390 + 0x8a382 + (param_2 + param_1 * 0x40) * 0x10,
     -1 < (int)((uint)*(byte *)(iVar1 + 0xc) << 0x1a))) {
    *(char *)(iVar1 + 0xd) = (char)param_3;
  }
  return;
}

