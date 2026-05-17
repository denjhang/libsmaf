/* MaSoundStop @ 00032670 24B */


/* CM7_EmuSmw7App::MaSoundStop(int, int, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundStop(CM7_EmuSmw7App *this,int param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1d0) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x1d0))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

