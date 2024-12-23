#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    ZeroMemory(&pi, sizeof(pi));

    wchar_t programm[] = { L"C:\\Users\\KING\\source\\repos\\Ticket2\\x64\\Debug\\Ticket2.1.exe" };
    CreateProcess(NULL, programm, NULL, NULL, false, 0, NULL, NULL, &si, &pi);

    WaitForSingleObject(pi.hProcess,INFINITE);

    cout << "done";

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
}