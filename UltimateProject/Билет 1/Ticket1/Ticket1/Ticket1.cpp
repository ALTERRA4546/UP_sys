#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    ZeroMemory(&pi, sizeof(pi));

    wchar_t programm[] = { L"C:\\Program Files\\Windows NT\\Accessories\\wordpad.exe" };

    CreateProcess(NULL, programm, NULL, NULL, false, 0, NULL, NULL, &si, &pi);

    cout << "Дикриптор " << pi.hProcess << " ИДПотока " << pi.dwProcessId << " Приоритет " << GetPriorityClass(pi.hProcess);

    string s;
    while (cin >> s)
    {
        if (s == "close")
        {
            TerminateProcess(pi.hProcess,0);
        }
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
}