/* MapiStmSeek @ 0012e414 68B */


/* CM7_EmuSmw7App::MapiStmSeek(int, unsigned int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiStmSeek(CM7_EmuSmw7App *this,int param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x2c0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x2c0))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

