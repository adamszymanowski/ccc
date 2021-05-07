#include <cstdio>
#include <cstdint>
// even with source code from github below, this doesn't seem to work, so I skip it, kind of disappointing, really
#include "concepts.hpp" // taken from https://github.com/asutton/origin

size_t index_of_minimum(Ordered* x, size_t length)
{
    size_t min_index{};
    for (size_t{ 1 }; i < length; i++)
    {
        if (x[i] < x[min_index]) min_index = i;
    }

    return min_index;
}

int main()
{
    printf("Hello, World!\n");
}