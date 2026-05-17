/* CVolIP @ 000535ec 86B */


/* ARM::CVolIP::CVolIP(unsigned int) */

CVolIP * __thiscall ARM::CVolIP::CVolIP(CVolIP *this,uint param_1)

{
  if (param_1 == 0x5622) {
LAB_00053632:
    *(uint *)this = param_1;
    *(undefined4 *)(this + 4) = 9;
  }
  else {
    if (param_1 < 0x5623) {
      if (param_1 == 0x2b11) {
        *(undefined4 *)this = 0x2b11;
        *(undefined4 *)(this + 4) = 8;
        goto LAB_00053614;
      }
      if (param_1 == 16000) goto LAB_00053632;
    }
    else if (((param_1 != 32000) && (param_1 != 0xac44)) && (param_1 == 24000)) goto LAB_00053632;
    *(uint *)this = param_1;
    *(undefined4 *)(this + 4) = 10;
  }
LAB_00053614:
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}

