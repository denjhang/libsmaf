/* EmuLockSmwIrq @ 000305c4 6B */


/* CM7_EmuSmw7App::EmuLockSmwIrq() */

void __thiscall CM7_EmuSmw7App::EmuLockSmwIrq(CM7_EmuSmw7App *this)

{
  EnterCriticalSection((critical_section *)(this + 0x14));
  return;
}

