// 2002_09_26_001_Tipos_de_datos_CP1.cpp : 
// Juan Pablo Saavedra Ramirez


#include <iostream>
#include <String.h>

int main()
{
    bool comprobacion = 0;
    int enteros = 0;
    float decimales = 0;
    double grandes = 0;
    char caracteres = ' ';
    std::string cara = "";

    printf("hola ingresa 0 o 1 para saber si es verdad o falso\n");
    scanf_s("%d", &comprobacion);
    printf("¿Cuantos años tienes?\n");
    scanf_s("%d", &enteros);
    printf("¿Cual es su estatura en metros?\n");
    scanf_s("%f", &decimales);
    printf("¿Cual es tu numero telefonico?\n");
    scanf_s("&lf", &grandes);
    printf("¿Cual es tu sexo?\n");
    scanf_s("%s", &cara);
    std::cin.ignore();
    printf("¿Cual es su nombre?\n");
    scanf_s("%s", caracteres);


    printf("el valor de la comprobacion recibido es: %d\n", comprobacion);
    printf("su edad es: %d\n", enteros);
    printf("su estatura es: %f\n", decimales);
    printf("su numero es: %f\n", grandes);
    printf("su nombre es: %s\n", &caracteres);
    printf("tu sexo es: %s\n", &cara);
}
