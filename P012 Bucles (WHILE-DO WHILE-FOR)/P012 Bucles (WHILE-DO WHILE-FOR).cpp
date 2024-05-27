// P012 Bucles (WHILE-DO WHILE-FOR).cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lucio Acosta Montoya 

#include <iostream>

int main() {
    int vidas = 3;
    char continuar;

    while (true) {
        std::cout << "¡Ciclo de juego! Vidas restantes: " << vidas << std::endl;

       

        if (--vidas <= 0) {
            std::cout << "¡Has perdido todas tus vidas!" << std::endl;
            break; // Sale del ciclo si no quedan vidas
        }

        std::cout << "¿Quieres continuar? (s/n): ";
        std::cin >> continuar;

        if (continuar != 's' && continuar != 'S') {
            std::cout << "Saliendo del juego." << std::endl;
            break; // Sale del ciclo si el jugador no quiere continuar
        }
    }

    std::cout << "Contando hasta 100:" << std::endl;
    for (int i = 1; i <= 100; ++i) {
        std::cout << i << " ";
    }

    return 0;
}

