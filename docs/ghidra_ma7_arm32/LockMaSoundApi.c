/* LockMaSoundApi @ 00033f20 18B */


/* CPreMms::LockMaSoundApi() */

undefined4 __thiscall CPreMms::LockMaSoundApi(CPreMms *this)

{
  if (*(code **)(this + 0x48) != (code *)0x0) {
    (**(code **)(this + 0x48))();
    return 0;
  }
  return 0xffffff9b;
}

