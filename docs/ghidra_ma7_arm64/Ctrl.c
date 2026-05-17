/* Ctrl @ 0012b6bc 76B */


/* CM7_EmuSmw7App::Ctrl(unsigned int, unsigned int, unsigned int, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::Ctrl(CM7_EmuSmw7App *this,uint param_1,uint param_2,uint param_3,void *param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x438) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x438))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xffffffff;
}

