/* Close @ 00033dc8 18B */


/* CPreMms::Close(int) */

undefined4 __thiscall CPreMms::Close(CPreMms *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x28) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x28))(param_1);
    return uVar1;
  }
  return 0xffffff9b;
}

