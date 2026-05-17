/* VIRTUALREGISTER_GetExParamInfoPointer @ 0013b0c8 44B */


/* ARM::VIRTUALREGISTER_GetExParamInfoPointer(unsigned char) */

undefined * ARM::VIRTUALREGISTER_GetExParamInfoPointer(uchar param_1)

{
  if (param_1 < 0x10) {
    return &DAT_00597c10 + (ulong)param_1 * 7;
  }
  return (undefined *)0x0;
}

