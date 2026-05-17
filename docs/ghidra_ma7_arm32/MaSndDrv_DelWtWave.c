/* MaSndDrv_DelWtWave @ 0007bc60 26B */


/* YAMAHA::MaSndDrv_DelWtWave(_MACNV_SEQ_INFO*, unsigned int) */

undefined4 YAMAHA::MaSndDrv_DelWtWave(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && ((*(uint *)param_1 & 0xffff) >> 8 < 2)) {
    uVar1 = MaCmd_SetWtWave(*(uint *)param_1 & 0xff,param_2,0);
    return uVar1;
  }
  return 0xfffffffe;
}

