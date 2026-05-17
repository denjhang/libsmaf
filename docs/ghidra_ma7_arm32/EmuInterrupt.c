/* EmuInterrupt @ 000304d8 24B */


/* CM7_EmuSmw7App::EmuInterrupt() */

void __thiscall CM7_EmuSmw7App::EmuInterrupt(CM7_EmuSmw7App *this)

{
  if (*(code **)(this + 0x208) != (code *)0x0) {
    (**(code **)(this + 0x208))();
  }
  SetEvent(*(my_event_t **)(this + 0x264));
  return;
}

