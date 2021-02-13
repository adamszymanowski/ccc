#include <cstdio>

struct ClockOfTheLongNow
{
    ClockOfTheLongNow()
    {
        year = 2019;
    }

    void set_year(int new_year)
    {
        year = new_year;
    }

    int get_year()
    {
        return year;
    }
private:
    int year;
};

void add_year(ClockOfTheLongNow& clock)
{
    clock.set_year(clock.get_year() + 1); // No deref operator needed
}

int main()
{
    ClockOfTheLongNow clock;
    printf("The year is %d\n", clock.get_year());
    add_year(clock); // clock is implicitly passed by reference!
    printf("The year is %d\n", clock.get_year());
}