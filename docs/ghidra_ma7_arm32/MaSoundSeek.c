/* MaSoundSeek @ 000325e0 38B */


/* CM7_EmuSmw7App::MaSoundSeek(int, int, unsigned int, unsigned char, void*) */

undefined4 __thiscall
CM7_EmuSmw7App::MaSoundSeek
          (CM7_EmuSmw7App *this,int param_1,int param_2,uint param_3,uchar param_4,void *param_5)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x1c0) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x1c0))(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

