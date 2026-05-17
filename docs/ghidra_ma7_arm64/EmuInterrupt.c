/* EmuInterrupt @ 0012bfe8 44B */


/* CM7_EmuSmw7App::EmuInterrupt() */

void __thiscall CM7_EmuSmw7App::EmuInterrupt(CM7_EmuSmw7App *this)

{
  if (*(code **)(this + 0x468) != (code *)0x0) {
    (**(code **)(this + 0x468))();
  }
  SetEvent(*(my_event_t **)(this + 0x510));
  return;
}

