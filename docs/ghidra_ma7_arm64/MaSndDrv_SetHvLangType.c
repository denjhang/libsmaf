/* MaSndDrv_SetHvLangType @ 001924f4 100B */


/* YAMAHA::MaSndDrv_SetHvLangType(_MACNV_SEQ_INFO*, unsigned int) */

undefined8 YAMAHA::MaSndDrv_SetHvLangType(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  if ((&DAT_0059a44d)
      [(ulong)(byte)(&DAT_0048aa70)
                    [((ulong)(*(uint *)param_1 >> 8) & 0xff) * 4 + (ulong)(byte)*(uint *)param_1] *
       0x430] == -1) {
    return 0xffffffff;
  }
  if (param_2 < 3) {
    (&DAT_0059a44d)
    [(ulong)(byte)(&DAT_0048aa70)
                  [((ulong)(*(uint *)param_1 >> 8) & 0xff) * 4 + (ulong)(byte)*(uint *)param_1] *
     0x430] = (char)param_2;
    return 0;
  }
  return 0xfffffffe;
}

