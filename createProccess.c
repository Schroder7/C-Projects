#include <stdio.h>
#include <windows.h>

int main(void){

STARTUPINFOW si = {0};
PROCESS_INFORMATION pi = {0};
    if (!CreateProcessW(
        L"C:\\Windows\\System32\\notepad.exe",
        NULL,
        NULL,
        NULL,
        FALSE,
        BELOW_NORMAL_PRIORITY_CLASS,
        NULL,
        NULL,
        &si,
        &pi


    )){
        printf("(-) failed to create process, error: %ld", GetLastError());
        return EXIT_FAILURE;
    }
    printf("(+) process started! pid: %ld", pi.dwProcessId);
    return EXIT_SUCCESS;    
}