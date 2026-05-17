/* ~CWinApp @ 0002efec 18B */


/* CWinApp::~CWinApp() */

CWinApp * __thiscall CWinApp::~CWinApp(CWinApp *this)

{
  ~CWinApp(this);
  operator_delete(this);
  return this;
}

