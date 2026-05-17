/* Mapi_Dtmf_Control @ 00032100 24B */


void Mapi_Dtmf_Control(int param_1,uint param_2,void *param_3)

{
  CM7_EmuSmw7App::MapiDtmfControl
            (*(CM7_EmuSmw7App **)(DAT_00032118 + 0x32112),param_1,param_2,param_3);
  return;
}

