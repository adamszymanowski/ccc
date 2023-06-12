#include <cstdio>
int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = &upper[0];

    *(lower + 3) = 'd'; // lower decays into a pointer when we add
    *(upper_ptr + 3) = 'D';

    printf("lower: %s\nupper: %s", lower, upper);

    *(lower + 7) = 'g';
}