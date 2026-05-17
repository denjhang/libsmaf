/* MakeLower @ 0012ade4 212B */


/* CString::MakeLower() */

void __thiscall CString::MakeLower(CString *this)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  
  pcVar6 = *(char **)this;
  if (pcVar6 != (char *)0x0) {
    uVar5 = 0;
    while( true ) {
      iVar4 = (int)uVar5;
      uVar3 = (ulong)(iVar4 + 1);
      uVar8 = (ulong)(iVar4 + 3);
      sVar2 = strlen(pcVar6);
      uVar7 = (ulong)(iVar4 + 2);
      if (sVar2 <= uVar5) break;
      iVar1 = tolower((int)pcVar6[uVar5]);
      pcVar6[uVar5] = (char)iVar1;
      pcVar6 = *(char **)this;
      sVar2 = strlen(pcVar6);
      if (sVar2 <= uVar3) {
        return;
      }
      iVar1 = tolower((int)pcVar6[uVar3]);
      pcVar6[uVar3] = (char)iVar1;
      pcVar6 = *(char **)this;
      sVar2 = strlen(pcVar6);
      if (sVar2 <= uVar7) {
        return;
      }
      iVar1 = tolower((int)pcVar6[uVar7]);
      pcVar6[uVar7] = (char)iVar1;
      pcVar6 = *(char **)this;
      sVar2 = strlen(pcVar6);
      if (sVar2 <= uVar8) {
        return;
      }
      iVar1 = tolower((int)pcVar6[uVar8]);
      pcVar6[uVar8] = (char)iVar1;
      pcVar6 = *(char **)this;
      uVar5 = (ulong)(iVar4 + 4);
    }
  }
  return;
}

