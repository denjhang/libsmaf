/* SmafMms_Close @ 000903ec 110B */


/* YAMAHA::SmafMms_Close(int) */

int YAMAHA::SmafMms_Close(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar2 = PreMms_Close(param_1);
  iVar1 = DAT_0009045c;
  if (iVar2 == -0x65) {
    uVar5 = param_1 & 0xf;
    if (uVar5 < 2) {
      piVar6 = (int *)(DAT_0009045c + 0x9041a);
      MaSound_Stop(*piVar6,uVar5,(void *)0x0);
      uVar3 = MaSound_Control(*piVar6,uVar5,'\x04',(void *)0x0,(void *)0x0);
      iVar2 = MaSound_Close(*piVar6,uVar5,(void *)0x0);
      if (-1 < iVar2) {
        if (*(undefined4 **)(iVar1 + 0x9041e) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar1 + 0x9041e) = uVar3;
        }
        iVar1 = DAT_00090460;
        iVar4 = DAT_00090464 + 0x90450;
        *(undefined4 *)(DAT_00090460 + 0x90452) = 0;
        *(int *)(iVar1 + 0x90456) = iVar4;
        return iVar2;
      }
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}

