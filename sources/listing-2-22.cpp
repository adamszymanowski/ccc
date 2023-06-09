#include <cstdio>

struct ClockOfTheLongNow {
    ClockOfTheLongNow() {
        year = 2019;
    }
    int get_year() {
        return year;
    }
private:
    int year;
};

int main() {
    ClockOfTheLongNow clock;
    printf("Default year: %d", clock.get_year());
}