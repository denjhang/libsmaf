/* MapiRecUnload @ 000321e8 28B */


/* CM7_EmuSmw7App::MapiRecUnload(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiRecUnload(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x174) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x174))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

