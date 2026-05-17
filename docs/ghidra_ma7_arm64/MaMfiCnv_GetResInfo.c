/* MaMfiCnv_GetResInfo @ 001c1b84 1324B */


/* YAMAHA::MaMfiCnv_GetResInfo(_MACNV_SEQ_INFO*) */

uint YAMAHA::MaMfiCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (pcVar4 = *(char **)(param_1 + 8), pcVar4 == (char *)0x0)) {
    uVar2 = 0xfffffffe;
  }
  else if (*pcVar4 == '\x01') {
    if ((byte)pcVar4[0x8640] < 3) {
      uVar2 = 0x1000081;
      uVar3 = 0x1000080;
    }
    else {
      bVar1 = pcVar4[0x8646];
      uVar2 = (uint)bVar1;
      if (pcVar4[0x8647] == '\0') {
        if (uVar2 == 0xff) {
          uVar2 = 0x10000181;
          uVar3 = 0x10000180;
        }
        else {
          MaSndDrv_SetAlCh(param_1,(uint)bVar1);
          uVar2 = 0x14000081;
          uVar3 = 0x14000080;
        }
      }
      else if (uVar2 == 0xff) {
        uVar2 = 0x181;
        uVar3 = 0x180;
      }
      else {
        MaSndDrv_SetAlCh(param_1,uVar2);
        uVar2 = 0x4000081;
        uVar3 = 0x4000080;
      }
    }
    if ((pcVar4[0x8642] != '\x01') && (pcVar4[0x8642] != '\x02')) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2 | 0x40;
    if (pcVar4[0x8649] == ' ') {
      uVar3 = uVar2;
    }
    uVar3 = uVar3 | (uint)(byte)(pcVar4[0xb] & pcVar4[10]) << 9;
    if ((pcVar4[0x866b] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x866c] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x866d] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x866e] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x866f] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8670] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8671] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8672] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8673] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8674] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8675] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8676] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8677] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8678] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8679] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x867a] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x867b] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x867c] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x867d] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x867e] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x867f] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8680] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8681] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8682] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8683] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8684] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8685] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8686] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8687] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8688] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((pcVar4[0x8689] & 7U) != 0) {
      uVar3 = uVar3 | 0x8000;
    }
    uVar2 = uVar3 | 0x8000;
    if ((pcVar4[0x868a] & 7U) == 0) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 | ((byte)pcVar4[0x868b] & 1) << 0x10 | ((byte)pcVar4[0x868c] & 1) << 0x10 |
            ((byte)pcVar4[0x868d] & 1) << 0x10 | ((byte)pcVar4[0x868e] & 1) << 0x10 |
            ((byte)pcVar4[0x868f] & 1) << 0x10 | ((byte)pcVar4[0x8690] & 1) << 0x10 |
            ((byte)pcVar4[0x8691] & 1) << 0x10 | ((byte)pcVar4[0x8692] & 1) << 0x10 |
            ((byte)pcVar4[0x8693] & 1) << 0x10 | ((byte)pcVar4[0x8694] & 1) << 0x10 |
            ((byte)pcVar4[0x8695] & 1) << 0x10 | ((byte)pcVar4[0x8696] & 1) << 0x10 |
            ((byte)pcVar4[0x8697] & 1) << 0x10 | ((byte)pcVar4[0x8698] & 1) << 0x10 |
            ((byte)pcVar4[0x8699] & 1) << 0x10 | ((byte)pcVar4[0x869a] & 1) << 0x10 |
            ((byte)pcVar4[0x869b] & 1) << 0x10 | ((byte)pcVar4[0x869c] & 1) << 0x10 |
            ((byte)pcVar4[0x869d] & 1) << 0x10 | ((byte)pcVar4[0x869e] & 1) << 0x10 |
            ((byte)pcVar4[0x869f] & 1) << 0x10 | ((byte)pcVar4[0x86a0] & 1) << 0x10 |
            ((byte)pcVar4[0x86a1] & 1) << 0x10 | ((byte)pcVar4[0x86a2] & 1) << 0x10 |
            ((byte)pcVar4[0x86a3] & 1) << 0x10 | ((byte)pcVar4[0x86a4] & 1) << 0x10 |
            ((byte)pcVar4[0x86a5] & 1) << 0x10 | ((byte)pcVar4[0x86a6] & 1) << 0x10 |
            ((byte)pcVar4[0x86a7] & 1) << 0x10 | ((byte)pcVar4[0x86a8] & 1) << 0x10 |
            ((byte)pcVar4[0x86a9] & 1) << 0x10 | ((byte)pcVar4[0x86aa] & 1) << 0x10;
    uVar3 = uVar2 | 0x6000;
    if (*(long *)(pcVar4 + 0xb28) == 0) {
      uVar3 = uVar2;
    }
    uVar2 = uVar3 | 0x6000;
    if (*(long *)(pcVar4 + 0xb40) == 0) {
      uVar2 = uVar3;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

