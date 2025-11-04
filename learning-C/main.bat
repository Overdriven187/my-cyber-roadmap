@echo off
cd /d "%~dp0"

:: --- config ---
set "GCC=C:\msys64\ucrt64\bin\gcc.exe"
set "SRC=main.c"
set "OUT=main.exe"

if not exist "%SRC%" (
  echo ❌ %SRC% not found in %cd%
  pause
  exit /b 1
)

:build
echo [build] %GCC% -std=c17 -Wall -Wextra -O2 -mconsole "%SRC%" -o "%OUT%"
"%GCC%" -std=c17 -Wall -Wextra -O2 -mconsole "%SRC%" -o "%OUT%"
if errorlevel 1 (
  echo.
  echo ❌ Build failed.
  pause
  exit /b 1
)

:loop
echo --------------------------
echo Running %OUT%...
echo --------------------------
"%OUT%"
echo.
echo [A]gain  [R]ebuild  [Q]uit
choice /c ARQ /n
if errorlevel 3 exit /b
if errorlevel 2 goto build
goto loop
