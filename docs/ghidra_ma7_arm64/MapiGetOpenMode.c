/* MapiGetOpenMode @ 0012ce3c 60B */


/* CM7_EmuSmw7App::MapiGetOpenMode(MAPI_OPENMODE*) */

void __thiscall CM7_EmuSmw7App::MapiGetOpenMode(CM7_EmuSmw7App *this,MAPI_OPENMODE *param_1)

{
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 200) != (code *)0x0)) {
    (**(code **)(this + 200))(param_1);
    return;
  }
  return;
}

