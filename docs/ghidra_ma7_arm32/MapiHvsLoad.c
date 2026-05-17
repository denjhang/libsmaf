/* MapiHvsLoad @ 00031b88 32B */


/* CM7_EmuSmw7App::MapiHvsLoad(unsigned char*, unsigned int, unsigned char) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiHvsLoad(CM7_EmuSmw7App *this,uchar *param_1,uint param_2,uchar param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0xf8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xf8))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

