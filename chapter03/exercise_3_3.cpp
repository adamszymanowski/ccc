#include <cstdio>

struct Element 
{
    
    Element (int value)
    {
        operating_number = value;
        prev = nullptr;
        next = nullptr;
    }
    
    void insert_after(Element* new_element)
    {
        new_element->next = next;
        new_element->prev = this;
        next = new_element;
    }

    void insert_before(Element* new_element)
    {
        new_element->next = this;
        new_element->prev = prev;
        prev = new_element;
    }

    Element* next{};
    Element* prev{};
    int operating_number;
};

int main()
{
    Element elem1 {12};
    //Element elem2 {25};
    elem1.insert_after(&Element{ 25 });
    elem1.insert_before(&Element{ 11 });
    //elem1.next.insert_after(&Element{ 37 }); // TODO: figure out this later;
    printf("numbers:\n");
    printf("%d -> %d -> %d\n",
        elem1.prev->operating_number,
        elem1.operating_number,
        elem1.next->operating_number
    );

    do {

    } while(elem)
}