// P007 Decisiones (IF-ELSE-SWITCH CASE).cpp : This file contains the 'main' function. Program execution begins and ends there.
// LUCIO ALEJANDRO ACOSTA MONTOYA 

#include <iostream>

int main()
{
   
    int A,b,c,z,ez=0,o=0,xd=0;
    menu:
  
    std::cout << "******************************BATTLE-ROAYALE***************************************\n";
    std::cout << "\t Seleciona Modo De Juego\n";
    std::cout << "\t 1:Royal Rumble\n";
    std::cout << "\t 2:Eliminatoria directa\n";
    std::cout << "\t 3:Grupos, semifinal y final\n";
    std::cout << "***********************************************************************************\n";

    std::cin >> A;
    
    switch (A)
    {
    case 1:
        {
        system("cls");
                std::cout << "******************************ROYAL_RUMBLE***************************************\n";
                std::cout << "ingrese el numerod e  jugadores\t ";
                std::cin >> b;
                c = b / 2;
                std::cout << "fueron "<< c << " batallas\n ";
                std::cout << "jugar de nuevo?\n 1 si \n 2 no";
                std::cin >> z;
                if (z==1)
                {
                    goto menu;
                }
                else 
                {
                    std::cout << "juego finalizado";
                }
                break;
        }
    case 2:
        {
        system("cls");
                std::cout << "******************************ELIMINATORIA*************************************\n";
                std::cout << "ingrese el numerod e  jugadores";
                std::cin >> b;
                while (b==1)
                {
                    b / 2;
                    std::cout << "1er ronda fueron " << b << " peleas";
                }

                std::cout << "jugar de nuevo?\n 1 si \n 2 no \n";
                std::cin >> z;
                if (z == 1)
                {
                    goto menu;
                    system("cls");
                }
                else
                {
                    std::cout << "juego finalizado";
                }
                break;
        }
    case 3:
        {
        system("cls");
                std::cout << "******************************GRUPOS*******************************************\n";
                std::cout << "ingrese el numerod e  jugadores";
                std::cin >> b;
                break;
        }
        default:
           
                std::cout << "******************************ERROR********************************************\n";
                std::cout << "\tSelecione opcion valida\n";
                std::cout << "******************************ERROR********************************************\n";
                goto menu;
            break;
    };
}

