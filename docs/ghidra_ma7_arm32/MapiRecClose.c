/* MapiRecClose @ 00032254 28B */


/* CM7_EmuSmw7App::MapiRecClose(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiRecClose(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x17c) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x17c))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

