/* MaMidCnv_ReqVoice @ 001d5e54 6184B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaMidCnv_ReqVoice(_MACNV_SEQ_INFO*) */

void YAMAHA::MaMidCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  char cVar16;
  char *pcVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  undefined2 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  uint local_7c;
  undefined8 *local_18;
  uint local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (pcVar17 = *(char **)(param_1 + 8), pcVar17 == (char *)0x0)) {
    uVar8 = 0xfffffffe;
  }
  else {
    if (*pcVar17 == '\x01') {
      iVar11 = 2;
      uVar25 = 0xf;
      local_7c = 0;
      while( true ) {
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xcdc) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xce6) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xcf0) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xcfa) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd04) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd0e) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd18) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd22) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd2c) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd36) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd40) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd4a) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd54) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd5e) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd68) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xce0)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xce0)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xcea)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xcea)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xcf4)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xcf4)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xcfe)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xcfe)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd08)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd08)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd12)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd12)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd1c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd1c)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd26)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd26)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd30)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd30)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd3a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd3a)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd44)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd44)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd4e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd4e)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd58)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd58)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd62)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd62)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd6c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd6c)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd72) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd7c) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd86) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd90) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xd9a) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xda4) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xdae) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xdb8) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xdc2) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xdcc) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd76)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd76)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd80)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd80)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd8a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd8a)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd94)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd94)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd9e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xd9e)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xda8)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xda8)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdb2)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdb2)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdbc)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdbc)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdc6)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdc6)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdd0)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdd0)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xdd6) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdda)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdda)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xde0) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xde4)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xde4)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xdea) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdee)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdee)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xdf4) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdf8)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xdf8)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xdfe) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe08) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe12) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe1c) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe26) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe30) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe3a) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe44) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe4e) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe02)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe02)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe0c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe0c)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe16)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe16)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe20)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe20)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe2a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe2a)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe34)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe34)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe3e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe3e)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe48)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe48)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe52)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe52)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe58) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe5c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe5c)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe62) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe6c) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe76) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe80) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe8a) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe94) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe66)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe66)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe70)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe70)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe7a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe7a)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe84)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe84)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe8e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe8e)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe98)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xe98)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xe9e) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xea8) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xeb2) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xebc) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xec6) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xed0) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xeda) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xee4) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xeee) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xea2)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xea2)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xeac)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xeac)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xeb6)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xeb6)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xec0)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xec0)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xeca)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xeca)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xed4)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xed4)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xede)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xede)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xee8)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xee8)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xef2)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xef2)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xef8) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xefc)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xefc)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf02) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf06)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf06)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf0c) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf10)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf10)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf16) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf1a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf1a)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf20) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf24)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf24)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf2a) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf2e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf2e)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf34) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf38)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf38)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf3e) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf42)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf42)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf48) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf4c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf4c)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf52) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf56)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf56)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf5c) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf60)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf60)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf66) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf6a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf6a)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf70) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf74)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf74)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf7a) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf7e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf7e)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf84) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf88)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf88)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf8e) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf92)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf92)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xf98) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf9c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xf9c)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xfa2) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfa6)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfa6)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xfac) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfb0)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfb0)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xfb6) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfba)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfba)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xfc0) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfc4)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfc4)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xfca) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfce)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfce)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xfd4) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfd8)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfd8)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xfde) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfe2)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfe2)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xfe8) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfec)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xfec)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xff2) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xff6)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0xff6)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0xffc) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1000)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1000)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1006) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x100a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x100a)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1010) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1014)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1014)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x101a) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x101e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x101e)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1024) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1028)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1028)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x102e) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1032)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1032)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1038) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x103c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x103c)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1042) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1046)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1046)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x104c) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1056) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1060) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x106a) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1074) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x107e) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1088) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1092) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x109c) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10a6) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10b0) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10ba) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10c4) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10ce) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10d8) = uVar25;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10e2) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1050)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1050)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x105a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x105a)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1064)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1064)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x106e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x106e)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1078)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1078)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1082)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1082)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x108c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x108c)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1096)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1096)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10a0)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10a0)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10aa)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10aa)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10b4)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10b4)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10be)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10be)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10c8)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10c8)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10d2)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10d2)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10dc)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10dc)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10e6)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10e6)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10ec) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10f0)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10f0)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x10f6) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10fa)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x10fa)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1100) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1104)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1104)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x110a) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x110e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x110e)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1114) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1118)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1118)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x111e) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1122)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1122)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1128) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x112c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x112c)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1132) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1136)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1136)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x113c) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1140)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1140)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1146) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x114a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x114a)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1150) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1154)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1154)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x115a) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x115e)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x115e)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1164) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1168)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1168)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x116e) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1172)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1172)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1178) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x117c)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x117c)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1182) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1186)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1186)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x118c) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1190)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x1190)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x1196) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x119a)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x119a)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x11a0) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11a4)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11a4)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x11aa) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11ae)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11ae)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x11b4) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11b8)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11b8)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x11be) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11c2)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11c2)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x11c8) = uVar25;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11cc)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11cc)[1] = -1;
        *(undefined2 *)(pcVar17 + (ulong)local_7c * 0x504 + 0x11d2) = uVar25;
        uVar25 = 0x8f;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11d6)[0] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11d6)[1] = -1;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11d8)[0] = -0x71;
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11d8)[1] = '\0';
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11da)[0] = '\0';
        (pcVar17 + (ulong)local_7c * 0x504 + 0x11da)[1] = '\0';
        if (iVar11 == 1) break;
        iVar11 = 1;
        local_7c = local_7c + 1;
      }
      lVar26 = *(long *)(param_1 + 8);
      lVar2 = lVar26 + 0x18;
      bVar4 = *(byte *)(lVar26 + 0x3c);
      uVar29 = (uint)bVar4;
      *(undefined4 *)(lVar26 + 0x70) = 0;
      uVar30 = (uint)bVar4;
      if (bVar4 != 0) {
        bVar4 = bVar4 - 1 & 3;
        *(undefined1 *)(lVar26 + 0x78) = 0;
        *(undefined4 *)(lVar26 + 0x88) = 0;
        *(undefined4 *)(lVar26 + 0x8c) = 0;
        if (*(int *)(lVar26 + 0x7c) != 0) {
          *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | 1;
        }
        uVar14 = 1;
        puVar7 = (undefined1 *)(lVar26 + 0x90);
        if (uVar30 != 1) {
          if (bVar4 != 0) {
            if (bVar4 != 1) {
              if (bVar4 != 2) {
                *puVar7 = 0;
                *(undefined4 *)(lVar26 + 0xa0) = 0;
                *(undefined4 *)(lVar26 + 0xa4) = 0;
                if (*(int *)(lVar26 + 0x94) != 0) {
                  *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | 2;
                }
                uVar14 = 2;
                puVar7 = (undefined1 *)(lVar26 + 0xa8);
              }
              *puVar7 = 0;
              *(undefined4 *)(puVar7 + 0x10) = 0;
              *(undefined4 *)(puVar7 + 0x14) = 0;
              if (*(int *)(puVar7 + 4) != 0) {
                *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | (uint)(1L << uVar14);
              }
              uVar14 = (ulong)((int)uVar14 + 1);
              puVar7 = puVar7 + 0x18;
            }
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + 0x10) = 0;
            *(undefined4 *)(puVar7 + 0x14) = 0;
            if (*(int *)(puVar7 + 4) != 0) {
              *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | (uint)(1L << uVar14);
            }
            uVar22 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar22;
            puVar7 = puVar7 + 0x18;
            if (uVar22 == uVar30) goto LAB_001d66e0;
          }
          do {
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + 0x10) = 0;
            *(undefined4 *)(puVar7 + 0x14) = 0;
            if (*(int *)(puVar7 + 4) != 0) {
              *(uint *)(lVar26 + 0x70) = *(uint *)(lVar26 + 0x70) | (uint)(1L << (uVar14 & 0x3f));
            }
            puVar7[0x18] = 0;
            iVar11 = (int)uVar14;
            *(undefined4 *)(puVar7 + 0x28) = 0;
            *(undefined4 *)(puVar7 + 0x2c) = 0;
            if (*(int *)(puVar7 + 0x1c) != 0) {
              *(uint *)(lVar26 + 0x70) =
                   *(uint *)(lVar26 + 0x70) | (uint)(1L << ((ulong)(iVar11 + 1) & 0x3f));
            }
            puVar7[0x30] = 0;
            *(undefined4 *)(puVar7 + 0x40) = 0;
            *(undefined4 *)(puVar7 + 0x44) = 0;
            if (*(int *)(puVar7 + 0x34) != 0) {
              *(uint *)(lVar26 + 0x70) =
                   *(uint *)(lVar26 + 0x70) | (uint)(1L << ((ulong)(iVar11 + 2) & 0x3f));
            }
            puVar7[0x48] = 0;
            *(undefined4 *)(puVar7 + 0x58) = 0;
            *(undefined4 *)(puVar7 + 0x5c) = 0;
            if (*(int *)(puVar7 + 0x4c) != 0) {
              *(uint *)(lVar26 + 0x70) =
                   *(uint *)(lVar26 + 0x70) | (uint)(1L << ((ulong)(iVar11 + 3) & 0x3f));
            }
            uVar14 = (ulong)(iVar11 + 4U);
            puVar7 = puVar7 + 0x60;
          } while (iVar11 + 4U != uVar30);
        }
      }
LAB_001d66e0:
      lVar28 = lVar26 + 0x3a8;
      *(long *)(lVar26 + 0x3b0) = lVar26 + 0x3c0;
      *(long *)(lVar26 + 0x3c8) = lVar26 + 0x3d8;
      *(long *)(lVar26 + 0x3d8) = lVar26 + 0x3c0;
      *(long *)(lVar26 + 0x3e0) = lVar26 + 0x3f0;
      *(long *)(lVar26 + 0x3f0) = lVar26 + 0x3d8;
      *(long *)(lVar26 + 0x3f8) = lVar26 + 0x408;
      *(long *)(lVar26 + 0x408) = lVar26 + 0x3f0;
      *(long *)(lVar26 + 0x410) = lVar26 + 0x420;
      *(long *)(lVar26 + 0x420) = lVar26 + 0x408;
      *(long *)(lVar26 + 0x438) = lVar26 + 0x420;
      *(long *)(lVar26 + 0x3a8) = lVar26 + 0x390;
      *(undefined1 *)(lVar26 + 0x3b8) = 0xff;
      *(undefined4 *)(lVar26 + 0x3bc) = 0xffffffff;
      *(long *)(lVar26 + 0x3c0) = lVar28;
      *(undefined1 *)(lVar26 + 0x3d0) = 0xff;
      *(undefined4 *)(lVar26 + 0x3d4) = 0xffffffff;
      *(undefined1 *)(lVar26 + 1000) = 0xff;
      *(undefined4 *)(lVar26 + 0x3ec) = 0xffffffff;
      *(undefined1 *)(lVar26 + 0x400) = 0xff;
      *(undefined4 *)(lVar26 + 0x404) = 0xffffffff;
      *(undefined1 *)(lVar26 + 0x418) = 0xff;
      *(undefined4 *)(lVar26 + 0x41c) = 0xffffffff;
      *(long *)(lVar26 + 0x428) = lVar26 + 0x438;
      *(undefined1 *)(lVar26 + 0x430) = 0xff;
      *(undefined4 *)(lVar26 + 0x434) = 0xffffffff;
      *(long *)(lVar26 + 0x440) = lVar26 + 0x450;
      *(undefined1 *)(lVar26 + 0x448) = 0xff;
      *(undefined4 *)(lVar26 + 0x44c) = 0xffffffff;
      *(long *)(lVar26 + 0x450) = lVar26 + 0x438;
      *(long *)(lVar26 + 0x458) = lVar26 + 0x468;
      *(undefined1 *)(lVar26 + 0x460) = 0xff;
      *(undefined4 *)(lVar26 + 0x464) = 0xffffffff;
      *(long *)(lVar26 + 0x468) = lVar26 + 0x450;
      *(long *)(lVar26 + 0x470) = lVar26 + 0x480;
      *(undefined1 *)(lVar26 + 0x478) = 0xff;
      *(undefined4 *)(lVar26 + 0x47c) = 0xffffffff;
      *(long *)(lVar26 + 0x480) = lVar26 + 0x468;
      *(long *)(lVar26 + 0x488) = lVar26 + 0x498;
      *(undefined1 *)(lVar26 + 0x490) = 0xff;
      *(undefined4 *)(lVar26 + 0x494) = 0xffffffff;
      *(long *)(lVar26 + 0x498) = lVar26 + 0x480;
      *(long *)(lVar26 + 0x4a0) = lVar26 + 0x4b0;
      *(undefined1 *)(lVar26 + 0x4a8) = 0xff;
      *(undefined4 *)(lVar26 + 0x4ac) = 0xffffffff;
      *(long *)(lVar26 + 0x4b0) = lVar26 + 0x498;
      *(long *)(lVar26 + 0x4b8) = lVar26 + 0x4c8;
      *(undefined1 *)(lVar26 + 0x4c0) = 0xff;
      *(undefined4 *)(lVar26 + 0x4c4) = 0xffffffff;
      *(long *)(lVar26 + 0x4c8) = lVar26 + 0x4b0;
      *(long *)(lVar26 + 0x4d0) = lVar26 + 0x4e0;
      *(undefined1 *)(lVar26 + 0x4d8) = 0xff;
      *(undefined4 *)(lVar26 + 0x4dc) = 0xffffffff;
      *(long *)(lVar26 + 0x4e0) = lVar26 + 0x4c8;
      *(long *)(lVar26 + 0x4e8) = lVar26 + 0x4f8;
      *(undefined1 *)(lVar26 + 0x4f0) = 0xff;
      *(undefined4 *)(lVar26 + 0x4f4) = 0xffffffff;
      *(long *)(lVar26 + 0x4f8) = lVar26 + 0x4e0;
      *(long *)(lVar26 + 0x500) = lVar26 + 0x510;
      *(undefined1 *)(lVar26 + 0x508) = 0xff;
      *(undefined4 *)(lVar26 + 0x50c) = 0xffffffff;
      *(long *)(lVar26 + 0x510) = lVar26 + 0x4f8;
      *(long *)(lVar26 + 0x518) = lVar26 + 0x528;
      *(undefined1 *)(lVar26 + 0x520) = 0xff;
      *(undefined4 *)(lVar26 + 0x524) = 0xffffffff;
      *(long *)(lVar26 + 0x528) = lVar26 + 0x510;
      *(long *)(lVar26 + 0x530) = lVar26 + 0x540;
      *(undefined1 *)(lVar26 + 0x538) = 0xff;
      *(undefined4 *)(lVar26 + 0x53c) = 0xffffffff;
      *(long *)(lVar26 + 0x540) = lVar26 + 0x528;
      *(long *)(lVar26 + 0x548) = lVar26 + 0x558;
      *(undefined1 *)(lVar26 + 0x550) = 0xff;
      *(undefined4 *)(lVar26 + 0x554) = 0xffffffff;
      *(long *)(lVar26 + 0x558) = lVar26 + 0x540;
      *(long *)(lVar26 + 0x560) = lVar26 + 0x570;
      *(undefined1 *)(lVar26 + 0x568) = 0xff;
      *(undefined4 *)(lVar26 + 0x56c) = 0xffffffff;
      *(long *)(lVar26 + 0x570) = lVar26 + 0x558;
      *(long *)(lVar26 + 0x578) = lVar26 + 0x588;
      *(undefined1 *)(lVar26 + 0x580) = 0xff;
      *(undefined4 *)(lVar26 + 0x584) = 0xffffffff;
      *(long *)(lVar26 + 0x588) = lVar26 + 0x570;
      *(long *)(lVar26 + 0x590) = lVar26 + 0x5a0;
      *(undefined1 *)(lVar26 + 0x598) = 0xff;
      *(undefined4 *)(lVar26 + 0x59c) = 0xffffffff;
      *(long *)(lVar26 + 0x5a0) = lVar26 + 0x588;
      *(long *)(lVar26 + 0x5a8) = lVar26 + 0x5b8;
      *(undefined1 *)(lVar26 + 0x5b0) = 0xff;
      *(undefined4 *)(lVar26 + 0x5b4) = 0xffffffff;
      *(long *)(lVar26 + 0x5b8) = lVar26 + 0x5a0;
      *(long *)(lVar26 + 0x5c0) = lVar26 + 0x5d0;
      *(undefined1 *)(lVar26 + 0x5c8) = 0xff;
      *(undefined4 *)(lVar26 + 0x5cc) = 0xffffffff;
      *(long *)(lVar26 + 0x5d0) = lVar26 + 0x5b8;
      *(long *)(lVar26 + 0x5d8) = lVar26 + 0x5e8;
      *(undefined1 *)(lVar26 + 0x5e0) = 0xff;
      *(undefined4 *)(lVar26 + 0x5e4) = 0xffffffff;
      *(long *)(lVar26 + 0x5e8) = lVar26 + 0x5d0;
      *(long *)(lVar26 + 0x5f0) = lVar26 + 0x600;
      *(undefined1 *)(lVar26 + 0x5f8) = 0xff;
      *(undefined4 *)(lVar26 + 0x5fc) = 0xffffffff;
      *(long *)(lVar26 + 0x600) = lVar26 + 0x5e8;
      *(long *)(lVar26 + 0x608) = lVar26 + 0x618;
      *(undefined1 *)(lVar26 + 0x610) = 0xff;
      *(undefined4 *)(lVar26 + 0x614) = 0xffffffff;
      *(long *)(lVar26 + 0x618) = lVar26 + 0x600;
      *(long *)(lVar26 + 0x620) = lVar26 + 0x630;
      *(undefined1 *)(lVar26 + 0x628) = 0xff;
      *(undefined4 *)(lVar26 + 0x62c) = 0xffffffff;
      *(long *)(lVar26 + 0x630) = lVar26 + 0x618;
      *(long *)(lVar26 + 0x638) = lVar26 + 0x648;
      *(undefined1 *)(lVar26 + 0x640) = 0xff;
      *(undefined4 *)(lVar26 + 0x644) = 0xffffffff;
      *(long *)(lVar26 + 0x648) = lVar26 + 0x630;
      *(long *)(lVar26 + 0x650) = lVar26 + 0x660;
      *(undefined1 *)(lVar26 + 0x658) = 0xff;
      *(undefined4 *)(lVar26 + 0x65c) = 0xffffffff;
      *(long *)(lVar26 + 0x660) = lVar26 + 0x648;
      *(long *)(lVar26 + 0x668) = lVar26 + 0x678;
      *(undefined1 *)(lVar26 + 0x670) = 0xff;
      *(undefined4 *)(lVar26 + 0x674) = 0xffffffff;
      *(long *)(lVar26 + 0x678) = lVar26 + 0x660;
      *(long *)(lVar26 + 0x680) = lVar26 + 0x690;
      *(undefined1 *)(lVar26 + 0x688) = 0xff;
      *(undefined4 *)(lVar26 + 0x68c) = 0xffffffff;
      *(long *)(lVar26 + 0x690) = lVar26 + 0x678;
      *(long *)(lVar26 + 0x698) = lVar26 + 0x6a8;
      *(undefined1 *)(lVar26 + 0x6a0) = 0xff;
      *(undefined4 *)(lVar26 + 0x6a4) = 0xffffffff;
      *(long *)(lVar26 + 0x6a8) = lVar26 + 0x690;
      *(long *)(lVar26 + 0x6b0) = lVar26 + 0x6c0;
      *(undefined1 *)(lVar26 + 0x6b8) = 0xff;
      *(undefined4 *)(lVar26 + 0x6bc) = 0xffffffff;
      *(undefined8 *)(lVar26 + 0x390) = 0;
      *(long *)(lVar26 + 0x398) = lVar28;
      *(long *)(lVar26 + 0x6c0) = lVar26 + 0x6a8;
      *(undefined8 *)(lVar26 + 0x6c8) = 0;
      *(long *)(lVar26 + 0x378) = lVar26 + 0x390;
      *(long *)(lVar26 + 0x380) = lVar28;
      *(long *)(lVar26 + 0x388) = lVar26 + 0x6c0;
      if (uVar30 == 0) {
        uVar30 = *(uint *)(lVar26 + 0x70);
      }
      else {
        uVar30 = *(uint *)(lVar26 + 0x70);
        piVar15 = (int *)(lVar26 + 0x8c);
        uVar14 = 0;
        do {
          uVar22 = (uint)uVar14;
          if ((uVar30 >> (ulong)(uVar22 & 0x1f) & 1) != 0) {
            uVar3 = piVar15[-1];
            uVar12 = (ulong)uVar3;
            uVar6 = 0;
            uVar13 = piVar15[-4];
            uVar10 = uVar13 - uVar3 & 3;
            if (uVar10 == 0) goto LAB_001d6a64;
            if (uVar3 < uVar13) {
              uVar1 = uVar3 + 1;
              piVar15[-1] = uVar1;
              bVar4 = *(byte *)(*(long *)(piVar15 + -3) + (ulong)uVar3);
              uVar6 = bVar4 & 0x7f;
              if (0x7f < bVar4) {
                uVar12 = (ulong)uVar1;
                if (uVar10 != 1) {
                  uVar9 = uVar1;
                  if (uVar10 != 2) {
                    uVar9 = uVar3 + 2;
                    piVar15[-1] = uVar9;
                    bVar4 = *(byte *)(*(long *)(piVar15 + -3) + (ulong)uVar1);
                    uVar6 = (bVar4 & 0x7f) + uVar6 * 0x80;
                    if (bVar4 < 0x80) goto LAB_001d6eac;
                  }
                  piVar15[-1] = uVar9 + 1;
                  uVar12 = (ulong)(uVar9 + 1);
                  uVar6 = (*(byte *)(*(long *)(piVar15 + -3) + (ulong)uVar9) & 0x7f) + uVar6 * 0x80;
                  if (*(byte *)(*(long *)(piVar15 + -3) + (ulong)uVar9) < 0x80) goto LAB_001d6eac;
                }
LAB_001d6a64:
                uVar10 = (uint)uVar12;
                while (uVar10 < uVar13) {
                  lVar28 = *(long *)(piVar15 + -3);
                  iVar11 = (int)uVar12;
                  piVar15[-1] = iVar11 + 1U;
                  uVar6 = (*(byte *)(lVar28 + uVar12) & 0x7f) + uVar6 * 0x80;
                  if (*(byte *)(lVar28 + uVar12) < 0x80) goto LAB_001d6eac;
                  piVar15[-1] = iVar11 + 2U;
                  bVar4 = *(byte *)(lVar28 + (ulong)(iVar11 + 1U));
                  uVar6 = (bVar4 & 0x7f) + uVar6 * 0x80;
                  if (bVar4 < 0x80) goto LAB_001d6eac;
                  piVar15[-1] = iVar11 + 3;
                  bVar4 = *(byte *)(lVar28 + (ulong)(iVar11 + 2U));
                  uVar6 = (bVar4 & 0x7f) + uVar6 * 0x80;
                  if (bVar4 < 0x80) goto LAB_001d6eac;
                  uVar10 = iVar11 + 4;
                  piVar15[-1] = uVar10;
                  bVar4 = *(byte *)(lVar28 + (ulong)(iVar11 + 3));
                  uVar6 = (bVar4 & 0x7f) + uVar6 * 0x80;
                  if (bVar4 < 0x80) goto LAB_001d6eac;
                  uVar12 = (ulong)uVar10;
                }
                goto LAB_001d6af0;
              }
LAB_001d6eac:
              *piVar15 = *piVar15 + uVar6;
              if (uVar29 == 1) break;
            }
            else {
LAB_001d6af0:
              uVar30 = uVar30 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
              *(uint *)(lVar26 + 0x70) = uVar30;
              if (uVar29 == 1) break;
              if ((uVar30 >> (ulong)(uVar22 & 0x1f) & 1) == 0) goto LAB_001d6bc0;
            }
            lVar28 = *(long *)(lVar26 + 0x380);
            plVar20 = *(long **)(lVar28 + 8);
            if (plVar20 != *(long **)(lVar26 + 0x388)) {
              *(long *)(lVar28 + 8) = plVar20[1];
              *(long *)plVar20[1] = lVar28;
              *(char *)(plVar20 + 2) = (char)uVar14;
              lVar28 = *(long *)(lVar26 + 0x378);
              iVar11 = *piVar15;
              *plVar20 = lVar28;
              plVar20[1] = *(long *)(lVar28 + 8);
              uVar30 = uVar22 + iVar11 * 0x20;
              plVar18 = *(long **)(lVar26 + 0x380);
              **(undefined8 **)(lVar28 + 8) = plVar20;
              *(long **)(lVar28 + 8) = plVar20;
              lVar28 = *plVar20;
              *(long *)(lVar28 + 8) = plVar20[1];
              plVar23 = (long *)plVar20[1];
              *plVar23 = lVar28;
              *(uint *)((long)plVar20 + 0x14) = uVar30;
              if ((plVar18 != plVar23) && (*(uint *)((long)plVar23 + 0x14) < uVar30)) {
                do {
                  plVar23 = (long *)plVar23[1];
                  if (plVar18 == plVar23) break;
                } while (*(uint *)((long)plVar23 + 0x14) < uVar30);
                lVar28 = *plVar23;
              }
              *(long **)(lVar28 + 8) = plVar20;
              *plVar20 = lVar28;
              *plVar23 = (long)plVar20;
              plVar20[1] = (long)plVar23;
              uVar30 = *(uint *)(lVar26 + 0x70);
              uVar29 = (uint)*(byte *)(lVar26 + 0x3c);
            }
          }
LAB_001d6bc0:
          uVar14 = (ulong)(uVar22 + 1);
          piVar15 = piVar15 + 6;
        } while ((int)(uVar22 + 1) < (int)uVar29);
      }
LAB_001d6be8:
      if (uVar30 != 0) {
        do {
          cVar16 = *(char *)(lVar26 + 0x3c);
          if (cVar16 == '\x01') {
            uVar14 = 0;
          }
          else {
            lVar28 = *(long *)(*(long *)(lVar26 + 0x378) + 8);
            if (*(long *)(lVar26 + 0x388) == lVar28) break;
            uVar14 = (ulong)*(byte *)(lVar28 + 0x10);
          }
          uVar29 = (uint)uVar14;
          lVar27 = (long)(int)uVar29;
          lVar28 = lVar2 + lVar27 * 0x18;
          if (0 < *(int *)(lVar28 + 0x74)) break;
          uVar22 = *(uint *)(lVar28 + 0x70);
          *(uint *)(lVar28 + 0x70) = uVar22 + 1;
          bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar22);
          if (bVar4 < 0xf0) {
            if ((char)bVar4 < '\0') {
              uVar22 = *(uint *)(lVar28 + 0x70);
              *(byte *)(lVar28 + 0x60) = bVar4;
            }
            else {
              bVar4 = *(byte *)(lVar28 + 0x60);
              if (-1 < (char)bVar4) break;
              *(uint *)(lVar28 + 0x70) = uVar22;
            }
            if (((bVar4 & 0xf0) != 0xc0) && ((bVar4 & 0xf0) != 0xd0)) goto LAB_001d6c6c;
            *(uint *)(lVar2 + lVar27 * 0x18 + 0x70) = uVar22 + 1;
            goto switchD_001d6ef4_caseD_f4;
          }
          switch(bVar4) {
          case 0xf0:
          case 0xf7:
            iVar11 = 0;
            lVar28 = lVar2 + lVar27 * 0x18;
            uVar22 = *(uint *)(lVar28 + 0x70);
            lVar19 = *(long *)(lVar28 + 0x68);
            *(undefined1 *)(lVar28 + 0x60) = 0;
            do {
              uVar6 = uVar22 + 1;
              *(uint *)(lVar28 + 0x70) = uVar6;
              iVar11 = (*(byte *)(lVar19 + (ulong)uVar22) & 0x7f) + iVar11 * 0x80;
              uVar10 = uVar6;
              if (-1 < (char)*(byte *)(lVar19 + (ulong)uVar22)) break;
              *(uint *)(lVar28 + 0x70) = uVar22 + 2;
              iVar11 = (*(byte *)(lVar19 + (ulong)uVar6) & 0x7f) + iVar11 * 0x80;
              uVar10 = uVar22 + 2;
              if (-1 < (char)*(byte *)(lVar19 + (ulong)uVar6)) break;
              *(uint *)(lVar28 + 0x70) = uVar22 + 3;
              uVar6 = uVar22 + 3;
              bVar4 = *(byte *)(lVar19 + (ulong)(uVar22 + 2));
              iVar11 = (bVar4 & 0x7f) + iVar11 * 0x80;
              uVar10 = uVar22 + 3;
              if (-1 < (char)bVar4) break;
              uVar22 = uVar22 + 4;
              *(uint *)(lVar28 + 0x70) = uVar22;
              bVar4 = *(byte *)(lVar19 + (ulong)uVar6);
              iVar11 = (bVar4 & 0x7f) + iVar11 * 0x80;
              uVar10 = uVar22;
            } while ((char)bVar4 < '\0');
            *(uint *)(lVar2 + lVar27 * 0x18 + 0x70) = uVar10 + iVar11;
            break;
          case 0xf1:
          case 0xf3:
LAB_001d6c6c:
            *(uint *)(lVar2 + lVar27 * 0x18 + 0x70) = uVar22 + 2;
            break;
          case 0xf2:
            *(uint *)(lVar2 + lVar27 * 0x18 + 0x70) = uVar22 + 3;
            break;
          case 0xff:
            uVar6 = 0;
            lVar28 = lVar2 + lVar27 * 0x18;
            lVar19 = *(long *)(lVar28 + 0x68);
            *(uint *)(lVar28 + 0x70) = uVar22 + 2;
            cVar5 = *(char *)(lVar19 + (ulong)(uVar22 + 1));
            uVar22 = uVar22 + 2;
            do {
              uVar12 = (ulong)uVar22;
              uVar10 = uVar22 + 1;
              *(uint *)(lVar28 + 0x70) = uVar10;
              uVar6 = (*(byte *)(lVar19 + uVar12) & 0x7f) + uVar6 * 0x80;
              if (-1 < (char)*(byte *)(lVar19 + uVar12)) break;
              uVar12 = (ulong)uVar10;
              uVar10 = uVar22 + 2;
              *(uint *)(lVar28 + 0x70) = uVar10;
              uVar6 = (*(byte *)(lVar19 + uVar12) & 0x7f) + uVar6 * 0x80;
              if (-1 < (char)*(byte *)(lVar19 + uVar12)) break;
              uVar12 = (ulong)(uVar22 + 2);
              uVar10 = uVar22 + 3;
              *(uint *)(lVar28 + 0x70) = uVar10;
              uVar6 = (*(byte *)(lVar19 + uVar12) & 0x7f) + uVar6 * 0x80;
              if (-1 < (char)*(byte *)(lVar19 + uVar12)) break;
              uVar12 = (ulong)(uVar22 + 3);
              uVar10 = uVar22 + 4;
              *(uint *)(lVar28 + 0x70) = uVar10;
              uVar6 = (*(byte *)(lVar19 + uVar12) & 0x7f) + uVar6 * 0x80;
              uVar22 = uVar10;
            } while ((char)*(byte *)(lVar19 + uVar12) < '\0');
            uVar8 = _DAT_005ddc70;
            if (cVar5 == '/') {
              uVar30 = uVar30 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
              *(uint *)(lVar26 + 0x70) = uVar30;
              *(uint *)(lVar2 + lVar27 * 0x18 + 0x70) = uVar10 + uVar6;
            }
            else {
              if (cVar5 == '\x7f') {
                lVar28 = *(long *)(lVar2 + lVar27 * 0x18 + 0x68);
                local_18 = (undefined8 *)(lVar28 + uVar12);
                local_10 = uVar6;
                if ((((3 < uVar6) && (*(char *)((long)local_18 + 1) == 'C')) &&
                    (*(char *)((long)local_18 + 2) == '\x02')) &&
                   (*(char *)((long)local_18 + 3) == '\x02')) {
                  if (*(char *)((long)local_18 + 4) == '\b') {
                    if (uVar6 < 0x46) {
                      uVar30 = uVar6 + 1;
                      if ((&DAT_005ddc70 < (undefined1 *)(lVar28 + uVar12 + 0x10) &&
                           local_18 < &DAT_005ddc80) || (uVar30 < 0x10)) {
                        lVar28 = (ulong)uVar6 + 1;
                        lVar19 = 1;
                        _DAT_005ddc70 = CONCAT71(_DAT_005ddc71,*(undefined1 *)local_18);
                        uVar12 = (ulong)uVar6 & 7;
                        if (lVar28 != 1) {
                          lVar24 = lVar19;
                          if ((uVar6 & 7) != 0) {
                            if (uVar12 != 1) {
                              if (uVar12 != 2) {
                                if (uVar12 != 3) {
                                  if (uVar12 != 4) {
                                    if (uVar12 != 5) {
                                      if (uVar12 != 6) {
                                        lVar19 = 2;
                                        _DAT_005ddc72 = SUB86(uVar8,2);
                                        _DAT_005ddc70 =
                                             CONCAT11(*(undefined1 *)((long)local_18 + 1),
                                                      *(undefined1 *)local_18);
                                      }
                                      (&DAT_005ddc70)[lVar19] =
                                           *(undefined1 *)((long)local_18 + lVar19);
                                      lVar19 = lVar19 + 1;
                                    }
                                    (&DAT_005ddc70)[lVar19] =
                                         *(undefined1 *)((long)local_18 + lVar19);
                                    lVar19 = lVar19 + 1;
                                  }
                                  (&DAT_005ddc70)[lVar19] = *(undefined1 *)((long)local_18 + lVar19)
                                  ;
                                  lVar19 = lVar19 + 1;
                                }
                                (&DAT_005ddc70)[lVar19] = *(undefined1 *)((long)local_18 + lVar19);
                                lVar19 = lVar19 + 1;
                              }
                              (&DAT_005ddc70)[lVar19] = *(undefined1 *)((long)local_18 + lVar19);
                              lVar19 = lVar19 + 1;
                            }
                            (&DAT_005ddc70)[lVar19] = *(undefined1 *)((long)local_18 + lVar19);
                            lVar24 = lVar19 + 1;
                            if (lVar19 + 1 == lVar28) goto LAB_001d754c;
                          }
                          do {
                            (&DAT_005ddc70)[lVar24] = *(undefined1 *)((long)local_18 + lVar24);
                            (&DAT_005ddc71)[lVar24] = *(undefined1 *)((long)local_18 + lVar24 + 1);
                            lVar19 = lVar24 + 8;
                            (&DAT_005ddc72)[lVar24] = *(undefined1 *)((long)local_18 + lVar24 + 2);
                            (&DAT_005ddc73)[lVar24] = *(undefined1 *)((long)local_18 + lVar24 + 3);
                            (&DAT_005ddc74)[lVar24] = *(undefined1 *)((long)local_18 + lVar24 + 4);
                            (&DAT_005ddc75)[lVar24] = *(undefined1 *)((long)local_18 + lVar24 + 5);
                            (&DAT_005ddc76)[lVar24] = *(undefined1 *)((long)local_18 + lVar24 + 6);
                            (&DAT_005ddc77)[lVar24] = *(undefined1 *)((long)local_18 + lVar24 + 7);
                            lVar24 = lVar19;
                          } while (lVar19 != lVar28);
                        }
                      }
                      else {
                        _DAT_005ddc78 = local_18[1];
                        _DAT_005ddc70 = *local_18;
                        iVar11 = (uVar6 - 0xf >> 4) + 1;
                        uVar22 = iVar11 * 0x10;
                        if (iVar11 != 1) {
                          uRam00000000005ddc88 = local_18[3];
                          _DAT_005ddc80 = local_18[2];
                          if (iVar11 != 2) {
                            uRam00000000005ddc98 = local_18[5];
                            _DAT_005ddc90 = local_18[4];
                            if (iVar11 == 4) {
                              uRam00000000005ddca8 = local_18[7];
                              _DAT_005ddca0 = local_18[6];
                            }
                          }
                        }
                        uVar12 = (ulong)uVar22;
                        if (uVar22 != uVar30) {
                          (&DAT_005ddc70)[uVar12] = *(undefined1 *)((long)local_18 + uVar12);
                          if (uVar22 + 1 < uVar30) {
                            (&DAT_005ddc70)[uVar22 + 1] =
                                 *(undefined1 *)((long)local_18 + uVar12 + 1);
                            if (uVar22 + 2 < uVar30) {
                              (&DAT_005ddc70)[uVar22 + 2] =
                                   *(undefined1 *)((long)local_18 + uVar12 + 2);
                              if (uVar22 + 3 < uVar30) {
                                (&DAT_005ddc70)[uVar22 + 3] =
                                     *(undefined1 *)((long)local_18 + uVar12 + 3);
                                if (uVar22 + 4 < uVar30) {
                                  (&DAT_005ddc70)[uVar22 + 4] =
                                       *(undefined1 *)((long)local_18 + uVar12 + 4);
                                  if (uVar22 + 5 < uVar30) {
                                    (&DAT_005ddc70)[uVar22 + 5] =
                                         *(undefined1 *)((long)local_18 + uVar12 + 5);
                                    if (uVar22 + 6 < uVar30) {
                                      (&DAT_005ddc70)[uVar22 + 6] =
                                           *(undefined1 *)((long)local_18 + uVar12 + 6);
                                      if (uVar22 + 7 < uVar30) {
                                        (&DAT_005ddc70)[uVar22 + 7] =
                                             *(undefined1 *)((long)local_18 + uVar12 + 7);
                                        if (uVar22 + 8 < uVar30) {
                                          (&DAT_005ddc70)[uVar22 + 8] =
                                               *(undefined1 *)((long)local_18 + uVar12 + 8);
                                          if (uVar22 + 9 < uVar30) {
                                            (&DAT_005ddc70)[uVar22 + 9] =
                                                 *(undefined1 *)((long)local_18 + uVar12 + 9);
                                            if (uVar22 + 10 < uVar30) {
                                              (&DAT_005ddc70)[uVar22 + 10] =
                                                   *(undefined1 *)((long)local_18 + uVar12 + 10);
                                              if (uVar22 + 0xb < uVar30) {
                                                (&DAT_005ddc70)[uVar22 + 0xb] =
                                                     *(undefined1 *)((long)local_18 + uVar12 + 0xb);
                                                if (uVar22 + 0xc < uVar30) {
                                                  (&DAT_005ddc70)[uVar22 + 0xc] =
                                                       *(undefined1 *)
                                                        ((long)local_18 + uVar12 + 0xc);
                                                  if (uVar22 + 0xd < uVar30) {
                                                    (&DAT_005ddc70)[uVar22 + 0xd] =
                                                         *(undefined1 *)
                                                          ((long)local_18 + uVar12 + 0xd);
                                                    if (uVar22 + 0xe < uVar30) {
                                                      (&DAT_005ddc70)[uVar22 + 0xe] =
                                                           *(undefined1 *)
                                                            ((long)local_18 + uVar12 + 0xe);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LAB_001d754c:
                      local_18 = (undefined8 *)&DAT_005ddc70;
                      FUN_0012871c(param_1,&local_18);
                      goto LAB_001d7358;
                    }
                  }
                  else if (((*(char *)((long)local_18 + 4) == '\n') && (6 < uVar6)) &&
                          (*(byte *)((long)local_18 + 5) < 0x80)) {
                    MaSndDrv_SetWtWave(param_1,(uint)*(byte *)((long)local_18 + 5),0,
                                       (uchar *)((long)local_18 + 7),uVar6 - 6);
LAB_001d7358:
                    cVar16 = *(char *)(lVar26 + 0x3c);
                    uVar30 = *(uint *)(lVar26 + 0x70);
                    uVar10 = *(uint *)(lVar2 + lVar27 * 0x18 + 0x70);
                  }
                }
              }
              *(uint *)(lVar2 + lVar27 * 0x18 + 0x70) = uVar10 + uVar6;
            }
            uVar29 = uVar30 >> (ulong)(uVar29 & 0x1f);
            goto joined_r0x001d6fec;
          }
switchD_001d6ef4_caseD_f4:
          uVar29 = uVar30 >> (ulong)(uVar29 & 0x1f);
joined_r0x001d6fec:
          if (cVar16 == '\x01') {
            if ((uVar29 & 1) == 0) goto LAB_001d6be8;
            uVar22 = 0;
            lVar28 = lVar2 + uVar14 * 0x18;
            uVar10 = *(uint *)(lVar28 + 0x70);
            uVar3 = *(uint *)(lVar28 + 100);
            uVar6 = uVar3 - uVar10 & 3;
            uVar29 = uVar10;
            if (uVar6 == 0) goto LAB_001d70a4;
            if (uVar3 <= uVar10) goto LAB_001d7264;
            uVar29 = uVar10 + 1;
            *(uint *)(lVar28 + 0x70) = uVar29;
            bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar10);
            uVar22 = bVar4 & 0x7f;
            if (bVar4 < 0x80) goto LAB_001d7134;
            if (uVar6 == 1) goto LAB_001d70a4;
            uVar13 = uVar29;
            if (uVar6 != 2) {
              uVar13 = uVar10 + 2;
              *(uint *)(lVar28 + 0x70) = uVar13;
              bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar29);
              uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
              if (bVar4 < 0x80) goto LAB_001d7134;
            }
            uVar29 = uVar13 + 1;
            *(uint *)(lVar28 + 0x70) = uVar29;
            bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar13);
            uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
            if (0x7f < bVar4) goto LAB_001d70a4;
            goto LAB_001d7134;
          }
          if ((uVar29 & 1) == 0) {
            plVar18 = *(long **)(lVar26 + 0x388);
            plVar20 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
            lVar28 = *plVar20;
            lVar27 = plVar20[1];
            goto LAB_001d7228;
          }
          uVar22 = 0;
          lVar28 = lVar2 + uVar14 * 0x18;
          uVar10 = *(uint *)(lVar28 + 0x70);
          uVar3 = *(uint *)(lVar28 + 100);
          uVar6 = uVar3 - uVar10 & 3;
          uVar29 = uVar10;
          if (uVar6 == 0) {
LAB_001d6d38:
            do {
              if (uVar3 <= uVar29) goto LAB_001d7204;
              *(uint *)(lVar28 + 0x70) = uVar29 + 1;
              bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar29);
              uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
              if (bVar4 < 0x80) break;
              *(uint *)(lVar28 + 0x70) = uVar29 + 2;
              bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)(uVar29 + 1));
              uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
              if (bVar4 < 0x80) break;
              *(uint *)(lVar28 + 0x70) = uVar29 + 3;
              bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)(uVar29 + 2));
              uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
              if (bVar4 < 0x80) break;
              uVar6 = uVar29 + 3;
              uVar29 = uVar29 + 4;
              *(uint *)(lVar28 + 0x70) = uVar29;
              bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar6);
              uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
            } while (0x7f < bVar4);
          }
          else {
            if (uVar3 <= uVar10) goto LAB_001d7204;
            uVar29 = uVar10 + 1;
            *(uint *)(lVar28 + 0x70) = uVar29;
            bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar10);
            uVar22 = bVar4 & 0x7f;
            if (0x7f < bVar4) {
              if (uVar6 != 1) {
                uVar13 = uVar29;
                if (uVar6 != 2) {
                  uVar13 = uVar10 + 2;
                  *(uint *)(lVar28 + 0x70) = uVar13;
                  bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar29);
                  uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
                  if (bVar4 < 0x80) goto LAB_001d6dc8;
                }
                uVar29 = uVar13 + 1;
                *(uint *)(lVar28 + 0x70) = uVar29;
                bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar13);
                uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
                if (bVar4 < 0x80) goto LAB_001d6dc8;
              }
              goto LAB_001d6d38;
            }
          }
LAB_001d6dc8:
          lVar28 = lVar2 + uVar14 * 0x18;
          *(uint *)(lVar28 + 0x74) = *(int *)(lVar28 + 0x74) + uVar22;
          plVar23 = *(long **)(lVar26 + 0x380);
          plVar18 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
          lVar28 = *plVar18;
          *(long *)(lVar28 + 8) = plVar18[1];
          plVar21 = (long *)plVar18[1];
          *plVar21 = lVar28;
          uVar30 = (uint)*(byte *)(plVar18 + 2) +
                   *(int *)(lVar2 + (ulong)*(byte *)(plVar18 + 2) * 0x18 + 0x74) * 0x20;
          *(uint *)((long)plVar18 + 0x14) = uVar30;
          plVar20 = plVar23;
          if ((plVar23 != plVar21) && (plVar20 = plVar21, *(uint *)((long)plVar21 + 0x14) < uVar30))
          {
            do {
              plVar21 = (long *)plVar21[1];
              plVar20 = plVar23;
              if (plVar23 == plVar21) break;
              plVar20 = plVar21;
            } while (*(uint *)((long)plVar21 + 0x14) < uVar30);
            lVar28 = *plVar20;
          }
          *(long **)(lVar28 + 8) = plVar18;
          *plVar18 = lVar28;
          *plVar20 = (long)plVar18;
          uVar30 = *(uint *)(lVar26 + 0x70);
          plVar18[1] = (long)plVar20;
          if (uVar30 == 0) break;
        } while( true );
      }
      uVar8 = 0;
      goto LAB_001d6e64;
    }
    uVar8 = 0xffffffff;
  }
LAB_001d6e64:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
  while( true ) {
    *(uint *)(lVar28 + 0x70) = uVar29 + 2;
    bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)(uVar29 + 1));
    uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
    if (bVar4 < 0x80) break;
    *(uint *)(lVar28 + 0x70) = uVar29 + 3;
    bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)(uVar29 + 2));
    uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
    if (bVar4 < 0x80) break;
    uVar6 = uVar29 + 3;
    uVar29 = uVar29 + 4;
    *(uint *)(lVar28 + 0x70) = uVar29;
    bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar6);
    uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
    if (bVar4 < 0x80) break;
LAB_001d70a4:
    if (uVar3 <= uVar29) goto LAB_001d7264;
    *(uint *)(lVar28 + 0x70) = uVar29 + 1;
    bVar4 = *(byte *)(*(long *)(lVar28 + 0x68) + (ulong)uVar29);
    uVar22 = (bVar4 & 0x7f) + uVar22 * 0x80;
    if (bVar4 < 0x80) break;
  }
LAB_001d7134:
  lVar28 = lVar2 + uVar14 * 0x18;
  *(uint *)(lVar28 + 0x74) = *(int *)(lVar28 + 0x74) + uVar22;
  goto LAB_001d6be8;
LAB_001d7264:
  uVar30 = uVar30 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
  *(uint *)(lVar26 + 0x70) = uVar30;
  goto LAB_001d6be8;
LAB_001d7204:
  plVar18 = *(long **)(lVar26 + 0x388);
  uVar30 = uVar30 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
  plVar20 = *(long **)(*(long *)(lVar26 + 0x378) + 8);
  lVar28 = *plVar20;
  lVar27 = plVar20[1];
  *(uint *)(lVar26 + 0x70) = uVar30;
LAB_001d7228:
  *(long *)(lVar28 + 8) = lVar27;
  *(long *)plVar20[1] = lVar28;
  lVar28 = *plVar18;
  *(long **)(lVar28 + 8) = plVar20;
  *plVar20 = lVar28;
  *plVar18 = (long)plVar20;
  plVar20[1] = (long)plVar18;
  goto LAB_001d6be8;
}

