/* mapimachdep_SmafCheck @ 0018a31c 52B */


/* YAMAHA::mapimachdep_SmafCheck(MAPI_DATATYPE, unsigned char, unsigned char) */

undefined8 YAMAHA::mapimachdep_SmafCheck(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 0xf:
  case 0x10:
    return 0;
  default:
    return 0xffffffe8;
  }
}

