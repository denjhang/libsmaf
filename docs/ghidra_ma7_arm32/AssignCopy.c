/* AssignCopy @ 0002f4b0 36B */


/* CString::AssignCopy(int, char const*) */

void __thiscall CString::AssignCopy(CString *this,int param_1,char *param_2)

{
  AllocBeforeWrite(this,param_1);
  memcpy(*(void **)this,param_2,param_1);
  *(int *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}

