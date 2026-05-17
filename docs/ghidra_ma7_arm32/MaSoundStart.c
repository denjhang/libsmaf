/* MaSoundStart @ 00032630 26B */


/* CM7_EmuSmw7App::MaSoundStart(int, int, unsigned short, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundStart
          (CM7_EmuSmw7App *this,int param_1,int param_2,ushort param_3,void *param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1c4) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x1c4))(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xffffffff;
}

