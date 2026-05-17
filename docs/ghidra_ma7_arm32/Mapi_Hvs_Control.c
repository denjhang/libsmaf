/* Mapi_Hvs_Control @ 00031c80 24B */


void Mapi_Hvs_Control(int param_1,uint param_2,void *param_3)

{
  CM7_EmuSmw7App::MapiHvsControl
            (*(CM7_EmuSmw7App **)(DAT_00031c98 + 0x31c92),param_1,param_2,param_3);
  return;
}

