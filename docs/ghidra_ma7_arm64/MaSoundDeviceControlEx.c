/* MaSoundDeviceControlEx @ 0012eca0 52B */


/* CM7_EmuSmw7App::MaSoundDeviceControlEx(unsigned int, unsigned int, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundDeviceControlEx(CM7_EmuSmw7App *this,uint param_1,uint param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x390) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x390))(param_1,param_2,param_3);
  }
  return uVar1;
}

