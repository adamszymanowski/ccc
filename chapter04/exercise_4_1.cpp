#include <windows.h>
#include <cstdio>
#include <stdexcept>

struct TimerClass
{
    TimerClass()
    {
        LARGE_INTEGER ticks;
        if (!QueryPerformanceCounter(&ticks))
        {
            std::runtime_error{"ERROR: QueryPerformanceCounter failed!"};
        }
        timestamp = ticks.QuadPart;
    }
    
    int64_t timestamp;
};

int main()
{
    TimerClass tc;
    printf("timestamp: %llu\n", tc.timestamp);
}