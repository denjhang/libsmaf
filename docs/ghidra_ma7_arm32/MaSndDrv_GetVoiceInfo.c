/* MaSndDrv_GetVoiceInfo @ 0007c54c 40B */


/* YAMAHA::MaSndDrv_GetVoiceInfo(_MACNV_SEQ_INFO*, unsigned int, unsigned int, _MASNDVOICE*) */

undefined4
YAMAHA::MaSndDrv_GetVoiceInfo
          (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,_MASNDVOICE *param_4)

{
  undefined4 uVar1;
  
  if ((param_4 != (_MASNDVOICE *)0x0 && param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     ((*(uint *)param_1 & 0xffff) >> 8 < 2)) {
    uVar1 = MaCmd_GetVoiceInfo(*(uint *)param_1 & 0xff,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xfffffffe;
}

