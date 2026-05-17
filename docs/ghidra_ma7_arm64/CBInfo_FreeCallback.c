/* CBInfo_FreeCallback @ 00130b48 800B */


/* CBInfo_FreeCallback(unsigned int) */

void CBInfo_FreeCallback(uint param_1)

{
  long lVar1;
  
  EnterCriticalSection((critical_section *)&DAT_00582540);
  if ((DAT_005826e8 == param_1) && (DAT_005826f0 != 0)) {
    lVar1 = 0;
  }
  else if ((DAT_00582700 == param_1) && (DAT_00582708 != 0)) {
    lVar1 = 1;
  }
  else if ((DAT_00582718 == param_1) && (DAT_00582720 != 0)) {
    lVar1 = 2;
  }
  else if ((DAT_00582730 == param_1) && (DAT_00582738 != 0)) {
    lVar1 = 3;
  }
  else if ((DAT_00582748 == param_1) && (DAT_00582750 != 0)) {
    lVar1 = 4;
  }
  else if ((DAT_00582760 == param_1) && (DAT_00582768 != 0)) {
    lVar1 = 5;
  }
  else if ((DAT_00582778 == param_1) && (DAT_00582780 != 0)) {
    lVar1 = 6;
  }
  else if ((DAT_00582790 == param_1) && (DAT_00582798 != 0)) {
    lVar1 = 7;
  }
  else if ((DAT_005827a8 == param_1) && (DAT_005827b0 != 0)) {
    lVar1 = 8;
  }
  else if ((DAT_005827c0 == param_1) && (DAT_005827c8 != 0)) {
    lVar1 = 9;
  }
  else if ((DAT_005827d8 == param_1) && (DAT_005827e0 != 0)) {
    lVar1 = 10;
  }
  else if ((DAT_005827f0 == param_1) && (DAT_005827f8 != 0)) {
    lVar1 = 0xb;
  }
  else if ((DAT_00582808 == param_1) && (DAT_00582810 != 0)) {
    lVar1 = 0xc;
  }
  else if ((DAT_00582820 == param_1) && (DAT_00582828 != 0)) {
    lVar1 = 0xd;
  }
  else if ((DAT_00582838 == param_1) && (DAT_00582840 != 0)) {
    lVar1 = 0xe;
  }
  else if ((DAT_00582850 == param_1) && (DAT_00582858 != 0)) {
    lVar1 = 0xf;
  }
  else if ((DAT_00582868 == param_1) && (DAT_00582870 != 0)) {
    lVar1 = 0x10;
  }
  else if ((DAT_00582880 == param_1) && (DAT_00582888 != 0)) {
    lVar1 = 0x11;
  }
  else if ((DAT_00582898 == param_1) && (DAT_005828a0 != 0)) {
    lVar1 = 0x12;
  }
  else {
    if ((DAT_005828b0 != param_1) || (DAT_005828b8 == 0)) {
      LeaveCriticalSection((critical_section *)&DAT_00582540);
      return;
    }
    lVar1 = 0x13;
  }
  (&DAT_005826f0)[lVar1 * 3] = 0;
  LeaveCriticalSection((critical_section *)&DAT_00582540);
  return;
}

