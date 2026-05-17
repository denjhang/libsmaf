/* MapiHvsStop @ 00031d3c 28B */


/* CM7_EmuSmw7App::MapiHvsStop(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiHvsStop(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x118) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x118))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

