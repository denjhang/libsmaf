/* GetGenerateData @ 00032d4c 66B */


/* GetGenerateData(unsigned char*, int) */

undefined4 GetGenerateData(uchar *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00032d94;
  if (((int *)**(int **)(DAT_00032d90 + 0x32d54) != (int *)0x0) &&
     (*(int *)**(int **)(DAT_00032d90 + 0x32d54) != 0)) {
    iVar3 = *(int *)(DAT_00032d94 + 0x32d66);
    iVar2 = DAT_00032d94 + 0x32d62 + iVar3 * 4;
    if (*(int *)(iVar2 + 0x1c) == 1) {
      memcpy(param_1,*(void **)(iVar2 + 8),param_2);
      iVar3 = iVar3 + 1;
      if (4 < iVar3) {
        iVar3 = 0;
      }
      *(int *)(iVar1 + 0x32d66) = iVar3;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      return 1;
    }
  }
  return 0;
}

