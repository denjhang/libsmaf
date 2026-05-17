/* CBInfo_GetHookFunc @ 00033548 318B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CBInfo_GetHookFunc() */

undefined4 CBInfo_GetHookFunc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00033688;
  EnterCriticalSection((critical_section *)(DAT_00033688 + 0x33550));
  if (*(int *)(iVar2 + 0x336cc) == 0) {
    iVar2 = iVar2 + 0x336c8;
  }
  else if (*(int *)(iVar2 + 0x336d8) == 0) {
    iVar2 = iVar2 + 0x336d4;
  }
  else if (*(int *)(iVar2 + 0x336e4) == 0) {
    iVar2 = iVar2 + 0x336e0;
  }
  else if (*(int *)(iVar2 + 0x336f0) == 0) {
    iVar2 = iVar2 + 0x336ec;
  }
  else if (*(int *)(iVar2 + 0x336fc) == 0) {
    iVar2 = iVar2 + 0x336f8;
  }
  else if (*(int *)(iVar2 + 0x33708) == 0) {
    iVar2 = iVar2 + 0x33704;
  }
  else if (*(int *)(iVar2 + 0x33714) == 0) {
    iVar2 = iVar2 + 0x33710;
  }
  else if (*(int *)(iVar2 + 0x33720) == 0) {
    iVar2 = iVar2 + 0x3371c;
  }
  else if (*(int *)(iVar2 + 0x3372c) == 0) {
    iVar2 = iVar2 + 0x33728;
  }
  else if (*(int *)(iVar2 + 0x33738) == 0) {
    iVar2 = DAT_00033698 + 0x3383c;
  }
  else if (*(int *)(DAT_0003368c + 0x337a0) == 0) {
    iVar2 = DAT_0003368c + 0x3379c;
  }
  else if (*(int *)(DAT_0003368c + 0x337ac) == 0) {
    iVar2 = DAT_0003368c + 0x337a8;
  }
  else if (*(int *)(DAT_0003368c + 0x337b8) == 0) {
    iVar2 = DAT_0003368c + 0x337b4;
  }
  else if (*(int *)(DAT_0003368c + 0x337c4) == 0) {
    iVar2 = DAT_0003368c + 0x337c0;
  }
  else if (*(int *)(DAT_0003368c + 0x337d0) == 0) {
    iVar2 = DAT_0003368c + 0x337cc;
  }
  else if (*(int *)(DAT_0003368c + 0x337dc) == 0) {
    iVar2 = DAT_0003368c + 0x337d8;
  }
  else if (*(int *)(DAT_0003368c + 0x337e8) == 0) {
    iVar2 = DAT_0003368c + 0x337e4;
  }
  else if (*(int *)(DAT_0003368c + 0x337f4) == 0) {
    iVar2 = DAT_0003368c + 0x337f0;
  }
  else if (*(int *)((int)&DAT_00033800 + DAT_0003368c) == 0) {
    iVar2 = (int)&DAT_000337fc + DAT_0003368c;
  }
  else {
    iVar2 = DAT_00033690 + 0x33856;
    if (*(int *)((int)&DAT_0003380c + DAT_0003368c) != 0) {
      uVar1 = 0;
      goto LAB_00033600;
    }
  }
  uVar1 = *(undefined4 *)(iVar2 + 8);
LAB_00033600:
  LeaveCriticalSection((critical_section *)(DAT_00033694 + 0x33606));
  return uVar1;
}

