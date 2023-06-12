#include <cstdio>

bool read_from(char array[], size_t index, char& output) {
    size_t upper_bound = (sizeof(array)/sizeof(char)) - 1;
    if (index < 0 || index > upper_bound) {
        printf("Cannot read, index %zd is out of bounds <0, %zd>\n", index, upper_bound);
    }
    output = array[index];
    return true;
}

int main() {
    char lower[] = "abc?d";
    char upper[] = "ABC?E";
    char target;

    if (read_from(upper, 3, target)) {
        printf("Character read: %c\n", target);
    }



    printf("lower: %s\nupper: %s", lower, upper);

    //lower[7] = 'g';             // Super bad. You must never do this.
}