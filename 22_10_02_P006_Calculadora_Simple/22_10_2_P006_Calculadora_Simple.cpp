// 22_10_10_003_Decisiones_multipres_CP3.cpp 
//Saavedra Ramirez Juan Pablo
//en este programa aprendemos switch case

#include <iostream>
#include <string>

int main()
{
	int operacion = 0;
	float a, b, op, r1, r2, r3, r4;
	std::cout << "Introduzca el primer numero" << std::endl;
	std::cin >> a;
	std::cout << "Que operacion deseas hacer? (0.+, 1. - , 2.*, 3./)" << std::endl;
	std::cin >> operacion;
	std::cout << " Ahora introduce el segundo" << std::endl;
	std::cin >> b;

	switch (operacion)
	{
	case 0: // suma
		r1 = a + b;
		std::cout << "el resultado es: " << r1 << std::endl;
		break;

	case 1://Resta
		r2 = a - b;
		std::cout << "el resultado es: " << r2 << std::endl;
		break;

	case 2: //Multipricacion
		r3 = a * b;
		std::cout << "el resultado es: " << r3 << std::endl;
		break;

	case 3: //Division
		r4 = a / b;
		std::cout << "el resultado es: " << r4 << std::endl;
		break;
	default:
		std::cout << "Error, intentalo de nuevo" << std::endl;
	}
	/*
	int opc = 0;
	std::cout << "Buenas, que te gustaria hacer hoy?" << std::endl;
	std::cout << "La opcion 0 no hace nada" << std::endl;
	std::cout << "la opcion 1 tampoco hace nada" << std::endl;
	std::cin >> opc;
	//sintaxys de switch case
	switch (opc)
	{
	case 0:
		//codigo del caso 0
		std::cout << "Bienvenido a la opcion 0" << std::endl;
		break;

	case 1:
		//codigo caso 1
		std::cout << "Aca es la opcion 1" << std::endl;
		break;
	default:
		std::cout << "lo siento mi rey, esta mal" << std::endl;
	}
	*/

}
