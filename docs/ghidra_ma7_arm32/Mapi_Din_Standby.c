/* Mapi_Din_Standby @ 00032008 14B */


void Mapi_Din_Standby(int param_1)

{
  CM7_EmuSmw7App::MapiDinStandby(*(CM7_EmuSmw7App **)(DAT_00032018 + 0x32012),param_1);
  return;
}

