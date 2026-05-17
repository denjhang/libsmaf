/* Mapi_Hvs_Start @ 00031d28 16B */


void Mapi_Hvs_Start(ushort param_1)

{
  CM7_EmuSmw7App::MapiHvsStart(*(int *)(DAT_00031d38 + 0x31d34),param_1);
  return;
}

