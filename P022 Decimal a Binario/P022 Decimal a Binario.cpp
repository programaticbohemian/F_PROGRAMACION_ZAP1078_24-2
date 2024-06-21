// P022 Decimal a Binario.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lucio Acosta 

#include <iostream>

void convertirABinario(int n) {
    if (n > 1) {
        convertirABinario(n / 2);
    }
    std::cout << n % 2;
}

int main() {
    int numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    std::cout << "El equivalente en binario de " << numero << " es: ";
    convertirABinario(numero);
    std::cout << std::endl;

    return 0;
}