// P013 Bucles (WHILE-DO WHILE-FOR).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>

int main() {
    std::locale::global(std::locale("spanish"));

    std::string usuarioCorrecto = "usuario";
    std::string contraseñaCorrecta = "contraseña";

    bool loginExitoso = false;

    while (!loginExitoso) {
        std::string usuario, contraseña;

        std::cout << "Ingrese su nombre de usuario: ";
        std::cin >> usuario;
        std::cout << "Ingrese su contraseña: ";
        std::cin >> contraseña;

        if (usuario == usuarioCorrecto && contraseña == contraseñaCorrecta) {
            std::cout << "¡Login exitoso! Bienvenido, " << usuario << "!" << std::endl;
            loginExitoso = true;
        }
        else {
            std::cout << "Datos de acceso incorrectos. Por favor, inténtelo de nuevo." << std::endl;
        }
    }

    char continuar;
    std::cout << "¿Desea volver a iniciar sesión? (s/n): ";
    std::cin >> continuar;

    if (continuar == 's' || continuar == 'S') {
        main();
    }

    return 0;
}

