/* SmafMms_Stop @ 000905a8 98B */


/* YAMAHA::SmafMms_Stop(int) */

int YAMAHA::SmafMms_Stop(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar2 = PreMms_Stop(param_1);
  iVar1 = DAT_0009060c;
  if (iVar2 == -0x65) {
    uVar4 = param_1 & 0xf;
    if (uVar4 < 2) {
      piVar5 = (int *)(DAT_0009060c + 0x905d4);
      iVar2 = MaSound_Stop(*piVar5,uVar4,(void *)0x0);
      if (iVar2 == 0) {
        puVar6 = *(undefined4 **)(iVar1 + 0x905d8);
        if (puVar6 != (undefined4 *)0x0) {
          uVar3 = MaSound_Control(*piVar5,uVar4,'\x04',(void *)0x0,(void *)0x0);
          *puVar6 = uVar3;
        }
        iVar2 = 0;
        if (*(code **)(DAT_00090610 + 0x90600) != (code *)0x0) {
          (**(code **)(DAT_00090610 + 0x90600))(0,0);
          return 0;
        }
      }
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}

