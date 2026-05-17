/* EmuUnlockSmwApi @ 0012c0f8 8B */


/* CM7_EmuSmw7App::EmuUnlockSmwApi() */

void __thiscall CM7_EmuSmw7App::EmuUnlockSmwApi(CM7_EmuSmw7App *this)

{
  LeaveCriticalSection((critical_section *)(this + 0x10));
  return;
}

