/* FreeData @ 0012a084 16B */


/* CString::FreeData(CStringData*) */

void __thiscall CString::FreeData(CString *this,CStringData *param_1)

{
  if (param_1 != (CStringData *)0x0) {
    operator_delete__(param_1);
    return;
  }
  return;
}

