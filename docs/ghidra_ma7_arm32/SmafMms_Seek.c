/* SmafMms_Seek @ 000904e4 132B */


/* YAMAHA::SmafMms_Seek(int, unsigned int) */

int YAMAHA::SmafMms_Seek(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  
  iVar2 = PreMms_Seek(param_1,param_2);
  iVar1 = DAT_0009056c;
  if (iVar2 == -0x65) {
    uVar6 = param_1 & 0xf;
    if (uVar6 < 2) {
      uVar3 = MaSound_Control(*(int *)(DAT_00090568 + 0x90514),uVar6,'\x05',(void *)0x0,(void *)0x0)
      ;
      piVar7 = (int *)(iVar1 + 0x90522);
      if (uVar3 <= param_2) {
        param_2 = uVar3 - 1;
      }
      iVar2 = MaSound_Seek(*piVar7,uVar6,param_2,'\0',(void *)0x0);
      if (iVar2 == 0) {
        puVar5 = *(undefined4 **)(iVar1 + 0x90526);
        if (puVar5 != (undefined4 *)0x0) {
          uVar4 = MaSound_Control(*piVar7,uVar6,'\x04',(void *)0x0,(void *)0x0);
          *puVar5 = uVar4;
        }
        iVar2 = 0;
        if (*(code **)(DAT_00090570 + 0x9055e) != (code *)0x0) {
          (**(code **)(DAT_00090570 + 0x9055e))(0,0);
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

