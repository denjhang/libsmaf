/* MaSoundControl @ 00032560 34B */


/* CM7_EmuSmw7App::MaSoundControl(int, int, unsigned char, void*, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundControl
          (CM7_EmuSmw7App *this,int param_1,int param_2,uchar param_3,void *param_4,void *param_5)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1b8) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x1b8))(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

