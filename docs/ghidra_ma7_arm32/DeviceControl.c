/* DeviceControl @ 00033c88 28B */


/* CPreMms::DeviceControl(unsigned char, unsigned char, unsigned char, unsigned char) */

undefined4 __thiscall
CPreMms::DeviceControl(CPreMms *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x14) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x14))(param_1,param_2,param_3,param_4,param_3);
    return uVar1;
  }
  return 0xffffff9b;
}

