/* TrimRight @ 0002f9e4 90B */


/* CString::TrimRight() */

void __thiscall CString::TrimRight(CString *this)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  CopyBeforeWrite(this);
  pbVar3 = *(byte **)this;
  uVar2 = (uint)*pbVar3;
  if (uVar2 != 0) {
    pbVar4 = (byte *)0x0;
    do {
      while ((char)uVar2 == -1) {
        pbVar5 = (byte *)0x0;
LAB_0002f9fe:
        pbVar4 = pbVar5;
        pbVar3 = pbVar3 + 1;
        bVar1 = *pbVar3;
        uVar2 = (uint)bVar1;
        if (uVar2 == 0) goto LAB_0002fa30;
      }
      bVar1 = *(byte *)(**(int **)(DAT_0002fa40 + 0x2f9fa) + uVar2 + 1);
      pbVar5 = pbVar4;
      if (pbVar4 == (byte *)0x0) {
        pbVar5 = pbVar3;
      }
      pbVar4 = (byte *)(bVar1 & 8);
      if ((bVar1 & 8) != 0) goto LAB_0002f9fe;
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
      uVar2 = (uint)bVar1;
    } while (uVar2 != 0);
LAB_0002fa30:
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = bVar1;
      *(int *)(*(int *)this + -8) = (int)pbVar4 - *(int *)this;
    }
  }
  return;
}

