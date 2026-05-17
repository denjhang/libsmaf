/* MaHvsCnv_Close @ 001b6318 104B */


/* YAMAHA::MaHvsCnv_Close(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaHvsCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (pcVar2 = *(char **)(param_1 + 8), pcVar2 == (char *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (*pcVar2 != '\x01') {
      return 0xffffffff;
    }
    (*(code *)(&PTR_MaS2PCnvJP_Terminate_00565d58)[(ulong)(byte)pcVar2[2] * 5])();
    *pcVar2 = '\0';
    uVar1 = 0;
  }
  return uVar1;
}

