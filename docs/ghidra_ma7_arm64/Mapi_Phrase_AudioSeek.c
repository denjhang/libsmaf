/* Mapi_Phrase_AudioSeek @ 00186a50 208B */


/* YAMAHA::Mapi_Phrase_AudioSeek(int, unsigned int, unsigned char) */

void YAMAHA::Mapi_Phrase_AudioSeek(int param_1,uint param_2,uchar param_3)

{
  undefined8 uVar1;
  uint local_18 [2];
  undefined8 local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
LAB_00186b04:
    mapimachdep_UnlockApi();
    uVar1 = 0xfffffff8;
  }
  else {
    if (DAT_00577e14 != 2) {
      mapimachdep_UnlockApi();
      uVar1 = 0xffffffff;
      goto LAB_00186ad4;
    }
    if (param_1 == 1) {
      if (DAT_00578350 != 3) goto LAB_00186b04;
      if (param_2 == 0) {
        local_10 = 0;
        local_18[0] = param_2;
        uVar1 = MaSmw_Seek(0x200,0,(_MASMW_SEEK_PARAM *)local_18);
        mapimachdep_UnlockApi();
        goto LAB_00186ad4;
      }
    }
    mapimachdep_UnlockApi();
    uVar1 = 0xfffffffe;
  }
LAB_00186ad4:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

