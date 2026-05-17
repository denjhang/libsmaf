/* MaSoundInitialize @ 00032350 18B */


/* CM7_EmuSmw7App::MaSoundInitialize() */

undefined4 __thiscall CM7_EmuSmw7App::MaSoundInitialize(CM7_EmuSmw7App *this)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 400) != (code *)0x0) {
    uVar1 = (**(code **)(this + 400))();
    return uVar1;
  }
  return 0xffffffff;
}

