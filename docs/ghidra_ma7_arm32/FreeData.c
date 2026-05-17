/* FreeData @ 0002f394 10B */


/* CString::FreeData(CStringData*) */

CString * __thiscall CString::FreeData(CString *this,CStringData *param_1)

{
  CString *extraout_r0;
  
  if (param_1 != (CStringData *)0x0) {
    operator_delete__(param_1);
    return extraout_r0;
  }
  return this;
}

