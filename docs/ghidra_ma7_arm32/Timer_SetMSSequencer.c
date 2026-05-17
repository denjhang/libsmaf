/* Timer_SetMSSequencer @ 00038e9c 96B */


/* ARM::Timer_SetMSSequencer(unsigned char, unsigned int) */

void ARM::Timer_SetMSSequencer(uchar param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 2) {
    iVar4 = (uint)param_1 * 0x30;
    iVar2 = DAT_00038efc + 0x38eb6;
    iVar3 = iVar2 + iVar4;
    if ((*(uint *)(iVar3 + 4) != param_2) &&
       (*(uint *)(iVar3 + 4) = param_2, (*(uint *)(iVar2 + iVar4) & 0xff00ff) == 0x10001)) {
      if (*(char *)(iVar3 + 2) == '\0') {
        uVar1 = *(int *)(iVar3 + 8) * 0x90f5;
      }
      else {
        uVar1 = param_2 * 0x43d;
      }
      *(uint *)(iVar3 + 0x28) = uVar1;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(ulonglong *)(iVar3 + 0x20) = (ulonglong)uVar1 * (ulonglong)*(uint *)(iVar3 + 0xc);
      return;
    }
  }
  return;
}

