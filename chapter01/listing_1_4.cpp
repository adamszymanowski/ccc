#include <cstdio>

void x_is_what(int x) // toying around with this code
{
    printf("x = %d is ", x);
    if (x > 0) printf("positive.\n");
    else if (x < 0) printf("negative.\n");
    else printf("zero.\n");
}

int main()
{
    int x;
    x = 0;
    x_is_what(x);
    x = -12;
    x_is_what(x);
    x = 27;
    x_is_what(x);
}