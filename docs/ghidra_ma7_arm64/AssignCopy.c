/* AssignCopy @ 0012a284 76B */


/* CString::AssignCopy(int, char const*) */

void __thiscall CString::AssignCopy(CString *this,int param_1,char *param_2)

{
  long lVar1;
  
  AllocBeforeWrite(this,param_1);
  memcpy(*(void **)this,param_2,(long)param_1);
  lVar1 = *(long *)this;
  *(int *)(lVar1 + -8) = param_1;
  *(undefined1 *)(lVar1 + param_1) = 0;
  return;
}

