/* MapiDtmfOpen @ 0012e714 72B */


/* CM7_EmuSmw7App::MapiDtmfOpen(int, unsigned short) */

undefined8 __thiscall CM7_EmuSmw7App::MapiDtmfOpen(CM7_EmuSmw7App *this,int param_1,ushort param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x308) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x308))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

