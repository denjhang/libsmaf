/* PreMms_winSystemStop @ 00033fd4 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PreMms_winSystemStop() */

void PreMms_winSystemStop(void)

{
  CPreMms::SystemStop(*(CPreMms **)(DAT_00033fe0 + 0x33fda));
  return;
}

