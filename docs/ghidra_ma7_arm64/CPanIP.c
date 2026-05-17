/* CPanIP @ 00147d38 164B */


/* ARM::CPanIP::CPanIP(unsigned int) */

void __thiscall ARM::CPanIP::CPanIP(CPanIP *this,uint param_1)

{
  if (param_1 == 0x5622) {
LAB_00147dbc:
    *(uint *)this = param_1;
    *(undefined4 *)(this + 4) = 9;
  }
  else {
    if (param_1 < 0x5623) {
      if (param_1 == 0x2b11) {
        *(undefined4 *)this = 0x2b11;
        *(undefined4 *)(this + 4) = 8;
        goto LAB_00147d78;
      }
      if (param_1 == 16000) goto LAB_00147dbc;
    }
    else if (((param_1 != 32000) && (param_1 != 0xac44)) && (param_1 == 24000)) goto LAB_00147dbc;
    *(uint *)this = param_1;
    *(undefined4 *)(this + 4) = 10;
  }
LAB_00147d78:
  *(undefined8 *)(this + 0x10) = 0x800000008000;
  *(undefined8 *)(this + 0x18) = 0x800000008000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

