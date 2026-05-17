/* MapiSetMode @ 00031168 26B */


/* CM7_EmuSmw7App::MapiSetMode(unsigned int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiSetMode(CM7_EmuSmw7App *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x30) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x30))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

