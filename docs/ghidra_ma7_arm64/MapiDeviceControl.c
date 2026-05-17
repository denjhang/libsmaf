/* MapiDeviceControl @ 0012d05c 80B */


/* CM7_EmuSmw7App::MapiDeviceControl(unsigned char, unsigned char, unsigned char, unsigned char) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiDeviceControl
          (CM7_EmuSmw7App *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xf8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xf8))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xffffffff;
}

