/* EmuLockMapi @ 0012c0bc 8B */


/* CM7_EmuSmw7App::EmuLockMapi() */

void __thiscall CM7_EmuSmw7App::EmuLockMapi(CM7_EmuSmw7App *this)

{
  EnterCriticalSection((critical_section *)(this + 0x70));
  return;
}

