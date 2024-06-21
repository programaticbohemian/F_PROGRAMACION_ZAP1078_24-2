// P018 Punteros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lucio Acosta 
#include <iostream>
#include <cstdlib>
#include <ctime>

void matriz_2x3_usuario() {
    int matriz[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Ingrese el dato para la posicion (" << i + 1 << "," << j + 1 << "): ";
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "\nMatriz 2x3:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void matriz_dinamica() {
    int n, m;
    std::cout << "Ingrese el numero de filas (n): ";
    std::cin >> n;
    std::cout << "Ingrese el numero de columnas (m): ";
    std::cin >> m;

    int** matriz = new int* [n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[m];
    }

    std::srand(std::time(0));

    if (n > 3 || m > 3) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matriz[i][j] = std::rand() % 100 + 1;  // Datos aleatorios entre 1 y 100
                std::cout << "Dato aleatorio para la posicion (" << i + 1 << "," << j + 1 << "): " << matriz[i][j] << std::endl;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cout << "Ingrese el dato para la posicion (" << i + 1 << "," << j + 1 << "): ";
                std::cin >> matriz[i][j];
            }
        }
    }

    std::cout << "\nMatriz " << n << "x" << m << ":" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main() {
    int opcion;
    std::cout << "Elija una opcion:" << std::endl;
    std::cout << "1. Ingresar datos para una matriz 2x3" << std::endl;
    std::cout << "2. Ingresar datos para una matriz dinamica" << std::endl;
    std::cin >> opcion;

    switch (opcion) {
    case 1:
        matriz_2x3_usuario();
        break;
    case 2:
        matriz_dinamica();
        break;
    default:
        std::cout << "Opcion no valida" << std::endl;
    }

    return 0;
}
