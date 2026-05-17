/* EmuUnlockMapi @ 0012c0d0 8B */


/* CM7_EmuSmw7App::EmuUnlockMapi() */

void __thiscall CM7_EmuSmw7App::EmuUnlockMapi(CM7_EmuSmw7App *this)

{
  LeaveCriticalSection((critical_section *)(this + 0x70));
  return;
}

