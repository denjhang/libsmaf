/* MaSoundDeviceControl @ 00032398 30B */


/* CM7_EmuSmw7App::MaSoundDeviceControl(unsigned char, unsigned char, unsigned char, unsigned char)
    */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundDeviceControl
          (CM7_EmuSmw7App *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x198) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x198))(param_1,param_2,param_3,param_4,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

