/* Timer_Control @ 00038fb4 132B */


/* ARM::Timer_Control(unsigned char, unsigned char, long long) */

void __thiscall ARM::Timer_Control(ARM *this,uchar param_1,uchar param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int in_r3;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (this < (ARM *)0x2) {
    iVar6 = DAT_00039038 + 0x38fce;
    iVar2 = (int)this * 0x30;
    iVar5 = iVar6 + iVar2;
    if ((param_1 & 1) == 0) {
      *(byte *)(iVar6 + iVar2) = param_1 & 1;
    }
    else {
      iVar3 = (uint)param_1 << 0x1d;
      *(byte *)(iVar5 + 2) = (byte)((uint)iVar3 >> 0x1f);
      *(byte *)(iVar5 + 1) = (byte)(((uint)param_1 << 0x1e) >> 0x1f);
      if (iVar3 < 0) {
        uVar4 = *(int *)(iVar5 + 4) * 0x43d;
      }
      else {
        uVar4 = *(int *)(iVar5 + 8) * 0x90f5;
      }
      *(uint *)(iVar5 + 0x28) = uVar4;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      lVar1 = (ulonglong)uVar4 * (ulonglong)*(uint *)(iVar5 + 0xc);
      *(longlong *)(iVar5 + 0x20) = lVar1;
      if (*(char *)(iVar6 + iVar2) == '\0') {
        *(undefined1 *)(iVar6 + iVar2) = 1;
        uVar4 = (uint)param_2 * 1000000;
        *(uint *)(iVar5 + 0x18) = (uint)lVar1 + uVar4;
        *(uint *)(iVar5 + 0x1c) =
             (int)((ulonglong)lVar1 >> 0x20) + in_r3 * 1000000 + (uint)CARRY4((uint)lVar1,uVar4);
        *(uint *)(iVar5 + 0x10) = uVar4;
        *(int *)(iVar5 + 0x14) = in_r3 * 1000000;
      }
    }
  }
  return;
}

