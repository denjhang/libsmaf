/* MaSoundUnload @ 000324b8 24B */


/* CM7_EmuSmw7App::MaSoundUnload(int, int, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundUnload(CM7_EmuSmw7App *this,int param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1ac) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x1ac))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

