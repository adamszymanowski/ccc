#include <cstdio>

struct ClockOfTheLongNow
{
    ClockOfTheLongNow(int year_in)
    {
        if(!set_year(year_in))
        {
            year = 2019;
        }
    }

    bool set_year(int year)
    {
        if (year < 2019) return false;
        this->year = year;
        return true;
    }

    /* remove const here and get bunch of 
    ../listing_3_18.cpp(37): error C2662: 'int ClockOfTheLongNow::get_year(void)': cannot convert 'this' pointer from 'const ClockOfTheLongNow' to 'ClockOfTheLongNow &'
    ../listing_3_18.cpp(37): note: Conversion loses qualifiers

    Errors
    */
    int get_year() const
    {
        return year;
    }

private:
    int year;
};

bool is_leap_year(const ClockOfTheLongNow& clock)
{
    if (clock.get_year() % 4 > 0)   return false;
    if (clock.get_year() % 100 > 0) return true;
    if (clock.get_year() % 400 > 0) return false;
    return true;
}

struct Avout
{
    Avout(const char* name, long year_of_apert)
        : name { name }, apert { year_of_apert }
        {}

    void announce() const
    {
        printf("My name is %s and my next apert is %d.\n", name, apert.get_year());
    }

    // extra stuff
    void is_apert_leap() const
    {
        const char* result = is_leap_year(apert.get_year()) ? "" : "NOT "; 
        printf("%s's apert year (%d) is %sleap year.\n", name, apert.get_year(), result);
    }

    const char* name;
    ClockOfTheLongNow apert;
};

int main()
{
    Avout raz { "Erasmas", 3010 };
    Avout jad { "Jad", 4000 };
    raz.announce();
    jad.announce();
    // extra stuff
    raz.is_apert_leap();
    jad.is_apert_leap();
}