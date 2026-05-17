/* Stop @ 001313a0 44B */


/* CPreMms::Stop(int) */

undefined8 __thiscall CPreMms::Stop(CPreMms *this,int param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x70) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x70))(param_1);
  }
  return uVar1;
}

