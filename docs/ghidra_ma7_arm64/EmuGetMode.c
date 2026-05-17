/* EmuGetMode @ 0012c3c0 32B */


/* CM7_EmuSmw7App::EmuGetMode() */

CM7_EmuSmw7App __thiscall CM7_EmuSmw7App::EmuGetMode(CM7_EmuSmw7App *this)

{
  CM7_EmuSmw7App CVar1;
  
  CVar1 = this[0xc];
  if ((CVar1 == (CM7_EmuSmw7App)0x0) && (*(int *)(this + 0x518) == 0)) {
    CVar1 = (CM7_EmuSmw7App)0x80;
  }
  return CVar1;
}

