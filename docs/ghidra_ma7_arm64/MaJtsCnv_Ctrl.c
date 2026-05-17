/* MaJtsCnv_Ctrl @ 001b8b30 164B */


/* YAMAHA::MaJtsCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

uint YAMAHA::MaJtsCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  int *piVar1;
  uint uVar2;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (piVar1 = *(int **)(param_1 + 8), param_4 != (void *)0x0)) && (piVar1 != (int *)0x0)) {
    if (param_2 == 10) {
      if ((*(int *)((long)param_4 + 0x10) != 0) &&
         ((uint)*(byte *)((long)param_4 + 3) + (uint)*(byte *)((long)param_4 + 2) * 0x100 == 0x5653)
         ) {
        **(undefined1 **)((long)param_4 + 8) = (char)piVar1[0xe];
        return 0;
      }
    }
    else {
      uVar2 = (uint)(piVar1 == (int *)0x0);
      if (param_2 == 0x2b) {
        if (*piVar1 == 1) {
          *(int *)param_4 = piVar1[0xc];
          return uVar2;
        }
      }
      else if (param_2 == 5) {
        *(int *)param_4 = piVar1[0xd];
        return uVar2;
      }
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

