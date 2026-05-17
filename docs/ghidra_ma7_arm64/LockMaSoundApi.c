/* LockMaSoundApi @ 001314b0 44B */


/* CPreMms::LockMaSoundApi() */

undefined8 __thiscall CPreMms::LockMaSoundApi(CPreMms *this)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x90) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    (**(code **)(this + 0x90))();
    uVar1 = 0;
  }
  return uVar1;
}

