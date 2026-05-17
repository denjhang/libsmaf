/* OpenArgInit @ 00131470 48B */


/* CPreMms::OpenArgInit(SMMS_OPENARG*) */

undefined8 __thiscall CPreMms::OpenArgInit(CPreMms *this,SMMS_OPENARG *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(this + 0x88) == (code *)0x0) {
    uVar1 = 0xffffff9b;
  }
  else {
    (**(code **)(this + 0x88))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

