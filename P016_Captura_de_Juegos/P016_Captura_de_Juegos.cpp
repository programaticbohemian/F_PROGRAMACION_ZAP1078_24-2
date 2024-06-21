// P016_Captura_de_Juegos.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lucio acosta

#include <iostream>
#include <string>


int main() {
   
    // Definir una constante para el número de videojuegos
    const int NUM_VIDEOJUEGOS = 3;

    // Crear arreglos paralelos para almacenar la información de los videojuegos
    std::string nombres[NUM_VIDEOJUEGOS];
    int aniosPublicacion[NUM_VIDEOJUEGOS];
    std::string autores[NUM_VIDEOJUEGOS];
    std::string estudios[NUM_VIDEOJUEGOS];

    // Usar un bucle para rellenar los arreglos con información de videojuegos
    for (int i = 0; i < NUM_VIDEOJUEGOS; ++i) {

        system("cls");
        // Solicitar y almacenar la información de cada videojuego
        std::cout << "Introduce la información del videojuego " << i + 1 << ":\n";

        std::cout << "Nombre: ";
        std::getline(std::cin, nombres[i]);  // Leer el nombre del videojuego

        std::cout << "Año de Publicación: ";
        std::cin >> aniosPublicacion[i];  // Leer el año de publicación
        std::cin.ignore();  // Limpiar el buffer de entrada

        std::cout << "Autor: ";
        std::getline(std::cin, autores[i]);  // Leer el autor del videojuego

        std::cout << "Estudio: ";
        std::getline(std::cin, estudios[i]);  // Leer el estudio que creó el videojuego

        std::cout << "--------------------------\n";  // Separador visual
    }

    // Usar un bucle para mostrar la información de los videojuegos
    for (int i = 0; i < NUM_VIDEOJUEGOS; ++i) {

        system("cls");
        // Mostrar la información almacenada de cada videojuego
        std::cout << "Información del videojuego " << i + 1 << ":\n";

        std::cout << "Nombre: " << nombres[i] << std::endl;  // Mostrar el nombre
        std::cout << "Año de Publicación: " << aniosPublicacion[i] << std::endl;  // Mostrar el año de publicación
        std::cout << "Autor: " << autores[i] << std::endl;  // Mostrar el autor
        std::cout << "Estudio: " << estudios[i] << std::endl;  // Mostrar el estudio

        std::cout << "--------------------------\n";  // Separador visual
    }

    return 0;
}

