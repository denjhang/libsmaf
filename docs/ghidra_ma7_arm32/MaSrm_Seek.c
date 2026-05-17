/* MaSrm_Seek @ 0008a80c 1886B */


/* YAMAHA::MaSrm_Seek(unsigned int, unsigned int) */

void YAMAHA::MaSrm_Seek(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0008b094 + 0x8a81c) + (param_1 & 3) * 0x70;
  if (*(int *)(iVar3 + 0x44) != 0) {
    if (*(int *)(iVar3 + 4) == 0) {
      if (*(char *)(iVar3 + 0x6c) == '\0') {
        uVar1 = *(uint *)(iVar3 + 0x10);
      }
      else {
        uVar1 = *(uint *)(iVar3 + 0x68);
      }
      if (uVar1 < param_2) goto LAB_0008a9ae;
      if (*(byte *)(iVar3 + 0x3a) < 0x44) {
                    /* WARNING: Could not emulate address calculation at 0x0008a830 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&switchD_0008a91c::switchdataD_0008a920 +
                  (&switchD_0008a91c::switchdataD_0008a920)[*(byte *)(iVar3 + 0x3a)]))();
        return;
      }
    }
    else {
      if (*(uint *)(iVar3 + 0x1c) < param_2) {
LAB_0008a9ae:
        uVar2 = 0xfffffffe;
        goto LAB_0008ae24;
      }
      if (*(byte *)(iVar3 + 0x3a) < 0x51) {
                    /* WARNING: Could not emulate address calculation at 0x0008a830 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&switchD_0008a85e::switchdataD_0008a862 +
                  (&switchD_0008a85e::switchdataD_0008a862)[*(byte *)(iVar3 + 0x3a)]))();
        return;
      }
    }
  }
  uVar2 = 0xffffffff;
LAB_0008ae24:
  if (**(int **)(DAT_0008b098 + 0x8a82a) != **(int **)(DAT_0008b098 + 0x8a82a)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

