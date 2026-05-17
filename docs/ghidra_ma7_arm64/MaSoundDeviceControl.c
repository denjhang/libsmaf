/* MaSoundDeviceControl @ 0012ec40 56B */


/* CM7_EmuSmw7App::MaSoundDeviceControl(unsigned char, unsigned char, unsigned char, unsigned char)
    */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundDeviceControl
          (CM7_EmuSmw7App *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x388) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x388))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

