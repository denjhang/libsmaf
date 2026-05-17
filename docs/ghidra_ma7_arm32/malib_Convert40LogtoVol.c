/* malib_Convert40LogtoVol @ 00096f14 20B */


/* YAMAHA::malib_Convert40LogtoVol(unsigned int) */

undefined1 YAMAHA::malib_Convert40LogtoVol(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0xc1) {
    iVar1 = DAT_00096f28 + 0x96f1a + param_1;
  }
  else {
    iVar1 = DAT_00096f28 + 0x96fda;
  }
  return *(undefined1 *)(iVar1 + 0x280);
}

