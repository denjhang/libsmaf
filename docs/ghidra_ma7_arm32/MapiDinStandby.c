/* MapiDinStandby @ 00031fec 28B */


/* CM7_EmuSmw7App::MapiDinStandby(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiDinStandby(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x14c) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x14c))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

