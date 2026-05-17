/* CVolIP @ 0015b144 184B */


/* ARM::CVolIP::CVolIP(unsigned int) */

void __thiscall ARM::CVolIP::CVolIP(CVolIP *this,uint param_1)

{
  if (param_1 != 0x5622) {
    if (param_1 < 0x5623) {
      if (param_1 == 0x2b11) {
        *(undefined4 *)this = 0x2b11;
        *(undefined4 *)(this + 0x10) = 0;
        *(undefined4 *)(this + 4) = 8;
        *(undefined4 *)(this + 0x14) = 0;
        *(undefined4 *)(this + 0x18) = 0;
        *(undefined4 *)(this + 8) = 0;
        *(undefined4 *)(this + 0xc) = 0;
        return;
      }
      if (param_1 == 16000) goto LAB_0015b1b4;
    }
    else if (((param_1 != 32000) && (param_1 != 0xac44)) && (param_1 == 24000)) goto LAB_0015b1b4;
    *(uint *)this = param_1;
    *(undefined4 *)(this + 4) = 10;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    return;
  }
LAB_0015b1b4:
  *(uint *)this = param_1;
  *(undefined4 *)(this + 4) = 9;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

