/* lset_flt10 @ 0024537c 164B */


/* YAMAHA::lset_flt10(unsigned short, short*, short*) */

void YAMAHA::lset_flt10(ushort param_1,short *param_2,short *param_3)

{
  ushort uVar1;
  short sVar2;
  
  *param_2 = (param_1 & 0x7f) << 2;
  *param_3 = 1;
  uVar1 = param_1 >> 7 & 7;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      *param_3 = 2;
    }
    else if (uVar1 == 2) {
      *param_3 = 4;
    }
    else if (uVar1 == 3) {
      *param_3 = 8;
    }
    else if (uVar1 == 4) {
      *param_3 = 0x10;
    }
    else if (uVar1 == 5) {
      *param_3 = 0x20;
    }
    else {
      sVar2 = 0x80;
      if (uVar1 != 7) {
        sVar2 = 0x40;
      }
      *param_3 = sVar2;
    }
  }
  return;
}

