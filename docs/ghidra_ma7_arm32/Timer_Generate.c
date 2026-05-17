/* Timer_Generate @ 0003903c 150B */


/* ARM::Timer_Generate(long long) */

byte __thiscall ARM::Timer_Generate(ARM *this,longlong param_1)

{
  int iVar1;
  byte bVar2;
  int in_r1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  iVar1 = DAT_000390d4;
  uVar3 = (uint)(ZEXT48(this) * 1000000);
  pcVar7 = (char *)(DAT_000390d4 + 0x39058);
  iVar4 = in_r1 * 1000000 + (int)(ZEXT48(this) * 1000000 >> 0x20);
  bVar2 = 0;
  if (*pcVar7 != '\0') {
    uVar5 = *(uint *)(DAT_000390d4 + 0x39070);
    iVar6 = *(int *)(DAT_000390d4 + 0x39074);
    *(uint *)(DAT_000390d4 + 0x39068) = uVar3;
    *(int *)(iVar1 + 0x3906c) = iVar4;
    if ((int)((iVar4 - iVar6) - (uint)(uVar3 < uVar5)) < 0 ==
        (SBORROW4(iVar4,iVar6) != SBORROW4(iVar4 - iVar6,(uint)(uVar3 < uVar5)))) {
      *(uint *)(iVar1 + 0x39070) = *(uint *)(iVar1 + 0x39078) + uVar5;
      *(uint *)(iVar1 + 0x39074) =
           *(int *)(iVar1 + 0x3907c) + iVar6 + (uint)CARRY4(*(uint *)(iVar1 + 0x39078),uVar5);
      if (*(char *)(iVar1 + 0x39059) == '\x01') {
        *pcVar7 = '\0';
      }
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
  }
  iVar1 = DAT_000390d8;
  if (*(char *)(DAT_000390d8 + 0x390aa) != '\0') {
    uVar5 = *(uint *)(DAT_000390d8 + 0x390c2);
    iVar6 = *(int *)(DAT_000390d8 + 0x390c6);
    *(uint *)(DAT_000390d8 + 0x390ba) = uVar3;
    *(int *)(iVar1 + 0x390be) = iVar4;
    if ((int)((iVar4 - iVar6) - (uint)(uVar3 < uVar5)) < 0 ==
        (SBORROW4(iVar4,iVar6) != SBORROW4(iVar4 - iVar6,(uint)(uVar3 < uVar5)))) {
      bVar2 = bVar2 | 2;
      *(uint *)(iVar1 + 0x390c2) = uVar5 + *(uint *)(iVar1 + 0x390ca);
      *(uint *)(iVar1 + 0x390c6) =
           iVar6 + *(int *)(iVar1 + 0x390ce) + (uint)CARRY4(uVar5,*(uint *)(iVar1 + 0x390ca));
      if (*(char *)(iVar1 + 0x390ab) == '\x01') {
        *(undefined1 *)(iVar1 + 0x390aa) = 0;
      }
    }
  }
  return bVar2;
}

