/* MapiMelodyOpenArgInit @ 0012d1fc 60B */


/* CM7_EmuSmw7App::MapiMelodyOpenArgInit(MAPI_MELODY_OPENARG*) */

void __thiscall
CM7_EmuSmw7App::MapiMelodyOpenArgInit(CM7_EmuSmw7App *this,MAPI_MELODY_OPENARG *param_1)

{
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x118) != (code *)0x0)) {
    (**(code **)(this + 0x118))(param_1);
    return;
  }
  return;
}

