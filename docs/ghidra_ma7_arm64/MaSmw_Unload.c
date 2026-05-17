/* masmw_unload @ 00194a60 100B */


/* YAMAHA::masmw_unload(unsigned int, void*) */

ulong YAMAHA::masmw_unload(uint param_1,void *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)(param_1 >> 8) & 0xff;
  if ((uint)uVar2 < 10) {
    bVar1 = 3 < (param_1 & 0xff);
    if ((!bVar1) && ((&DAT_0048aa70)[uVar2 * 4 + (ulong)(byte)param_1] != 0xff)) {
      lVar3 = (ulong)(byte)(&DAT_0048aa70)[uVar2 * 4 + (ulong)(byte)param_1] * 0xc0;
      if (*(int *)(DAT_0059a420 + lVar3) == 1) {
        *(undefined4 *)(DAT_0059a420 + lVar3) = 0;
        return (ulong)bVar1;
      }
    }
  }
  return 0xfffffffe;
}

