// 22_10_24_009_Adivina_Quien.cpp 
//Juan Pablo Saavedra Ramírez

#include <iostream>
#include <string>

int main()
{
    std::string color_cabello;
    std::string color_ojos;
    std::string aldea_organizacion;
    std::string bueno_malo;
    std::string clan;
    std::string hermanos;

    std::cout << "Hola, bienvenido a Adivina Quien con personajes de naruto\n";
    std::cout << "Los personajes son Naruto, Sasuke, Itachi, Minato y Obito\n";
    std::cout << "te parece si inicamos a jugar?\n";
    std::cout << "Tu personaje de que color tiene el cabello?\n";
    std::cin >> color_cabello;
    if (color_cabello == "rubio")
    {
        std::cout << "Entonces tu personaje es rubio\n";
        std::cout << "De que color son sus ojos?\n";
        std::cin >> color_ojos;
        if (color_ojos == "azules")
        {
            std::cout << "Entonces sus ojos son azules\n";
            std::cout << "De que aldea o organizacion es?\n";
            std::cin >> aldea_organizacion;
            if (aldea_organizacion == "konoha")
            {
                std::cout << "Es de Konoha\n";
                std::cout << "Es bueno o malo?\n";
                std::cin >> bueno_malo;
                if (bueno_malo == "bueno")
                {
                    std::cout << "Entonces tu personaje es de los buenos\n";
                    std::cout << "De que clan es?\n";
                    std::cin >> clan;
                    if (clan == "uzumaki")
                    {
                        std::cout << "Tu personaje es Naruto\n";
                    }
                    if (clan == "amikase")
                    {
                        std::cout << "Tu personaje es Minato" << std::endl;
                    }
                }
            }
        }
    }
    if (color_cabello == "negro")
    {
        std::cout << "tu persona es pelinegro\n";
        std::cout << "De que color son su ojos?\n";
        std::cin >> color_ojos;
        if (color_ojos == "negros")
        {
            std::cout << "tu personaje tiene los ojos negro\n";
            std::cout << "De que aldea o organizacion es?\n";
            std::cin >> aldea_organizacion;
            if (aldea_organizacion == "konoha")
            {
                std::cout << "Entonces es de konoha\n";
                std::cout << "A que clan pertenece?\n";
                std::cin >> clan;
                if (clan == "uchiha")
                {
                    std::cout << "Entonces es uchiha\n";
                    std::cout << "Es bueno o malo?\n";
                    std::cin >> bueno_malo;
                    if (bueno_malo == "bueno")
                    {
                        std::cout << "Entonces tu personaje es Sasuke\n";
                    }
                    if (bueno_malo == "malo")
                    {
                        std::cout << "Tu personaje es Itachi\n";
                    }
                }
            }
            if (aldea_organizacion == "akatsuki")
            {
                std::cout << "Tu persoanje pertenece a los akatsuki\n";
                std::cout << "A que clan pertenece?\n";
                std::cin >> clan;
                if (clan == "uchiha")
                {
                    std::cout << "Tu personaje es uchicha\n";
                    std::cout << "tu personaje tiene hermanos?\n";
                    std::cin >> hermanos;
                    if (hermanos == "si")
                    {
                        std::cout << "tu personaje es itachi\n";
                    }
                    if (hermanos == "no")
                    {
                        std::cout << "tu personaje es obito\n";
                    }

                }
            }
        }

    }
}
