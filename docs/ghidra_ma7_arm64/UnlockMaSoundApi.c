/* UnlockMaSoundApi @ 001314e8 44B */


/* CPreMms::UnlockMaSoundApi() */

undefined8 __thiscall CPreMms::UnlockMaSoundApi(CPreMms *this)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x98) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    (**(code **)(this + 0x98))();
    uVar1 = 0;
  }
  return uVar1;
}

