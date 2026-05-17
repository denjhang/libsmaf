/* MaSndDrv_SetStream @ 001922fc 264B */


/* YAMAHA::MaSndDrv_SetStream(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned char const*, unsigned int) */

undefined8
YAMAHA::MaSndDrv_SetStream
          (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uchar *param_6,uint param_7)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar3 = DAT_0059a420;
  if (param_4 - 4000 < 0xabe1) {
    uVar1 = *(uint *)param_1;
    uVar7 = (ulong)(uVar1 >> 8) & 0xff;
    bVar2 = (&DAT_0048aa70)[uVar7 * 4 + (ulong)(byte)uVar1];
    lVar5 = *(long *)(DAT_0059a428 + (ulong)bVar2 * 0x430 + 0x28);
    if ((lVar5 != 0) &&
       ((uVar6 = (uint)uVar7, *(byte *)(lVar5 + 0x2c) < 4 || ((param_3 >> 6 & 1) == 0)))) {
      if (uVar6 < 2) {
        uVar4 = MaSrm_SetStream(uVar1 & 0xff,param_2,param_3,param_4,param_6,param_7);
        return uVar4;
      }
      if (uVar6 == 2) {
        *(uint *)(lVar5 + 8) = param_3;
        uVar4 = MaSrm_Open(uVar1 & 0xff,(uint)*(byte *)(lVar5 + 0x18),param_4,param_3 & 0xffffff7f,
                           100,0x40,param_5,*(uint *)(lVar3 + (ulong)bVar2 * 0xc0 + 0x48),param_6,
                           param_7);
        return uVar4;
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffe8;
  }
  return uVar4;
}

