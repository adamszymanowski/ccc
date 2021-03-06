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
        printf("start: %llu\n", timestamp);
    }

    ~TimerClass()
    {
        LARGE_INTEGER ticks;
        if (!QueryPerformanceCounter(&ticks))
        {
            std::runtime_error{"ERROR: QueryPerformanceCounter failed!"};
        }

        printf("stop : %llu\n", ticks.QuadPart);
        printf("delta: %llu\n", ticks.QuadPart-timestamp);
    }
    
    int64_t timestamp;
};

int main()
{
    TimerClass tc;
}