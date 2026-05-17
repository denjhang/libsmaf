/* HVCONTROL_Initialize @ 000424d8 96B */


/* ARM::HVCONTROL_Initialize(unsigned int, ARM::CCh*) */

undefined4 ARM::HVCONTROL_Initialize(uint param_1,CCh *param_2)

{
  CCsmSynth *this;
  undefined4 *puVar1;
  
  if (param_2 != (CCh *)0x0) {
    this = operator_new(0x1990);
    CCsmSynth::CCsmSynth(this,param_1,param_2);
    **(undefined4 **)(DAT_00042538 + 0x424f8) = this;
    if (this != (CCsmSynth *)0x0) {
      puVar1 = *(undefined4 **)(DAT_0004253c + 0x42506);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined2 *)(puVar1 + 8) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}

