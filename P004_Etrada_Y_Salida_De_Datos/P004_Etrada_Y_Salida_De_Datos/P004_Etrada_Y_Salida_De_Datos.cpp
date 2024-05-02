// P004_Etrada_Y_Salida_De_Datos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>

bool respuestaU(bool respuesta)
{
    return respuesta == '1' || respuesta == '0';
}

int main()
{
    bool a, b, c;
    std::string s1, s2;
    char datos;
    int peso, e1;
    float altura;

    std::cout << "Bienvenido al imss contamos con lista de esprea tome aciento\n";
    std::cout << "buenas tardes soy el doctor fulanito \n es alergico a algo??\n 1:si \n 0:no\n";
    std::cin >> a;
    while (respuestaU(a))
    {
        std::cout << "\n \n Por favor, introduce datos validos.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cin >> a ;
        std::cout << a;
    }
  

    std::cout << "algun padecimiento cronico ?? \n 1:si \n 0:no\n";
    std::cin >> b;

   
    std::cout << "usted fuma ?? \n 1:si \n 0:no\n";
    std::cin >> c;

    std::cout << "cual es tu primer nombre \n";
    std::cin >> s1;
    std::cout << "cual es tu apellido paterno\n";
    std::cin >> s2;
    std::cout << "cual es tu genero biologico?? \n F: Femenino\n M:Masculino\n";
    std::cin >> datos;
    std::cout << "cual es tu edad??\n";
    std::cin >> e1;
    std::cout << "cual es tu altura ??\n";
    std::cin >> altura;
    std::cout << "cual es tu peso ??\n";
    std::cin >> peso;
    std::cout << "--------REGISTRO MEDICO_MEDICO---------\n";

    std::cout << "recuerda que 0=NO Y 1=SI\n\n";
    std::cout << "fumador"<< c << "\n";
    std::cout << "alergia" << a << "\n";
    std::cout << "padecimiento cornico" << b <<"\n";
    std::cout << "nombre: " << s1 << " " << s2 << "\n";
    std::cout << "genero: " << datos << "\n";
    std::cout << "edad: " << e1 << "\n";
    std::cout << "indice de masa corporal: " << peso / altura<<"\n";





    return 0;
}