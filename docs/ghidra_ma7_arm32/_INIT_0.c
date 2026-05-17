/* _INIT_0 @ 0002e9c0 34B */


void _INIT_0(void)

{
  CSmwCtrl *this;
  
  this = *(CSmwCtrl **)(DAT_0002e9e4 + 0x2e9c8);
  CSmwCtrl::CSmwCtrl(this);
                    /* WARNING: Could not recover jumptable at 0x001204a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_001204a8 + 0x1204ac))
            (this,*(undefined4 *)(DAT_0002e9e8 + 0x2e9d8),DAT_0002e9ec + 0x2e9dc);
  return;
}

