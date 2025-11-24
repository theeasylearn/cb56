#include <iostream>
#include <windows.h>
#include <process.h>

thread_local int tls = 0;

void __stdcall thread_func(void* p)
{
    int id = (int)(intptr_t)p;
    tls++;
    std::cout << "Thread " << id << "  tls = " << tls << "\n";
    Sleep(100);
    tls++;
    std::cout << "Thread " << id << "  now tls = " << tls << "\n\n";
}

int main()
{
    std::cout << "Main thread tls = " << tls << "\n\n";

    HANDLE h1 = (HANDLE)_beginthreadex(NULL,0,(unsigned(__stdcall*)(void*))thread_func,(void*)1,0,NULL);
    HANDLE h2 = (HANDLE)_beginthreadex(NULL,0,(unsigned(__stdcall*)(void*))thread_func,(void*)2,0,NULL);
    HANDLE h3 = (HANDLE)_beginthreadex(NULL,0,(unsigned(__stdcall*)(void*))thread_func,(void*)3,0,NULL);
    HANDLE h4 = (HANDLE)_beginthreadex(NULL,0,(unsigned(__stdcall*)(void*))thread_func,(void*)4,0,NULL);

    WaitForSingleObject(h1,INFINITE);
    WaitForSingleObject(h2,INFINITE);
    WaitForSingleObject(h3,INFINITE);
    WaitForSingleObject(h4,INFINITE);

    CloseHandle(h1); CloseHandle(h2); CloseHandle(h3); CloseHandle(h4);

    std::cout << "Back in main, tls = " << tls << "\n";
    return 0;
}