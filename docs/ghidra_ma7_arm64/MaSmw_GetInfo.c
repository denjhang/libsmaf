/* MaSmw_GetInfo @ 001a1230 288B */


/* YAMAHA::MaSmw_GetInfo(unsigned int, unsigned int, _MASMW_GETINFO_PARAM*) */

undefined8 YAMAHA::MaSmw_GetInfo(uint param_1,uint param_2,_MASMW_GETINFO_PARAM *param_3)

{
  ulong uVar1;
  
  machdep_EnterCriticalSection();
  uVar1 = (ulong)(param_1 >> 8) & 0xff;
  if (((param_1 & 0xff) < 4) && ((uint)uVar1 < 10)) {
    if (((uVar1 != 3) || ((param_1 & 0xff) == 0)) &&
       ((&DAT_0048aa70)[uVar1 * 4 + ((ulong)param_1 & 0xff)] != 0xff)) {
      if ((param_1 == 0x401) || (param_1 == 0x700)) {
        if (2 < *(int *)(DAT_005a0050 + 8) - 0x22U) {
          machdep_LeaveCriticalSection();
          return 0xfffffffe;
        }
      }
      else if ((param_1 == 0x800) && (*(int *)(DAT_005a0050 + 8) != 0x23)) goto LAB_001a1334;
      if ((param_2 == 6) && (param_3 != (_MASMW_GETINFO_PARAM *)0x0)) {
        *(undefined4 *)param_3 =
             *(undefined4 *)
              (DAT_0059a420 +
              (ulong)(byte)(&DAT_0048aa70)[uVar1 * 4 + ((ulong)param_1 & 0xff)] * 0xc0);
        machdep_LeaveCriticalSection();
        return 0;
      }
    }
  }
LAB_001a1334:
  machdep_LeaveCriticalSection();
  return 0xfffffffe;
}

