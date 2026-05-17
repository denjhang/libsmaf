/* ExitInstance @ 0012cc9c 112B */


/* CM7_EmuSmw7App::ExitInstance() */

undefined1 __thiscall CM7_EmuSmw7App::ExitInstance(CM7_EmuSmw7App *this)

{
  undefined1 uVar1;
  
  Term(this);
  EmuTerm(this);
  CloseHandle(*(my_event_t **)(this + 0x510));
  CloseHandle(*(my_event_t **)(this + 0x508));
  CloseHandle(*(my_event_t **)(this + 0x4d8));
  DeleteCriticalSection((critical_section *)(this + 0x10));
  DeleteCriticalSection((critical_section *)(this + 0x40));
  DeleteCriticalSection((critical_section *)(this + 0x70));
  timeEndPeriod(*(uint *)(this + 0x4d4));
  *(undefined4 *)(this + 0x4b8) = 2;
  uVar1 = CWinApp::ExitInstance();
  return uVar1;
}

