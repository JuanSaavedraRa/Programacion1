// 22_10_10_004_Ciclos_CP4.cpp 
// Juan Pablo Saavedra Ramírez
//Ciclos de while Do-While for

#include <iostream>
#include <Windows.h>

int main()
{
	bool seguir = true;
	int contador = 0;
	//Lo peor que pueden usar es el while por que se cometen muchos errores
	/*
	while (seguir)
	{
		std::cout << "# " << contador << std::endl;
		Sleep (777);
		contador = contador + 1;
		if (contador == 100)
		{
			seguir = false;
		}
	}
	*/

	//Do While se ejecuta por lo menos 1 vez
	
	contador = 0;
	do
	{
		std::cout << "# " << contador << std::endl;
		Sleep(777);
		contador = contador + 1;
	} while (contador <= 100);
	
	// For es la mayor setencia de control
	for (int cont = 0; cont < 100; cont++)
	{
		std::cout << " for# " << cont << std::endl;
	}
}
