/* Hw_Terminate @ 00035904 122B */


void Hw_Terminate(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  critical_section *pcVar5;
  int *piVar6;
  
  iVar3 = DAT_00035988;
  iVar2 = DAT_00035984;
  iVar1 = DAT_00035980;
  if (*(char *)(DAT_00035980 + 0x3590e) != '\0') {
    return;
  }
  EnterCriticalSection((critical_section *)(DAT_00035984 + 0x3591c));
  *(undefined4 *)(iVar2 + 0x35958) = 0;
  *(undefined1 *)(iVar1 + 0x3590e) = 0xff;
  ARM::Sequencer_Terminate();
  ARM::Timer_Terminate();
  ARM::SIrqFifo_Terminate();
  piVar6 = *(int **)(iVar3 + 0x35932);
  ARM::CCh::Terminate();
  piVar4 = (int *)*piVar6;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
    *piVar6 = 0;
  }
  ARM::FMCONTROL_Terminate();
  ARM::WTCONTROL_Terminate();
  ARM::STMCONTROL_Terminate();
  ARM::HVCONTROL_Terminate();
  ARM::DTMFCONTROL_Terminate();
  ARM::DSPCONTROL_Terminate();
  ARM::DINCONTROL_Terminate();
  ARM::VIRTUALMEMORY_Terminate();
  ARM::VIRTUALREGISTER_Terminate();
  pcVar5 = (critical_section *)(DAT_0003598c + 0x35972);
  LeaveCriticalSection(pcVar5);
  DeleteCriticalSection(pcVar5);
  return;
}

