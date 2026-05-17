/* EmuGenerate @ 00030344 384B */


/* CM7_EmuSmw7App::EmuGenerate(short*, unsigned int) */

undefined4 __thiscall CM7_EmuSmw7App::EmuGenerate(CM7_EmuSmw7App *this,short *param_1,uint param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if (((*(int *)(this + 0x230) != 3) || (param_1 == (short *)0x0)) || (param_2 == 0)) {
    return 0xffffffff;
  }
  if (((byte)this[8] & 0x7f) == 1) {
    local_48 = *(undefined4 *)(this + 0x250);
    uStack_44 = *(undefined4 *)(this + 0x254);
    do {
      uVar5 = param_2;
      if (0x12bf < param_2) {
        uVar5 = 0x12c0;
      }
      EmuGenerate(this,(MAPI_BUFFER7 *)&local_48,uVar5);
      uVar8 = 1;
      psVar3 = param_1 + 4;
      uVar6 = uVar5 - 1 & 3;
      *param_1 = (short)**(undefined4 **)(this + 0x250);
      param_1[1] = (short)**(undefined4 **)(this + 0x254);
      psVar2 = param_1 + 2;
      if (1 < uVar5) {
        psVar4 = psVar3;
        if (uVar6 != 0) {
          if (uVar6 != 1) {
            psVar2 = psVar3;
            if (uVar6 != 2) {
              psVar2 = param_1 + 6;
              uVar8 = 2;
              param_1[2] = (short)*(undefined4 *)(*(int *)(this + 0x250) + 4);
              param_1[3] = (short)*(undefined4 *)(*(int *)(this + 0x254) + 4);
            }
            psVar3 = psVar2 + 2;
            psVar2[-2] = (short)*(undefined4 *)(*(int *)(this + 0x250) + uVar8 * 4);
            iVar1 = uVar8 * 4;
            uVar8 = uVar8 + 1;
            psVar2[-1] = (short)*(undefined4 *)(*(int *)(this + 0x254) + iVar1);
          }
          psVar3[-2] = (short)*(undefined4 *)(*(int *)(this + 0x250) + uVar8 * 4);
          iVar1 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          psVar3[-1] = (short)*(undefined4 *)(*(int *)(this + 0x254) + iVar1);
          psVar4 = psVar3 + 2;
          psVar2 = psVar3;
          if (uVar5 <= uVar8) goto LAB_000304aa;
        }
        do {
          iVar10 = uVar8 + 1;
          iVar7 = uVar8 + 2;
          iVar9 = uVar8 + 3;
          psVar2 = psVar4 + 6;
          psVar4[-2] = (short)*(undefined4 *)(*(int *)(this + 0x250) + uVar8 * 4);
          iVar1 = uVar8 * 4;
          uVar8 = uVar8 + 4;
          psVar4[-1] = (short)*(undefined4 *)(*(int *)(this + 0x254) + iVar1);
          *psVar4 = (short)*(undefined4 *)(*(int *)(this + 0x250) + iVar10 * 4);
          psVar4[1] = (short)*(undefined4 *)(*(int *)(this + 0x254) + iVar10 * 4);
          psVar4[2] = (short)*(undefined4 *)(*(int *)(this + 0x250) + iVar7 * 4);
          psVar4[3] = (short)*(undefined4 *)(*(int *)(this + 0x254) + iVar7 * 4);
          psVar4[4] = (short)*(undefined4 *)(*(int *)(this + 0x250) + iVar9 * 4);
          psVar4[5] = (short)*(undefined4 *)(*(int *)(this + 0x254) + iVar9 * 4);
          psVar4 = psVar4 + 8;
        } while (uVar8 < uVar5);
      }
LAB_000304aa:
      param_2 = param_2 - uVar5;
      param_1 = psVar2;
    } while (param_2 != 0);
  }
  return 0;
}

