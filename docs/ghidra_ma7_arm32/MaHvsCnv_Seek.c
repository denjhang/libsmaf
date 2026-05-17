/* MaHvsCnv_Seek @ 00093570 146B */


/* YAMAHA::MaHvsCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

int YAMAHA::MaHvsCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar2 = *(char **)(param_1 + 4), pcVar2 == (char *)0x0)) || (param_2 != 0)) {
    return -2;
  }
  if (*pcVar2 != '\x01') {
    return -1;
  }
  iVar3 = DAT_00093604 + 0x93592;
  (**(code **)(iVar3 + (uint)(byte)pcVar2[2] * 0x14 + 0x10))();
  iVar1 = (**(code **)(iVar3 + (uint)(byte)pcVar2[2] * 0x14))(0x14);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(iVar3 + (uint)(byte)pcVar2[2] * 0x14 + 4))
                    (*(undefined4 *)(pcVar2 + 0x3b0),*(undefined4 *)(pcVar2 + 0x3b4),0);
  if (-1 < iVar1) {
    pcVar2[0x3b8] = '\0';
    pcVar2[0x3bc] = '\0';
    pcVar2[0x3bd] = '\0';
    pcVar2[0x3be] = '\0';
    pcVar2[0x3bf] = '\0';
    pcVar2[0x3c0] = '\0';
    pcVar2[0x3c1] = '\0';
    pcVar2[0x3c2] = '\0';
    pcVar2[0x3c3] = '\0';
    pcVar2[0x398] = '\0';
    pcVar2[0x399] = '\0';
    pcVar2[0x39a] = '\0';
    pcVar2[0x39b] = '\0';
    pcVar2[0x39c] = '\0';
    pcVar2[0x39d] = '\0';
    pcVar2[0x39e] = '\0';
    pcVar2[0x39f] = '\0';
    pcVar2[0x3a0] = '\0';
    pcVar2[0x3a1] = '\0';
    pcVar2[0x3a2] = '\0';
    pcVar2[0x3a3] = '\0';
    pcVar2[0x3a4] = -1;
    pcVar2[0x3a5] = -1;
    pcVar2[0x3a6] = -1;
    pcVar2[0x3a7] = -1;
    return 0;
  }
  return -0x10;
}

