#include <iostream> // adding my own code to check things out

int main()
{
    int x = 0;
    bool verdict;

    verdict = 42 == x; // Equality
    std::cout << "42 == " << x << " is: " << (verdict ? "True" : "False") << std::endl;

    verdict = 42 != x; // Inequality
    std::cout << "42 !=  " << x << " is: " << (verdict ? "True" : "False") << std::endl;

    verdict = 100 > x; // Greater than
    std::cout << "100 > " << x << " is: " << (verdict ? "True" : "False") << std::endl;

    verdict = 123 >= x; // Greater than or equal to
    std::cout << "123 >= " << x << " is: " << (verdict ? "True" : "False") << std::endl;

    verdict = -10 < x; // Less than
    std::cout << "-10 < " << x << " is: " << (verdict ? "True" : "False") << std::endl;

    verdict= -99 <= x; // Less than or equal to
    std::cout << "-99 <= " << x << " is: " << (verdict ? "True" : "False") << std::endl; 
}