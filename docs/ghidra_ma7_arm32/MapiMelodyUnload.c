/* MapiMelodyUnload @ 000313c8 26B */


/* CM7_EmuSmw7App::MapiMelodyUnload(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiMelodyUnload(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x5c) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x5c))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

