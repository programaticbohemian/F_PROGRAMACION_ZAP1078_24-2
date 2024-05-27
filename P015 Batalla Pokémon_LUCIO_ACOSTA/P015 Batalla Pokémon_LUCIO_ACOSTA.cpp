// P015 Batalla Pokémon_LUCIO_ACOSTA.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lucio Acosta Montoya 

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale>



struct Movimiento {
    std::string nombre;
    int poder;
};

struct Pokemon {
    std::string nombre;
    int hp;
    int ataque;
    int defensa;
    Movimiento movimientos[2];
};

void mostrarMenu() {
    std::cout << "1. Pelear\n";
    std::cout << "2. Huir\n";
}

void mostrarOpcionesPelea() {
    std::cout << "1. Golpear\n";
    std::cout << "2. Defender\n";
}

void mostrarMovimientos(Pokemon& p) {
    system("cls");
    std::cout << "Elige un ataque:\n";
    for (int i = 0; i < 2; ++i) {
        std::cout << i + 1 << ". " << p.movimientos[i].nombre << " (Poder: " << p.movimientos[i].poder << ")\n";
    }
}

Pokemon elegirPokemon(Pokemon pokemones[], int size) {
    system("cls");
    std::cout << "Elige un Pokémon:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << i + 1 << ". " << pokemones[i].nombre << "\n";
    }
    int opcion;
    std::cin >> opcion;
    return pokemones[opcion - 1];
}

void batalla(Pokemon& p1, Pokemon& p2) {
    std::srand(std::time(0));
    bool huyendo = false;

    while (p1.hp > 0 && p2.hp > 0 && !huyendo) {
        mostrarMenu();
        int opcionMenu;
        std::cin >> opcionMenu;

        if (opcionMenu == 2) {
            system("cls");
            std::cout << "¡Huiste de la batalla!\n";
            huyendo = true;
            continue;
        }

        mostrarOpcionesPelea();
        int opcionPelea;
        std::cin >> opcionPelea;

        if (opcionPelea == 1) { // Golpear
            mostrarMovimientos(p1);
            int opcionAtaque;
            std::cin >> opcionAtaque;
            Movimiento mov1 = p1.movimientos[opcionAtaque - 1];

            Movimiento mov2 = p2.movimientos[std::rand() % 2];

            int danio1 = mov1.poder + p1.ataque - p2.defensa;
            int danio2 = mov2.poder + p2.ataque - p1.defensa;

            p2.hp -= danio1;
            p1.hp -= danio2;
            system("cls");
            std::cout << p1.nombre << " usa " << mov1.nombre << " y hace " << danio1 << " de daño!\n";
            std::cout << p2.nombre << " usa " << mov2.nombre << " y hace " << danio2 << " de daño!\n";
        }
        else if (opcionPelea == 2) { // Defender
            int reduccion = p1.defensa / 2;
            std::cout << p1.nombre << " se defiende, reduciendo el daño en " << reduccion << " puntos.\n";
            Movimiento mov2 = p2.movimientos[std::rand() % 2];
            int danio2 = mov2.poder + p2.ataque - (p1.defensa + reduccion);
            p1.hp -= danio2;
            std::cout << p2.nombre << " usa " << mov2.nombre << " y hace " << danio2 << " de daño!\n";
        }
       
        std::cout << p1.nombre << " tiene " << p1.hp << " HP restantes.\n";
        std::cout << p2.nombre << " tiene " << p2.hp << " HP restantes.\n\n";

        if (p1.hp <= 0) {
            int volver;
            system("cls");
            std::cout << p1.nombre << " ha sido derrotado!\n";

        }
        if (p2.hp <= 0) {
            system("cls");
            std::cout << p2.nombre << " ha sido derrotado!\n";
        }
    }
}

int main() {
    //Funcion para tener idioma español soportado
    setlocale(LC_ALL, "es_MX.UTF-8");

    Pokemon pokemones[4] = {
        {"lucio", 100, 55, 40, {{"Impactrueno", 40}, {"Cola Férrea", 25}}},
        {"benja", 100, 52, 43, {{"Llamarada", 45}, {"Garra Dragón", 35}}},
        {"adrian", 100, 49, 49, {{"Latigazo", 45}, {"Hoja Afilada", 35}}},
        {"MAU", 100, 48, 65, {{"Hidrobomba", 70}, {"Burbuja", 65}}}
    };

    Pokemon jugador = elegirPokemon(pokemones, 4);
    Pokemon oponente = pokemones[std::rand() % 4];

    std::cout << "Has elegido a " << jugador.nombre << ".\n";
    std::cout << "Tu oponente ha elegido a " << oponente.nombre << ".\n\n";

    batalla(jugador, oponente);

    return 0;

    
       

    
}
