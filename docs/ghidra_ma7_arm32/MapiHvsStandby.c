/* MapiHvsStandby @ 00031c9c 28B */


/* CM7_EmuSmw7App::MapiHvsStandby(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiHvsStandby(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x10c) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x10c))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

