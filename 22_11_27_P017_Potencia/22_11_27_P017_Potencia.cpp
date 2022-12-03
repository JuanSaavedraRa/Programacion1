// 22_11_27_P017_Potencia.cpp 
// Juan Palo Saavedra Ramírez
//Potencia con Recursividad: Ejercicio: Determinar la potencia de un numero con funciones recursivas

#include <iostream>


double potencia(int base,int exponente)
{
    if (exponente == 0)
        return 1;
    else
        return base * (potencia(base, exponente - 1));
}
int main()
{
    int base, exponente;
    std::cout << "Introduce el numero base ";
    std::cin >> base;
    do
    {
        std::cout << "Introduzca exponente/potencia a la que se elevara ";
        std::cin >> exponente;

    } while (exponente < 0);
   
    std::cout << "Queda asi: " << base << "^" << exponente << "\nLa respuesta es: " << potencia(base, exponente) << std::endl;
  
}
