/* MaSoundCreate @ 0012ecf0 44B */


/* CM7_EmuSmw7App::MaSoundCreate(unsigned char) */

undefined8 __thiscall CM7_EmuSmw7App::MaSoundCreate(CM7_EmuSmw7App *this,uchar param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x398) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x398))(param_1);
  }
  return uVar1;
}

