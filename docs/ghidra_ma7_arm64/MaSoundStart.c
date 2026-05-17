/* MaSoundStart @ 0012f014 60B */


/* CM7_EmuSmw7App::MaSoundStart(int, int, unsigned short, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundStart
          (CM7_EmuSmw7App *this,int param_1,int param_2,ushort param_3,void *param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3e0) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3e0))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

