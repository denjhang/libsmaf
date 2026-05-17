/* MapiInit @ 00030fa8 24B */


/* CM7_EmuSmw7App::MapiInit() */

undefined4 __thiscall CM7_EmuSmw7App::MapiInit(CM7_EmuSmw7App *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x24) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x24))();
    return uVar1;
  }
  return 0xffffffff;
}

