// 22_12_06_Proyecto2.cpp 
// Juan Pablo Saavedra Ramírez
// Historia Narrada

#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    std::string nombre;
    int r1, r2, r3;

    std::cout << "Hola, antes de iniciar con tu historia, me podrias decir tu nombre?\n";
    std::getline(std::cin, nombre);
    std::cout << "Hola " << nombre << " Espero que te encuentres bien, es hora de iniciar tu aventura\n";
    std::cout << std::endl;
    std::cout << "Eres un mago muy prodigioso, creciste en una familia humilde, al llegar a los 6 años de edad te\n";
    std::cout << "lleveran a una academia de magos, durante el camino son atacados por unos bandidos, se intentan defender\n";
    std::cout << "sin emabargo tu mamá esta en peligro, la puedes salvar, que decisdes hacer?\n";
    std::cout << "(1 para ayudarla | 0 para no hacer nada)\n";
    std::cin >> r1;
    if (r1 == 1) // 1.- Si
    {
        std::cout << "Conseguiste salvar a tu mama, pero en cambio tu caiste por un presipicio quedando muy mal herido, pero llega un joven\n";
        std::cout << "sanador llamado Arthur y te ayuda a recuperarte, ahora tienes que volver con tu familia, hablando con el sanador\n";
        std::cout << "te dijo que te ayudaria a llegar a la escuela, sin embargo una ves que te recuentres con tu familia tu lo deberas ayudar\n";
        std::cout << "a entrar a la academia como estudiante, van por el camino y se hacen mas cercanos, el te cuenta que tiene el sueño de \n";
        std::cout << "ser el director de la academia de la escuela, y tu le cuentas el tuyo, se vuelven mejores amigos y asi siguen viajando\n";
        std::cout << "juntos. Cuando estan a punto de llegar a la ciudad donde esta la academia son perseguidos por un grupo de bestias, \n";
        std::cout << "empiezan a escapar y durante el proceso Arthur se cae, tienes 2 opciones ayudarlo o seguir sin el que haras?\n";
        std::cout << "(1 ayudarlo | 0 seguir sin el)\n";
        std::cin >> r2;
        if (r2 == 1) // 1.- Si | 2.- Si
        {
            std::cout << "Lo ayudaste a levantarse, sin embargo las bestias los alcanzan y pierdes la pierna, pero un grupo de guardias que\n";
            std::cout << "estaban haciendo guardia los encuentran justo a tiempo y los alcanzan a salvar Son llevados al hospital, alli son\n";
            std::cout << "curados, pasan alli unas semanas recuperandose y despues los dejan ir. Consigues ubicar donde estan tus padres y\n";
            std::cout << "vas a reunirte con ellos junto con Arthur Al llegar a donde estan tus papás tiene un emotivo encuentro, una ves\n";
            std::cout << "con ellos descansas y te dedicas a recuperarte durante el resto del año, despues de un tiempo tus papas te preguntan\n";
            std::cout << "si vas a ir a la escuela\n";
            std::cout << "(1 para ir a la escuela | 0 para no ir a la escuela)\n";
            std::cin >> r3;
            if (r3 == 1) // 1.- Si | 2.- Si | 3.- Si
            {
                std::cout << "Decidiste ir a la escuela, tras hablarlo con tus padres deciden que tu y Arthur van a ir a la escuela, inician el\n";
                std::cout << "ciclo escolar y en lo que tu tomas clases de magia de ataque y defensa, Arthur va a clases de sanacion y plantas\n";
                std::cout << "medicinales tu y Arthur siguen su vida escolar juntos, al pasar los años ambos se graduan y se empiezan a distansiar\n";
                std::cout << "sin embargos ambos cumplen su sueño, Arthur se vuelve el director de la academia y tu te vueleves el mejor aventurero\n";
                std::cout << "que a existido\n";

                std::cout << std::endl;
                std::cout << "Que bonito final no? " << nombre << " Esperamos que te haya gustado, sigue asi :)" << std::endl;
                std::cout << std::endl;
            }
            if (r3 == 0) // 1.- Si | 2.- Si | 3.- No
            {
                std::cout << "No fuiste a la escuela, pero cumpliste tu promesa de hacer que Arthur ingresara a la academia con la ayuda de tus padres\n";
                std::cout << "gracias a que tu ya no estas en la escuela, dejaste de tener comunicacion constante con Arthur y asi pasan los años\n";
                std::cout << "Despues de un tiempo te recuentras con Arthur, Arthur es director de la academia, mientras tanto tu eres parte de un\n";
                std::cout << "pequeño grupo de aventureros, gracias a Arthur tu grupo asciende con mayor facilidad y se vuelven mas reconocidos\n";

                std::cout << std::endl;
                std::cout << "No estuvo tan mal verdad?, " << nombre << " Esperamos que te haya gustado, recuerda que estudiar es importante :)" << std::endl;
                std::cout << std::endl;
            }
        }

        if (r2 == 0) // 1.- Si | 2.- No
        {
            std::cout << "Seguiste corriendo sin Arthur, lo abandonaste y seguiste corriendo, consigues llegar a la puerta de la ciudad donde los\n";
            std::cout << "guardias que apenas iban saliendo te ayudan a entrar y asi vas al hospital donde pasas 2 semanas recuperandote Despues\n";
            std::cout << "de estar un tiempo en el hospital te dan la ubicacion de donde estan tus padres, te diriges a con ellos, donde tienes\n";
            std::cout << "un emotivo reencuentro con ellos, cuando te preguntan por que fue lo que pasaste decides omitir a Arthur en tu historia\n";
            std::cout << "Despues de pasar un tiempo con ellos te preguntan si quieres aun ir a la academia\n";
            std::cout << " (1 ir a la academia | 0 no ir a la academia)\n";
            std::cin >> r3;
            if (r3 == 1) // 1.- Si | 2.- No | 3.- Si
            {
                std::cout << "Vas a la academia, al llegar a ir los primeros semestres son buenos, sin embargo el aver dejado a Arthur atras te\n";
                std::cout << "remuerde la conciencia y te cuesta seguir adelante, o asi era hasta que en un semestre entra un nuevo alumno, este\n";
                std::cout << "era Arthur, mutuamente se reconocen, pero Arthur te ignora completamente, esto hace que te sientas aun mucho peor asi\n";
                std::cout << "que hablas con Arthur, ambos hablan, sin embargo aunque ya no estan en malos terminos su amistad nunca vuele a ser\n";
                std::cout << "la misma, Con el paso del tiempo Arthur se vuelve el director de la academia, tu te vuelves un aventurero en un pequeño grupo\n";

                std::cout << std::endl;
                std::cout << "Chanclas " << nombre << " Esperamos que te haya gustado, recuerda que es bueno ayudar si puedes :)" << std::endl;
                std::cout << std::endl;
            }
            if (r3 == 0) // 1.- Si | 2.- No | 3.- NO
            {
                std::cout << "No iras a la academia, por lo tanto nunca estudiaste magia y unicamente te volviste un pequeño mago, con el pasar del\n";
                std::cout << "tiempo descubriste que Arthur seguia vivo y el si fue a la academia, esto te llevo a sentirte aun mas mal contigo\n";
                std::cout << "mismo Arthur da aconocer lo que le paso en su aventura contigo, por lo tanto te das a conocer pero de una mala\n";
                std::cout << "manera, obtienes una mala reputacion y dificulta aun mas tu vida como aventurero\n";

                std::cout << std::endl;
                std::cout << "Este final esta algo malo " << nombre << " Esperamos que te haya gustado, piensa bien en tus desiciones :)" << std::endl;
                std::cout << std::endl;
            }
        }
    }
    if (r1 == 0) // 1.- No
    {
        std::cout << "No hiciste nada, por lo tanto tu mama murio durante el ataque de los bandidos, tu papá cae en depresion, pero\n";
        std::cout << "aun te quiere llevar a la academia para asi cumplir con tu sueño y el de tu mama, el cual es que te vuelvas\n";
        std::cout << "el mejor aventurero, asi parten hacia la ciudad donde esta ubicada la academia, durante el camino tu y el\n";
        std::cout << "conocen a un joven sanador llamado Arthur, deciden ayudarlo y llevarlo con ustedes para que no vaya solo,\n";
        std::cout << "ya que los 3 van al mismo destino, durante el camino se van conociendo Arthur les cuenta que su sueño es ser\n";
        std::cout << "director de la mas grande academia de magia, por eso quiere entrar a esa escuela, asi cuando estan a punto de\n";
        std::cout << "llegar son atacados por un grupo de bestias salvajes, todos corren lo mas rapido que pueden, durante el camino\n";
        std::cout << "tu padre se separa de ustedes quedando Arthur y tu, Arthur se tropieza y cae al suelo y te pide ayuda\n";
        std::cout << "Que haras ? (1 para ayudarlo | 0 No ayudarlo)\n";
        std::cin >> r2;
        if (r2 == 1) // 1.- No | 2.- Si
        {
            std::cout << "Te paras a ayudarlo y por lo cual las bestias se acercan a ustedes y cuando los van a atacar justo llega tu\n";
            std::cout << "padre y los ayuda parece que tu padre perdera y en eso llegan los guardias, sin embargo tu padre resulto\n";
            std::cout << "gravemente herido y con ayuda de los guardias lo llevan al hospital donde pasa semanas recuperandose\n";
            std::cout << "una ves recuperado tienen una convenrsacion donde te pregunta si en verdad quieres ayudar a Arthur\n";
            std::cout << "que le responderas? (1 ayudarlo | 0 no ayudarlo mas)\n";
            std::cin >> r3;
            if (r3 == 1) // 1.- No | 2.- Si | 3.- Si
            {
                std::cout << "Deciden ayudar a Arthur y entran juntos a la escuela, pasan todos sus años escolares viviendo juntos\n";
                std::cout << "mientras que tu estudas magia de ataque y defensa, el estudia magia sanadora, consiguen graduarse\n";
                std::cout << "ambos y tu padre tambien se volvio uno para Arthur ambos cumplen sus sueños, en lo que Arthur es\n";
                std::cout << "director de la academia tu eres el mejor aventurero y llenan de orgullo al padre\n";

                std::cout << std::endl;
                std::cout << "Ni tan malo el final " << nombre << " Esperamos que te haya gustado, piensa mejor las cosas" << std::endl;
                std::cout << std::endl;
            }
            if (r3 == 0) // 1.- No | 2.- Si | 3.- No
            {
                std::cout << "Lo abandan a su suerte, pero el igualmente esta agradecido ya que le salvaron la vida, entras a la\n";
                std::cout << "academia y dejar de ver tanto a tu padre, con el tiempo Arthur consigue tambien entrar a la academia\n";
                std::cout << "aun son amigos pero ya no tan cercanos, aun hablan, despues de gradurte tu padre fallece debido a\n";
                std::cout << "que se sentia solo, consigues ser un gran aventurero pero te sientes solo, mientras tanto Arthur\n";
                std::cout << "se volvio el director de la academia\n";

                std::cout << std::endl;
                std::cout << ":0 " << nombre << " Esperamos que te haya gustado, recuerda que debes ayudar cuando puedas" << std::endl;
                std::cout << std::endl;
            }
        }
        if (r2 == 0) // 1.- No | 2.- No
        {
            std::cout << "Decides seguir corriendo en lo que dejas atras a Arthur, un poco adelante te encuentras con tu padre y este\n";
            std::cout << "te pregunta donde se encuentra Arthur, tu por la culpa le dices que no lo has visto, llegan unos guardias y\n";
            std::cout << "los llevan al hospital de la ciudad, alli descansan y despues de unos dias nunca encuentran a Arthur, creen\n";
            std::cout << "que las bestias lo atraparon, forman un grupo de exploracion para ir en su busqueda, les preguntan si gustan\n";
            std::cout << "acompañar al grupo de busqueda, tu padre te da la toma de desicion, que haras?\n";
            std::cout << "(1 ir con el grupo | 0 no ir con el grupo)\n";
            std::cin >> r3;
            if (r3 == 1) // 1.- No | 2.- No | 3.- Si
            {
                std::cout << "Al salir de la ciudad van en busca de Arthur, pasan los dias y no lo encuentran, hasta que uno de esos dias\n";
                std::cout << "tu padre reconoce a una de las bestias y las siguen a su escondite, donde resulto que todo era una trampa\n";
                std::cout << "por alguna extraña razon conviertieron a Arthur en su lider y hizo la trampa cuando se entero del grupo de\n";
                std::cout << "rescate, una ves estan rodeados las bestias empiezan a acabar con la vida de todo el grupo unicamente\n";
                std::cout << "dejando a ti y a tu padre gravemente heridos, donde despues de ser torturados el mismo Arthur acaba con la\n";
                std::cout << "vida de ambos falleciendo\n";

                std::cout << std::endl;
                std::cout << "no puede ser " << nombre << " Esperamos que te haya gustado, trata de ser buena persona siempre" << std::endl;
                std::cout << std::endl;
            }
            if (r3 == 0) // 1.- No | 2.- No | 3.- No
            {
                std::cout << "Se quedan en la ciudad, con los dias se enteran que el grupo de busqueda nunca volvio, pasa el tiempo y entras\n";
                std::cout << "a la academia y cuando ya estabas en el ultimo año ocurre un ataque a la ciudad por parte de las bestias, la\n";
                std::cout << "ciudad cae ante las bestias, puesto que esta liderada por un humano, capturan a ti y a tu padre, y los llevan\n";
                std::cout << "con el lider, al llegar se dan cuenta que el lider de las bestias es Arthur, este planeo todo con el objetivo\n";
                std::cout << "de hacer que todos los que lo dejaron se arrepientan y sufran iniciando por ustedes, los torturan hasta dejarlos\n";
                std::cout << "al borde de la muerte y despues los curan, repitiendo este proceso hasta que tu padre decide acabar con su propia\n";
                std::cout << "vida y tu eres torturado hasta el final de tus dias\n";

                std::cout << std::endl;
                std::cout << "Que feo final " << nombre << " Esperamos que te haya gustado, eso te pasa por ser mala persona" << std::endl;
                std::cout << std::endl;
            }
        }
    }
}
