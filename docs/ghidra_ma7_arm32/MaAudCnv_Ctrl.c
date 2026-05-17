/* MaAudCnv_Ctrl @ 000932dc 130B */


/* YAMAHA::MaAudCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

int YAMAHA::MaAudCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar1 = *(int *)(param_1 + 4), iVar1 == 0)) ||
     (param_4 == (void *)0x0)) {
    iVar1 = -2;
  }
  else {
    if (param_2 == 5) {
      *(undefined4 *)param_4 = *(undefined4 *)(iVar1 + 0x34);
      return 0;
    }
    if (param_2 == 10) {
      local_34 = *(undefined4 *)(iVar1 + 0x14);
      local_30 = *(undefined4 *)(iVar1 + 0x18);
      local_2c = *(undefined4 *)(iVar1 + 0x1c);
      local_28 = *(undefined4 *)(iVar1 + 0x20);
      local_24 = *(undefined2 *)param_4;
      local_22 = *(undefined1 *)((int)param_4 + 2);
      local_21 = *(undefined1 *)((int)param_4 + 3);
      local_20 = *(undefined4 *)((int)param_4 + 4);
      local_1c = *(undefined4 *)((int)param_4 + 8);
      iVar1 = malib_GetContentsData((_MALIBGETCINFO *)&local_34);
      if (iVar1 < 1) {
        *(undefined4 *)((int)param_4 + 0xc) = 0;
      }
      else {
        *(int *)((int)param_4 + 0xc) = iVar1;
        iVar1 = 0;
      }
      return iVar1;
    }
    iVar1 = -1;
  }
  return iVar1;
}

