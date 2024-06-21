// P010 Condicionales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <cctype>

bool esLetras(const std::string& str) {
    for (char c : str) {
        if (!std::isalpha(c)) {
            return false;
        }
    }
    return true;
}

bool esNumeros(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string username, password ;

    std::cout << "Ingresa tu nombre de usuario: ";
    std::cin >> username;

    std::cout << "Ingresa tu contraseña: ";
    std::cin >> password;

    if (esLetras(username) && esNumeros(password)) {
        std::cout << "¡Login exitoso!" << std::endl;
    }
    else {
        std::cout << "Nombre de usuario y/o contraseña inválidos." << std::endl;
    }

    return 0;
}

