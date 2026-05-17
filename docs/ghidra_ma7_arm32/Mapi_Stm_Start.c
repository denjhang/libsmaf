/* Mapi_Stm_Start @ 00031f00 14B */


void Mapi_Stm_Start(int param_1)

{
  CM7_EmuSmw7App::MapiStmStart(*(CM7_EmuSmw7App **)(DAT_00031f10 + 0x31f0a),param_1);
  return;
}

