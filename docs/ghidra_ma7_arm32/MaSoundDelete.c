/* MaSoundDelete @ 00032438 20B */


/* CM7_EmuSmw7App::MaSoundDelete(int) */

undefined4 __thiscall CM7_EmuSmw7App::MaSoundDelete(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1a4) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x1a4))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

