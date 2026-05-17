/* MaSoundDelete @ 0012ed2c 44B */


/* CM7_EmuSmw7App::MaSoundDelete(int) */

undefined8 __thiscall CM7_EmuSmw7App::MaSoundDelete(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3a0) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3a0))(param_1);
  }
  return uVar1;
}

