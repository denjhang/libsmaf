/* MaSmw_GetInfo @ 0008531c 156B */


/* YAMAHA::MaSmw_GetInfo(unsigned int, unsigned int, _MASMW_GETINFO_PARAM*) */

undefined4 YAMAHA::MaSmw_GetInfo(uint param_1,uint param_2,_MASMW_GETINFO_PARAM *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  machdep_EnterCriticalSection();
  uVar2 = param_1 & 0xff;
  uVar1 = (param_1 & 0xffff) >> 8;
  bVar4 = 8 < uVar1;
  bVar3 = uVar1 == 9;
  if (uVar1 < 10) {
    bVar4 = 2 < uVar2;
    bVar3 = uVar2 == 3;
  }
  if (((!bVar4 || bVar3) && (uVar2 == 0 || uVar1 != 3)) &&
     (uVar1 = (uint)*(byte *)(DAT_000853b8 + 0x85352 + uVar2 + uVar1 * 4), uVar1 != 0xff)) {
    if ((param_1 == 0x401) || (param_1 == 0x700)) {
      if (2 < *(int *)(*(int *)(DAT_000853c4 + 0x853aa) + 8) - 0x22U) goto LAB_000853ac;
    }
    else if ((param_1 == 0x800) && (*(int *)(*(int *)(DAT_000853bc + 0x8537a) + 8) != 0x23))
    goto LAB_000853ac;
    if ((param_2 == 6) && (param_3 != (_MASMW_GETINFO_PARAM *)0x0)) {
      *(undefined4 *)param_3 = *(undefined4 *)(*(int *)(DAT_000853c0 + 0x8538a) + uVar1 * 0x98);
      machdep_LeaveCriticalSection();
      return 0;
    }
  }
LAB_000853ac:
  machdep_LeaveCriticalSection();
  return 0xfffffffe;
}

