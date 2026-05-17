/* Mapi_ResetMode @ 00031158 10B */


void Mapi_ResetMode(void)

{
  CM7_EmuSmw7App::MapiResetMode(*(CM7_EmuSmw7App **)(DAT_00031164 + 0x3115e));
  return;
}

