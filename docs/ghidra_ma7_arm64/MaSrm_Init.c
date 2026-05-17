/* MaSrm_Init @ 001aa710 548B */


/* YAMAHA::MaSrm_Init() */

void YAMAHA::MaSrm_Init(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)&DAT_005dc1b8;
  DAT_005dd9b8 = &DAT_005dd9c0;
  DAT_005dd9c0 = 0;
  DAT_005dd9c4 = 0;
  DAT_005dd9c8 = 0;
  DAT_005dd9cc = 0;
  DAT_005dd9d0 = 0;
  DAT_005dd9d4 = 0;
  DAT_005dd9d8 = 0;
  DAT_005dd9e0 = 100;
  DAT_005dd9f0 = 0;
  DAT_005dd9f8 = 0;
  DAT_005dda02 = 0;
  DAT_005dda03 = 0;
  DAT_005dda04 = 0;
  DAT_005dda05 = 0;
  DAT_005dda07 = 0x41;
  DAT_005dda0c = 0;
  DAT_005dda38 = 0;
  DAT_005dda3c = 0;
  DAT_005dda40 = 0;
  DAT_005dda44 = 0;
  DAT_005dda48 = 0;
  DAT_005dda4c = 0;
  DAT_005dda50 = 0;
  DAT_005dda58 = 100;
  DAT_005dda68 = 0;
  DAT_005dda70 = 0;
  DAT_005dda7a = 0;
  DAT_005dda7b = 0;
  DAT_005dda7c = 0;
  DAT_005dda7d = 0;
  DAT_005dda7f = 0x41;
  DAT_005dda84 = 0;
  DAT_005ddab0 = 0;
  DAT_005ddab4 = 0;
  DAT_005ddab8 = 0;
  DAT_005ddabc = 0;
  DAT_005ddac0 = 0;
  DAT_005ddac4 = 0;
  DAT_005ddac8 = 0;
  DAT_005ddad0 = 100;
  DAT_005ddae0 = 0;
  DAT_005ddae8 = 0;
  DAT_005ddaf2 = 0;
  DAT_005ddaf3 = 0;
  DAT_005ddaf4 = 0;
  DAT_005ddaf5 = 0;
  DAT_005ddaf7 = 0x41;
  DAT_005ddafc = 0;
  DAT_005ddb28 = 0;
  DAT_005ddb2c = 0;
  DAT_005ddb30 = 0;
  DAT_005ddb34 = 0;
  DAT_005ddb38 = 0;
  DAT_005ddb3c = 0;
  DAT_005ddb40 = 0;
  DAT_005ddb48 = 100;
  DAT_005ddb58 = 0;
  DAT_005ddb60 = 0;
  DAT_005ddb6a = 0;
  DAT_005ddb6b = 0;
  DAT_005ddb6c = 0;
  DAT_005ddb6d = 0;
  DAT_005ddb6f = 0x41;
  DAT_005ddb74 = 0;
  do {
    puVar1 = puVar2 + 0xc0;
    puVar3 = puVar2;
    do {
      *(undefined4 *)puVar3 = 0;
      *(undefined4 *)((long)puVar3 + 4) = 0;
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined1 *)((long)puVar3 + 0x11) = 0xff;
      *(undefined1 *)((long)puVar3 + 0x12) = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *(undefined4 *)((long)puVar3 + 0x1c) = 0;
      puVar2 = puVar3 + 0x18;
      puVar3[4] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      *(undefined1 *)((long)puVar3 + 0x29) = 0xff;
      *(undefined1 *)((long)puVar3 + 0x2a) = 0;
      *(undefined4 *)(puVar3 + 6) = 0;
      *(undefined4 *)((long)puVar3 + 0x34) = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 8) = 0;
      *(undefined1 *)((long)puVar3 + 0x41) = 0xff;
      *(undefined1 *)((long)puVar3 + 0x42) = 0;
      *(undefined4 *)(puVar3 + 9) = 0;
      *(undefined4 *)((long)puVar3 + 0x4c) = 0;
      puVar3[10] = 0;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      *(undefined1 *)((long)puVar3 + 0x59) = 0xff;
      *(undefined1 *)((long)puVar3 + 0x5a) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined4 *)((long)puVar3 + 100) = 0;
      puVar3[0xd] = 0;
      *(undefined1 *)(puVar3 + 0xe) = 0;
      *(undefined1 *)((long)puVar3 + 0x71) = 0xff;
      *(undefined1 *)((long)puVar3 + 0x72) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)((long)puVar3 + 0x7c) = 0;
      puVar3[0x10] = 0;
      *(undefined1 *)(puVar3 + 0x11) = 0;
      *(undefined1 *)((long)puVar3 + 0x89) = 0xff;
      *(undefined1 *)((long)puVar3 + 0x8a) = 0;
      *(undefined4 *)(puVar3 + 0x12) = 0;
      *(undefined4 *)((long)puVar3 + 0x94) = 0;
      puVar3[0x13] = 0;
      *(undefined1 *)(puVar3 + 0x14) = 0;
      *(undefined1 *)((long)puVar3 + 0xa1) = 0xff;
      *(undefined1 *)((long)puVar3 + 0xa2) = 0;
      *(undefined4 *)(puVar3 + 0x15) = 0;
      *(undefined4 *)((long)puVar3 + 0xac) = 0;
      puVar3[0x16] = 0;
      *(undefined1 *)(puVar3 + 0x17) = 0;
      *(undefined1 *)((long)puVar3 + 0xb9) = 0xff;
      *(undefined1 *)((long)puVar3 + 0xba) = 0;
      puVar3 = puVar2;
    } while (puVar2 != puVar1);
  } while ((undefined4 **)puVar2 != &DAT_005dd9b8);
  return;
}

