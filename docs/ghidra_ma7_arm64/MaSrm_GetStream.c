/* MaSrm_GetStream @ 001a739c 248B */


/* YAMAHA::MaSrm_GetStream(unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int*)
    */

undefined8
YAMAHA::MaSrm_GetStream(uint param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((param_1 < 4) && (param_2 < 0x40)) {
    uVar2 = (ulong)param_1;
    uVar3 = (ulong)param_2;
    if ((&DAT_005dc1c0)[uVar3 * 3 + uVar2 * 0xc0] == 0) {
      return 0xffffffff;
    }
    uVar1 = (&DAT_005dc1b8)[uVar3 * 6 + uVar2 * 0x180];
    *param_3 = (uint)(byte)(&DAT_005dc1c8)[uVar2 * 0x600 + uVar3 * 0x18];
    uVar1 = (int)(SUB168((ZEXT416(uVar1) * (undefined1  [16])0x10000) / (undefined1  [16])0x5dc0,0)
                  + 1U >> 1) * 0x8003;
    if ((int)uVar1 < 0) {
      uVar4 = 0x1400;
    }
    else {
      uVar4 = 1;
      if ((0x4000000 < uVar1) &&
         (uVar4 = ((uint)((ulong)uVar1 + 0x8000 >> 0x10) >>
                   (ulong)((byte)(&DAT_0048c4d0)[(ulong)uVar1 + 0x8000 >> 0x1a] & 0x1f) & 0x3ff) +
                  (uint)(byte)(&DAT_0048c4d0)[(ulong)uVar1 + 0x8000 >> 0x1a] * 0x400, uVar4 == 0)) {
        uVar4 = 1;
      }
    }
    *param_4 = uVar4;
    *param_5 = (uint)(byte)(&DAT_005dc1c9)[uVar2 * 0x600 + uVar3 * 0x18];
    return 0;
  }
  return 0xfffffffe;
}

