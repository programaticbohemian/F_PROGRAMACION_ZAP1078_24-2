// P013 Bucles (WHILE-DO WHILE-FOR).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>

int main() {
    std::locale::global(std::locale("spanish"));

    std::string usuarioCorrecto = "usuario";
    std::string contrase�aCorrecta = "contrase�a";

    bool loginExitoso = false;

    while (!loginExitoso) {
        std::string usuario, contrase�a;

        std::cout << "Ingrese su nombre de usuario: ";
        std::cin >> usuario;
        std::cout << "Ingrese su contrase�a: ";
        std::cin >> contrase�a;

        if (usuario == usuarioCorrecto && contrase�a == contrase�aCorrecta) {
            std::cout << "�Login exitoso! Bienvenido, " << usuario << "!" << std::endl;
            loginExitoso = true;
        }
        else {
            std::cout << "Datos de acceso incorrectos. Por favor, int�ntelo de nuevo." << std::endl;
        }
    }

    char continuar;
    std::cout << "�Desea volver a iniciar sesi�n? (s/n): ";
    std::cin >> continuar;

    if (continuar == 's' || continuar == 'S') {
        main();
    }

    return 0;
}

