#include <cstdio>

int sum(int arg1, int arg2) {
    return arg1 + arg2;
}

int main() {
    int num1 = 3;
    int num2 = 4;
    printf("%d plus %d equals %d\n", num1, num2, sum(num1, num2));
}