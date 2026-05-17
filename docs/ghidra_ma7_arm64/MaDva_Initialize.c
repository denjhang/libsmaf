/* MaDva_Initialize @ 001a64b0 3632B */


/* YAMAHA::MaDva_Initialize(unsigned int) */

void YAMAHA::MaDva_Initialize(uint param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (param_1 == 3) {
    uVar8 = 0x1f;
  }
  else {
    uVar8 = 0x40;
    if (param_1 != 5) {
      uVar8 = 0x20;
    }
  }
  iVar9 = 0;
  puVar7 = &DAT_005d87c0;
  DAT_005d87a0 = &DAT_005d87a8;
  uVar4 = uVar8;
  if (*(uint *)PTR_gFmVoiceNum_005673e8 < uVar8) {
    uVar4 = *(uint *)PTR_gFmVoiceNum_005673e8;
  }
  DAT_005d87a8 = param_1;
  if (*(uint *)PTR_gWtVoiceNum_00567d40 < uVar8) {
    uVar8 = *(uint *)PTR_gWtVoiceNum_00567d40;
  }
  do {
    cVar5 = (char)iVar9;
    *(char *)(puVar7 + 3) = cVar5;
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + -2) = 0;
    *(undefined8 *)(puVar7 + -4) = 0;
    puVar7[1] = 1;
    puVar7[2] = 2;
    puVar7[8] = 0;
    *(undefined8 *)(puVar7 + 6) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    puVar7[9] = 1;
    puVar7[10] = 2;
    *(char *)(puVar7 + 0xb) = cVar5 + '\x01';
    puVar7[0x10] = 0;
    *(undefined8 *)(puVar7 + 0xe) = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    iVar9 = iVar9 + 8;
    puVar7[0x11] = 1;
    puVar7[0x12] = 2;
    *(char *)(puVar7 + 0x13) = cVar5 + '\x02';
    puVar7[0x18] = 0;
    *(undefined8 *)(puVar7 + 0x16) = 0;
    *(undefined8 *)(puVar7 + 0x14) = 0;
    puVar7[0x19] = 1;
    puVar7[0x1a] = 2;
    *(char *)(puVar7 + 0x1b) = cVar5 + '\x03';
    puVar7[0x20] = 0;
    *(undefined8 *)(puVar7 + 0x1e) = 0;
    *(undefined8 *)(puVar7 + 0x1c) = 0;
    puVar7[0x21] = 1;
    puVar7[0x22] = 2;
    *(char *)(puVar7 + 0x23) = cVar5 + '\x04';
    puVar7[0x28] = 0;
    *(undefined8 *)(puVar7 + 0x26) = 0;
    *(undefined8 *)(puVar7 + 0x24) = 0;
    puVar7[0x29] = 1;
    puVar7[0x2a] = 2;
    *(char *)(puVar7 + 0x2b) = cVar5 + '\x05';
    puVar7[0x30] = 0;
    *(undefined8 *)(puVar7 + 0x2e) = 0;
    *(undefined8 *)(puVar7 + 0x2c) = 0;
    puVar7[0x31] = 1;
    puVar7[0x32] = 2;
    *(char *)(puVar7 + 0x33) = cVar5 + '\x06';
    puVar7[0x38] = 0;
    *(undefined8 *)(puVar7 + 0x36) = 0;
    *(undefined8 *)(puVar7 + 0x34) = 0;
    puVar7[0x39] = 1;
    puVar7[0x3a] = 2;
    *(char *)(puVar7 + 0x3b) = cVar5 + '\a';
    puVar7 = puVar7 + 0x40;
  } while (iVar9 != 0x40);
  iVar9 = 0;
  puVar7 = &DAT_005d9020;
  do {
    cVar5 = (char)iVar9;
    *(char *)(puVar7 + 3) = cVar5;
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + -2) = 0;
    *(undefined8 *)(puVar7 + -4) = 0;
    puVar7[1] = 1;
    puVar7[2] = 2;
    puVar7[8] = 0;
    *(undefined8 *)(puVar7 + 6) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    puVar7[9] = 1;
    puVar7[10] = 2;
    *(char *)(puVar7 + 0xb) = cVar5 + '\x01';
    puVar7[0x10] = 0;
    *(undefined8 *)(puVar7 + 0xe) = 0;
    *(undefined8 *)(puVar7 + 0xc) = 0;
    iVar9 = iVar9 + 8;
    puVar7[0x11] = 1;
    puVar7[0x12] = 2;
    *(char *)(puVar7 + 0x13) = cVar5 + '\x02';
    puVar7[0x18] = 0;
    *(undefined8 *)(puVar7 + 0x16) = 0;
    *(undefined8 *)(puVar7 + 0x14) = 0;
    puVar7[0x19] = 1;
    puVar7[0x1a] = 2;
    *(char *)(puVar7 + 0x1b) = cVar5 + '\x03';
    puVar7[0x20] = 0;
    *(undefined8 *)(puVar7 + 0x1e) = 0;
    *(undefined8 *)(puVar7 + 0x1c) = 0;
    puVar7[0x21] = 1;
    puVar7[0x22] = 2;
    *(char *)(puVar7 + 0x23) = cVar5 + '\x04';
    puVar7[0x28] = 0;
    *(undefined8 *)(puVar7 + 0x26) = 0;
    *(undefined8 *)(puVar7 + 0x24) = 0;
    puVar7[0x29] = 1;
    puVar7[0x2a] = 2;
    *(char *)(puVar7 + 0x2b) = cVar5 + '\x05';
    puVar7[0x30] = 0;
    *(undefined8 *)(puVar7 + 0x2e) = 0;
    *(undefined8 *)(puVar7 + 0x2c) = 0;
    puVar7[0x31] = 1;
    puVar7[0x32] = 2;
    *(char *)(puVar7 + 0x33) = cVar5 + '\x06';
    puVar7[0x38] = 0;
    *(undefined8 *)(puVar7 + 0x36) = 0;
    *(undefined8 *)(puVar7 + 0x34) = 0;
    puVar7[0x39] = 1;
    puVar7[0x3a] = 2;
    *(char *)(puVar7 + 0x3b) = cVar5 + '\a';
    puVar7 = puVar7 + 0x40;
  } while (iVar9 != 0x40);
  DAT_005d9870 = 1;
  DAT_005d987c = 1;
  DAT_005d9888 = 1;
  DAT_005d9894 = 1;
  DAT_005d98a0 = 1;
  uVar10 = (ulong)uVar4;
  DAT_005d98ac = 1;
  DAT_005d98b8 = 1;
  DAT_005d98c4 = 1;
  DAT_005d98d0 = 1;
  DAT_005d9874 = 0;
  DAT_005d9878 = 0;
  DAT_005d9875 = 0;
  DAT_005d9880 = 0;
  DAT_005d9884 = 0;
  DAT_005d9881 = 0;
  DAT_005d988c = 0;
  DAT_005d9890 = 0;
  DAT_005d988d = 0;
  DAT_005d9898 = 0;
  DAT_005d989c = 0;
  DAT_005d9899 = 0;
  DAT_005d98a4 = 0;
  DAT_005d98a8 = 0;
  DAT_005d98a5 = 0;
  DAT_005d98b0 = 0;
  DAT_005d98b4 = 0;
  DAT_005d98b1 = 0;
  DAT_005d98bc = 0;
  DAT_005d98c0 = 0;
  DAT_005d98bd = 0;
  DAT_005d98c8 = 0;
  DAT_005d98cc = 0;
  DAT_005d98c9 = 0;
  DAT_005d98d4 = 0;
  DAT_005d98dc = 1;
  DAT_005d98e8 = 1;
  DAT_005d98f4 = 1;
  DAT_005d9900 = 1;
  DAT_005d990c = 1;
  DAT_005d9918 = 1;
  DAT_005d9924 = 1;
  DAT_005d9930 = 1;
  DAT_005d98d8 = 0;
  DAT_005d98d5 = 0;
  DAT_005d98e0 = 0;
  DAT_005d98e4 = 0;
  DAT_005d98e1 = 0;
  DAT_005d98ec = 0;
  DAT_005d98f0 = 0;
  DAT_005d98ed = 0;
  DAT_005d98f8 = 0;
  DAT_005d98fc = 0;
  DAT_005d98f9 = 0;
  DAT_005d9904 = 0;
  DAT_005d9908 = 0;
  DAT_005d9905 = 0;
  DAT_005d9910 = 0;
  DAT_005d9914 = 0;
  DAT_005d9911 = 0;
  DAT_005d991c = 0;
  DAT_005d9920 = 0;
  DAT_005d991d = 0;
  DAT_005d9928 = 0;
  DAT_005d992c = 0;
  DAT_005d9929 = 0;
  DAT_005d9934 = 0;
  DAT_005d9938 = 0;
  DAT_005d9935 = 0;
  DAT_005d993c = 1;
  DAT_005d9948 = 1;
  DAT_005d9954 = 1;
  DAT_005d9960 = 1;
  DAT_005d996c = 1;
  DAT_005d9978 = 1;
  DAT_005d9984 = 1;
  DAT_005d9990 = 1;
  DAT_005d999c = 1;
  DAT_005d9940 = 0;
  DAT_005d9944 = 0;
  DAT_005d9941 = 0;
  DAT_005d994c = 0;
  DAT_005d9950 = 0;
  DAT_005d994d = 0;
  DAT_005d9958 = 0;
  DAT_005d995c = 0;
  DAT_005d9959 = 0;
  DAT_005d9964 = 0;
  DAT_005d9968 = 0;
  DAT_005d9965 = 0;
  DAT_005d9970 = 0;
  DAT_005d9974 = 0;
  DAT_005d9971 = 0;
  DAT_005d997c = 0;
  DAT_005d9980 = 0;
  DAT_005d997d = 0;
  DAT_005d9988 = 0;
  DAT_005d998c = 0;
  DAT_005d9989 = 0;
  DAT_005d9994 = 0;
  DAT_005d9998 = 0;
  DAT_005d9995 = 0;
  DAT_005d99a0 = 0;
  DAT_005d99a8 = 1;
  DAT_005d99b4 = 1;
  DAT_005d99c0 = 1;
  DAT_005d99cc = 1;
  DAT_005d99d8 = 1;
  DAT_005d99e4 = 1;
  DAT_005d99f0 = 1;
  DAT_005d99fc = 1;
  DAT_005d99a4 = 0;
  DAT_005d99a1 = 0;
  DAT_005d99ac = 0;
  DAT_005d99b0 = 0;
  DAT_005d99ad = 0;
  DAT_005d99b8 = 0;
  DAT_005d99bc = 0;
  DAT_005d99b9 = 0;
  DAT_005d99c4 = 0;
  DAT_005d99c8 = 0;
  DAT_005d99c5 = 0;
  DAT_005d99d0 = 0;
  DAT_005d99d4 = 0;
  DAT_005d99d1 = 0;
  DAT_005d99dc = 0;
  DAT_005d99e0 = 0;
  DAT_005d99dd = 0;
  DAT_005d99e8 = 0;
  DAT_005d99ec = 0;
  DAT_005d99e9 = 0;
  DAT_005d99f4 = 0;
  DAT_005d99f8 = 0;
  DAT_005d99f5 = 0;
  DAT_005d9a00 = 0;
  DAT_005d9a04 = 0;
  DAT_005d9a01 = 0;
  DAT_005d9a08 = 1;
  DAT_005d9a14 = 1;
  DAT_005d9a20 = 1;
  DAT_005d9a2c = 1;
  DAT_005d9a38 = 1;
  DAT_005d9a44 = 1;
  DAT_005d9a50 = 1;
  DAT_005d9a5c = 1;
  DAT_005d9a68 = 1;
  DAT_005d9a0c = 0;
  DAT_005d9a10 = 0;
  DAT_005d9a0d = 0;
  DAT_005d9a18 = 0;
  DAT_005d9a1c = 0;
  DAT_005d9a19 = 0;
  DAT_005d9a24 = 0;
  DAT_005d9a28 = 0;
  DAT_005d9a25 = 0;
  DAT_005d9a30 = 0;
  DAT_005d9a34 = 0;
  DAT_005d9a31 = 0;
  DAT_005d9a3c = 0;
  DAT_005d9a40 = 0;
  DAT_005d9a3d = 0;
  DAT_005d9a48 = 0;
  DAT_005d9a4c = 0;
  DAT_005d9a49 = 0;
  DAT_005d9a54 = 0;
  DAT_005d9a58 = 0;
  DAT_005d9a55 = 0;
  DAT_005d9a60 = 0;
  DAT_005d9a64 = 0;
  DAT_005d9a61 = 0;
  DAT_005d9a6c = 0;
  DAT_005d9a74 = 1;
  DAT_005d9a80 = 1;
  DAT_005d9a8c = 1;
  DAT_005d9a98 = 1;
  DAT_005d9aa4 = 1;
  DAT_005d9ab0 = 1;
  DAT_005d9abc = 1;
  DAT_005d9ac8 = 1;
  DAT_005d9a70 = 0;
  DAT_005d9a6d = 0;
  DAT_005d9a78 = 0;
  DAT_005d9a7c = 0;
  DAT_005d9a79 = 0;
  DAT_005d9a84 = 0;
  DAT_005d9a88 = 0;
  DAT_005d9a85 = 0;
  DAT_005d9a90 = 0;
  DAT_005d9a94 = 0;
  DAT_005d9a91 = 0;
  DAT_005d9a9c = 0;
  DAT_005d9aa0 = 0;
  DAT_005d9a9d = 0;
  DAT_005d9aa8 = 0;
  DAT_005d9aac = 0;
  DAT_005d9aa9 = 0;
  DAT_005d9ab4 = 0;
  DAT_005d9ab8 = 0;
  DAT_005d9ab5 = 0;
  DAT_005d9ac0 = 0;
  DAT_005d9ac4 = 0;
  DAT_005d9ac1 = 0;
  DAT_005d9acc = 0;
  DAT_005d9ad0 = 0;
  DAT_005d9acd = 0;
  DAT_005d9ad4 = 1;
  DAT_005d9ae0 = 1;
  DAT_005d9aec = 1;
  DAT_005d9af8 = 1;
  DAT_005d9b04 = 1;
  DAT_005d9b10 = 1;
  DAT_005d9b1c = 1;
  DAT_005d9b28 = 1;
  DAT_005d9b34 = 1;
  DAT_005d9ad8 = 0;
  DAT_005d9adc = 0;
  DAT_005d9ad9 = 0;
  DAT_005d9ae4 = 0;
  DAT_005d9ae8 = 0;
  DAT_005d9ae5 = 0;
  DAT_005d9af0 = 0;
  DAT_005d9af4 = 0;
  DAT_005d9af1 = 0;
  DAT_005d9afc = 0;
  DAT_005d9b00 = 0;
  DAT_005d9afd = 0;
  DAT_005d9b08 = 0;
  DAT_005d9b0c = 0;
  DAT_005d9b09 = 0;
  DAT_005d9b14 = 0;
  DAT_005d9b18 = 0;
  DAT_005d9b15 = 0;
  DAT_005d9b20 = 0;
  DAT_005d9b24 = 0;
  DAT_005d9b21 = 0;
  DAT_005d9b2c = 0;
  DAT_005d9b30 = 0;
  DAT_005d9b2d = 0;
  DAT_005d9b38 = 0;
  DAT_005dbb70 = 0xffffffffffffffff;
  DAT_005dbb78 = 0xffffffffffffffff;
  DAT_005d9b3c = 0;
  DAT_005d9b39 = 0;
  DAT_005dbb80 = 0xffffffffffffffff;
  DAT_005d9b40 = 1;
  DAT_005d9b44 = 0;
  DAT_005d9b48 = 0;
  DAT_005d9b45 = 0;
  DAT_005d9b4c = 1;
  DAT_005d9b50 = 0;
  DAT_005d9b54 = 0;
  DAT_005d9b51 = 0;
  DAT_005d9b58 = 1;
  DAT_005d9b5c = 0;
  DAT_005d9b60 = 0;
  DAT_005d9b5d = 0;
  DAT_005d9b64 = 1;
  DAT_005d9b68 = 0;
  DAT_005d9b6c = 0;
  DAT_005d9b69 = 0;
  memset(&DAT_005dbb88,0xff,0x600);
  memset(&DAT_005d9b70,0,0x2000);
  lVar1 = uVar10 + 1;
  if (uVar10 != 0) {
    DAT_005d87d8 = &DAT_005d87b0;
    DAT_005d87d0 = &DAT_005d87f0;
    if (lVar1 != 2) {
      DAT_005d87f8 = &DAT_005d87d0;
      DAT_005d87f0 = &DAT_005d8810;
      if (lVar1 != 3) {
        DAT_005d8818 = &DAT_005d87f0;
        DAT_005d8810 = &DAT_005d8830;
        if (lVar1 != 4) {
          DAT_005d8838 = &DAT_005d8810;
          DAT_005d8830 = &DAT_005d8850;
          if (lVar1 != 5) {
            DAT_005d8858 = &DAT_005d8830;
            DAT_005d8850 = &DAT_005d8870;
            if (lVar1 != 6) {
              DAT_005d8878 = &DAT_005d8850;
              DAT_005d8870 = &DAT_005d8890;
              if (lVar1 != 7) {
                DAT_005d8898 = &DAT_005d8870;
                DAT_005d8890 = &DAT_005d88b0;
                if (lVar1 != 8) {
                  DAT_005d88b8 = &DAT_005d8890;
                  DAT_005d88b0 = &DAT_005d88d0;
                  if (lVar1 != 9) {
                    DAT_005d88d8 = &DAT_005d88b0;
                    DAT_005d88d0 = &DAT_005d88f0;
                    if (lVar1 != 10) {
                      DAT_005d88f8 = &DAT_005d88d0;
                      DAT_005d88f0 = &DAT_005d8910;
                      if (lVar1 != 0xb) {
                        DAT_005d8918 = &DAT_005d88f0;
                        DAT_005d8910 = &DAT_005d8930;
                        if (lVar1 != 0xc) {
                          DAT_005d8938 = &DAT_005d8910;
                          DAT_005d8930 = &DAT_005d8950;
                          if (lVar1 != 0xd) {
                            DAT_005d8958 = &DAT_005d8930;
                            DAT_005d8950 = &DAT_005d8970;
                            if (lVar1 != 0xe) {
                              DAT_005d8978 = &DAT_005d8950;
                              DAT_005d8970 = &DAT_005d8990;
                              if (lVar1 != 0xf) {
                                DAT_005d8998 = &DAT_005d8970;
                                DAT_005d8990 = &DAT_005d89b0;
                                if (lVar1 != 0x10) {
                                  DAT_005d89b8 = &DAT_005d8990;
                                  DAT_005d89b0 = &DAT_005d89d0;
                                  if (lVar1 != 0x11) {
                                    DAT_005d89d8 = &DAT_005d89b0;
                                    DAT_005d89d0 = &DAT_005d89f0;
                                    if (lVar1 != 0x12) {
                                      DAT_005d89f8 = &DAT_005d89d0;
                                      DAT_005d89f0 = &DAT_005d8a10;
                                      if (lVar1 != 0x13) {
                                        DAT_005d8a18 = &DAT_005d89f0;
                                        DAT_005d8a10 = &DAT_005d8a30;
                                        if (lVar1 != 0x14) {
                                          DAT_005d8a38 = &DAT_005d8a10;
                                          DAT_005d8a30 = &DAT_005d8a50;
                                          if (lVar1 != 0x15) {
                                            DAT_005d8a58 = &DAT_005d8a30;
                                            DAT_005d8a50 = &DAT_005d8a70;
                                            if (lVar1 != 0x16) {
                                              DAT_005d8a78 = &DAT_005d8a50;
                                              DAT_005d8a70 = &DAT_005d8a90;
                                              if (lVar1 != 0x17) {
                                                DAT_005d8a98 = &DAT_005d8a70;
                                                DAT_005d8a90 = &DAT_005d8ab0;
                                                if (lVar1 != 0x18) {
                                                  DAT_005d8ab8 = &DAT_005d8a90;
                                                  DAT_005d8ab0 = &DAT_005d8ad0;
                                                  if (lVar1 != 0x19) {
                                                    DAT_005d8ad8 = &DAT_005d8ab0;
                                                    DAT_005d8ad0 = &DAT_005d8af0;
                                                    if (lVar1 != 0x1a) {
                                                      DAT_005d8af8 = &DAT_005d8ad0;
                                                      DAT_005d8af0 = &DAT_005d8b10;
                                                      if (lVar1 != 0x1b) {
                                                        DAT_005d8b18 = &DAT_005d8af0;
                                                        DAT_005d8b10 = &DAT_005d8b30;
                                                        if (lVar1 != 0x1c) {
                                                          DAT_005d8b38 = &DAT_005d8b10;
                                                          DAT_005d8b30 = &DAT_005d8b50;
                                                          if (lVar1 != 0x1d) {
                                                            DAT_005d8b58 = &DAT_005d8b30;
                                                            DAT_005d8b50 = &DAT_005d8b70;
                                                            if (lVar1 != 0x1e) {
                                                              DAT_005d8b78 = &DAT_005d8b50;
                                                              DAT_005d8b70 = &DAT_005d8b90;
                                                              if (lVar1 != 0x1f) {
                                                                DAT_005d8b98 = &DAT_005d8b70;
                                                                DAT_005d8b90 = &DAT_005d8bb0;
                                                                if (lVar1 != 0x20) {
                                                                  DAT_005d8bb8 = &DAT_005d8b90;
                                                                  DAT_005d8bb0 = &DAT_005d8bd0;
                                                                  if (lVar1 != 0x21) {
                                                                    DAT_005d8bd8 = &DAT_005d8bb0;
                                                                    DAT_005d8bd0 = &DAT_005d8bf0;
                                                                    if (lVar1 != 0x22) {
                                                                      DAT_005d8bf8 = &DAT_005d8bd0;
                                                                      DAT_005d8bf0 = &DAT_005d8c10;
                                                                      if (lVar1 != 0x23) {
                                                                        DAT_005d8c18 = &DAT_005d8bf0
                                                                        ;
                                                                        DAT_005d8c10 = &DAT_005d8c30
                                                                        ;
                                                                        if (lVar1 != 0x24) {
                                                                          DAT_005d8c38 = &
                                                  DAT_005d8c10;
                                                  DAT_005d8c30 = &DAT_005d8c50;
                                                  if (lVar1 != 0x25) {
                                                    DAT_005d8c58 = &DAT_005d8c30;
                                                    DAT_005d8c50 = &DAT_005d8c70;
                                                    if (lVar1 != 0x26) {
                                                      DAT_005d8c78 = &DAT_005d8c50;
                                                      DAT_005d8c70 = &DAT_005d8c90;
                                                      if (lVar1 != 0x27) {
                                                        DAT_005d8c98 = &DAT_005d8c70;
                                                        DAT_005d8c90 = &DAT_005d8cb0;
                                                        if (lVar1 != 0x28) {
                                                          DAT_005d8cb8 = &DAT_005d8c90;
                                                          DAT_005d8cb0 = &DAT_005d8cd0;
                                                          if (lVar1 != 0x29) {
                                                            DAT_005d8cd8 = &DAT_005d8cb0;
                                                            DAT_005d8cd0 = &DAT_005d8cf0;
                                                            if (lVar1 != 0x2a) {
                                                              DAT_005d8cf8 = &DAT_005d8cd0;
                                                              DAT_005d8cf0 = &DAT_005d8d10;
                                                              if (lVar1 != 0x2b) {
                                                                DAT_005d8d18 = &DAT_005d8cf0;
                                                                DAT_005d8d10 = &DAT_005d8d30;
                                                                if (lVar1 != 0x2c) {
                                                                  DAT_005d8d38 = &DAT_005d8d10;
                                                                  DAT_005d8d30 = &DAT_005d8d50;
                                                                  if (lVar1 != 0x2d) {
                                                                    DAT_005d8d58 = &DAT_005d8d30;
                                                                    DAT_005d8d50 = &DAT_005d8d70;
                                                                    if (lVar1 != 0x2e) {
                                                                      DAT_005d8d78 = &DAT_005d8d50;
                                                                      DAT_005d8d70 = &DAT_005d8d90;
                                                                      if (lVar1 != 0x2f) {
                                                                        DAT_005d8d98 = &DAT_005d8d70
                                                                        ;
                                                                        DAT_005d8d90 = &DAT_005d8db0
                                                                        ;
                                                                        if (lVar1 != 0x30) {
                                                                          DAT_005d8db8 = &
                                                  DAT_005d8d90;
                                                  DAT_005d8db0 = &DAT_005d8dd0;
                                                  if (lVar1 != 0x31) {
                                                    DAT_005d8dd8 = &DAT_005d8db0;
                                                    DAT_005d8dd0 = &DAT_005d8df0;
                                                    if (lVar1 != 0x32) {
                                                      DAT_005d8df8 = &DAT_005d8dd0;
                                                      DAT_005d8df0 = &DAT_005d8e10;
                                                      if (lVar1 != 0x33) {
                                                        DAT_005d8e18 = &DAT_005d8df0;
                                                        DAT_005d8e10 = &DAT_005d8e30;
                                                        if (lVar1 != 0x34) {
                                                          DAT_005d8e38 = &DAT_005d8e10;
                                                          DAT_005d8e30 = &DAT_005d8e50;
                                                          if (lVar1 != 0x35) {
                                                            DAT_005d8e58 = &DAT_005d8e30;
                                                            DAT_005d8e50 = &DAT_005d8e70;
                                                            if (lVar1 != 0x36) {
                                                              DAT_005d8e78 = &DAT_005d8e50;
                                                              DAT_005d8e70 = &DAT_005d8e90;
                                                              if (lVar1 != 0x37) {
                                                                DAT_005d8e98 = &DAT_005d8e70;
                                                                DAT_005d8e90 = &DAT_005d8eb0;
                                                                if (lVar1 != 0x38) {
                                                                  DAT_005d8eb8 = &DAT_005d8e90;
                                                                  DAT_005d8eb0 = &DAT_005d8ed0;
                                                                  if (lVar1 != 0x39) {
                                                                    DAT_005d8ed8 = &DAT_005d8eb0;
                                                                    DAT_005d8ed0 = &DAT_005d8ef0;
                                                                    if (lVar1 != 0x3a) {
                                                                      DAT_005d8ef8 = &DAT_005d8ed0;
                                                                      DAT_005d8ef0 = &DAT_005d8f10;
                                                                      if (lVar1 != 0x3b) {
                                                                        DAT_005d8f18 = &DAT_005d8ef0
                                                                        ;
                                                                        DAT_005d8f10 = &DAT_005d8f30
                                                                        ;
                                                                        if (lVar1 != 0x3c) {
                                                                          DAT_005d8f38 = &
                                                  DAT_005d8f10;
                                                  DAT_005d8f30 = &DAT_005d8f50;
                                                  if (lVar1 != 0x3d) {
                                                    DAT_005d8f58 = &DAT_005d8f30;
                                                    DAT_005d8f50 = &DAT_005d8f70;
                                                    if (lVar1 != 0x3e) {
                                                      DAT_005d8f78 = &DAT_005d8f50;
                                                      DAT_005d8f70 = &DAT_005d8f90;
                                                      if (lVar1 != 0x3f) {
                                                        DAT_005d8f98 = &DAT_005d8f70;
                                                        DAT_005d8f90 = &DAT_005d8fb0;
                                                        if (lVar1 == 0x41) {
                                                          DAT_005d8fb8 = &DAT_005d8f90;
                                                          DAT_005d8fb0 = &DAT_005d8fd0;
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
  lVar2 = uVar10 + 2;
  DAT_005dc188 = &DAT_005d87b0 + lVar2 * 4;
  DAT_005d87b0 = &DAT_005d87d0;
  DAT_005dc198 = &DAT_005d87b0 + uVar10 * 4;
  DAT_005d87b8 = DAT_005dc188;
  (&DAT_005d87b8)[lVar2 * 4] = (undefined8 *)0x0;
  DAT_005dc1a8 = &DAT_005d87b0 + lVar1 * 4;
  (&DAT_005d87b0)[lVar2 * 4] = &DAT_005d87b0;
  uVar10 = (ulong)uVar8;
  (&DAT_005d87b8)[lVar1 * 4] = DAT_005dc198;
  (&DAT_005d87b0)[lVar1 * 4] = (undefined8 *)0x0;
  if (uVar10 != 0) {
    puVar11 = &DAT_005d9030;
    puVar3 = &DAT_005d9010 + (ulong)uVar8 * 4;
    DAT_005d9038 = &DAT_005d9010;
    DAT_005d9030 = &DAT_005d9050;
    uVar6 = (ulong)uVar8 * 0x20 - 0x20 >> 5 & 7;
    if ((undefined8 **)puVar3 != &DAT_005d9030) {
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 != 2) {
            if (uVar6 != 3) {
              if (uVar6 != 4) {
                if (uVar6 != 5) {
                  if (uVar6 != 6) {
                    DAT_005d9058 = &DAT_005d9030;
                    DAT_005d9050 = &DAT_005d9070;
                    puVar11 = &DAT_005d9050;
                  }
                  puVar11[5] = puVar11;
                  puVar12 = puVar11 + 8;
                  puVar11 = puVar11 + 4;
                  *puVar11 = puVar12;
                }
                puVar11[5] = puVar11;
                puVar12 = puVar11 + 8;
                puVar11 = puVar11 + 4;
                *puVar11 = puVar12;
              }
              puVar11[5] = puVar11;
              puVar12 = puVar11 + 8;
              puVar11 = puVar11 + 4;
              *puVar11 = puVar12;
            }
            puVar11[5] = puVar11;
            puVar12 = puVar11 + 8;
            puVar11 = puVar11 + 4;
            *puVar11 = puVar12;
          }
          puVar11[5] = puVar11;
          puVar12 = puVar11 + 8;
          puVar11 = puVar11 + 4;
          *puVar11 = puVar12;
        }
        puVar11[5] = puVar11;
        puVar12 = puVar11 + 4;
        *puVar12 = puVar11 + 8;
        puVar11 = puVar12;
        if (puVar12 == puVar3) goto LAB_001a726c;
      }
      do {
        puVar11[5] = puVar11;
        puVar11[4] = puVar11 + 8;
        puVar11[9] = puVar11 + 4;
        puVar12 = puVar11 + 0x20;
        puVar11[8] = puVar11 + 0xc;
        puVar11[0xd] = puVar11 + 8;
        puVar11[0xc] = puVar11 + 0x10;
        puVar11[0x11] = puVar11 + 0xc;
        puVar11[0x10] = puVar11 + 0x14;
        puVar11[0x15] = puVar11 + 0x10;
        puVar11[0x14] = puVar11 + 0x18;
        puVar11[0x19] = puVar11 + 0x14;
        puVar11[0x18] = puVar11 + 0x1c;
        puVar11[0x1d] = puVar11 + 0x18;
        puVar11[0x1c] = puVar12;
        puVar11[0x21] = puVar11 + 0x1c;
        puVar11[0x20] = puVar11 + 0x24;
        puVar11 = puVar12;
      } while (puVar12 != puVar3);
    }
  }
LAB_001a726c:
  lVar1 = uVar10 + 0x45;
  lVar2 = uVar10 + 0x44;
  DAT_005d9010 = &DAT_005d9030;
  DAT_005dc190 = &DAT_005d87b0 + lVar1 * 4;
  DAT_005d9018 = DAT_005dc190;
  (&DAT_005d87b8)[lVar1 * 4] = (undefined8 *)0x0;
  (&DAT_005d87b0)[lVar1 * 4] = &DAT_005d9010;
  DAT_005dc1a0 = &DAT_005d9010 + uVar10 * 4;
  (&DAT_005d87b0)[lVar2 * 4] = (undefined8 *)0x0;
  DAT_005dc1b0 = &DAT_005d87b0 + lVar2 * 4;
  (&DAT_005d87b8)[lVar2 * 4] = DAT_005dc1a0;
  return;
}

