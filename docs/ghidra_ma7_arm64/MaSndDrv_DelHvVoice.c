/* MaSndDrv_DelHvVoice @ 00192d14 8B */


/* YAMAHA::MaSndDrv_DelHvVoice(_MACNV_SEQ_INFO*, unsigned int) */

undefined1  [16] YAMAHA::MaSndDrv_DelHvVoice(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 0xffffffff;
  return auVar1;
}

