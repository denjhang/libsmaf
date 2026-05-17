/* Unload @ 0012b840 68B */


/* CM7_EmuSmw7App::Unload(unsigned int, void*) */

undefined8 __thiscall CM7_EmuSmw7App::Unload(CM7_EmuSmw7App *this,uint param_1,void *param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x458) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x458))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

