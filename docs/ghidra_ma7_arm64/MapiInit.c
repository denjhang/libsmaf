/* MapiInit @ 0012cb10 60B */


/* CM7_EmuSmw7App::MapiInit() */

undefined8 __thiscall CM7_EmuSmw7App::MapiInit(CM7_EmuSmw7App *this)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xa0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xa0))();
    return uVar1;
  }
  return 0xffffffff;
}

