#include <cstdio>

bool read_from(char array[], size_t bound, size_t index, char& output) {
    if (index < 0 || index > bound) {
        printf("Cannot read, index %zd is out of bounds <0, %zd>\n", index, bound);
        return false;
    }
    output = array[index];
    return true;
}

bool write_to(char array[], size_t bound, size_t index, char input) {
    if (index < 0 || index > bound) {
        printf("Cannot write to index %zd - it is out of bounds <0, %zd>!\n", index, bound);
        return false;
    }
    array[index] = input;
    return true;
}

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    size_t bound_for_lower = sizeof(lower)/sizeof(char) - 2; // penultimate index (don't overwrite last \0)
    size_t bound_for_upper = sizeof(lower)/sizeof(char) - 2;
    char target;

    printf("lower: %s\nupper: %s\n", lower, upper);

    if (read_from(lower, bound_for_lower, 4, target)) {
        printf("Character read: %c\n", target);
    }

    if (read_from(upper, bound_for_upper, 3, target)) {
        printf("Character read: %c\n", target);
    }

    if (read_from(lower, bound_for_lower,7, target)) {
        printf("Character read: %c\n", target);
    }

    printf("----\n");
    if (write_to(lower, bound_for_lower, 3, 'd')) {
        printf("Successful write.\n");
    }
    
    if (write_to(upper, bound_for_upper, 3, 'D')) {
        printf("Successful write.\n");
    }

    if (write_to(lower, bound_for_lower, 7, 'g')) {
        printf("Successful write.\n");
    }

    printf("lower: %s\nupper: %s\n", lower, upper);
}