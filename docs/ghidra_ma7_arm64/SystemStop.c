/* SystemStop @ 00131578 68B */


/* CPreMms::SystemStop() */

void __thiscall CPreMms::SystemStop(CPreMms *this)

{
  if (*(code **)(this + 0x10) != (code *)0x0) {
    (**(code **)(this + 0x10))();
  }
  if (*(void **)this != (void *)0x0) {
    FreeLibrary(*(void **)this);
    *(undefined8 *)this = 0;
    ClearAddress(this);
    return;
  }
  return;
}

