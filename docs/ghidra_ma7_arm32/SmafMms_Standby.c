/* SmafMms_Standby @ 00090468 116B */


/* YAMAHA::SmafMms_Standby(int, unsigned int, unsigned int) */

int YAMAHA::SmafMms_Standby(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  
  iVar2 = PreMms_Standby(param_1,param_2,param_3);
  if (iVar2 == -0x65) {
    uVar5 = param_1 & 0xf;
    if (uVar5 < 2) {
      piVar6 = (int *)(DAT_000904dc + 0x90496);
      iVar2 = MaSound_Standby(*piVar6,uVar5,(void *)0x0);
      iVar1 = DAT_000904e0;
      if (iVar2 == 0) {
        uVar3 = MaSound_Control(*piVar6,uVar5,'\x05',(void *)0x0,(void *)0x0);
        if (uVar3 <= param_3) {
          param_3 = uVar3 - 1;
        }
        MaSound_Seek(*(int *)(iVar1 + 0x904b8),uVar5,param_3,'\0',(void *)0x0);
        pcVar4 = *(code **)(iVar1 + 0x904c0);
        iVar2 = 0;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(0,0);
          iVar2 = 0;
        }
      }
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}

