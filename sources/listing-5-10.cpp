#include <cstdio>

struct BaseClass {
    virtual ~BaseClass() = default;
};

struct DerivedClass : BaseClass {
    DerivedClass() {

    }
    ~DerivedClass() {
        printf("Constricting DerivedClass x.\n");
        BaseClass* x { new DerivedClass{} };
        printf("Deleting x as a BaseClass*.\n");
    }
};

int main() {
    printf("Constructing DerivedClass x.\n");
    BaseClass* x{ new DerivedClass{} };
    printf("Deleting x as a BaseClass*.\n");
    delete x;
}