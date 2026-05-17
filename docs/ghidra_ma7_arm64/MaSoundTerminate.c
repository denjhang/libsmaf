/* MaSoundTerminate @ 0012ec0c 40B */


/* CM7_EmuSmw7App::MaSoundTerminate() */

undefined8 __thiscall CM7_EmuSmw7App::MaSoundTerminate(CM7_EmuSmw7App *this)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x380) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x380))();
  }
  return uVar1;
}

