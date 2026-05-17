/* MaCmd_ResetAllControllers @ 000f25f4 94B */


/* YAMAHA::MaCmd_ResetAllControllers(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_ResetAllControllers(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_2 & param_2 >> 0x1f;
  iVar1 = MaCmd_Expression(param_1,param_2,param_3,0x7f,param_4);
  iVar2 = MaCmd_ModulationDepth(param_1,uVar4,param_3,0,param_4 + iVar1);
  iVar3 = MaCmd_Hold1(param_1,uVar4,param_3,0,param_4 + iVar1 + iVar2);
  iVar3 = iVar1 + iVar2 + iVar3;
  iVar1 = MaCmd_PitchBend(param_1,uVar4,param_3,0x2000,param_4 + iVar3);
  return iVar1 + iVar3;
}

