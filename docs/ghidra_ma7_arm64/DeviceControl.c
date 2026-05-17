/* DeviceControl @ 001310a0 56B */


/* CPreMms::DeviceControl(unsigned char, unsigned char, unsigned char, unsigned char) */

undefined8 __thiscall
CPreMms::DeviceControl(CPreMms *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x28) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x28))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

