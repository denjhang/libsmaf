/* ConcatInPlace @ 0012a49c 164B */


/* CString::ConcatInPlace(int, char const*) */

void __thiscall CString::ConcatInPlace(CString *this,int param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 != 0) {
    pcVar3 = *(char **)this;
    iVar1 = *(int *)(pcVar3 + -8);
    if ((1 < *(int *)(pcVar3 + -0xc)) || (*(int *)(pcVar3 + -4) < param_1 + iVar1)) {
      ConcatCopy(this,iVar1,pcVar3,param_1,param_2);
      Release(this,(CStringData *)(pcVar3 + -0xc));
      return;
    }
    memcpy(pcVar3 + iVar1,param_2,(long)param_1);
    lVar2 = *(long *)this;
    iVar1 = param_1 + *(int *)(lVar2 + -8);
    *(int *)(lVar2 + -8) = iVar1;
    *(undefined1 *)(lVar2 + iVar1) = 0;
  }
  return;
}

