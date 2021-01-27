#include <cstdio>

union Variant
{
    char string[10];
    int integer;
    double floating_point;
};

union Variant2
{
    char str[8];
    long long num;
    double flp;
};

void PrintVariant2(Variant2 v2)
{
    printf("----\n");
    printf("As char[8]  : %s\n", v2.str);
    printf("As long long: %lld\n", v2.num);
    printf("As double   : %f\n", v2.flp);
}

int main()
{
    Variant v;
    v.integer = 42;
    printf("The ultimate answer: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Euler's number e:   %f\n", v.floating_point);
    printf("A dumpster fire:    %d\n", v.integer);

    Variant2 v2;
    printf("char[8]: %zd\n", sizeof(v2.str));
    
    v2.num = 65;
    PrintVariant2(v2);

    v2.num = 65 + (100 << 8) + (97 << 16) + (109 << 24);
    PrintVariant2(v2);

    v2.str[0] = 'a';
    v2.str[1] = 'd';
    v2.str[2] = 'a';
    v2.str[3] = 'm';
    PrintVariant2(v2);

    v2.flp = 1835099201;
    PrintVariant2(v2);

    v2.flp = -1.618;
    PrintVariant2(v2);

    v2.flp = 1.41421356237;
    PrintVariant2(v2);
}