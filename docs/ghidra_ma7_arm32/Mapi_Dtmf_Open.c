/* Mapi_Dtmf_Open @ 0003209c 16B */


void Mapi_Dtmf_Open(ushort param_1)

{
  CM7_EmuSmw7App::MapiDtmfOpen(*(int *)(DAT_000320ac + 0x320a8),param_1);
  return;
}

