/* VIRTUALREGISTER_ExChReset @ 0013b518 80B */


/* ARM::VIRTUALREGISTER_ExChReset(unsigned char) */

void ARM::VIRTUALREGISTER_ExChReset(uchar param_1)

{
  long lVar1;
  
  if (param_1 < 0x10) {
    lVar1 = (ulong)param_1 * 7;
    (&DAT_00597c10)[lVar1] = 0x60;
    (&DAT_00597c11)[lVar1] = 0x40;
    (&DAT_00597c12)[lVar1] = 8;
    (&DAT_00597c13)[lVar1] = 0;
    (&DAT_00597c14)[lVar1] = 8;
    (&DAT_00597c15)[lVar1] = 0;
    (&DAT_00597c16)[lVar1] = 0;
  }
  return;
}

