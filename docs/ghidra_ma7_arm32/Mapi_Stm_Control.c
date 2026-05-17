/* Mapi_Stm_Control @ 00031e64 24B */


void Mapi_Stm_Control(int param_1,uint param_2,void *param_3)

{
  CM7_EmuSmw7App::MapiStmControl
            (*(CM7_EmuSmw7App **)(DAT_00031e7c + 0x31e76),param_1,param_2,param_3);
  return;
}

