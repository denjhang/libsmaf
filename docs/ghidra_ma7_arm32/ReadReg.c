/* ReadReg @ 00030524 18B */


/* CM7_EmuSmw7App::ReadReg(unsigned int) */

undefined4 __thiscall CM7_EmuSmw7App::ReadReg(CM7_EmuSmw7App *this,uint param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(this + 0x228) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x228))(param_1 & 0xff);
    return uVar1;
  }
  return 0;
}

