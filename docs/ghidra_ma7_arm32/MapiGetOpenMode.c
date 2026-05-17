/* MapiGetOpenMode @ 000311c0 24B */


/* CM7_EmuSmw7App::MapiGetOpenMode(MAPI_OPENMODE*) */

void __thiscall CM7_EmuSmw7App::MapiGetOpenMode(CM7_EmuSmw7App *this,MAPI_OPENMODE *param_1)

{
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x38) != (code *)0x0)) {
    (**(code **)(this + 0x38))(param_1);
    return;
  }
  return;
}

