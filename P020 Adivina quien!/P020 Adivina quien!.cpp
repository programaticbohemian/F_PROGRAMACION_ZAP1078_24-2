// P020 Adivina quien!.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lucio Acosta

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

int main() {
    std::string respuesta;
    bool jugando = true;

    while (jugando) {
        system("cls");
        std::cout << "¡Bienvenido a Adivina el Deporte!" << std::endl;
        std::cout << "Elige una opcion:" << std::endl;
        std::cout << "1. Comenzar juego" << std::endl;
        std::cout << "2. Salir" << std::endl;
        std::cin >> respuesta;

        if (respuesta == "1") {
            // Pregunta 1
            std::cout << "¿Se juega con la mano? (s/n): ";
            std::cin >> respuesta;
            if (respuesta == "s") {
                // Pregunta 2
                std::cout << "¿Se utiliza un bate? (s/n): ";
                std::cin >> respuesta;
                if (respuesta == "s") {
                    // Pregunta 3
                    std::cout << "¿Se juega en un campo? (s/n): ";
                    std::cin >> respuesta;
                    if (respuesta == "s") {
                        std::cout << "El deporte es: Baseball" << std::endl;
                        std::this_thread::sleep_for(std::chrono::seconds(6));
                    }
                    else {
                        std::cout << "El deporte es: Cricket" << std::endl;
                        std::this_thread::sleep_for(std::chrono::seconds(6));
                    }
                }
                else {
                    // Pregunta 4
                    std::cout << "¿Se juega en una cancha techada? (s/n): ";
                    std::cin >> respuesta;
                    if (respuesta == "s") {
                        // Pregunta 5
                        std::cout << "¿Se utiliza un aro? (s/n): ";
                        std::cin >> respuesta;
                        if (respuesta == "s") {
                            std::cout << "El deporte es: Baloncesto" << std::endl;
                            std::this_thread::sleep_for(std::chrono::seconds(6));
                        }
                        else {
                            std::cout << "El deporte es: Voleibol" << std::endl;
                            std::this_thread::sleep_for(std::chrono::seconds(6));
                        }
                    }
                    else {
                        // Pregunta 6
                        std::cout << "¿Se juega al aire libre? (s/n): ";
                        std::cin >> respuesta;
                        if (respuesta == "s") {
                            // Pregunta 7
                            std::cout << "¿Se juega en una cancha? (s/n): ";
                            std::cin >> respuesta;
                            if (respuesta == "s") {
                                std::cout << "El deporte es: Tenis" << std::endl;
                                std::this_thread::sleep_for(std::chrono::seconds(6));
                            }
                            else {
                                std::cout << "El deporte es: Rugby" << std::endl;
                                std::this_thread::sleep_for(std::chrono::seconds(6));
                            }
                        }
                        else {
                            std::cout << "El deporte es: Waterpolo" << std::endl;
                            std::this_thread::sleep_for(std::chrono::seconds(6));
                        }
                    }
                }
            }
            else {
                // Pregunta 8
                std::cout << "¿Se usa un palo? (s/n): ";
                std::cin >> respuesta;
                if (respuesta == "s") {
                    // Pregunta 9
                    std::cout << "¿Se juega sobre hielo? (s/n): ";
                    std::cin >> respuesta;
                    if (respuesta == "s") {
                        std::cout << "El deporte es: Hockey sobre hielo" << std::endl;
                        std::this_thread::sleep_for(std::chrono::seconds(6));
                    }
                    else {
                        std::cout << "El deporte es: Hockey sobre cesped" << std::endl;
                        std::this_thread::sleep_for(std::chrono::seconds(6));
                    }
                }
                else {
                    // Pregunta 10
                    std::cout << "¿Se juega con un balon? (s/n): ";
                    std::cin >> respuesta;
                    if (respuesta == "s") {
                        // Pregunta 11
                        std::cout << "¿Se juega en un campo? (s/n): ";
                        std::cin >> respuesta;
                        if (respuesta == "s") {
                            std::cout << "El deporte es: Futbol" << std::endl;
                            std::this_thread::sleep_for(std::chrono::seconds(6));
                        }
                        else {
                            std::cout << "El deporte es: Balonmano" << std::endl;
                            std::this_thread::sleep_for(std::chrono::seconds(6));
                        }
                    }
                    else {
                        // Pregunta 12
                        std::cout << "¿Se practica en un gimnasio? (s/n): ";
                        std::cin >> respuesta;
                        if (respuesta == "s") {
                            std::cout << "El deporte es: Gimnasia" << std::endl;
                            std::this_thread::sleep_for(std::chrono::seconds(6));
                        }
                        else {
                            std::cout << "El deporte es: Natacion" << std::endl;
                            std::this_thread::sleep_for(std::chrono::seconds(6));
                        }
                    }
                }
            }

        }
        else if (respuesta == "2") {
            jugando = false;
            std::cout << "Gracias por jugar. ¡Hasta luego!" << std::endl;
        }
        else {
            std::cout << "Opcion no valida. Por favor, elige 1 o 2." << std::endl;
        }
    }

    return 0;
}
