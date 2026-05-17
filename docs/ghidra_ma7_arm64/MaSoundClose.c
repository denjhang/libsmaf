/* MaSoundClose @ 0012ee94 52B */


/* CM7_EmuSmw7App::MaSoundClose(int, int, void*) */

undefined8 __thiscall
CM7_EmuSmw7App::MaSoundClose(CM7_EmuSmw7App *this,int param_1,int param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x3c0) == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(this + 0x3c0))(param_1,param_2,param_3);
  }
  return uVar1;
}

