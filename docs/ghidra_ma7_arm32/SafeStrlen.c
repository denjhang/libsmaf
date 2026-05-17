/* SafeStrlen @ 0002f324 12B */


/* CString::SafeStrlen(char const*) */

void __thiscall CString::SafeStrlen(CString *this,char *param_1)

{
  if (param_1 == (char *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00120504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_00120508 + 0x12050c))(param_1);
  return;
}

