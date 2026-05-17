/* EmuUnlockMapi @ 0003057c 6B */


/* CM7_EmuSmw7App::EmuUnlockMapi() */

void __thiscall CM7_EmuSmw7App::EmuUnlockMapi(CM7_EmuSmw7App *this)

{
  LeaveCriticalSection((critical_section *)(this + 0x1c));
  return;
}

