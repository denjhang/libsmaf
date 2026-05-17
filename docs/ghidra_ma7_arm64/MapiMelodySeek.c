/* MapiMelodySeek @ 0012d354 68B */


/* CM7_EmuSmw7App::MapiMelodySeek(int, unsigned int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiMelodySeek(CM7_EmuSmw7App *this,int param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x138) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x138))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

