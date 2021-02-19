#include <cstdio>

struct Element {
    Element* next{};
    void insert_after(Element* new_element)
    {
        new_element->next = next;
        next = new_element;
    }

    char prefix[2];
    short operating_number;
};

int main() 
{
    Element trooper1, trooper2, trooper3; 
    trooper1.prefix[0] = 'T';
    trooper1.prefix[1] = 'K';
    trooper1.operating_number = 421;
    trooper1.insert_after(&trooper2);
    trooper2.prefix[0] = 'F';
    trooper2.prefix[1] = 'N';
    trooper2.operating_number = 2187;
    trooper2.insert_after(&trooper3);
    trooper3.prefix[0] = 'L';
    trooper3.prefix[1] = 'S';
    trooper3.operating_number = 005;
    
    // Let's do the dereferencing manually
    Element *cursor = &trooper1; 
    
    printf("stormtrooper %c%c-%d\n",
        cursor->prefix[0],
        cursor->prefix[1],
        cursor->operating_number);

    printf("stormtrooper %c%c-%d\n",
        cursor->next->prefix[0],
        cursor->next->prefix[1],
        cursor->next->operating_number);

    printf("stormtrooper %c%c-%d\n",
        cursor->next->next->prefix[0],
        cursor->next->next->prefix[1],
        cursor->next->next->operating_number);

    // oops
    printf("stormtrooper %c%c-%d\n",
        cursor->next->next->next->prefix[0],
        cursor->next->next->next->prefix[1],
        cursor->next->next->next->operating_number);

}