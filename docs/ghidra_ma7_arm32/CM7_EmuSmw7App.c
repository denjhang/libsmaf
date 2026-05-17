/* CM7_EmuSmw7App @ 0002fe8c 30B */


/* CM7_EmuSmw7App::CM7_EmuSmw7App() */

CM7_EmuSmw7App * __thiscall CM7_EmuSmw7App::CM7_EmuSmw7App(CM7_EmuSmw7App *this)

{
  CWinApp::CWinApp((CWinApp *)this);
  *(int *)this = *(int *)(DAT_0002feac + 0x2fe9c) + 8;
  InitInstance(this);
  return this;
}

