/* UnlockMaSoundApi @ 00033f44 18B */


/* CPreMms::UnlockMaSoundApi() */

undefined4 __thiscall CPreMms::UnlockMaSoundApi(CPreMms *this)

{
  if (*(code **)(this + 0x4c) != (code *)0x0) {
    (**(code **)(this + 0x4c))();
    return 0;
  }
  return 0xffffff9b;
}

