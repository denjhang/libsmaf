/* SystemStop @ 00033fa4 34B */


/* CPreMms::SystemStop() */

void __thiscall CPreMms::SystemStop(CPreMms *this)

{
  if (*(code **)(this + 8) != (code *)0x0) {
    (**(code **)(this + 8))();
  }
  if (*(void **)this != (void *)0x0) {
    FreeLibrary(*(void **)this);
    *(undefined4 *)this = 0;
    ClearAddress(this);
    return;
  }
  return;
}

