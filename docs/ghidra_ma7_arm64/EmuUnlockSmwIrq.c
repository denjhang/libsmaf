/* EmuUnlockSmwIrq @ 0012c120 8B */


/* CM7_EmuSmw7App::EmuUnlockSmwIrq() */

void __thiscall CM7_EmuSmw7App::EmuUnlockSmwIrq(CM7_EmuSmw7App *this)

{
  LeaveCriticalSection((critical_section *)(this + 0x40));
  return;
}

