/* CBInfo_Terminate @ 00130660 136B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CBInfo_Terminate() */

void CBInfo_Terminate(void)

{
  EnterCriticalSection((critical_section *)&DAT_00582540);
  DAT_005826f0 = 0;
  DAT_00582708 = 0;
  DAT_00582720 = 0;
  DAT_00582738 = 0;
  DAT_00582750 = 0;
  DAT_00582768 = 0;
  DAT_00582780 = 0;
  DAT_00582798 = 0;
  DAT_005827b0 = 0;
  DAT_005827c8 = 0;
  DAT_005827e0 = 0;
  DAT_005827f8 = 0;
  DAT_00582810 = 0;
  DAT_00582828 = 0;
  DAT_00582840 = 0;
  DAT_00582858 = 0;
  DAT_00582870 = 0;
  DAT_00582888 = 0;
  DAT_005828a0 = 0;
  DAT_005828b8 = 0;
  DAT_00582570 = 0;
  LeaveCriticalSection((critical_section *)&DAT_00582540);
  DeleteCriticalSection((critical_section *)&DAT_00582540);
  return;
}

