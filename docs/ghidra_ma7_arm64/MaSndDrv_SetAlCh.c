/* MaSndDrv_SetAlCh @ 00192e64 60B */


/* YAMAHA::MaSndDrv_SetAlCh(_MACNV_SEQ_INFO*, unsigned int) */

undefined8 YAMAHA::MaSndDrv_SetAlCh(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  *(char *)(DAT_0059a428 +
            (ulong)(byte)(&DAT_0048aa70)
                         [((ulong)(*(uint *)param_1 >> 8) & 0xff) * 4 +
                          (ulong)(byte)*(uint *)param_1] * 0x430 + 0x1f) = (char)param_2;
  return 0;
}

