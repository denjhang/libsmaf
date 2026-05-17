/* MaSndDrv_SetStream @ 0007bc7c 192B */


/* YAMAHA::MaSndDrv_SetStream(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned char const*, unsigned int) */

undefined4
YAMAHA::MaSndDrv_SetStream
          (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uchar *param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_4 - 4000 < 0xabe1) {
    uVar4 = (*(uint *)param_1 & 0xffff) >> 8;
    uVar1 = *(uint *)param_1 & 0xff;
    uVar5 = (uint)*(byte *)(DAT_0007bd3c + 0x7bcac + uVar1 + uVar4 * 4);
    iVar6 = *(int *)(DAT_0007bd40 + 0x7bcae);
    iVar3 = *(int *)(uVar5 * 0x228 + *(int *)(DAT_0007bd40 + 0x7bcb2) + 0x24);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x2c) < 4 || ((param_3 & 0x40) == 0)))) {
      if (uVar4 < 2) {
        uVar2 = MaSrm_SetStream(uVar1,param_2,param_3,param_4,param_6,param_7);
        return uVar2;
      }
      if (uVar4 == 2) {
        *(uint *)(iVar3 + 8) = param_3;
        uVar2 = MaSrm_Open(uVar1,(uint)*(byte *)(iVar3 + 0x18),param_4,param_3 & 0xffffff7f,100,0x40
                           ,param_5,*(uint *)(iVar6 + uVar5 * 0x98 + 0x48),param_6,param_7);
        return uVar2;
      }
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffe8;
  }
  return uVar2;
}

