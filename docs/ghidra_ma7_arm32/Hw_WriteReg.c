/* Hw_WriteReg @ 000374d8 1212B */


void Hw_WriteReg(undefined4 param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  if (*(char *)(DAT_00037a04 + 0x374e8) != '\0') {
    return;
  }
  EnterCriticalSection((critical_section *)(DAT_00037a08 + 0x374f6));
  iVar1 = DAT_00037a3c;
  bVar2 = (byte)param_2;
  switch(param_1) {
  case 0:
    uVar3 = (uint)*(byte *)(DAT_00037a1c + 0x375a1);
    if (((int)(uVar3 << 0x19) < 0) && (param_2 << 0x19 < 0)) {
      uVar3 = uVar3 & 0xbf;
    }
    bVar4 = (byte)uVar3;
    if (((int)(uVar3 << 0x1e) < 0) && (param_2 << 0x1e < 0)) {
      bVar4 = bVar4 & 0xcd;
    }
    *(byte *)(DAT_00037a20 + 0x375cf) = bVar4 & 0x7f | bVar2 & 0x80;
    break;
  case 1:
    *(byte *)(DAT_00037a24 + 0x375dc) = bVar2;
    break;
  case 2:
    FUN_00036608(*(undefined1 *)(DAT_00037a28 + 0x375e8),param_2);
    break;
  case 3:
    uVar3 = *(int *)(DAT_00037a2c + 0x37650) - 3;
    if (uVar3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00037602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&switchD_00037602::switchdataD_00037606 +
                (&switchD_00037602::switchdataD_00037606)[uVar3]))();
      return;
    }
    *(undefined4 *)(DAT_00037a70 + 0x37916) = 3;
    break;
  case 4:
    ARM::Sequencer_SetData('\0',bVar2);
    break;
  case 5:
    ARM::Sequencer_SetData('\x01',bVar2);
    break;
  case 6:
    ARM::STMCONTROL_WriteData('\0',bVar2);
    break;
  case 7:
    ARM::STMCONTROL_WriteData('\x01',bVar2);
    break;
  case 8:
    ARM::STMCONTROL_WriteData('\x02',bVar2);
    break;
  case 9:
    ARM::STMCONTROL_WriteData('\x03',bVar2);
    break;
  case 10:
    uVar3 = *(int *)(DAT_00037a30 + 0x376bc) - 3;
    if (uVar3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0003766a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&switchD_0003766a::switchdataD_0003766c +
                (&switchD_0003766a::switchdataD_0003766c)[uVar3]))();
      return;
    }
    *(undefined4 *)(DAT_00037a6c + 0x37916) = 3;
    break;
  case 0xb:
    *(ushort *)(DAT_00037a34 + 0x37692) =
         *(ushort *)(DAT_00037a34 + 0x37692) &
         ~(*(ushort *)(DAT_00037a34 + 0x37692) & *(ushort *)(DAT_00037a34 + 0x376cc) &
          (ushort)param_2);
    break;
  case 0xc:
    *(ushort *)(DAT_00037a38 + 0x376b0) =
         *(ushort *)(DAT_00037a38 + 0x376b0) &
         ~(*(ushort *)(DAT_00037a38 + 0x376b0) & *(ushort *)(DAT_00037a38 + 0x376ea) &
          (ushort)(param_2 << 8));
    break;
  case 0xd:
    *(ushort *)(DAT_00037a3c + 0x37708) =
         (ushort)param_2 | *(ushort *)(DAT_00037a3c + 0x37708) & 0xff00;
    bVar2 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    ARM::STMCONTROL_SetStreamInt('\0',bVar2 & 7,(byte)*(undefined2 *)(iVar1 + 0x37708) & 1);
    bVar2 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    ARM::STMCONTROL_SetStreamInt
              ('\x01',bVar2 & 7,(byte)(((uint)*(ushort *)(iVar1 + 0x37708) << 0x1e) >> 0x1f));
    bVar2 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    ARM::STMCONTROL_SetStreamInt
              ('\x02',bVar2 & 7,(byte)(((uint)*(ushort *)(iVar1 + 0x37708) << 0x1d) >> 0x1f));
    bVar2 = ARM::VIRTUALREGISTER_GetRegM('\0',')');
    ARM::STMCONTROL_SetStreamInt
              ('\x03',bVar2 & 7,(byte)(((uint)*(ushort *)(iVar1 + 0x37708) << 0x1c) >> 0x1f));
    break;
  case 0xe:
    *(ushort *)(DAT_00037a18 + 0x375c8) =
         (ushort)*(byte *)(DAT_00037a18 + 0x375c8) | (ushort)(param_2 << 8);
  }
  LeaveCriticalSection((critical_section *)(DAT_00037a14 + 0x3757e));
  return;
}

