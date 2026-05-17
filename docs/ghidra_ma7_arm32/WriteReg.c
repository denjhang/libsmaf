/* WriteReg @ 00030500 16B */


/* CM7_EmuSmw7App::WriteReg(unsigned int, unsigned char) */

void CM7_EmuSmw7App::WriteReg(uint param_1,uchar param_2)

{
  if (*(code **)(param_1 + 0x224) != (code *)0x0) {
    (**(code **)(param_1 + 0x224))(param_2);
  }
  return;
}

