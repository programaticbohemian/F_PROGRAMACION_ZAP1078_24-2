// P025 Potencia.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lucio Acosta Montoya

#include <iostream>

// Función recursiva para calcular la potencia
int potencia(int base, int exponente) {
    // Caso base: cualquier número elevado a la potencia de 0 es 1
    if (exponente == 0) {
        return 1;
    }
    // Caso recursivo: base^exponente = base * base^(exponente-1)
    else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    char continuar;

    do {
        int base, exponente;

        std::cout << "Ingrese la base: ";
        std::cin >> base;

        std::cout << "Ingrese el exponente: ";
        std::cin >> exponente;

        int resultado = potencia(base, exponente);

        std::cout << base << " elevado a la " << exponente << " es: " << resultado << std::endl;

        std::cout << "¿Desea realizar otra operación? (s/n): ";
        std::cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
