/* Mapi_Stm_Stop @ 00031f30 14B */


void Mapi_Stm_Stop(int param_1)

{
  CM7_EmuSmw7App::MapiStmStop(*(CM7_EmuSmw7App **)(DAT_00031f40 + 0x31f3a),param_1);
  return;
}

