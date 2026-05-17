/* MaSoundCreate @ 00032410 20B */


/* CM7_EmuSmw7App::MaSoundCreate(unsigned char) */

undefined4 __thiscall CM7_EmuSmw7App::MaSoundCreate(CM7_EmuSmw7App *this,uchar param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1a0) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x1a0))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

