/* SmafMms_UnlockMaSoundApi @ 0009086c 4B */


/* YAMAHA::SmafMms_UnlockMaSoundApi() */

void YAMAHA::SmafMms_UnlockMaSoundApi(void)

{
  CPreMms::UnlockMaSoundApi(*(CPreMms **)(PreMms_UnlockMaSoundApi + DAT_00033f64 + 6));
  return;
}

