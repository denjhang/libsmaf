/* CBInfo_GetHookFunc @ 00130770 416B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CBInfo_GetHookFunc() */

undefined8 CBInfo_GetHookFunc(void)

{
  int iVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((critical_section *)&DAT_00582540);
  iVar1 = 0;
  if (DAT_005826f0 != 0) {
    if (DAT_00582708 == 0) {
      iVar1 = 1;
    }
    else if (DAT_00582720 == 0) {
      iVar1 = 2;
    }
    else if (DAT_00582738 == 0) {
      iVar1 = 3;
    }
    else if (DAT_00582750 == 0) {
      iVar1 = 4;
    }
    else if (DAT_00582768 == 0) {
      iVar1 = 5;
    }
    else if (DAT_00582780 == 0) {
      iVar1 = 6;
    }
    else if (DAT_00582798 == 0) {
      iVar1 = 7;
    }
    else if (DAT_005827b0 == 0) {
      iVar1 = 8;
    }
    else if (DAT_005827c8 == 0) {
      iVar1 = 9;
    }
    else if (DAT_005827e0 == 0) {
      iVar1 = 10;
    }
    else if (DAT_005827f8 == 0) {
      iVar1 = 0xb;
    }
    else if (DAT_00582810 == 0) {
      iVar1 = 0xc;
    }
    else if (DAT_00582828 == 0) {
      iVar1 = 0xd;
    }
    else if (DAT_00582840 == 0) {
      iVar1 = 0xe;
    }
    else if (DAT_00582858 == 0) {
      iVar1 = 0xf;
    }
    else if (DAT_00582870 == 0) {
      iVar1 = 0x10;
    }
    else if (DAT_00582888 == 0) {
      iVar1 = 0x11;
    }
    else if (DAT_005828a0 == 0) {
      iVar1 = 0x12;
    }
    else {
      iVar1 = 0x13;
      if (DAT_005828b8 != 0) {
        LeaveCriticalSection((critical_section *)&DAT_00582540);
        return 0;
      }
    }
  }
  uVar2 = (&DAT_005826f8)[(long)iVar1 * 3];
  LeaveCriticalSection((critical_section *)&DAT_00582540);
  return uVar2;
}

