/* MaSndDrv_SetAlCh @ 0007c5b8 44B */


/* YAMAHA::MaSndDrv_SetAlCh(_MACNV_SEQ_INFO*, unsigned int) */

undefined4 YAMAHA::MaSndDrv_SetAlCh(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  *(char *)((uint)*(byte *)(DAT_0007c5e4 + 0x7c5ce +
                           ((*(uint *)param_1 & 0xffff) >> 8) * 4 + (*(uint *)param_1 & 0xff)) *
            0x228 + *(int *)(DAT_0007c5e8 + 0x7c5d8) + 0x1f) = (char)param_2;
  return 0;
}

