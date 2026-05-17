/* MaSndDrv_MuteStream @ 00192488 8B */


/* YAMAHA::MaSndDrv_MuteStream(_MACNV_SEQ_INFO*, unsigned int, unsigned int) */

void YAMAHA::MaSndDrv_MuteStream(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3)

{
  MaSrm_SetStreamMute((uint)(byte)*param_1,param_2,param_3);
  return;
}

