/* MapiRecClose @ 0012ea34 64B */


/* CM7_EmuSmw7App::MapiRecClose(int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiRecClose(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x350) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x350))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

