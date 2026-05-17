/* MaSoundInitialize @ 0012ebd8 40B */


/* CM7_EmuSmw7App::MaSoundInitialize() */

undefined8 __thiscall CM7_EmuSmw7App::MaSoundInitialize(CM7_EmuSmw7App *this)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x378) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x378))();
  }
  return uVar1;
}

