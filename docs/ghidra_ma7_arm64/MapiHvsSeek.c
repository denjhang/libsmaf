/* MapiHvsSeek @ 0012e0e0 76B */


/* CM7_EmuSmw7App::MapiHvsSeek(int, unsigned int, unsigned char) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiHvsSeek(CM7_EmuSmw7App *this,int param_1,uint param_2,uchar param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x278) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x278))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

