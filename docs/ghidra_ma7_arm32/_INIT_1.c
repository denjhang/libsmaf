/* _INIT_1 @ 0002e9f0 34B */


void _INIT_1(void)

{
  CM7_EmuSmw7App *this;
  
  this = *(CM7_EmuSmw7App **)(DAT_0002ea14 + 0x2e9f8);
  CM7_EmuSmw7App::CM7_EmuSmw7App(this);
                    /* WARNING: Could not recover jumptable at 0x001204a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_001204a8 + 0x1204ac))
            (this,*(undefined4 *)(DAT_0002ea18 + 0x2ea08),DAT_0002ea1c + 0x2ea0c);
  return;
}

