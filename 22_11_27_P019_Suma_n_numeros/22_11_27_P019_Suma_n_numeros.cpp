// 22_11_27_P019_Suma_n_numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Juan Pablo Saavedra Ramírez
// Suma de “n” Números Naturales con Recusividad: Ejercicio: Determinar la suma de los primeros “n” numeros naturales

#include <iostream>

int suma(int numero, int mas, int contador)
{
    if (++contador <= numero)
        return suma(numero, mas + contador, contador);
    else
        return mas;
}

int main()
{
    int numero;

    std::cout << "Ingresa el valor: ";
    std::cin >> numero;
    std::cout << "\nLa suma es: " << suma(numero, 0, 0) << std::endl;

}


