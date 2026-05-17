/* DevCtrl @ 0002ff08 34B */


/* CM7_EmuSmw7App::DevCtrl(unsigned int, unsigned int, unsigned int, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::DevCtrl(CM7_EmuSmw7App *this,uint param_1,uint param_2,uint param_3,void *param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x1dc) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x1dc))(param_1,param_2,param_3,param_4,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

