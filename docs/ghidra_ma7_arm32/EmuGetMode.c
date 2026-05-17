/* EmuGetMode @ 000307b0 18B */


/* CM7_EmuSmw7App::EmuGetMode() */

CM7_EmuSmw7App __thiscall CM7_EmuSmw7App::EmuGetMode(CM7_EmuSmw7App *this)

{
  CM7_EmuSmw7App CVar1;
  
  CVar1 = this[8];
  if ((CVar1 == (CM7_EmuSmw7App)0x0) && (*(int *)(this + 0x268) == 0)) {
    CVar1 = (CM7_EmuSmw7App)0x80;
  }
  return CVar1;
}

