// P016_Captura_de_Juegos.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lucio acosta

#include <iostream>
#include <string>


int main() {
   
    // Definir una constante para el n�mero de videojuegos
    const int NUM_VIDEOJUEGOS = 3;

    // Crear arreglos paralelos para almacenar la informaci�n de los videojuegos
    std::string nombres[NUM_VIDEOJUEGOS];
    int aniosPublicacion[NUM_VIDEOJUEGOS];
    std::string autores[NUM_VIDEOJUEGOS];
    std::string estudios[NUM_VIDEOJUEGOS];

    // Usar un bucle para rellenar los arreglos con informaci�n de videojuegos
    for (int i = 0; i < NUM_VIDEOJUEGOS; ++i) {

        system("cls");
        // Solicitar y almacenar la informaci�n de cada videojuego
        std::cout << "Introduce la informaci�n del videojuego " << i + 1 << ":\n";

        std::cout << "Nombre: ";
        std::getline(std::cin, nombres[i]);  // Leer el nombre del videojuego

        std::cout << "A�o de Publicaci�n: ";
        std::cin >> aniosPublicacion[i];  // Leer el a�o de publicaci�n
        std::cin.ignore();  // Limpiar el buffer de entrada

        std::cout << "Autor: ";
        std::getline(std::cin, autores[i]);  // Leer el autor del videojuego

        std::cout << "Estudio: ";
        std::getline(std::cin, estudios[i]);  // Leer el estudio que cre� el videojuego

        std::cout << "--------------------------\n";  // Separador visual
    }

    // Usar un bucle para mostrar la informaci�n de los videojuegos
    for (int i = 0; i < NUM_VIDEOJUEGOS; ++i) {

        system("cls");
        // Mostrar la informaci�n almacenada de cada videojuego
        std::cout << "Informaci�n del videojuego " << i + 1 << ":\n";

        std::cout << "Nombre: " << nombres[i] << std::endl;  // Mostrar el nombre
        std::cout << "A�o de Publicaci�n: " << aniosPublicacion[i] << std::endl;  // Mostrar el a�o de publicaci�n
        std::cout << "Autor: " << autores[i] << std::endl;  // Mostrar el autor
        std::cout << "Estudio: " << estudios[i] << std::endl;  // Mostrar el estudio

        std::cout << "--------------------------\n";  // Separador visual
    }

    return 0;
}

