/* mapimachdep_SmafCheck @ 00073990 38B */


/* YAMAHA::mapimachdep_SmafCheck(MAPI_DATATYPE, unsigned char, unsigned char) */

undefined4 YAMAHA::mapimachdep_SmafCheck(int param_1)

{
  undefined4 uVar1;
  
  if (0xf < param_1 - 1U) {
    return 0xffffffe8;
  }
  if ((1 << (param_1 - 1U & 0xff) & 0xc007U) == 0) {
    uVar1 = 0xffffffe8;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

