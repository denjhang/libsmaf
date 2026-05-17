/* MapiMelodyClose @ 00031454 26B */


/* CM7_EmuSmw7App::MapiMelodyClose(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiMelodyClose(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x68) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x68))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

