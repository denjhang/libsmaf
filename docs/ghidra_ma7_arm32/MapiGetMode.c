/* MapiGetMode @ 00031198 24B */


/* CM7_EmuSmw7App::MapiGetMode() */

undefined4 __thiscall CM7_EmuSmw7App::MapiGetMode(CM7_EmuSmw7App *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x34) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x34))();
    return uVar1;
  }
  return 0xffffffff;
}

