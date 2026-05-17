/* masmw_unload @ 0007dc10 78B */


/* YAMAHA::masmw_unload(unsigned int, void*) */

undefined8 YAMAHA::masmw_unload(uint param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = (param_1 & 0xffff) >> 8;
  uVar2 = param_1 & 0xff;
  bVar5 = 2 < uVar2;
  bVar4 = uVar2 == 3;
  if (uVar2 < 4) {
    bVar5 = 8 < uVar1;
    bVar4 = uVar1 == 9;
  }
  if (!bVar5 || bVar4) {
    param_2 = (void *)(DAT_0007dc60 + 0x7dc2e);
    uVar1 = (uint)*(byte *)((int)param_2 + uVar2 + uVar1 * 4);
    if (uVar1 != 0xff) {
      iVar3 = uVar1 * 0x98;
      param_2 = *(void **)(*(int *)(DAT_0007dc64 + 0x7dc40) + iVar3);
      if (param_2 == (void *)0x1) {
        *(undefined4 *)(*(int *)(DAT_0007dc64 + 0x7dc40) + iVar3) = 0;
        return 0x100000000;
      }
    }
  }
  return CONCAT44(param_2,0xfffffffe);
}

