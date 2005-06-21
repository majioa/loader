//#include "../src/strings.h"

#include <windows.h>
#ifdef __BORLANDC__
  #pragma argsused
#endif
int APIENTRY WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{
//   MessageBox(NULL,"","",MB_OK);
//FastString a("123.3");
  void *hin;
 // for(;;)
    hin = LoadLibrary("strings.dll");
//    hin = LoadLibrary("locale.dll");
//    hin = LoadLibrary("loader.dll");
//    hin = LoadLibrary("zclkernl.dll");
  int  i =0;
  i = GetLastError();
  LPVOID lpMsgBuf;

FormatMessage(
    FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
    NULL,
    i,
    MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
    (LPTSTR) &lpMsgBuf,
    0,
    NULL
);
// Display the string.
//MessageBox( NULL, (const char *)lpMsgBuf, "GetLastError", MB_OK|MB_ICONINFORMATION );

// Free the buffer.
LocalFree( lpMsgBuf );


//  int i = a;
/*  char c = a;
  short s = a;
  float f = a;
  double d = a;
  long double extendedf = a;
  void *p = a;
  char *s1 = (char *)p;*/
  return i;
}
