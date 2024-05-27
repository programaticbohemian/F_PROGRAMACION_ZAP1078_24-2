// P011 Condicionales.cpp : This file contains the 'main' function. Program execution begins and ends th
//
#include <iostream>
#include <string>

int main() {
    std::string modelo;

    std::cout << "Piensa en un modelo de carro JDM y yo intentaré adivinarlo." << std::endl;

    // Preguntas para adivinar el modelo de carro JDM
    std::cout << "¿El modelo que pensaste es un Nissan Skyline? (s/n): ";
    char respuesta;
    std::cin >> respuesta;
    if (respuesta == 's' || respuesta == 'S') {
        modelo = "Nissan Skyline";
    }
    else {
        std::cout << "¿El modelo que pensaste es un Toyota Supra? (s/n): ";
        std::cin >> respuesta;
        if (respuesta == 's' || respuesta == 'S') {
            modelo = "Toyota Supra";
        }
        else {
            std::cout << "¿El modelo que pensaste es un Honda NSX? (s/n): ";
            std::cin >> respuesta;
            if (respuesta == 's' || respuesta == 'S') {
                modelo = "Honda NSX";
            }
            else {
                std::cout << "¿El modelo que pensaste es un Mitsubishi Lancer Evolution? (s/n): ";
                std::cin >> respuesta;
                if (respuesta == 's' || respuesta == 'S') {
                    modelo = "Mitsubishi Lancer Evolution";
                }
                else {
                    std::cout << "¿El modelo que pensaste es un Subaru Impreza WRX STI? (s/n): ";
                    std::cin >> respuesta;
                    if (respuesta == 's' || respuesta == 'S') {
                        modelo = "Subaru Impreza WRX STI";
                    }
                }
            }
        }
    }

    // Adivinar el modelo de carro JDM
    if (!modelo.empty()) {
        std::cout << "¿El modelo que pensaste es " << modelo << "? (s/n): ";
        std::cin >> respuesta;
        if (respuesta == 's' || respuesta == 'S') {
            std::cout << "¡Adiviné el modelo de carro JDM! ¡Gané!" << std::endl;
        }
        else {
            std::cout << "¡Oh! No pude adivinar el modelo de carro JDM." << std::endl;
            std::cout << "Los modelos de carros JDM son: Nissan Skyline, Toyota Supra, Honda NSX, Mitsubishi Lancer Evolution y Subaru Impreza WRX STI." << std::endl;
        }
    }
    else {
        std::cout << "¡Oh! No pude adivinar el modelo de carro JDM." << std::endl;
        std::cout << "Los modelos de carros JDM son: Nissan Skyline, Toyota Supra, Honda NSX, Mitsubishi Lancer Evolution y Subaru Impreza WRX STI." << std::endl;
    }

    return 0;
}
