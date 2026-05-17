/* EmuLockSmwIrq @ 0012c10c 8B */


/* CM7_EmuSmw7App::EmuLockSmwIrq() */

void __thiscall CM7_EmuSmw7App::EmuLockSmwIrq(CM7_EmuSmw7App *this)

{
  EnterCriticalSection((critical_section *)(this + 0x40));
  return;
}

