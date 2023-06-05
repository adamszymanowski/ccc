#include <cstdio>

int absolute_value(int x) {
    int result;
    if (x >= 0) {
        result = x;
    }
    else {
        result = -x;
    }
    return result;
}

int main() {
    int my_num = -10;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}