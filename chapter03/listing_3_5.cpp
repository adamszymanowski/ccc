#include <cstdio>

struct College
{
    char name[256];
};

void print_names(College* colleges, size_t n_colleges)
{
    for (size_t i = 0; i < n_colleges; i++)
    {
        printf("%s College\n", colleges[i].name);
    }
}

int main()
{
    College colleges[] = { "Magdalen", "Nuffield", "Kellog" };
    print_names(colleges, sizeof(colleges) / sizeof(College));
}