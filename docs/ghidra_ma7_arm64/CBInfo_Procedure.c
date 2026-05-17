/* CBInfo_Procedure @ 001306e8 136B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CBInfo_Procedure() */

void CBInfo_Procedure(void)

{
  int *piVar1;
  
  EnterCriticalSection((critical_section *)&DAT_00582540);
  piVar1 = &DAT_00582578;
  for (; 0 < DAT_00582570; DAT_00582570 = DAT_00582570 + -1) {
    if ((code *)(&DAT_005826f0)[(long)*piVar1 * 3] != (code *)0x0) {
      (*(code *)(&DAT_005826f0)[(long)*piVar1 * 3])(piVar1[1],piVar1[2]);
    }
    piVar1 = piVar1 + 3;
  }
  LeaveCriticalSection((critical_section *)&DAT_00582540);
  return;
}

