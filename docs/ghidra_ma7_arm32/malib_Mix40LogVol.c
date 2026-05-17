/* malib_Mix40LogVol @ 00096ed4 40B */


/* YAMAHA::malib_Mix40LogVol(unsigned int, unsigned int) */

undefined1 YAMAHA::malib_Mix40LogVol(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_00096efc + 0x96ee2;
  uVar1 = (uint)*(byte *)((param_2 & 0x7f) + iVar2 + 0x200) +
          (uint)*(byte *)((param_1 & 0x7f) + iVar2 + 0x200);
  if (uVar1 < 0xc1) {
    iVar2 = iVar2 + uVar1;
  }
  else {
    iVar2 = DAT_00096efc + 0x96fa2;
  }
  return *(undefined1 *)(iVar2 + 0x280);
}

