/* MapiHvsStop @ 0012e1a4 64B */


/* CM7_EmuSmw7App::MapiHvsStop(int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiHvsStop(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x288) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x288))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

