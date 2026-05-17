/* CBInfo_Terminate @ 0003347c 112B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CBInfo_Terminate() */

void CBInfo_Terminate(void)

{
  int iVar1;
  critical_section *pcVar2;
  
  iVar1 = DAT_000334ec;
  pcVar2 = (critical_section *)(DAT_000334ec + 0x33484);
  EnterCriticalSection(pcVar2);
  *(undefined4 *)(iVar1 + 0x33600) = 0;
  *(undefined4 *)(iVar1 + 0x3360c) = 0;
  *(undefined4 *)(iVar1 + 0x33618) = 0;
  *(undefined4 *)(iVar1 + 0x33624) = 0;
  *(undefined4 *)(iVar1 + 0x33630) = 0;
  *(undefined4 *)(iVar1 + 0x3363c) = 0;
  *(undefined4 *)(iVar1 + 0x33648) = 0;
  *(undefined4 *)(iVar1 + 0x33654) = 0;
  *(undefined4 *)(iVar1 + 0x33660) = 0;
  *(undefined4 *)(iVar1 + 0x3366c) = 0;
  *(undefined4 *)(iVar1 + 0x33678) = 0;
  *(undefined4 *)(iVar1 + 0x33684) = 0;
  *(undefined4 *)((int)&DAT_00033690 + iVar1) = 0;
  *(undefined4 *)(CBInfo_SetCallback + iVar1) = 0;
  *(undefined4 *)(iVar1 + 0x336a8) = 0;
  *(undefined4 *)(iVar1 + 0x336b4) = 0;
  *(undefined4 *)(iVar1 + 0x336c0) = 0;
  *(undefined4 *)(iVar1 + 0x336cc) = 0;
  *(undefined4 *)(iVar1 + 0x336d8) = 0;
  *(undefined4 *)(iVar1 + 0x336e4) = 0;
  *(undefined4 *)(iVar1 + 0x3348c) = 0;
  LeaveCriticalSection(pcVar2);
  DeleteCriticalSection(pcVar2);
  return;
}

