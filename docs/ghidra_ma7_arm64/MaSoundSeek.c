/* MaSoundSeek @ 0012efa4 64B */


/* CM7_EmuSmw7App::MaSoundSeek(int, int, unsigned int, unsigned char, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundSeek
          (CM7_EmuSmw7App *this,int param_1,int param_2,uint param_3,uchar param_4,void *param_5)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3d8) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3d8))(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

