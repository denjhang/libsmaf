/* PreMms_Terminate @ 00033d34 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PreMms_Terminate() */

void PreMms_Terminate(void)

{
  CPreMms::Terminate(*(CPreMms **)(DAT_00033d40 + 0x33d3a));
  return;
}

