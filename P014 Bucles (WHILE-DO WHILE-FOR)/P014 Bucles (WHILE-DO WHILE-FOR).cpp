// P014 Bucles (WHILE-DO WHILE-FOR).cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <locale>
#include <chrono>
#include <thread>

int main() {
    std::locale::global(std::locale("spanish"));

    std::cout << "Contando desde 1000 hasta 0 con un bucle while:" << std::endl;
    int contador = 1000;
    while (contador >= 0) {
        std::cout << contador << " ";
        contador--;
    }
    std::cout << std::endl << std::endl;

    std::cout << "Contando desde 1000 hasta 0 con un bucle for:" << std::endl;
    for (int i = 1000; i >= 0; i--) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Contando desde 1000 hasta 0 con un bucle do-while:" << std::endl;
    contador = 1000;
    do {
        std::cout << contador << " ";
        contador--;
    } while (contador >= 0);
    std::cout << std::endl << std::endl;

    std::cout << "Contando hasta 100 lentamente:" << std::endl;
    for (int i = 1; i <= 100; i++) {
        std::cout << i << " ";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << std::endl << std::endl;

    std::cout << "Contando hasta 10x10:" << std::endl;
    for (int i = 10; i <= 100; i += 10) {
        for (int j = i - 9; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
