/* ConcatInPlace @ 0002f5dc 106B */


/* CString::ConcatInPlace(int, char const*) */

void __thiscall CString::ConcatInPlace(CString *this,int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    return;
  }
  pcVar2 = *(char **)this;
  if (*(int *)(pcVar2 + -0xc) < 2) {
    iVar1 = *(int *)(pcVar2 + -8);
    if (iVar1 + param_1 <= *(int *)(pcVar2 + -4)) {
      memcpy(pcVar2 + iVar1,param_2,param_1);
      *(int *)(*(int *)this + -8) = param_1 + *(int *)(*(int *)this + -8);
      *(undefined1 *)(*(int *)this + *(int *)(*(int *)this + -8)) = 0;
      return;
    }
  }
  else {
    iVar1 = *(int *)(pcVar2 + -8);
  }
  ConcatCopy(this,iVar1,pcVar2,param_1,param_2);
  Release(this,(CStringData *)(pcVar2 + -0xc));
  return;
}

