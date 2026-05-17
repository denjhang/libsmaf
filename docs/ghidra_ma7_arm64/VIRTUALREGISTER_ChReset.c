/* VIRTUALREGISTER_ChReset @ 0013b4b0 104B */


/* ARM::VIRTUALREGISTER_ChReset(unsigned char) */

void ARM::VIRTUALREGISTER_ChReset(uchar param_1)

{
  long lVar1;
  
  if (param_1 < 0x40) {
    lVar1 = (ulong)param_1 * 0xc;
    (&DAT_00597910)[lVar1] = 0x60;
    (&DAT_00597911)[lVar1] = 0x40;
    (&DAT_00597912)[lVar1] = 0;
    (&DAT_00597913)[lVar1] = 0;
    (&DAT_00597914)[lVar1] = 8;
    (&DAT_00597915)[lVar1] = 0;
    (&DAT_00597916)[lVar1] = 0;
    (&DAT_00597917)[lVar1] = 0;
    (&DAT_00597918)[lVar1] = 0;
    (&DAT_00597919)[lVar1] = 0;
    (&DAT_0059791a)[lVar1] = 0;
    (&DAT_0059791b)[lVar1] = 0x7c;
  }
  return;
}

