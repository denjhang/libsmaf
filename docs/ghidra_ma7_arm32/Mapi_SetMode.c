/* Mapi_SetMode @ 00031184 14B */


void Mapi_SetMode(uint param_1)

{
  CM7_EmuSmw7App::MapiSetMode(*(CM7_EmuSmw7App **)(DAT_00031194 + 0x3118e),param_1);
  return;
}

