/* MapiRecStop @ 0012eb88 64B */


/* CM7_EmuSmw7App::MapiRecStop(int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiRecStop(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x370) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x370))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

