/* MaSoundControl @ 0012eee4 64B */


/* CM7_EmuSmw7App::MaSoundControl(int, int, unsigned char, void*, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundControl
          (CM7_EmuSmw7App *this,int param_1,int param_2,uchar param_3,void *param_4,void *param_5)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3c8) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3c8))(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

