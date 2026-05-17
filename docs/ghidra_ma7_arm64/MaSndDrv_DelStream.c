/* MaSndDrv_DelStream @ 00192404 132B */


/* YAMAHA::MaSndDrv_DelStream(_MACNV_SEQ_INFO*, unsigned int) */

undefined8 YAMAHA::MaSndDrv_DelStream(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)param_1;
  uVar4 = (ulong)(uVar1 >> 8) & 0xff;
  if (((uint)uVar4 & 0xfffffffb) == 2) {
    lVar5 = *(long *)(DAT_0059a428 +
                      (ulong)(byte)(&DAT_0048aa70)[uVar4 * 4 + (ulong)(byte)uVar1] * 0x430 + 0x28);
    if ((lVar5 != 0) && (bVar2 = *(byte *)(lVar5 + 0x18), bVar2 < 4)) {
      uVar3 = MaSrm_Close((uint)bVar2);
      return uVar3;
    }
    uVar3 = 0xffffffff;
  }
  else {
    MaSrm_DelStream(uVar1 & 0xff,param_2);
    uVar3 = 0;
  }
  return uVar3;
}

