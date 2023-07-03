@echo off
set http_proxy=http://127.0.0.1:1080
set https_proxy=http://127.0.0.1:1080
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
echo ****** $ cd /MountainRipper/third_party
echo ****** $ ./build.sh

echo %1 | findstr "^msvc" >nul
if %errorlevel% equ 0 (
	%DIR_MSYS2%\msys2_shell.cmd
) else (
	echo ****** $ ./build.sh
	start %DIR_MSYS2%\mingw64.exe
)
