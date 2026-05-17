/* MaMfiCnv_GetResInfo @ 0009f458 1238B */


/* YAMAHA::MaMfiCnv_GetResInfo(_MACNV_SEQ_INFO*) */

uint YAMAHA::MaMfiCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (pcVar2 = *(char **)(param_1 + 4), pcVar2 == (char *)0x0)) {
    return 0xfffffffe;
  }
  if (*pcVar2 == '\x01') {
    if ((byte)pcVar2[0x7c6c] < 3) {
      uVar3 = 0x1000081;
      uVar1 = 0x1000080;
    }
    else {
      uVar1 = (uint)(byte)pcVar2[0x7c72];
      if (pcVar2[0x7c73] == '\0') {
        if (uVar1 == 0xff) {
          uVar3 = 0x10000181;
          uVar1 = 0x10000180;
        }
        else {
          MaSndDrv_SetAlCh(param_1,uVar1);
          uVar3 = 0x14000081;
          uVar1 = 0x14000080;
        }
      }
      else if (uVar1 == 0xff) {
        uVar3 = 0x181;
        uVar1 = 0x180;
      }
      else {
        MaSndDrv_SetAlCh(param_1,uVar1);
        uVar3 = 0x4000081;
        uVar1 = 0x4000080;
      }
    }
    if ((pcVar2[0x7c6e] != '\x01') && (pcVar2[0x7c6e] != '\x02')) {
      uVar3 = uVar1;
    }
    if (pcVar2[0x7c75] != ' ') {
      uVar3 = uVar3 | 0x40;
    }
    uVar3 = uVar3 | (uint)(byte)(pcVar2[0xb] & pcVar2[10]) << 9;
    if ((pcVar2[0x7c97] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7c98] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7c99] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7c9a] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7c9b] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7c9c] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7c9d] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7c9e] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7c9f] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca0] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca1] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca2] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca3] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca4] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca5] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca6] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca7] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca8] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7ca9] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7caa] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cab] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cac] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cad] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cae] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7caf] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cb0] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cb1] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cb2] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cb3] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cb4] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cb5] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cb6] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar2[0x7cb7] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cb8] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cb9] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cba] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cbb] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cbc] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cbd] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cbe] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cbf] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc0] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc1] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc2] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc3] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc4] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc5] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc6] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc7] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc8] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cc9] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cca] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7ccb] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7ccc] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7ccd] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cce] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7ccf] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cd0] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cd1] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cd2] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cd3] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cd4] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((pcVar2[0x7cd5] & 1U) != 0) {
      uVar3 = uVar3 | 0x10000;
    }
    uVar1 = uVar3 | 0x10000;
    if ((pcVar2[0x7cd6] & 1U) == 0) {
      uVar1 = uVar3;
    }
    if (*(int *)(pcVar2 + 0xb20) != 0) {
      uVar1 = uVar1 | 0x6000;
    }
    if (*(int *)(pcVar2 + 0xb2c) != 0) {
      return uVar1 | 0x6000;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

