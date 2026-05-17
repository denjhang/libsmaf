/* MaSoundTerminate @ 00032374 18B */


/* CM7_EmuSmw7App::MaSoundTerminate() */

undefined4 __thiscall CM7_EmuSmw7App::MaSoundTerminate(CM7_EmuSmw7App *this)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x194) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x194))();
    return uVar1;
  }
  return 0xffffffff;
}

