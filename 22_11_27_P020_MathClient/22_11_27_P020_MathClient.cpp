// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

#include <iostream>
#include "MathLibrary.h"

int main()
{
    double n1 = 7.4;
    int n2 = 99;

    std::cout << "a + b = " <<
        MathLibrary::Arithmetic::sumar(n1, n2) << std::endl;
    std::cout << "a - b = " <<
        MathLibrary::Arithmetic::restar(n1, n2) << std::endl;
    std::cout << "a * b = " <<
        MathLibrary::Arithmetic::Multipricar(n1, n2) << std::endl;
    std::cout << "a / b = " <<
        MathLibrary::Arithmetic::Dividir(n1, n2) << std::endl;

    return 0;
}
