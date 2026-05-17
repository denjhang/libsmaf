/* MaSndDrv_DelWtWave @ 001922d4 40B */


/* YAMAHA::MaSndDrv_DelWtWave(_MACNV_SEQ_INFO*, unsigned int) */

undefined8 YAMAHA::MaSndDrv_DelWtWave(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (_MACNV_SEQ_INFO *)0x0) {
    if ((*(uint *)param_1 >> 8 & 0xff) < 2) {
      uVar1 = MaCmd_SetWtWave(*(uint *)param_1 & 0xff,param_2,0);
      return uVar1;
    }
  }
  return 0xfffffffe;
}

