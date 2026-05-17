/* Timer_SetCounter @ 00038f00 88B */


/* ARM::Timer_SetCounter(unsigned char, unsigned int) */

void ARM::Timer_SetCounter(uchar param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 2) {
    if (param_2 == 0) {
      param_2 = 0x80;
    }
    iVar2 = DAT_00038f58 + 0x38f1a;
    iVar4 = (uint)param_1 * 0x30;
    iVar3 = iVar2 + iVar4;
    if ((*(uint *)(iVar3 + 0xc) != param_2) &&
       (*(uint *)(iVar3 + 0xc) = param_2, *(char *)(iVar2 + iVar4) == '\x01')) {
      if (*(char *)(iVar3 + 2) == '\0') {
        uVar1 = *(int *)(iVar3 + 8) * 0x90f5;
      }
      else {
        uVar1 = *(int *)(iVar3 + 4) * 0x43d;
      }
      *(uint *)(iVar3 + 0x28) = uVar1;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(ulonglong *)(iVar3 + 0x20) = (ulonglong)uVar1 * (ulonglong)param_2;
      return;
    }
  }
  return;
}

