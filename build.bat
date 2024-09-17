@echo off
set http_proxy=http://192.168.231.1:1095
set https_proxy=http://192.168.231.1:1095
set DIR_CUR=%~dp0
set DIR_TOOLS=%DIR_CUR%tools
SET INSTALLER_MSYS2=%DIR_TOOLS%\msys2-x86_64-20230127.exe
SET DIR_MSYS2=%DIR_TOOLS%\msys2
SET URL_MSYS2="https://github.com/msys2/msys2-installer/releases/download/2023-01-27/msys2-x86_64-20230127.exe"
if exist %INSTALLER_MSYS2% (
	echo %INSTALLER_MSYS2% is exist!
) else (
	echo ***** %INSTALLER_MSYS2% is not exist! downloading from %URL_MSYS2%
	echo ***** You can also download and put it in tools folder.
	cd %DIR_TOOLS%
	wget %URL_MSYS2%
)

if exist %DIR_MSYS2% (
	echo %DIR_MSYS2% is exist!
) else (
	echo ***** INSTALL MSYS2 TO %DIR_MSYS2%
	%INSTALLER_MSYS2% in --root %DIR_MSYS2% --accept-messages  --accept-licenses --confirm-command
	copy %DIR_MSYS2%\etc\fstab %DIR_MSYS2%\etc\fstab.bak
	FOR %%A IN ("%~dp0.") DO SET mrfolder=%%~dpA
	echo %mrfolder% /MountainRipper>>%DIR_MSYS2%\etc\fstab
)

echo ****** Now open a msys2 shell to build libraries

echo %1 | findstr "^msvc" >nul
if %errorlevel% equ 0 (
        %DIR_MSYS2%\msys2_shell.cmd -where  %DIR_CUR%
) else (
        %DIR_MSYS2%\msys2_shell.cmd -mingw64 -where  %DIR_CUR%
)
