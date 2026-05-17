/* EmuLockSmwApi @ 00030594 6B */


/* CM7_EmuSmw7App::EmuLockSmwApi() */

void __thiscall CM7_EmuSmw7App::EmuLockSmwApi(CM7_EmuSmw7App *this)

{
  EnterCriticalSection((critical_section *)(this + 0xc));
  return;
}

