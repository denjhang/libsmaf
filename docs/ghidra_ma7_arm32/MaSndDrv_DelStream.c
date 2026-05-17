/* MaSndDrv_DelStream @ 0007bd44 78B */


/* YAMAHA::MaSndDrv_DelStream(_MACNV_SEQ_INFO*, unsigned int) */

undefined4 YAMAHA::MaSndDrv_DelStream(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = (*(uint *)param_1 & 0xffff) >> 8;
  uVar1 = *(uint *)param_1 & 0xff;
  if ((uVar4 & 0xfffffffb) != 2) {
    MaSrm_DelStream(uVar1,param_2);
    return 0;
  }
  iVar2 = *(int *)((uint)*(byte *)(DAT_0007bd94 + 0x7bd66 + uVar1 + uVar4 * 4) * 0x228 +
                   *(int *)(DAT_0007bd98 + 0x7bd6c) + 0x24);
  if ((iVar2 != 0) && (uVar1 = (uint)*(byte *)(iVar2 + 0x18), uVar1 < 4)) {
    uVar3 = MaSrm_Close(uVar1);
    return uVar3;
  }
  return 0xffffffff;
}

