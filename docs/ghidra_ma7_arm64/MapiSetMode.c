/* MapiSetMode @ 0012cda4 64B */


/* CM7_EmuSmw7App::MapiSetMode(unsigned int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiSetMode(CM7_EmuSmw7App *this,uint param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xb8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xb8))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

