/* SmafMms_Initialize @ 0009009c 60B */


/* YAMAHA::SmafMms_Initialize(void*) */

int YAMAHA::SmafMms_Initialize(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = PreMms_Initialize(param_1);
  if ((iVar2 == -0x65) && (iVar2 = MaSound_Initialize(), iVar2 == 0)) {
    uVar3 = MaSound_Create('\x01');
    iVar1 = DAT_000900d8;
    puVar5 = (undefined4 *)(DAT_000900d8 + 0x900cc);
    iVar4 = DAT_000900dc + 0x900ce;
    *(undefined4 *)(DAT_000900d8 + 0x900d0) = 0;
    *(undefined4 *)((int)&DAT_000900d8 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_000900dc + iVar1) = 0;
    *(int *)(iVar1 + 0x900d4) = iVar4;
    *puVar5 = uVar3;
  }
  return iVar2;
}

