// 09_11_22_P011_Recursiva.cpp 
// Saavedra Ramírez Juan Pablo
// En este programa veremos recursividad

#include <iostream>

/*void invertir(int num)
{
    std::cout << num % 10;
    if (num > 10)
    {
        invertir(num / 10);
    }

}
*/

/*int main()
{
    int numero;
    do
    {
        std::cout << "ingresa un numero de 4 cifras\n";
        std::cin >> numero;
        if (numero < 0)
        {
            std::cout << "\nIngresa un numero entero y positivo de 4 cifras :b" << std::endl;
        }
    } while (numero < 0);
    invertir(numero);
    std::cout << std::endl<< std::endl;
}
*/

// 1.-Convertir un Numero Decimal a Binario :
void convertir(int dec)
{

    std::string binario;

    std::cout << dec % 2;
    if (dec > 0)
    {
        if (dec % 2 == 0)
        {
            binario = "0" + binario;
        }
        else
        {
            binario = "1" + binario;
        }
        dec = (int)dec / 2;

        convertir(dec);


    }
}

int main()
{
    int decimal;
    do
    {
        std::cout << "ingrese un numero entero positivo" << std::endl;
        std::cin >> decimal;
        std::cout << "El numero en binario es:\n";
        if (decimal < 0)
        {
            std::cout << "Ese no es valido padrino\n";
        }
    } while (decimal < 0);
    convertir(decimal);

    std::cout << std::endl << std::endl;
}