// 22_11_27_P018_Producto_de_2_numeros.cpp 
// Juan Pablo Saavedra Ramírez

#include <iostream>

int producto2n(int num1, int num2)
{
    if (num1 == 0 or num2 == 0)
        return 0;
    else
    {
        return num1 + producto2n(num1, num2 - 1);
    }
}
int main()
{
    int numero1, numero2, producto;

    std::cout << "Dame primer numero: ";
    std::cin >> numero1;
    std::cout << "Dame el segundo numero ";
    std::cin >> numero2;
    producto = producto2n(numero1, numero2);
    std::cout << "El resultado de los 2 numeros es " << producto << std::endl;

}

