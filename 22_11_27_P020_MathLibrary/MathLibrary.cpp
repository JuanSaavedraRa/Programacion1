// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include "MathLibrary.h"

namespace MathLibrary
{
    double Arithmetic::sumar(double n1, double n2)
    {
        return n1 + n2;
    }

    double Arithmetic::restar(double n1, double n2)
    {
        return n1 - n2;
    }

    double Arithmetic::Multipricar(double n1, double n2)
    {
        return n1 * n2;
    }

    double Arithmetic::Dividir(double n1, double n2)
    {
        return n1 / n2;
    }
}