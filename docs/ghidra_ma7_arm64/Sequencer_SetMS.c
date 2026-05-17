/* Sequencer_SetMS @ 00139584 80B */


/* ARM::Sequencer_SetMS(unsigned char, unsigned int) */

void ARM::Sequencer_SetMS(uchar param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1;
  if (((param_1 < 2) && ((&DAT_00582aac)[uVar2 * 0x116] != param_2)) &&
     (cVar1 = (&DAT_00582aa0)[uVar2 * 0x458], (&DAT_00582aac)[uVar2 * 0x116] = param_2,
     cVar1 == '\x01')) {
    (&DAT_00582ab8)[uVar2 * 0x8b] = (ulong)(param_2 * 0x43d);
    return;
  }
  return;
}

