/* MapiResetMode @ 00031140 24B */


/* CM7_EmuSmw7App::MapiResetMode() */

undefined4 __thiscall CM7_EmuSmw7App::MapiResetMode(CM7_EmuSmw7App *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x2c) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x2c))();
    return uVar1;
  }
  return 0xffffffff;
}

