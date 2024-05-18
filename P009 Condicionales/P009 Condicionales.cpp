// P009 Condicionales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lucio acosta montoya 

#include <iostream>
#include <cmath> // Incluye la biblioteca para utilizar abs()

int main() {
    int dato1, dato2, answer, com1, com2, select;

    do {
        // Mostrar el menú
        std::cout << "***************************************Calculadora***************************************************************\n";
        std::cout << "\tSeleccione una opcion:\n\t1:suma\n\t2:resta \n\t3:multiplicacion \n\t4:divicion\n\t5:valor absoluto\n\t6:mayor o menor que\n\t";
        std::cout << "Elija su opcion:";    std::cin >> com1;

        switch (com1) {
        case 1:
            // Suma
            system("cls");
            std::cout << "***************************************Suma*********************************************************************\n";
            std::cout << "\tIngrese su primer dato:\t\t"; std::cin >> dato1;
            std::cout << "\tIngrese su segundo dato:\t"; std::cin >> dato2;
            answer = dato1 + dato2;
            std::cout << "\tEl resultado es:\t\t" << answer << "\n\n";
            break;

        case 2:
            // Resta
            system("cls");
            std::cout << "***************************************Resta*********************************************************************\n";
            std::cout << "\tIngrese su primer dato:\t\t"; std::cin >> dato1;
            std::cout << "\tIngrese su segundo dato:\t"; std::cin >> dato2;
            answer = dato1 - dato2;
            std::cout << "\tEl resultado es:\t\t" << answer << "\n\n";
            break;

        case 3:
            // Multiplicación
            system("cls");
            std::cout << "***************************************Multiplicacion*********************************************************************\n";
            std::cout << "\tIngrese su primer dato:\t\t"; std::cin >> dato1;
            std::cout << "\tIngrese su segundo dato:\t"; std::cin >> dato2;
            answer = dato1 * dato2;
            std::cout << "\tEl resultado es: \t\t" << answer << "\n\n";
            break;

        case 4:
            // División
            system("cls");
            std::cout << "***************************************Division*********************************************************************\n";
            std::cout << "\tIngrese su primer dato:\t\t"; std::cin >> dato1;
            std::cout << "\tIngrese su segundo dato:\t"; std::cin >> dato2;
            if (dato2 != 0) {
                answer = dato1 / dato2;
                std::cout << "\tEl resultado es: \t\t" << answer << "\n\n";
            }
            else {
                std::cout << "\tError: no se puede dividir entre cero\n\n";
            }
            break;

        case 5:
            // Valor absoluto
            system("cls");
            std::cout << "***************************************Valor Absoluto*********************************************************************\n";
            std::cout << "\tIngrese el numero del que desea calcular el valor absoluto:\t "; std::cin >> dato1;
            answer = abs(dato1);
            std::cout << "\tEl valor absoluto es: \t\t\t\t\t\t " << answer << "\n\n";
            break;

        case 6:
            // Mayor o menor que
            system("cls");
            std::cout << "***************************************Mayor o Menor Que*********************************************************************\n";
            std::cout << "\tIngrese el primer numero:\t "; std::cin >> dato1;
            std::cout << "\tIngrese el segundo numero:\t "; std::cin >> dato2;
            if (dato1 > dato2) {
                std::cout << "\t" << dato1 << " es mayor que " << dato2 << "\n\n";
            }
            else if (dato1 < dato2) {
                std::cout << "\t" << dato1 << " es menor que " << dato2 << "\n\n";
            }
            else {
                std::cout << "\t" << dato1 << " es igual a " << dato2 << "\n\n";
            }
            break;

        default:
            // Opción no válida
            std::cout << "\tOpción no valida. Intente nuevamente.\n\n";
            break;

        }

        // Preguntar al usuario si desea continuar
        std::cout << "\t¿Desea realizar otra operacion?\n\t1: Si\n\t2: No\n\t";
        std::cin >> com2;

    } while (com2 == 1);

    return 0;
}
