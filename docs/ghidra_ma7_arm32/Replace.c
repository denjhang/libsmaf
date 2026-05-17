/* Replace @ 0002f774 520B */


/* CString::Replace(char const*, char const*) */

int __thiscall CString::Replace(CString *this,char *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  
  iVar1 = SafeStrlen(this,param_1);
  if (iVar1 != 0) {
    __n = SafeStrlen(this,param_2);
    pcVar11 = *(char **)this;
    pcVar8 = pcVar11 + *(int *)(pcVar11 + -8);
    if (pcVar11 < pcVar8) {
      iVar9 = 0;
      do {
        pcVar2 = strstr(pcVar11,param_1);
        iVar10 = iVar9;
        while (iVar9 = iVar10, pcVar2 != (char *)0x0) {
          pcVar11 = pcVar2 + iVar1;
          iVar9 = iVar10 + 1;
          pcVar2 = strstr(pcVar11,param_1);
          if (pcVar2 == (char *)0x0) break;
          pcVar11 = pcVar2 + iVar1;
          iVar9 = iVar10 + 2;
          pcVar2 = strstr(pcVar11,param_1);
          if (pcVar2 == (char *)0x0) break;
          pcVar11 = pcVar2 + iVar1;
          iVar9 = iVar10 + 3;
          pcVar2 = strstr(pcVar11,param_1);
          if (pcVar2 == (char *)0x0) break;
          pcVar11 = pcVar2 + iVar1;
          iVar9 = iVar10 + 4;
          pcVar2 = strstr(pcVar11,param_1);
          if (pcVar2 == (char *)0x0) break;
          pcVar11 = pcVar2 + iVar1;
          iVar9 = iVar10 + 5;
          pcVar2 = strstr(pcVar11,param_1);
          if (pcVar2 == (char *)0x0) break;
          pcVar11 = pcVar2 + iVar1;
          iVar9 = iVar10 + 6;
          pcVar2 = strstr(pcVar11,param_1);
          if (pcVar2 == (char *)0x0) break;
          pcVar11 = pcVar2 + iVar1;
          iVar9 = iVar10 + 7;
          pcVar2 = strstr(pcVar11,param_1);
          if (pcVar2 == (char *)0x0) break;
          pcVar11 = pcVar2 + iVar1;
          iVar10 = iVar10 + 8;
          pcVar2 = strstr(pcVar11,param_1);
        }
        sVar3 = strlen(pcVar11);
        pcVar11 = pcVar11 + sVar3 + 1;
      } while (pcVar11 < pcVar8);
      if (iVar9 != 0) {
        iVar7 = __n - iVar1;
        CopyBeforeWrite(this);
        pcVar11 = *(char **)this;
        iVar10 = *(int *)(pcVar11 + -8);
        iVar4 = iVar7 * iVar9 + iVar10;
        if ((*(int *)(pcVar11 + -4) < iVar4) || (iVar6 = iVar10, 1 < *(int *)(pcVar11 + -0xc))) {
          AllocBuffer(this,iVar4);
          memcpy(*(void **)this,pcVar11,*(size_t *)(pcVar11 + -8));
          Release(this,(CStringData *)(pcVar11 + -0xc));
          pcVar11 = *(char **)this;
          iVar6 = *(int *)(pcVar11 + -8);
        }
        pcVar2 = pcVar11 + iVar6;
        pcVar8 = pcVar11;
        do {
          if (pcVar2 <= pcVar11) {
            *(int *)(pcVar8 + -8) = iVar4;
            return iVar9;
          }
          while( true ) {
            pcVar5 = strstr(pcVar11,param_1);
            if (pcVar5 == (char *)0x0) break;
            iVar6 = iVar10 + (-iVar1 - (int)pcVar5);
            pcVar11 = pcVar5 + __n;
            iVar10 = iVar10 + iVar7;
            memmove(pcVar11,pcVar5 + iVar1,(size_t)(pcVar8 + iVar6));
            memcpy(pcVar5,param_2,__n);
            pcVar11[(int)(pcVar8 + iVar6)] = '\0';
            pcVar5 = strstr(pcVar11,param_1);
            pcVar8 = *(char **)this;
            if (pcVar5 == (char *)0x0) break;
            pcVar11 = pcVar5 + __n;
            iVar6 = iVar10 + (-iVar1 - (int)pcVar5);
            iVar10 = iVar10 + iVar7;
            memmove(pcVar11,pcVar5 + iVar1,(size_t)(pcVar8 + iVar6));
            memcpy(pcVar5,param_2,__n);
            pcVar11[(int)(pcVar8 + iVar6)] = '\0';
            pcVar8 = *(char **)this;
          }
          sVar3 = strlen(pcVar11);
          pcVar11 = pcVar11 + sVar3 + 1;
        } while( true );
      }
    }
  }
  return 0;
}

