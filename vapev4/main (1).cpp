#include <windows.h>
#include <tlhelp32.h>
#include <stdio.h>

#define CLASS_NAME "LWJGL"

typedef struct {
    DWORD pid;
    char title[MAX_PATH];
} ProcessInfo;

void GetCurrentDirectoryFilePath(const char* fileName, char* filePath, size_t filePathSize) {
    GetModuleFileNameA(NULL, filePath, filePathSize);
    char* lastSlash = strrchr(filePath, '\\');
    if (lastSlash) {
        *(lastSlash + 1) = '\0';
        strcat_s(filePath, filePathSize, fileName);
    }
}

BOOL FileExists(const char* filePath) {
    DWORD fileAttr = GetFileAttributesA(filePath);
    return (fileAttr != INVALID_FILE_ATTRIBUTES && !(fileAttr & FILE_ATTRIBUTE_DIRECTORY));
}

BOOL CALLBACK EnumWindowsCallback(HWND hwnd, LPARAM lParam) {
    char className[256];
    char windowTitle[MAX_PATH];
    DWORD pid;

    if (GetClassNameA(hwnd, className, sizeof(className)) && strcmp(className, CLASS_NAME) == 0) {
        if (GetWindowTextA(hwnd, windowTitle, sizeof(windowTitle))) {
            GetWindowThreadProcessId(hwnd, &pid);
            ProcessInfo* processList = (ProcessInfo*)lParam;
            while (processList->pid != 0) processList++;
            processList->pid = pid;
            strncpy_s(processList->title, windowTitle, MAX_PATH - 1);
        }
    }
    return TRUE;
}

void inject(HANDLE hTargetProcess, const char* dllPath) {
    LPVOID lpPathAddress = VirtualAllocEx(hTargetProcess, NULL, lstrlenA(dllPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (lpPathAddress == NULL) {
        printf("[-] Error: Failed to allocate memory in the target process.\n");
        system("pause");
        return;
    }

    printf("[+] Memory allocated at: 0x%p\n", lpPathAddress);

    if (!WriteProcessMemory(hTargetProcess, lpPathAddress, dllPath, lstrlenA(dllPath) + 1, NULL)) {
        printf("[-] Error: Failed to write the DLL path into the target process memory.\n");
        system("pause");
        return;
    }

    printf("[+] DLL path written successfully.\n");

    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    if (hKernel32 == NULL) {
        printf("[-] Error: Failed to get handle to kernel32.dll.\n");
        system("pause");
        return;
    }

    FARPROC loadLibraryAddr = GetProcAddress(hKernel32, "LoadLibraryA");
    if (loadLibraryAddr == NULL) {
        printf("[-] Error: Failed to get the address of LoadLibraryA.\n");
        system("pause");
        return;
    }

    printf("[+] LoadLibraryA address: 0x%p\n", loadLibraryAddr);

    HANDLE hRemoteThread = CreateRemoteThread(hTargetProcess, NULL, 0, (LPTHREAD_START_ROUTINE)loadLibraryAddr, lpPathAddress, 0, NULL);
    if (hRemoteThread == NULL) {
        printf("[-] Error: Failed to create remote thread in the target process.\n");
        system("pause");
        return;
    }

    printf("[+] DLL injected successfully. Remote thread created.\n");
    CloseHandle(hRemoteThread);
    CloseHandle(hTargetProcess);
    Sleep(3000);
}

int main() {
    printf("[!] Cracked by Team John Xina Spec in less than 1 minute.\n");
    printf("[!] Github: https://github.com/JohnXina-spec\n");

    ProcessInfo processList[256] = { 0 };
    char dllPath[MAX_PATH];

    GetCurrentDirectoryFilePath("penis.dll", dllPath, sizeof(dllPath));

    if (!FileExists(dllPath)) {
        printf("[-] Error: DLL file not found at '%s'.\n", dllPath);
        system("pause");
        return 1;
    }

    printf("[+] DLL found at: '%s'\n", dllPath);

    EnumWindows(EnumWindowsCallback, (LPARAM)processList);

    printf("[*] Scanning for processes...\n");
    int count = 0;
    for (int i = 0; processList[i].pid != 0; i++) {
        printf("    [%d] PID: %lu, Title: %s\n", i, processList[i].pid, processList[i].title);
        count++;
    }

    if (count == 0) {
        printf("[-] No minecraft found, launch Minecraft 1.8.9 for use client.\n");
        system("pause");
        return 1;
    }
    else if (count == 1) {
        printf("[+] Found only one instance. Automatically selecting PID: %lu, Title: %s\n", processList[0].pid, processList[0].title);
        DWORD pid = processList[0].pid;
        HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
        if (hProcess == NULL) {
            printf("[-] Error: Failed to open target process (PID: %lu).\n", pid);
            system("pause");
            return 1;
        }
        inject(hProcess, dllPath);
    }
    else {
        int choice = -1;
        printf("[*] Select a process to inject (0-%d): ", count - 1);
        scanf_s("%d", &choice);

        if (choice < 0 || choice >= count) {
            printf("[-] Error: Invalid choice.\n");
            return 1;
        }

        DWORD pid = processList[choice].pid;
        HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
        if (hProcess == NULL) {
            printf("[-] Error: Failed to open target process (PID: %lu).\n", pid);
            system("pause");
            return 1;
        }

        printf("[*] Injecting DLL into process PID: %lu, Title: %s...\n", pid, processList[choice].title);
        inject(hProcess, dllPath);
    }
    return 0;
}
