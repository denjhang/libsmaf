/* MaHvsCnv_Seek @ 001b6460 240B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaHvsCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

int YAMAHA::MaHvsCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) || (pcVar4 = *(char **)(param_1 + 8), param_2 != 0)) ||
     (pcVar4 == (char *)0x0)) {
    iVar3 = -2;
  }
  else {
    if (*pcVar4 != '\x01') {
      return -1;
    }
    (*(code *)(&PTR_MaS2PCnvJP_Terminate_00565d58)[(ulong)(byte)pcVar4[2] * 5])();
    iVar3 = (*(code *)(&PTR_MaS2PCnvJP_Initialize_00565d38)[(ulong)(byte)pcVar4[2] * 5])(0x14);
    if (iVar3 == 0) {
      iVar3 = (*(code *)(&PTR_MaS2PCnvJP_SetData_00565d40)[(ulong)(byte)pcVar4[2] * 5])
                        (*(undefined8 *)(pcVar4 + 0x3b0),*(undefined4 *)(pcVar4 + 0x3b8),0);
      if (-1 < iVar3) {
        pcVar4[0x3c0] = '\0';
        uVar2 = _UNK_001b6558;
        uVar1 = _DAT_001b6550;
        pcVar4[0x3c8] = '\0';
        pcVar4[0x3c9] = '\0';
        pcVar4[0x3ca] = '\0';
        pcVar4[0x3cb] = '\0';
        pcVar4[0x3cc] = '\0';
        pcVar4[0x3cd] = '\0';
        pcVar4[0x3ce] = '\0';
        pcVar4[0x3cf] = '\0';
        pcVar4[0x3d0] = '\0';
        pcVar4[0x3d1] = '\0';
        pcVar4[0x3d2] = '\0';
        pcVar4[0x3d3] = '\0';
        *(undefined8 *)(pcVar4 + 0x3a0) = uVar2;
        *(undefined8 *)(pcVar4 + 0x398) = uVar1;
        return 0;
      }
      iVar3 = -0x10;
    }
  }
  return iVar3;
}

