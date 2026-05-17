/* MaSoundPause @ 000326a4 24B */


/* CM7_EmuSmw7App::MaSoundPause(int, int, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundPause(CM7_EmuSmw7App *this,int param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1c8) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x1c8))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

