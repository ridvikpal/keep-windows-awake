# Keep Windows Awake

A simple application that keeps your windows computer awake as long as it is running, by using the `SetThreadExecutionState` windows API. The docs for this API can be found here: https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-setthreadexecutionstate

## Building

The application can be built using the MSVC compiler:

```powershell
if (!(Test-Path build)) { New-Item -ItemType Directory -Path build }
cl /EHsc main.cpp /Fo:build\ /Fd:build\ /Fe:build\KeepWindowsAwake.exe /link user32.lib
```
