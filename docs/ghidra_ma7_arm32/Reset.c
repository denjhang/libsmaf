/* Reset @ 0004a530 452B */


/* ARM::CSrc::Reset() */

void __thiscall ARM::CSrc::Reset(CSrc *this)

{
  undefined4 in_r3;
  
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x1fb2c) = 0;
  *(undefined4 *)(this + 0x1fb30) = 0;
  *(undefined4 *)(this + 0x1fb34) = 0;
  *(undefined4 *)(this + 0x1fb38) = 0;
  *(undefined4 *)(this + 0x1fb3c) = 0;
  *(undefined4 *)(this + 0x1fb40) = 0;
  *(undefined4 *)(this + 0x1fb44) = 0;
  *(undefined4 *)(this + 0x1fb48) = 0;
  *(undefined4 *)(this + 0x1fb4c) = 0;
  *(undefined4 *)(this + 0x1fb50) = 0;
  *(undefined4 *)(this + 0x1fb54) = 0;
  *(undefined4 *)(this + 0x1fb58) = 0;
  *(undefined4 *)(this + 0x1fb5c) = 0;
  *(undefined4 *)(this + 0x33360) = 0;
  *(undefined4 *)(this + 0x33364) = 0;
  *(undefined4 *)(this + 0x33368) = 0;
  *(undefined4 *)(this + 0x3336c) = 0;
  *(undefined4 *)(this + 0x33370) = 0;
  *(undefined4 *)(this + 0x33374) = 0;
  *(undefined4 *)(this + 0x33378) = 0;
  *(undefined4 *)(this + 0x3337c) = 0;
  *(undefined4 *)(this + 0x33380) = 0;
  *(undefined4 *)(this + 0x33384) = 0;
  *(undefined4 *)(this + 0x33388) = 0;
  *(undefined4 *)(this + 0x3338c) = 0;
  *(undefined4 *)(this + 0x33390) = 0;
  *(undefined4 *)(this + 0x33394) = 0;
  memset(this + 0x2c,0,0x2700);
  memset(this + 0x272c,0,0x2700);
  memset(this + 0x4e2c,0,0x2700);
  memset(this + 0x752c,0,0x2700);
  memset(this + 0x9c2c,0,0x2700);
  memset(this + 0xc32c,0,0x2700);
  memset(this + 0xea2c,0,0x2700);
  memset(this + 0x1112c,0,0x2700);
  memset(this + 0x1382c,0,0x2700);
  memset(this + 0x15f2c,0,0x2700);
  memset(this + 0x1862c,0,0x2700);
  memset(this + 0x1ad2c,0,0x2700);
  memset(this + 0x1d42c,0,0x2700);
  memset(this + 0x1fb60,0,0x2700);
  memset(this + 0x22260,0,0x2700);
  memset(this + 0x24960,0,0x2700);
  memset(this + 0x27060,0,0x2700);
  memset(this + 0x29760,0,0x2700);
  memset(this + 0x2be60,0,0x2700);
  memset(this + 0x2e560,0,0x2700);
                    /* WARNING: Could not recover jumptable at 0x00120534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00120538 + 0x12053c))(this + 0x30c60,0,0x2700,in_r3);
  return;
}

