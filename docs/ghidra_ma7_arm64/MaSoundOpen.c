/* MaSoundOpen @ 0012ee34 60B */


/* CM7_EmuSmw7App::MaSoundOpen(int, int, unsigned short, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundOpen
          (CM7_EmuSmw7App *this,int param_1,int param_2,ushort param_3,void *param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3b8) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3b8))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

