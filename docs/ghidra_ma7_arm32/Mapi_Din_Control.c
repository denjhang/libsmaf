/* Mapi_Din_Control @ 00031fd0 24B */


void Mapi_Din_Control(int param_1,uint param_2,void *param_3)

{
  CM7_EmuSmw7App::MapiDinControl
            (*(CM7_EmuSmw7App **)(DAT_00031fe8 + 0x31fe2),param_1,param_2,param_3);
  return;
}

