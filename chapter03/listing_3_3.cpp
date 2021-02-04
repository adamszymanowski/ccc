#include <cstdio>

struct ClockOfTheLongNow
{
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

int main()
{
    ClockOfTheLongNow clock;
    ClockOfTheLongNow* clock_ptr = &clock;
    clock_ptr->set_year(2020);
    printf("Address of clock: %p\n", clock_ptr);
    printf("Value of clock's year: %d\n", clock_ptr->get_year());
    printf("Value of clock's year: %d\n", (*clock_ptr).get_year());
}