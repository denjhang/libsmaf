/* WriteReg @ 0012c020 44B */


/* CM7_EmuSmw7App::WriteReg(unsigned int, unsigned char) */

void __thiscall CM7_EmuSmw7App::WriteReg(CM7_EmuSmw7App *this,uint param_1,uchar param_2)

{
  if (*(code **)(this + 0x4a0) != (code *)0x0) {
    (**(code **)(this + 0x4a0))(param_1,param_2);
  }
  return;
}

