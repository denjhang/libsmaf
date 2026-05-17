/* MapiMelodyWaitReady @ 0012d44c 68B */


/* CM7_EmuSmw7App::MapiMelodyWaitReady(int, int) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiMelodyWaitReady(CM7_EmuSmw7App *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x150) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x150))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

