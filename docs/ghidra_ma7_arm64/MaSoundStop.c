/* MaSoundStop @ 0012f074 52B */


/* CM7_EmuSmw7App::MaSoundStop(int, int, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundStop(CM7_EmuSmw7App *this,int param_1,int param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3f8) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3f8))(param_1,param_2,param_3);
  }
  return uVar1;
}

