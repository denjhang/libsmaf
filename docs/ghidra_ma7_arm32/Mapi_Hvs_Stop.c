/* Mapi_Hvs_Stop @ 00031d58 14B */


void Mapi_Hvs_Stop(int param_1)

{
  CM7_EmuSmw7App::MapiHvsStop(*(CM7_EmuSmw7App **)(DAT_00031d68 + 0x31d62),param_1);
  return;
}

