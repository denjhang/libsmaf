/* Mapi_Stm_Seek @ 00031ed0 16B */


void Mapi_Stm_Seek(uint param_1)

{
  CM7_EmuSmw7App::MapiStmSeek(*(int *)(DAT_00031ee0 + 0x31edc),param_1);
  return;
}

