/* Unload @ 00033d78 18B */


/* CPreMms::Unload(int) */

undefined4 __thiscall CPreMms::Unload(CPreMms *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x20) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x20))(param_1);
    return uVar1;
  }
  return 0xffffff9b;
}

