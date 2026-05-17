/* Mapi_Din_Stop @ 00032068 14B */


void Mapi_Din_Stop(int param_1)

{
  CM7_EmuSmw7App::MapiDinStop(*(CM7_EmuSmw7App **)(DAT_00032078 + 0x32072),param_1);
  return;
}

