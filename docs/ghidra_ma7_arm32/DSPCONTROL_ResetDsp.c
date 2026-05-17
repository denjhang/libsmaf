/* DSPCONTROL_ResetDsp @ 000417dc 14B */


/* ARM::DSPCONTROL_ResetDsp(unsigned int) */

void ARM::DSPCONTROL_ResetDsp(uint param_1)

{
  CDsp::ResetDsp((CDsp *)**(undefined4 **)(DAT_000417ec + 0x417e4),param_1);
  return;
}

