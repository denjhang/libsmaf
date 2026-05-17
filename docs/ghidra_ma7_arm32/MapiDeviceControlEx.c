/* MapiDeviceControlEx @ 00031344 30B */


/* CM7_EmuSmw7App::MapiDeviceControlEx(unsigned int, unsigned int, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiDeviceControlEx(CM7_EmuSmw7App *this,uint param_1,uint param_2,void *param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x54) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x54))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

