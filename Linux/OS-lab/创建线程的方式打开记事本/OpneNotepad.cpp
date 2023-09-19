#include <windows.h>
#include <tchar.h>
#include <cstdio>

DWORD WINAPI OpenNotepadThread(LPVOID lpParam) {
    // 定义要打开的应用程序的路径
    LPCTSTR appName = _T("notepad.exe");

    // 创建进程信息结构体
    STARTUPINFO startupInfo;
    PROCESS_INFORMATION processInfo;

    // 初始化进程信息结构体
    ZeroMemory(&startupInfo, sizeof(startupInfo));
    startupInfo.cb = sizeof(startupInfo);
    ZeroMemory(&processInfo, sizeof(processInfo));

    // 创建新进程
    if (!CreateProcess(
        NULL,                   // 指向可执行文件名的指针
        (LPTSTR)appName,        // 命令行参数
        NULL,                   // 进程句柄不可继承
        NULL,                   // 线程句柄不可继承
        FALSE,                  // 不继承句柄
        0,                      // 无特殊标志
        NULL,                   // 使用父进程的环境变量
        NULL,                   // 使用父进程的工作目录
        &startupInfo,           // 启动信息
        &processInfo            // 进程信息
    )) {
        _tprintf(_T("WRONGING：%d\n"), GetLastError());
        return 1;
    }

    // 等待新进程结束
    WaitForSingleObject(processInfo.hProcess, INFINITE);

    // 关闭进程和线程句柄
    CloseHandle(processInfo.hProcess);
    CloseHandle(processInfo.hThread);

    return 0;
}

int main() {
    // 创建线程
    HANDLE hThread = CreateThread(NULL, 0, OpenNotepadThread, NULL, 0, NULL);
    
    if (hThread == NULL) {
        _tprintf(_T("WRONGING：%d\n"), GetLastError());
        return 1;
    }

    // 等待线程结束
    WaitForSingleObject(hThread, INFINITE);

    // 关闭线程句柄
    CloseHandle(hThread);

    return 0;
}
