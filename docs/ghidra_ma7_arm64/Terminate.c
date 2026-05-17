/* Terminate @ 0013118c 40B */


/* CPreMms::Terminate() */

undefined8 __thiscall CPreMms::Terminate(CPreMms *this)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x20) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x20))();
  }
  return uVar1;
}

