/* MaSoundLoad @ 0012ed68 68B */


/* CM7_EmuSmw7App::MaSoundLoad(int, unsigned char*, unsigned int, unsigned char, int (*)(unsigned
   char), void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundLoad
          (CM7_EmuSmw7App *this,int param_1,uchar *param_2,uint param_3,uchar param_4,
          _func_int_uchar *param_5,void *param_6)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3a8) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3a8))(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

