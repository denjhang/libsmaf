/* CPanIP @ 00043018 96B */


/* ARM::CPanIP::CPanIP(unsigned int) */

CPanIP * __thiscall ARM::CPanIP::CPanIP(CPanIP *this,uint param_1)

{
  if (param_1 == 0x5622) {
LAB_00043068:
    *(uint *)this = param_1;
    *(undefined4 *)(this + 4) = 9;
  }
  else {
    if (param_1 < 0x5623) {
      if (param_1 == 0x2b11) {
        *(undefined4 *)this = 0x2b11;
        *(undefined4 *)(this + 4) = 8;
        goto LAB_00043040;
      }
      if (param_1 == 16000) goto LAB_00043068;
    }
    else if (((param_1 != 32000) && (param_1 != 0xac44)) && (param_1 == 24000)) goto LAB_00043068;
    *(uint *)this = param_1;
    *(undefined4 *)(this + 4) = 10;
  }
LAB_00043040:
  *(undefined4 *)(this + 0x10) = 0x8000;
  *(undefined4 *)(this + 0x14) = 0x8000;
  *(undefined4 *)(this + 0x18) = 0x8000;
  *(undefined4 *)(this + 0x1c) = 0x8000;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}

