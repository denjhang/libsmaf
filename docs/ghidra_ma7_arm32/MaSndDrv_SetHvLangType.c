/* MaSndDrv_SetHvLangType @ 0007bdf0 68B */


/* YAMAHA::MaSndDrv_SetHvLangType(_MACNV_SEQ_INFO*, unsigned int) */

undefined4 YAMAHA::MaSndDrv_SetHvLangType(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(DAT_0007be34 + 0x7be04 +
                         ((*(uint *)param_1 & 0xffff) >> 8) * 4 + (*(uint *)param_1 & 0xff)) * 0x228
          + DAT_0007be38 + 0x7bec6;
  if (*(char *)(iVar2 + 0x1d) == -1) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < 3) {
    uVar1 = 0;
    *(char *)(iVar2 + 0x1d) = (char)param_2;
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

