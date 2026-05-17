/* MapiGetMode @ 0012cdf4 60B */


/* CM7_EmuSmw7App::MapiGetMode() */

undefined8 __thiscall CM7_EmuSmw7App::MapiGetMode(CM7_EmuSmw7App *this)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xc0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xc0))();
    return uVar1;
  }
  return 0xffffffff;
}

