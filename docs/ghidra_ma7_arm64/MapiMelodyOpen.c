/* MapiMelodyOpen @ 0012d248 68B */


/* CM7_EmuSmw7App::MapiMelodyOpen(int, MAPI_MELODY_OPENARG const*) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiMelodyOpen(CM7_EmuSmw7App *this,int param_1,MAPI_MELODY_OPENARG *param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x120) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x120))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

