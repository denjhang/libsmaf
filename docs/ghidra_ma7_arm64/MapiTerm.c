/* MapiTerm @ 0012cb58 60B */


/* CM7_EmuSmw7App::MapiTerm() */

undefined8 __thiscall CM7_EmuSmw7App::MapiTerm(CM7_EmuSmw7App *this)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xa8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xa8))();
    return uVar1;
  }
  return 0xffffffff;
}

