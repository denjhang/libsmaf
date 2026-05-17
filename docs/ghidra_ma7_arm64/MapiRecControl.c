/* MapiRecControl @ 0012ea84 72B */


/* CM7_EmuSmw7App::MapiRecControl(int, unsigned int, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiRecControl(CM7_EmuSmw7App *this,int param_1,uint param_2,void *param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x358) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x358))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

