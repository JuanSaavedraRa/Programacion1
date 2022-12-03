// 22_10_17_005_ciclos_anidados.cpp
//Juan Pablo Saavedra Ramírez
// Aprenderemos a anidar instrucciones

#include <iostream>
#include <string>

int main()
{
    /*
    std::string color_Cp1 = "rubio";
    std::string color_Cp2 = "Pelirojo";
    std::string color_Op1 = "azules";
    std::string color_Op2 = "Marrones";

    if (color_Cp1 == "Rubio")
    {
        std::cout << "Tu personaje tiene color de cabello rubio" << std::endl;
        if (color_Op1 == "Azules")
        {
            std::cout << "tu persona tiene el color de ojos azules" << std::endl;
            std::cout << "Tu personaje es Trump" << std::endl;
        }
    } */

    /*
    int arreglo[3] = { 1,2,3 };
    int cajas[3][3] = { { 1, 2, 3,},{4,5,6},{7,8,9} };
    //ciclo para ilustrar eñ arreglo simple
    for (int i = 0; i < 3; i++)
    {
        std::cout << "La posicion " << i << "tiene el valor: " << arreglo[i] << std::endl;
    }

    // ciclo para mostrar la matriz
    for (int j = 0; j < 3 ;j++)
    {
        std::cout << "indice j: " << std::endl;
        for (int k = 0; k < 3 ;k++)
        {
            std::cout << "indice k: " << std::endl;
        std::cout << "la posicion [" << j << "," << k << "] tiene el valor " << cajas[j][k];
        }
    }
    */

    //contador 
    int arreglo1[2] = { 1,2 };
    int contador[2][11] = { {0,1,2,3,4,5,6,7,8,9,10},
                            {0,1,2,3,4,5,6,7,8,9,10} };
    for (int j = 0; j < 2; j++)
    {
        std::cout << " Numero interno: " << j << std::endl;
        for (int k = 0; k < 10; k++)
        {
            std::cout << " numero externo: " << k << std::endl;
            std::cout << "la posicion ( " << j << "," << k << " ) cuenta " << contador[j][k] << std::endl;
        }
    }
}

