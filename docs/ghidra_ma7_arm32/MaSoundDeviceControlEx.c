/* MaSoundDeviceControlEx @ 000323dc 24B */


/* CM7_EmuSmw7App::MaSoundDeviceControlEx(unsigned int, unsigned int, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundDeviceControlEx(CM7_EmuSmw7App *this,uint param_1,uint param_2,void *param_3)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x19c) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x19c))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

