/* MapiStmStandby @ 00031e80 28B */


/* CM7_EmuSmw7App::MapiStmStandby(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiStmStandby(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x130) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x130))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

