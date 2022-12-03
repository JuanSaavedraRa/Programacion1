// 2002_09_26_001_Tipos_de_datos_CP1.cpp : 
// Juan Pablo Saavedra Ramirez
// En esta practica conoceremos la sintaxys para declarar variables
// Solicitar, recibir y mostrar valores

#include <iostream>
#include <String.h>

int main()
{
    //Reglas o Sintaxys de declarar variables
    //1)Tipo de dato, 2)nombre, 3)Inicializacion, 4)Fin de comando
    bool comprobacion = 0;
    int enteros = 0;
    float decimales = 0;
    double grandes = 0;
    char caracteres = ' ';
    std::string cara = "";

    //Sintaxys para hablar con el usuario
    //1.-Palabra reservada 2.-Concatenar 3.-entre comillas el texto deseado
    //4.- Concatenar 5.-Salto de linea 6.-Finalizarlo
    std::cout << "Hola Usuario" << std::endl;
    std::cout << "el valor de la comprobacion es: " << comprobacion << std::endl;
    std::cout << "el valor de enteros es: " << enteros << std::endl;
    std::cout << "el valor de decimales es: " << decimales << std::endl;
    std::cout << "el valor de grandes es: " << grandes << std::endl;
    std::cout << "el valor caracteres es: " << caracteres << std::endl;
    std::cout << " el valor cara es: " << cara << std::endl;

    //sintaxys para pedir valores
    //1.- Palabara reservada, 2.- concatenar, 3.-Escribe entre las comillas, 4.-concatenar, 5.-salto de linea, 6.- fin de comando
    std::cout << "hola ingresa 0 o 1 para saber si es verdad o falso\n";
    std::cin >> comprobacion;
    std::cout << "¿Cuantos años tienes?\n";
    std::cin >> enteros;
    std::cout << "¿Cual es su estatura en metros?\n";
    std::cin >> decimales;
    std::cout << "¿Cual es tu numero telefonico?\n";
    std::cin >> grandes;
    std::cout << "¿Cual es tu sexo?\n";
    std::cin >> cara;
    std::cin.ignore();
    std::cout << "¿Cual es su nombre?\n";
    std::cin >> caracteres;


    //Sintaxys recibir valores
    //1.-Palabra reservada para pedir valores, 2.-Concatenar, 3.-Variable donde se guarda lo solicitado

    //sintaxys para mostrar valores
    // 1.- Palabra reservada, 2.-Concatenar, 3.-Entre comillas escribir, 4.- concatenar, 5.-salto de linea, 6.-Finalizalo
    std::cout << "el valor de la comprobacion recibido es: " << comprobacion << std::endl;
    std::cout << "su edad es: " << enteros << std::endl;
    std::cout << "su estatura es: " << decimales << std::endl;
    std::cout << "su numero es: " << grandes << std::endl;
    std::cout << "su nombre es: " << caracteres << std::endl;
    std::cout << "tu sexo es: " << cara << std::endl;
