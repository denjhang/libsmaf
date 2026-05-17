/* Timer_SetMSTimer @ 00038e34 100B */


/* ARM::Timer_SetMSTimer(unsigned char, unsigned int) */

void ARM::Timer_SetMSTimer(uchar param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 2) {
    if (param_2 == 0) {
      param_2 = 0x80;
    }
    iVar1 = DAT_00038e98 + 0x38e50;
    iVar4 = (uint)param_1 * 0x30;
    iVar3 = iVar1 + iVar4;
    if ((*(uint *)(iVar3 + 8) != param_2) &&
       (*(uint *)(iVar3 + 8) = param_2, (*(uint *)(iVar1 + iVar4) & 0xff00ff) == 1)) {
      if (*(char *)(iVar3 + 2) == '\0') {
        uVar2 = param_2 * 0x90f5;
      }
      else {
        uVar2 = *(int *)(iVar3 + 4) * 0x43d;
      }
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(uint *)(iVar3 + 0x28) = uVar2;
      *(ulonglong *)(iVar3 + 0x20) = (ulonglong)uVar2 * (ulonglong)*(uint *)(iVar3 + 0xc);
      return;
    }
  }
  return;
}

