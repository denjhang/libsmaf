/* MaCmd_Init @ 0023add8 244B */


/* YAMAHA::MaCmd_Init(unsigned int) */

void YAMAHA::MaCmd_Init(uint param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = (ulong)param_1 * 0x65d0;
  (&DAT_0074a7d2)[lVar2] = 0x7f;
  (&DAT_0074a7d3)[lVar2] = 0x4c;
  *(undefined2 *)(&DAT_0074a7dc + lVar2) = 0x400;
  *(undefined2 *)(&DAT_0074a7de + lVar2) = 0x400;
  (&DAT_0074a7d8)[lVar2] = 0;
  puVar3 = &DAT_0074a411 + lVar2;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar1 = puVar3 + 0x3c;
    puVar3[2] = 0xff;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 1;
    puVar3[6] = 100;
    puVar3[9] = 0x40;
    puVar3[10] = 0x7f;
    puVar3[0xb] = 1;
    puVar3[0xc] = 0;
    puVar3[0xd] = 2;
    *(undefined2 *)(puVar3 + 0x13) = 0x400;
    *(undefined2 *)(puVar3 + 0x15) = 0x400;
    *(undefined2 *)(puVar3 + 0x17) = 0x400;
    *(undefined2 *)(puVar3 + 0x19) = 0x400;
    *(undefined2 *)(puVar3 + 0x1b) = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0xff;
    puVar3[0x21] = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 1;
    puVar3[0x24] = 100;
    puVar3[0x27] = 0x40;
    puVar3[0x28] = 0x7f;
    puVar3[0x29] = 1;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 2;
    *(undefined2 *)(puVar3 + 0x31) = 0x400;
    *(undefined2 *)(puVar3 + 0x33) = 0x400;
    *(undefined2 *)(puVar3 + 0x35) = 0x400;
    *(undefined2 *)(puVar3 + 0x37) = 0x400;
    *(undefined2 *)(puVar3 + 0x39) = 0;
    puVar3 = puVar1;
  } while (puVar1 != (undefined1 *)(lVar2 + 0x74a7d1));
  (&DAT_0074a522)[lVar2] = 0x80;
  return;
}

