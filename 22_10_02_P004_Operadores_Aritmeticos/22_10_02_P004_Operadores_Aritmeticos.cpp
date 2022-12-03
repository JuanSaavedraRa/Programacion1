// Juan Pablo Saavedra Ramírez 
// 22_09_30_003_Operadores_arimeticos.cpp 

#include <iostream>
#include <string>

int main()
{
    std::string nombre = " ";
    float decimal = 1;
    double a, b, suma, c, d, resta, e, mul, f, divi, g, h, potencia, i, raiz;

    //Utilizar por lo menos 1 vez cada operador en aplicaciones diferentes.  + , -, *, / , potencia, raiz.  (potencia: 

    //Suma
    std::cout << "Como te llamas?\n";
    std::getline(std::cin, nombre);
    std::cout << "Hola " << nombre << " que tal si recodamos tu fiesta, a cuantas personas invitaste?\n";
    std::cin >> a;
    std::cout << " y con cuantas personas vives?\n";
    std::cin >> b;
    suma = a + b;
    std::cout << "Entonces serian " << suma << " personas\n";

    //Resta
    std::cout << "cuantos vasos fueron en total?\n";
    std::cin >> c;
    std::cout << "cuanto se usaron?\n";
    std::cin >> d;
    resta = c - d;
    std::cout << "Entonces sobraron " << resta << " vasos\n";

    // Multipricacion
    std::cout << "Cuantas pizzas encargaron?\n";
    std::cin >> f;
    std::cout << "Entonces " << nombre << " cuantas rebanas tenian las pizzas?\n";
    std::cin >> g;
    mul = f * g;


    //Division
    divi = mul / suma;
    std::cout << " Entonces les tocaron " << divi << " rebanas a cada uno\n";

    //Potencia
    std::cout << "Cuantos platos tenia cada paquete, si compraron la misma cantidad de paquetes?\n";
    std::cin >> h;
    potencia = h * h;
    std::cout << " Fueron " << potencia << " platos en total\n";

    //Raiz
    std::cout << "Cuantos globos habia en el lugar?\n";
    std::cin >> i;
    raiz = sqrt(i);
    std::cout << "Habia " << raiz << " globos por paquete\n";

    std::cout << "Seria todo, que pase una bonita tarde";
}
