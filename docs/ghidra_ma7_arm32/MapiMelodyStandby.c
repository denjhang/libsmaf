/* MapiMelodyStandby @ 00031484 30B */


/* CM7_EmuSmw7App::MapiMelodyStandby(int, unsigned int, unsigned int) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiMelodyStandby(CM7_EmuSmw7App *this,int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x6c) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x6c))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

