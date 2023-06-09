#include <cstdio>

enum class Operation {
    Add,    
    Subtract,
    Multiply,
    Divide,
};

struct Calculator {
    Calculator(Operation op) {
        operation = op;
    }

    int calculate(int a, int b) {
        int result{ 0 };
        switch (operation) {
            case Operation::Add: {
                result = a + b;
            } break;
            case Operation::Subtract: {
                result = a - b;
            } break;
            case Operation::Multiply: {
                result = a * b;
            } break;
            case Operation::Divide: {
                result = a / b;
            } break;
        }
        return result;
    }

private:
    Operation operation;
};

int main() {
    int 
    a1 = 3,
    b1 = 4,
    a2 = 11,
    b2 = 7;

    Calculator addition{ Operation::Add }; 
    printf("%d + %d = %d\n", a1, b1, addition.calculate(a1, b1));
    printf("%d + %d = %d\n", a2, b2, addition.calculate(a2, b2));

    Calculator subtraction{ Operation::Subtract };
    printf("%d - %d = %d\n", a1, b1, subtraction.calculate(a1, b1));
    printf("%d - %d = %d\n", a2, b2, subtraction.calculate(a2, b2));

    Calculator multiplication{ Operation::Multiply };
    printf("%d * %d = %d\n", a1, b1, multiplication.calculate(a1, b1));
    printf("%d * %d = %d\n", a1, b1, multiplication.calculate(a2, b2));

    Calculator division{ Operation::Divide };
    printf("%d / %d = %d\n", a1, b1, division.calculate(a1, b1));
    printf("%d / %d = %d\n", a2, b2, division.calculate(a2, b2));
}