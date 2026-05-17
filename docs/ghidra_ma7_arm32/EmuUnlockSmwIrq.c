/* EmuUnlockSmwIrq @ 000305dc 6B */


/* CM7_EmuSmw7App::EmuUnlockSmwIrq() */

void __thiscall CM7_EmuSmw7App::EmuUnlockSmwIrq(CM7_EmuSmw7App *this)

{
  LeaveCriticalSection((critical_section *)(this + 0x14));
  return;
}

