/* MaSndDrv_SetHvCh @ 00192490 100B */


/* YAMAHA::MaSndDrv_SetHvCh(_MACNV_SEQ_INFO*, unsigned int) */

undefined8 YAMAHA::MaSndDrv_SetHvCh(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  if ((&DAT_0059a44d)
      [(ulong)(byte)(&DAT_0048aa70)
                    [((ulong)(*(uint *)param_1 >> 8) & 0xff) * 4 + (ulong)(byte)*(uint *)param_1] *
       0x430] != -1) {
    (&DAT_0059a44e)
    [(ulong)(byte)(&DAT_0048aa70)
                  [((ulong)(*(uint *)param_1 >> 8) & 0xff) * 4 + (ulong)(byte)*(uint *)param_1] *
     0x430] = (char)param_2;
    DAT_0059efae = (char)param_2;
    return 0;
  }
  return 0xffffffff;
}

