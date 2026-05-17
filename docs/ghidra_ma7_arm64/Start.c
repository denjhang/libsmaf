/* Start @ 00131364 44B */


/* CPreMms::Start(int) */

undefined8 __thiscall CPreMms::Start(CPreMms *this,int param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x68) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    uVar1 = (**(code **)(this + 0x68))(param_1);
  }
  return uVar1;
}

