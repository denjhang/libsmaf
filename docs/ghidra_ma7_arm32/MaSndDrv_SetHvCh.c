/* MaSndDrv_SetHvCh @ 0007bda4 68B */


/* YAMAHA::MaSndDrv_SetHvCh(_MACNV_SEQ_INFO*, unsigned int) */

undefined4 YAMAHA::MaSndDrv_SetHvCh(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0007bdec;
  iVar3 = (uint)*(byte *)(DAT_0007bde8 + 0x7bdb8 +
                         ((*(uint *)param_1 & 0xffff) >> 8) * 4 + (*(uint *)param_1 & 0xff)) * 0x228
          + DAT_0007bdec + 0x7be7a;
  if (*(char *)(iVar3 + 0x1d) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *(char *)(iVar3 + 0x1e) = (char)param_2;
    *(char *)(iVar1 + 0x7e568) = (char)param_2;
  }
  return uVar2;
}

