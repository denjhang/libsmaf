/* MapiMelodyOpenArgInit @ 000313f8 24B */


/* CM7_EmuSmw7App::MapiMelodyOpenArgInit(MAPI_MELODY_OPENARG*) */

void __thiscall
CM7_EmuSmw7App::MapiMelodyOpenArgInit(CM7_EmuSmw7App *this,MAPI_MELODY_OPENARG *param_1)

{
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x60) != (code *)0x0)) {
    (**(code **)(this + 0x60))(param_1);
    return;
  }
  return;
}

