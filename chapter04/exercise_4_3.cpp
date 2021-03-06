#include <windows.h>
#include <cstdio>
#include <stdexcept>

struct TimerClass
{
    TimerClass(char* tag) // Constructor
    {
        snprintf(tagged, sizeof(tagged), "%s", tag);
        LARGE_INTEGER ticks;
        if (!QueryPerformanceCounter(&ticks))
        {
            std::runtime_error{"ERROR: QueryPerformanceCounter failed!"};
        }
        timestamp = ticks.QuadPart;
        printf("[%s]start: %llu\n", tagged, timestamp);
    }

    ~TimerClass() // Destructor
    {
        LARGE_INTEGER ticks;
        if (!QueryPerformanceCounter(&ticks))
        {
            std::runtime_error{"ERROR: QueryPerformanceCounter failed!"};
        }

        //printf("[%s]stop : %llu\n", tagged, ticks.QuadPart);
        printf("[%s]delta: %llu\n", tagged, ticks.QuadPart-timestamp);
    }

    TimerClass(TimerClass& tc) // Copy Constructor
        : timestamp{ tc.timestamp }
        {
            char temp_buff[64];
            snprintf(temp_buff, sizeof(temp_buff), "copy of %s", tc.tagged);
            std::strncpy(tagged, temp_buff, sizeof(tagged));
        }
    

    int64_t timestamp;

private:
    char tagged[64];
};

int main()
{
    TimerClass tc1{ "tc1" };
    TimerClass tc2{ "tc2" };
    TimerClass tc3{ tc2 };

}