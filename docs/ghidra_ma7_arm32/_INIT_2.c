/* _INIT_2 @ 0002ea20 34B */


void _INIT_2(void)

{
  CPreMms *this;
  
  this = *(CPreMms **)(DAT_0002ea44 + 0x2ea28);
  CPreMms::CPreMms(this);
                    /* WARNING: Could not recover jumptable at 0x001204a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_001204a8 + 0x1204ac))
            (this,*(undefined4 *)(DAT_0002ea48 + 0x2ea38),DAT_0002ea4c + 0x2ea3c);
  return;
}

