/* MaPhrCnv_Ctrl @ 001f6df4 212B */


/* YAMAHA::MaPhrCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

ulong YAMAHA::MaPhrCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  ulong uVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (piVar2 = *(int **)(param_1 + 8), param_4 != (void *)0x0)) {
    uVar1 = (ulong)(piVar2 == (int *)0x0);
    if (piVar2 != (int *)0x0) {
      if (param_2 != 10) {
        if (param_2 == 0x2b) {
          if (*piVar2 == 1) {
            *(int *)param_4 = piVar2[0xb] * piVar2[0xf];
            return uVar1;
          }
        }
        else if (param_2 == 5) {
          *(int *)param_4 = piVar2[0xb] * piVar2[0x10];
          return uVar1;
        }
        return 0xffffffff;
      }
      puVar3 = *(undefined1 **)((long)param_4 + 8);
      if ((puVar3 != (undefined1 *)0x0) && (*(int *)((long)param_4 + 0x10) != 0)) {
        if (*(short *)((long)param_4 + 2) == 0x3043) {
          *puVar3 = (char)piVar2[5];
          *(undefined4 *)((long)param_4 + 0x14) = 1;
          return uVar1;
        }
        if (*(short *)((long)param_4 + 2) == 0x3143) {
          *puVar3 = (char)piVar2[6];
          *(undefined4 *)((long)param_4 + 0x14) = 1;
          return uVar1;
        }
        *(undefined4 *)((long)param_4 + 0x14) = 0;
        return 0xffffffeb;
      }
    }
  }
  return 0xfffffffe;
}

