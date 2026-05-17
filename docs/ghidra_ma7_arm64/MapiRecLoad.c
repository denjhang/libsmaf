/* MapiRecLoad @ 0012e914 76B */


/* CM7_EmuSmw7App::MapiRecLoad(unsigned char*, unsigned int, unsigned char) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiRecLoad(CM7_EmuSmw7App *this,uchar *param_1,uint param_2,uchar param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x338) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x338))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

