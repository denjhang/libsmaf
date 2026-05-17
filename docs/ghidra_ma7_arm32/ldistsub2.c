/* ldistsub2 @ 000fc670 158B */


/* YAMAHA::ldistsub2() */

void YAMAHA::ldistsub2(void)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_000fc710 + 0xfc67a;
  iVar4 = *(int *)(iVar5 + DAT_000fc714);
  lset_sc(*(uchar *)(iVar4 + 0x31a));
  iVar3 = (int)*(short *)(iVar4 + (uint)*(byte *)(*(int *)(iVar5 + DAT_000fc718) + 1) * 2 + 0x26) >>
          7;
  if ((iVar3 * (iVar3 * (iVar3 * (iVar3 + 0x40) + 0x1000) + 0x40000) + 0x1000000) / 5 >> 9 == 0x8000
     ) {
    iVar3 = *(int *)(iVar5 + DAT_000fc71c);
    *(undefined2 *)(iVar4 + (uint)*(byte *)(iVar3 + 2) * 2 + 0x26) = 0x7fff;
  }
  else {
    iVar3 = *(int *)(iVar5 + DAT_000fc71c);
    bVar1 = *(byte *)(iVar3 + 2);
    uVar2 = __divsi3(0x40000000);
    *(undefined2 *)(iVar4 + (bVar1 + 0x10) * 2 + 6) = uVar2;
  }
  *(undefined2 *)(iVar4 + (uint)*(byte *)(iVar3 + 3) * 2 + 0x26) = 0x7fff;
  LSendCoef('\x02',(uchar *)(iVar3 + 2));
  return;
}

