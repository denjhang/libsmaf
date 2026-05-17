/* lset_adj_gain @ 000fc4bc 206B */


/* YAMAHA::lset_adj_gain(unsigned int) */

void YAMAHA::lset_adj_gain(uint param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_14;
  
  lchk_cho_type();
  uVar2 = (undefined1)(param_1 >> 2);
  uVar1 = (undefined1)((param_1 << 0xe) >> 0x18);
  local_14._0_2_ = CONCAT11(uVar2,uVar1);
  local_14 = CONCAT13(uVar2,CONCAT12(uVar1,(undefined2)local_14));
  MaDevDrv_SendDspCoef(0xea,(uchar *)&local_14,2);
  iVar3 = DAT_000fc58c;
  MaDevDrv_SendDspCoef(0xec,(uchar *)&local_14,2);
  MaDevDrv_SendDspCoef(0x108,(uchar *)&local_14,4);
  MaDevDrv_SendDspCoef(0xda,(uchar *)&local_14,2);
  MaDevDrv_SendDspCoef(0xdd,(uchar *)&local_14,4);
  MaDevDrv_SendDspCoef(0xe8,(uchar *)&local_14,2);
  iVar3 = *(int *)(iVar3 + 0xfc524);
  *(uint *)(iVar3 + 0x20) = param_1 >> 2;
  MaDevDrv_SendDspCoef(0x73,(uchar *)&local_14,2);
  if ((*(char *)(iVar3 + 0x24) == '\0') && (*(char *)(iVar3 + 0x25) != '\x01')) {
    MaDevDrv_SendDspCoef(10,(uchar *)&local_14,4);
  }
  else {
    local_14 = 0xff7fff7f;
    MaDevDrv_SendDspCoef(10,(uchar *)&local_14,4);
    if ((*(char *)(iVar3 + 0x25) == '\x01') && (*(char *)(iVar3 + 9) == '\b')) {
      lup_dbex('\0');
      lup_dbex('\x03');
      lup_dbex('\x06');
      lup_dbex('\t');
    }
  }
  lup_tconnect('\x02');
  lup_tconnect('\x04');
  return;
}

