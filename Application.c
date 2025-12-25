#include <stdio.h>
#include <Windows.h>

// cl Application.c /link user32.lib "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Visual Studio 2022\Visual Studio Tools\Developer Command Prompt for VS 2022.lnk"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
	MessageBoxW(NULL, L"Somebody once told me...", L"Info", MB_OK);
	return 0;
}