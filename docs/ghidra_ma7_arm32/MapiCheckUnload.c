/* MapiCheckUnload @ 00031230 26B */


/* CM7_EmuSmw7App::MapiCheckUnload(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiCheckUnload(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x40) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x40))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

