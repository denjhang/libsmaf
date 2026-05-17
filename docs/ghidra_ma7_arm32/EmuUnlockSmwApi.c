/* EmuUnlockSmwApi @ 000305ac 6B */


/* CM7_EmuSmw7App::EmuUnlockSmwApi() */

void __thiscall CM7_EmuSmw7App::EmuUnlockSmwApi(CM7_EmuSmw7App *this)

{
  LeaveCriticalSection((critical_section *)(this + 0xc));
  return;
}

