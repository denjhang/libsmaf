/* MaSmw_Check @ 0007dc68 408B */


/* YAMAHA::MaSmw_Check(unsigned int, _MASMW_CHECK_PARAM*) */

int YAMAHA::MaSmw_Check(uint param_1,_MASMW_CHECK_PARAM *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_1c;
  
  machdep_EnterCriticalSection();
  uVar3 = param_1 & 0xff;
  uVar2 = (param_1 & 0xffff) >> 8;
  if (3 < uVar3) goto LAB_0007ddb8;
  switch(uVar2) {
  case 0:
  case 1:
    if (param_2 != (_MASMW_CHECK_PARAM *)0x0) {
      uVar6 = *(uint *)(param_2 + 4);
      bVar12 = 8 < uVar6;
      if (uVar6 != 9) {
        bVar12 = 3 < uVar6 - 2;
      }
      if (!bVar12 || (uVar6 == 9 || uVar6 - 2 == 4)) {
        bVar12 = true;
        goto LAB_0007dd4c;
      }
    }
    break;
  case 2:
    if ((param_2 != (_MASMW_CHECK_PARAM *)0x0) &&
       (*(int *)(param_2 + 4) == 7 || *(int *)(param_2 + 4) == 1)) {
LAB_0007dda4:
      bVar12 = true;
LAB_0007dda6:
      uVar3 = (uint)*(byte *)(DAT_0007de28 + 0x7ddb2 + uVar3 + uVar2 * 4);
      if (uVar3 != 0xff) goto LAB_0007dd62;
    }
    break;
  case 3:
    if (((param_2 != (_MASMW_CHECK_PARAM *)0x0) && (*(int *)(param_2 + 4) == 8)) && (uVar3 == 0))
    goto LAB_0007dda4;
    break;
  default:
    bVar12 = false;
LAB_0007dd4c:
    uVar3 = (uint)*(byte *)(DAT_0007de20 + 0x7dd58 + uVar3 + uVar2 * 4);
    if (uVar3 == 0xff) break;
    if (uVar2 == 9) {
      iVar8 = uVar3 * 0x98;
      puVar5 = (undefined4 *)(*(int *)(DAT_0007de30 + 0x7ddf8) + iVar8);
    }
    else {
LAB_0007dd62:
      iVar8 = uVar3 * 0x98;
      puVar5 = (undefined4 *)(*(int *)(DAT_0007de24 + 0x7dd70) + iVar8);
      if (*(int *)(*(int *)(DAT_0007de24 + 0x7dd70) + iVar8) != 0) {
        iVar7 = -1;
        goto LAB_0007dd8c;
      }
    }
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    if (!bVar12) {
      iVar7 = 0;
      puVar5[0x12] = 0;
      *puVar5 = 1;
      goto LAB_0007dd8c;
    }
LAB_0007dcce:
    iVar9 = DAT_0007de14 + 0x7dcda;
    pcVar4 = *(code **)(iVar9 + *(int *)(param_2 + 4) * 0x28 + 0x3c);
    if (pcVar4 != (code *)0x0) {
      iVar11 = DAT_0007de18 + 0x7dcfa + uVar3 * 8;
      iVar7 = (*pcVar4)(iVar11,param_2);
      if (-1 < iVar7) {
        iVar9 = (**(code **)(iVar9 + *(int *)(param_2 + 4) * 0x28 + 0x54))(iVar11,5,0,&local_1c);
        iVar10 = *(int *)(DAT_0007de1c + 0x7dd1c);
        iVar11 = iVar10 + iVar8;
        if (iVar9 < 0) {
          local_1c = 0;
        }
        *(undefined4 *)(iVar11 + 0x48) = local_1c;
        *(undefined4 *)(iVar10 + iVar8) = 1;
        *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(iVar11 + 0x5c) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(iVar11 + 0x60) = *(undefined4 *)(param_2 + 0xc);
      }
      goto LAB_0007dd8c;
    }
    goto LAB_0007dde2;
  case 8:
    if (*(int *)(*(int *)(DAT_0007de2c + 0x7ddde) + 8) == 0x23) {
      bVar12 = false;
      goto LAB_0007dda6;
    }
LAB_0007dde2:
    iVar7 = -0x18;
    goto LAB_0007dd8c;
  case 9:
    if ((param_2 != (_MASMW_CHECK_PARAM *)0x0) && (*(int *)(param_2 + 4) - 1U < 9)) {
      bVar1 = *(byte *)(uVar3 + DAT_0007de0c + 0x7dcd0);
      uVar3 = (uint)bVar1;
      if (uVar3 != 0xff) {
        iVar8 = (short)(ushort)bVar1 * 0x98;
        iVar7 = *(int *)(DAT_0007de10 + 0x7dcc4) + iVar8;
        *(undefined4 *)(iVar7 + 0x5c) = 0;
        *(undefined4 *)(iVar7 + 0x60) = 0;
        goto LAB_0007dcce;
      }
    }
  }
LAB_0007ddb8:
  iVar7 = -2;
LAB_0007dd8c:
  machdep_LeaveCriticalSection();
  return iVar7;
}

