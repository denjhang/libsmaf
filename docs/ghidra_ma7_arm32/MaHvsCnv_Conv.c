/* MaHvsCnv_Conv @ 00093750 974B */


/* YAMAHA::MaHvsCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined4 YAMAHA::MaHvsCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char cVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar10 = *(char **)(param_1 + 4), pcVar10 == (char *)0x0)) ||
     (param_2 == (_MASND_CMD_PARAM *)0x0)) {
    return 0xfffffffe;
  }
  if (*pcVar10 != '\x01') {
    return 0xffffffff;
  }
  cVar7 = pcVar10[0x3b8];
  if (cVar7 == '\x03') {
    return 0;
  }
  if (cVar7 == '\0') {
    pcVar3 = pcVar10 + 3;
    iVar4 = (**(code **)(DAT_00093b20 + (uint)(byte)pcVar10[2] * 0x14 + 0x9389a))(pcVar3,0x393);
    if (iVar4 < 1) {
      pcVar10[0x3a0] = -1;
      pcVar10[0x3a1] = -1;
      pcVar10[0x3a2] = -1;
      pcVar10[0x3a3] = -1;
      if (*(int *)(pcVar10 + 0x3a4) == -1) {
        cVar7 = '\x02';
      }
      else {
        cVar7 = '\x01';
      }
      pcVar10[0x3b8] = cVar7;
    }
    else {
      uVar6 = (uint)(byte)pcVar10[3];
      *(char **)(pcVar10 + 0x3bc) = pcVar3;
      *(int *)(pcVar10 + 0x3c0) = iVar4;
      if ((int)(uVar6 << 0x18) < 0) {
        uVar9 = (uint)(byte)pcVar10[4];
        if ((int)(uVar9 << 0x18) < 0) {
          if ((pcVar10[5] & 0x80U) != 0) {
            pcVar10[0x3a4] = -1;
            pcVar10[0x3a5] = -1;
            pcVar10[0x3a6] = -1;
            pcVar10[0x3a7] = -1;
            pcVar10[0x3a0] = -1;
            pcVar10[0x3a1] = -1;
            pcVar10[0x3a2] = -1;
            pcVar10[0x3a3] = -1;
            pcVar10[0x3b8] = '\x02';
            goto LAB_0009397a;
          }
          iVar11 = 3;
          uVar6 = (uVar9 & 0x7f) * 0x80 + (uVar6 & 0x7f) * 0x4000 + (uint)(byte)pcVar10[5];
        }
        else {
          iVar11 = 2;
          uVar6 = uVar9 + (uVar6 & 0x7f) * 0x80;
        }
      }
      else {
        iVar11 = 1;
      }
      if (iVar11 < iVar4) {
        pcVar3 = pcVar3 + iVar11;
        *(char **)(pcVar10 + 0x3bc) = pcVar3;
        *(int *)(pcVar10 + 0x3c0) = iVar4 - iVar11;
      }
      uVar6 = uVar6 + *(int *)(pcVar10 + 0x3a0);
      *(uint *)(pcVar10 + 0x3a0) = uVar6;
      if (((*pcVar3 == -0x70) && (*(uint *)(pcVar10 + 0x3a4) != 0xffffffff)) &&
         (uVar6 < *(uint *)(pcVar10 + 0x3a4))) {
        *(uint *)(pcVar10 + 0x3a4) = uVar6;
      }
      cVar7 = pcVar10[0x3b8];
    }
  }
  if (cVar7 == '\x02') {
LAB_0009397a:
    iVar4 = *(int *)(pcVar10 + 0x398) * 0x14 - *(int *)(pcVar10 + 0x39c);
    bVar13 = -1 < iVar4;
    if (bVar13) {
      uVar6 = *(uint *)(pcVar10 + 0x3ac);
    }
    else {
      uVar6 = 0;
    }
    *(uint *)(param_2 + 8) = (uint)(byte)pcVar10[1];
    *(undefined4 *)param_2 = 0x2e;
    if (bVar13) {
      uVar6 = uVar6 * iVar4;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    if (bVar13) {
      uVar6 = uVar6 + 0x3ff >> 10;
    }
    *(uint *)(param_2 + 4) = uVar6;
    pcVar10[0x3b8] = '\x03';
    *(uint *)(pcVar10 + 0x39c) = *(int *)(pcVar10 + 0x3a8) * uVar6 + *(int *)(pcVar10 + 0x39c);
    return 1;
  }
  pcVar3 = *(char **)(pcVar10 + 0x3a4);
  pcVar8 = *(char **)(pcVar10 + 0x3a0);
  if (pcVar3 <= pcVar8) {
    iVar4 = *(int *)(pcVar10 + 0x398);
    if ("2InitMaSmwApiEv" < pcVar3) {
      pcVar3 = "_ZN14CM7_EmuSmw7App12InitMaSmwApiEv" + (0x14 - iVar4);
    }
    else {
      pcVar3 = pcVar3 + -iVar4;
    }
    *(char **)(pcVar10 + 0x398) = pcVar3 + iVar4;
    iVar4 = (int)(pcVar3 + iVar4) * 0x14 - *(int *)(pcVar10 + 0x39c);
    bVar13 = -1 < iVar4;
    if (bVar13) {
      uVar6 = *(uint *)(pcVar10 + 0x3ac);
    }
    else {
      uVar6 = 0;
    }
    *(uint *)(param_2 + 8) = (uint)(byte)pcVar10[1];
    *(undefined4 *)param_2 = 0x29;
    if (bVar13) {
      uVar6 = iVar4 * uVar6;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    if (bVar13) {
      uVar6 = uVar6 + 0x3ff >> 10;
    }
    *(uint *)(param_2 + 4) = uVar6;
    pcVar10[0x3a4] = -1;
    pcVar10[0x3a5] = -1;
    pcVar10[0x3a6] = -1;
    pcVar10[0x3a7] = -1;
    *(uint *)(pcVar10 + 0x39c) = *(int *)(pcVar10 + 0x3a8) * uVar6 + *(int *)(pcVar10 + 0x39c);
    if (pcVar10[0x3b8] == '\x01') {
      cVar7 = '\x02';
    }
    else {
      cVar7 = '\x04';
    }
    pcVar10[0x3b8] = cVar7;
    return 1;
  }
  pbVar5 = *(byte **)(pcVar10 + 0x3bc);
  bVar1 = *pbVar5;
  if (bVar1 == 0xb0) {
    if (pbVar5[1] == 0x14) {
      bVar1 = pbVar5[2];
      uVar12 = 0x2d;
      *(char **)(pcVar10 + 0x398) = pcVar8;
      iVar4 = (int)pcVar8 * 0x14 - *(int *)(pcVar10 + 0x39c);
      bVar2 = pcVar10[1];
      if (iVar4 < 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = iVar4 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
      }
      *(uint *)(param_2 + 4) = uVar6;
    }
    else {
      if (pbVar5[1] != 0x16) {
        return 0xfffffff0;
      }
      bVar1 = pbVar5[2];
      *(char **)(pcVar10 + 0x398) = pcVar8;
      iVar4 = (int)pcVar8 * 0x14 - *(int *)(pcVar10 + 0x39c);
      uVar12 = 0x25;
      bVar2 = pcVar10[1];
      if (iVar4 < 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = iVar4 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
      }
      *(uint *)(param_2 + 4) = uVar6;
    }
    *(uint *)(param_2 + 8) = (uint)bVar2;
    *(uint *)(param_2 + 0xc) = (uint)bVar1;
    *(undefined4 *)param_2 = uVar12;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(uint *)(pcVar10 + 0x39c) = *(int *)(pcVar10 + 0x3a8) * uVar6 + *(int *)(pcVar10 + 0x39c);
  }
  else {
    if (bVar1 < 0xb1) {
      if (bVar1 == 0x90) {
        uVar6 = (uint)pbVar5[3];
        if ((int)(uVar6 << 0x18) < 0) {
          uVar9 = (uint)pbVar5[4];
          if ((int)(uVar9 << 0x18) < 0) {
            if ((int)((uint)pbVar5[5] << 0x18) < 0) {
              return 0xfffffff0;
            }
            uVar6 = (uVar9 & 0x7f) * 0x80 + (uVar6 & 0x7f) * 0x4000 + (uint)pbVar5[5];
          }
          else {
            uVar6 = uVar9 + (uVar6 & 0x7f) * 0x80;
          }
        }
        if (uVar6 != 0) {
          *(char **)(pcVar10 + 0x398) = pcVar8;
          uVar12 = *(undefined4 *)(pcVar10 + 0x3c0);
          iVar4 = (int)pcVar8 * 0x14 - *(int *)(pcVar10 + 0x39c);
          bVar13 = -1 < iVar4;
          if (bVar13) {
            uVar9 = *(uint *)(pcVar10 + 0x3ac);
          }
          else {
            uVar9 = 0;
          }
          *(uint *)(param_2 + 8) = (uint)(byte)pcVar10[1];
          *(byte **)(param_2 + 0xc) = pbVar5 + 1;
          if (bVar13) {
            uVar9 = iVar4 * uVar9;
          }
          *(undefined4 *)(param_2 + 0x10) = uVar12;
          *(undefined4 *)param_2 = 0x28;
          if (bVar13) {
            uVar9 = uVar9 + 0x3ff >> 10;
          }
          *(uint *)(param_2 + 4) = uVar9;
          *(uint *)(pcVar10 + 0x3a4) = uVar6 + *(int *)(pcVar10 + 0x3a0);
          *(uint *)(pcVar10 + 0x39c) = *(int *)(pcVar10 + 0x3a8) * uVar9 + *(int *)(pcVar10 + 0x39c)
          ;
          goto LAB_00093958;
        }
      }
      return 0xfffffff0;
    }
    if (bVar1 == 0xc0) {
      bVar1 = pbVar5[1];
      *(char **)(pcVar10 + 0x398) = pcVar8;
      iVar4 = (int)pcVar8 * 0x14 - *(int *)(pcVar10 + 0x39c);
      bVar13 = -1 < iVar4;
      if (bVar13) {
        uVar6 = *(uint *)(pcVar10 + 0x3ac);
      }
      else {
        uVar6 = 0;
      }
      *(uint *)(param_2 + 8) = (uint)(byte)pcVar10[1];
      *(uint *)(param_2 + 0x10) = (uint)bVar1;
      if (bVar13) {
        uVar6 = iVar4 * uVar6;
      }
      *(undefined4 *)param_2 = 0x2a;
      *(undefined4 *)(param_2 + 0xc) = 0;
      if (bVar13) {
        uVar6 = uVar6 + 0x3ff >> 10;
      }
      *(uint *)(param_2 + 4) = uVar6;
      *(uint *)(pcVar10 + 0x39c) = *(int *)(pcVar10 + 0x3a8) * uVar6 + *(int *)(pcVar10 + 0x39c);
    }
    else {
      if (bVar1 != 0xff) {
        return 0xfffffff0;
      }
      if (pbVar5[1] != 0) {
        return 0xfffffff0;
      }
      iVar4 = (int)pcVar8 * 5;
      *(char **)(pcVar10 + 0x398) = pcVar8;
      uVar6 = (int)pcVar8 * 0x14 - *(int *)(pcVar10 + 0x39c);
      bVar13 = -1 < (int)uVar6;
      if (bVar13) {
        iVar4 = *(int *)(pcVar10 + 0x3ac);
      }
      else {
        uVar6 = 0;
      }
      *(uint *)(param_2 + 8) = (uint)(byte)pcVar10[1];
      *(undefined4 *)(param_2 + 0xc) = 0;
      if (bVar13) {
        uVar6 = iVar4 * uVar6;
      }
      *(undefined4 *)param_2 = 0x1b;
      *(undefined4 *)(param_2 + 0x10) = 0;
      if (bVar13) {
        uVar6 = uVar6 + 0x3ff >> 10;
      }
      *(uint *)(param_2 + 4) = uVar6;
      *(uint *)(pcVar10 + 0x39c) = *(int *)(pcVar10 + 0x3a8) * uVar6 + *(int *)(pcVar10 + 0x39c);
    }
  }
LAB_00093958:
  pcVar10[0x3b8] = '\0';
  return 1;
}

