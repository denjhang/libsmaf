/* CBInfo_SetCallback @ 00130910 568B */


/* CBInfo_SetCallback(void (*)(unsigned int, unsigned int), unsigned int, void (*)(unsigned int,
   unsigned int)) */

void CBInfo_SetCallback(_func_void_uint_uint *param_1,uint param_2,_func_void_uint_uint *param_3)

{
  long lVar1;
  
  if ((param_1 != (_func_void_uint_uint *)0x0) && (param_3 != (_func_void_uint_uint *)0x0)) {
    EnterCriticalSection((critical_section *)&DAT_00582540);
    if (DAT_005826f8 == param_1) {
      lVar1 = 0;
    }
    else if (DAT_00582710 == param_1) {
      lVar1 = 1;
    }
    else if (DAT_00582728 == param_1) {
      lVar1 = 2;
    }
    else if (DAT_00582740 == param_1) {
      lVar1 = 3;
    }
    else if (DAT_00582758 == param_1) {
      lVar1 = 4;
    }
    else if (DAT_00582770 == param_1) {
      lVar1 = 5;
    }
    else if (DAT_00582788 == param_1) {
      lVar1 = 6;
    }
    else if (DAT_005827a0 == param_1) {
      lVar1 = 7;
    }
    else if (DAT_005827b8 == param_1) {
      lVar1 = 8;
    }
    else if (DAT_005827d0 == param_1) {
      lVar1 = 9;
    }
    else if (DAT_005827e8 == param_1) {
      lVar1 = 10;
    }
    else if (DAT_00582800 == param_1) {
      lVar1 = 0xb;
    }
    else if (DAT_00582818 == param_1) {
      lVar1 = 0xc;
    }
    else if (DAT_00582830 == param_1) {
      lVar1 = 0xd;
    }
    else if (DAT_00582848 == param_1) {
      lVar1 = 0xe;
    }
    else if (DAT_00582860 == param_1) {
      lVar1 = 0xf;
    }
    else if (DAT_00582878 == param_1) {
      lVar1 = 0x10;
    }
    else if (DAT_00582890 == param_1) {
      lVar1 = 0x11;
    }
    else if (DAT_005828a8 == param_1) {
      lVar1 = 0x12;
    }
    else {
      lVar1 = 0x13;
      if (DAT_005828c0 != param_1) {
        LeaveCriticalSection((critical_section *)&DAT_00582540);
        return;
      }
    }
    (&DAT_005826e8)[lVar1 * 6] = param_2;
    (&DAT_005826f0)[lVar1 * 3] = param_3;
    LeaveCriticalSection((critical_section *)&DAT_00582540);
    return;
  }
  return;
}

