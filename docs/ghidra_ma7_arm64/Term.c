/* Term @ 0012b3f8 60B */


/* CM7_EmuSmw7App::Term() */

undefined8 __thiscall CM7_EmuSmw7App::Term(CM7_EmuSmw7App *this)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x408) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x408))();
    return uVar1;
  }
  return 0xffffffff;
}

