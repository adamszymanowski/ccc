#include <cstdio>

enum class Operation
{
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator
{
    Calculator(Operation op)
    {
        oper = op;
    }

    int calculate(int a, int b)
    {
        switch(oper)
        {
            case Operation::Add: 
            {
                return a + b;
            } break;
            case Operation::Subtract: 
            {
                return a - b;
            } break;
            case Operation::Multiply: 
            {
                return a * b;
            } break;
            case Operation::Divide: 
            {
                return a / b;
            } break;
        }
    }

    Operation get_oper()
    {
        return oper;
    }

private:
    Operation oper;
};

char WhichOperation(Operation oper)
{
    switch(oper)
        {
            case Operation::Add: 
            {
                return '+';
            } break;
            case Operation::Subtract: 
            {
                return '-';
            } break;
            case Operation::Multiply: 
            {
                return '*';
            } break;
            case Operation::Divide: 
            {
                return '/';
            } break;
        }
}

void CalculateAndPrintResult(Calculator calc, int a, int b)
{
    printf("%d %c %d = %d\n", a, WhichOperation(calc.get_oper()), b, calc.calculate(a, b));
}

int main()
{
    Calculator CalcAdd(Operation::Add);
    CalculateAndPrintResult(CalcAdd, 2, 3);

    Calculator CalcSub(Operation::Subtract);
    CalculateAndPrintResult(CalcSub, 7, 3);

    Calculator CalcMul(Operation::Multiply);
    CalculateAndPrintResult(CalcMul, 6, 8);

    Calculator CalcDiv(Operation::Divide);
    CalculateAndPrintResult(CalcDiv, 9, 3);
}