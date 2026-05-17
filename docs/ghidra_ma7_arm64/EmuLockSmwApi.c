/* EmuLockSmwApi @ 0012c0e4 8B */


/* CM7_EmuSmw7App::EmuLockSmwApi() */

void __thiscall CM7_EmuSmw7App::EmuLockSmwApi(CM7_EmuSmw7App *this)

{
  EnterCriticalSection((critical_section *)(this + 0x10));
  return;
}

