/* Mapi_Hvs_Seek @ 00031cec 24B */


void Mapi_Hvs_Seek(int param_1,uint param_2,uchar param_3)

{
  CM7_EmuSmw7App::MapiHvsSeek(*(CM7_EmuSmw7App **)(DAT_00031d04 + 0x31cfe),param_1,param_2,param_3);
  return;
}

