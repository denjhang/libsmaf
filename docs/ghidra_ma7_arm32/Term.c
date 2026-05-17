/* Term @ 0002fedc 26B */


/* CM7_EmuSmw7App::Term() */

undefined4 __thiscall CM7_EmuSmw7App::Term(CM7_EmuSmw7App *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x1d8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x1d8))();
    return uVar1;
  }
  return 0xffffffff;
}

