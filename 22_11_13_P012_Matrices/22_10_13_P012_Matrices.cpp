// 22_10_31_008_CP8_Tamaño_de_arrays.cpp.
// Juan Pablo Saavedra Ramírez
// El arreglo dinamico puede aumentar su tamaño si el algoritmo asi lo requiere

#include <iostream>

int main()
{
    int edades[3][2] = { {1,2},{9,8},{14,21} };
    int filas = (sizeof(edades) / sizeof(edades[0]));

    std::cout << "filas: " << filas << std::endl;

    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    std::cout << "columnas: " << columnas << std::endl;




    //Matriz 0
    int matriz[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    //rellenar
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int i1 = 0; i1 < (sizeof(matriz[0]) / sizeof(matriz[0][0])); i1++)
        {
            matriz[i][i1] = rand() % 10;;
        }
    }
    //mostrar
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int i1 = 0; i1 < (sizeof(matriz[0]) / sizeof(matriz[0][0])); i1++)
        {
            std::cout << matriz[i][i1] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //matriz 1
    int matriz1[5][5] = { {1,2},{3,4},{5,6},{7,8},{9,10} };
    //rellenar
    for (int j = 0; j < (sizeof(matriz1) / sizeof(matriz1[0])); j++)
    {
        for (int j1 = 0; j1 < (sizeof(matriz1[0]) / sizeof(matriz1[0][0])); j1++)
        {
            matriz1[j][j1] = rand() % 10;
        }
    }
    //mostrar
    for (int j = 0; j < (sizeof(matriz1) / sizeof(matriz1[0])); j++)
    {
        for (int j1 = 0; j1 < (sizeof(matriz1[0]) / sizeof(matriz1[0][0])); j1++)
        {
            std::cout << matriz1[j][j1] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //matriz 2
    int matriz2[10][10];
    for (int k = 0; k < (sizeof(matriz2) / sizeof(matriz2[0])); k++)
    {
        for (int k1 = 0; k1 < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); k1++)
        {
            matriz2[k][k1] = rand() % 10;;
        }
    }
    //mostrar
    for (int k = 0; k < (sizeof(matriz2) / sizeof(matriz2[0])); k++)
    {
        for (int k1 = 0; k1 < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); k1++)
        {
            std::cout << matriz2[k][k1] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;


    //Matriz dinamica
    int f;
    std::cout << "Dame el numero de filas" << std::endl;
    std::cin >> f;
    int* puntero1 = new int[f];

    int c;
    std::cout << "Dame el numero de columnas" << std::endl;
    std::cin >> c;
    int* puntero2 = new int[c];

    int** matriz = new int* [f];
    for (int j = 0; j < f; j++)
    {
        puntero1[j] = new int[f];
    }
}
