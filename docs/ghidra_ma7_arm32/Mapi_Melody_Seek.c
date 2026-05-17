/* Mapi_Melody_Seek @ 000314dc 16B */


void Mapi_Melody_Seek(uint param_1)

{
  CM7_EmuSmw7App::MapiMelodySeek(*(int *)(DAT_000314ec + 0x314e8),param_1);
  return;
}

