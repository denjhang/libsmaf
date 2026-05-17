/* MaSoundRestart @ 0012f114 52B */


/* CM7_EmuSmw7App::MaSoundRestart(int, int, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundRestart(CM7_EmuSmw7App *this,int param_1,int param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3f0) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3f0))(param_1,param_2,param_3);
  }
  return uVar1;
}

