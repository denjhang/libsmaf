/* MaSrm_DelStream @ 00089c24 38B */


/* YAMAHA::MaSrm_DelStream(unsigned int, unsigned int) */

void YAMAHA::MaSrm_DelStream(uint param_1,uint param_2)

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
  if (!bVar3 || bVar2) {
    iVar1 = DAT_00089c4c + 0x89c40 + (param_2 + param_1 * 0x40) * 0x10;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined1 *)(iVar1 + 0xe) = 0;
  }
  return;
}

