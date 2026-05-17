/* MaSoundRestart @ 000326d8 24B */


/* CM7_EmuSmw7App::MaSoundRestart(int, int, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundRestart(CM7_EmuSmw7App *this,int param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1cc) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x1cc))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

