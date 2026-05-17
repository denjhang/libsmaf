/* ExitInstance @ 000310b4 84B */


/* CM7_EmuSmw7App::ExitInstance() */

void __thiscall CM7_EmuSmw7App::ExitInstance(CM7_EmuSmw7App *this)

{
  Term(this);
  EmuTerm(this);
  CloseHandle(*(my_event_t **)(this + 0x264));
  CloseHandle(*(my_event_t **)(this + 0x260));
  CloseHandle(*(my_event_t **)(this + 0x244));
  DeleteCriticalSection((critical_section *)(this + 0xc));
  DeleteCriticalSection((critical_section *)(this + 0x14));
  DeleteCriticalSection((critical_section *)(this + 0x1c));
  timeEndPeriod(*(uint *)(this + 0x240));
  *(undefined4 *)(this + 0x230) = 2;
  CWinApp::ExitInstance();
  return;
}

