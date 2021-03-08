#include <windows.h>
#include <cstdio>
#include <stdexcept>
#include <utility>

struct TimerClass
{
    TimerClass(const char* tag) // Constructor
    {
        snprintf(tagged, sizeof(tagged), "%s", tag);
        LARGE_INTEGER ticks;
        if (!QueryPerformanceCounter(&ticks))
        {
            std::runtime_error{"ERROR: QueryPerformanceCounter failed!"};
        }
        timestamp = ticks.QuadPart;
        printf("[%s]\tstart: %llu\n", tagged, timestamp);
    }

    ~TimerClass() // Destructor
    {
        // A moved-from TimerClass shouldn’t print any output to the console
        // when it gets destructed.
        if (timestamp > 0) // NOTE: is this the way to do it? 
        {
            LARGE_INTEGER ticks;
            if (!QueryPerformanceCounter(&ticks))
            {
                std::runtime_error{"ERROR: QueryPerformanceCounter failed!"};
            }
            printf("[%s]\tdelta: %llu\n", tagged, ticks.QuadPart-timestamp);
        }

    }

    TimerClass(const TimerClass& tc) // Copy Constructor
        : timestamp{ tc.timestamp }
        {
            char temp_buff[64];
            snprintf(temp_buff, sizeof(temp_buff), "copy of %s", tc.tagged);
            std::strncpy(tagged, temp_buff, sizeof(tagged));
        }

    TimerClass& operator=(const TimerClass& tc) // Copy Assignment
    {
        if (this == &tc) return *this;
        timestamp = tc.timestamp;
        char temp_buff[64];
        snprintf(temp_buff, sizeof(temp_buff), "%s is copy of %s", tagged, tc.tagged);
        std::strncpy(tagged, temp_buff, sizeof(tagged));
        return *this;
    }

    TimerClass(TimerClass&& tc) // Move Constructor
    : timestamp{ tc.timestamp }
    {
        tc.timestamp = 0;
        std::strncpy(tagged, tc.tagged, sizeof(tagged));
        printf("moved ");
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
    TimerClass tc4{ "tc4" };
    tc4 = tc1;
    TimerClass tc5{ "tc5" };
    TimerClass tc6{ std::move(tc5) };
}