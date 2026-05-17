/* MaSrm_GetPos @ 0008b3fc 218B */


/* YAMAHA::MaSrm_GetPos(unsigned int) */

undefined4 YAMAHA::MaSrm_GetPos(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1 & 3;
  iVar4 = *(int *)(DAT_0008b528 + 0x8b40a) + uVar5 * 0x70;
  if (*(int *)(iVar4 + 0x44) == 0) {
    return 0xffffffff;
  }
  iVar1 = MaDevDrv_ReadStreamFifoStatus(uVar5);
  if (iVar1 == 0) {
    iVar2 = MaDevDrv_ReadReg(0xf);
    if (-1 < (iVar2 >> uVar5) << 0x1f) {
      iVar1 = 0x400;
      goto LAB_0008b430;
    }
  }
  else {
    iVar2 = iVar1 << 0x18;
    if (-1 < iVar2) {
      iVar1 = iVar1 << 3;
      goto LAB_0008b430;
    }
  }
  iVar1 = 0;
LAB_0008b430:
  uVar5 = (uint)*(byte *)(iVar4 + 0x3a);
  if ((int)(uVar5 << 0x19) < 0) {
    iVar1 = iVar1 << 1;
  }
  if (0x50 < uVar5) {
    return 0xffffffff;
  }
                    /* WARNING: Could not emulate address calculation at 0x0008b412 */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(&switchD_0008b43e::switchdataD_0008b442 +
                    (uint)(&switchD_0008b43e::switchdataD_0008b442)[uVar5] * 2))
                    (iVar2,uVar5 << 0x19,iVar1);
  return uVar3;
}

