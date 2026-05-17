/* MaDevDrv_Initialize @ 000de83c 18B */


/* YAMAHA::MaDevDrv_Initialize() */

undefined4 YAMAHA::MaDevDrv_Initialize(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_000de850;
  piVar3 = (int *)(DAT_000de850 + 0xde846);
  iVar2 = DAT_000de850 + 0xde84a;
  *(undefined4 *)(&UNK_000de84e + DAT_000de850) = 0;
  *piVar3 = iVar2;
  *(undefined4 *)(iVar1 + 0xde84a) = 0;
  return 0;
}

