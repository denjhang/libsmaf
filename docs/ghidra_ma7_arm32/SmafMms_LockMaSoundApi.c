/* SmafMms_LockMaSoundApi @ 00090868 4B */


/* YAMAHA::SmafMms_LockMaSoundApi() */

void YAMAHA::SmafMms_LockMaSoundApi(void)

{
  CPreMms::LockMaSoundApi(*(CPreMms **)(PreMms_LockMaSoundApi + DAT_00033f40 + 6));
  return;
}

