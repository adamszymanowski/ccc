#include <cstdio>
#include <string>

struct Book
{
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

void PrintBookInfo(Book book)
{
    printf("%s\n", book.name);
    printf(" - %d pages\n", book.pages);
    if (book.hardcover)
    {
        printf(" - Hardcover available\n");
    }
    printf("\n");
}

int main()
{
    Book Year1984;
    // This should this be zero terminaned on purpose?
    strcpy(Year1984.name, "Nineteen Eighty-Four"); // I guess yes, since declaration, doesn't zero out memory, but string literal should be anyway, so...
    Year1984.year = 1949;
    Year1984.hardcover = true;
    PrintBookInfo(Year1984);

    Book ubik = {"Ubik", 1969, 202, true};
    PrintBookInfo(ubik);

    Book neuromancer;
    neuromancer.pages = 271;
    PrintBookInfo(neuromancer);
}