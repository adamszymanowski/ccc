#include <windows.h>
#include <cstdio>

int main()
{
    FILETIME SysTimeAsFileTime;
    GetSystemTimePreciseAsFileTime(&SysTimeAsFileTime);

    SYSTEMTIME SysTime;
    if(FileTimeToSystemTime(&SysTimeAsFileTime, &SysTime))
    {
        printf("Date: %d.%d.%d\n", SysTime.wYear, SysTime.wMonth, SysTime.wDay);
    }
    else
    {
        printf("FileTimeToSystemTime ERROR\n"); // just basic error info for now
    }
}