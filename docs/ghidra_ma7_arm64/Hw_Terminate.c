/* Hw_Terminate @ 0013523c 192B */


void Hw_Terminate(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (DAT_00568030 != '\0') {
    return;
  }
  EnterCriticalSection((critical_section *)&DAT_00582978);
  DAT_005829e8 = 0;
  DAT_00568030 = 0xff;
  ARM::Sequencer_Terminate();
  ARM::Timer_Terminate();
  ARM::SIrqFifo_Terminate();
  puVar1 = PTR_gpCh_00567b40;
  uVar2 = *(undefined8 *)PTR_gpCh_00567b40;
  ARM::CCh::Terminate();
  plVar3 = *(long **)puVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    *(undefined8 *)puVar1 = 0;
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
  LeaveCriticalSection((critical_section *)&DAT_00582978);
  DeleteCriticalSection((critical_section *)&DAT_00582978);
  return;
}

