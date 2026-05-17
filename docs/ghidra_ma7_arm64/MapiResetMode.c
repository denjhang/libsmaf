/* MapiResetMode @ 0012cd5c 60B */


/* CM7_EmuSmw7App::MapiResetMode() */

undefined8 __thiscall CM7_EmuSmw7App::MapiResetMode(CM7_EmuSmw7App *this)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xb0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xb0))();
    return uVar1;
  }
  return 0xffffffff;
}

