// P023 Máximo Común Divisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

// Función para calcular el MCD usando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    // region Algoritmo de Euclides para calcular el MCD
    while (b != 0) {
        int temp = b;

        // Paso 2: Primera iteración
        // Calcula a % b = 48 % 18
        // División: 48 ÷ 18 ≈ 2 (el cociente es 2)
        // Resto: 48 - (2 × 18) = 48 - 36 = 12
        // Por lo tanto, 48 % 18 = 12
        // Actualiza valores:
        // a ← 18
        // b ← 12
        b = a % b;

        // Actualiza a con el valor de temp
        a = temp;

        // Paso 3: Segunda iteración
        // Calcula a % b = 18 % 12
        // División: 18 ÷ 12 ≈ 1 (el cociente es 1)
        // Resto: 18 - (1 × 12) = 18 - 12 = 6
        // Por lo tanto, 18 % 12 = 6
        // Actualiza valores:
        // a ← 12
        // b ← 6

        // Paso 4: Tercera iteración
        // Calcula a % b = 12 % 6
        // División: 12 ÷ 6 = 2 (el cociente es 2)
        // Resto: 12 - (2 × 6) = 12 - 12 = 0
        // Por lo tanto, 12 % 6 = 0
        // Actualiza valores:
        // a ← 6
        // b ← 0
    }
    // Paso 5: Finalización
    // Cuando b = 0, el algoritmo termina.
    // El valor de a en este punto es el MCD, que es 6.
    // endregion
    return a;
}

int main() {
    int numero1, numero2;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    // Paso 1: Inicialización
    // a = 48
    // b = 18
    int mcd = calcularMCD(numero1, numero2);

    std::cout << "El Maximo Comun Divisor de " << numero1 << " y " << numero2 << " es: " << mcd << std::endl;

    return 0;
}