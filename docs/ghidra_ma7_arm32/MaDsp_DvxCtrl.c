/* MaDsp_DvxCtrl @ 000db690 322B */


/* YAMAHA::MaDsp_DvxCtrl(unsigned char*, unsigned char*, unsigned int) */

int YAMAHA::MaDsp_DvxCtrl(uchar *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uchar local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  uchar local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  iVar3 = DAT_000db7d4;
  if (*(int *)(DAT_000db7d4 + 0xdc574) == 1) {
    iVar1 = MaDevDrv_ClearDspCoef(0x2fb,0x2fb);
    if ((((-1 < iVar1) && (iVar1 = MaDevDrv_ClearDspCoef(0x2fe,0x2fe), -1 < iVar1)) &&
        (iVar1 = MaDevDrv_SendDspCoef(0x176,param_1,0x80), -1 < iVar1)) &&
       (((iVar1 = MaDevDrv_SendDspCoef(0x1b6,param_2,0x80), -1 < iVar1 &&
         (iVar1 = MaDevDrv_SendDspCoef(0x1f6,param_1,0x80), -1 < iVar1)) &&
        (iVar1 = MaDevDrv_SendDspCoef(0x236,param_2,0x80), -1 < iVar1)))) {
      iVar1 = 0x1000 >> ((param_3 & 0xf) >> 2);
      *(short *)(iVar3 + 0xdc578) = (short)iVar1;
      uVar4 = 0x8000 >> (param_3 & 3);
      iVar3 = *(int *)(ATRTMIDIMgr_SetEffectParam + DAT_000db7d8 + 6);
      if (uVar4 != 0x8000) {
        uVar2 = uVar4 & 0xffff;
      }
      else {
        uVar2 = 0x7fff;
      }
      *(short *)(DAT_000db7d8 + 0xdc604) = (short)uVar2;
      if (uVar4 == 0x8000) {
        uVar4 = uVar2;
      }
      if (iVar3 == 0) {
        local_1b = (undefined1)iVar1;
        local_1a = 0;
        local_19 = 0;
        local_1c = (uchar)((uint)iVar1 >> 8);
      }
      else {
        local_19 = (undefined1)uVar4;
        local_1c = '\0';
        local_1b = 0;
        local_1a = (undefined1)(uVar4 >> 8);
      }
      local_20 = local_1c;
      local_1f = local_1b;
      local_1e = local_1a;
      local_1d = local_19;
      iVar1 = MaDevDrv_SendDspCoef(0x277,&local_20,8);
      if (-1 < iVar1) {
        local_20 = '\x7f';
        local_1f = 0xff;
        iVar1 = MaDevDrv_SendDspCoef(0x2fb,&local_20,2);
        if (-1 < iVar1) {
          iVar1 = MaDevDrv_SendDspCoef(0x2fe,&local_20,2);
        }
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

