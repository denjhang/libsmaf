/* ReadReg @ 0012c060 56B */


/* CM7_EmuSmw7App::ReadReg(unsigned int) */

undefined1 __thiscall CM7_EmuSmw7App::ReadReg(CM7_EmuSmw7App *this,uint param_1)

{
  undefined1 uVar1;
  
  if (*(code **)(this + 0x4a8) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0x4a8))(param_1);
    return uVar1;
  }
  return 0;
}

