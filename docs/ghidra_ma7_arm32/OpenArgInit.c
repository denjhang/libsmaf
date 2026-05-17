/* OpenArgInit @ 00033ef8 20B */


/* CPreMms::OpenArgInit(SMMS_OPENARG*) */

undefined4 __thiscall CPreMms::OpenArgInit(CPreMms *this,SMMS_OPENARG *param_1)

{
  if (*(code **)(this + 0x44) != (code *)0x0) {
    (**(code **)(this + 0x44))(param_1);
    return 0;
  }
  return 0xffffff9b;
}

