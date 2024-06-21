#include <iostream>
#include <vector>
#include <cmath>
#include <limits> 


int main() {

    int opcion;
    char continuar;

    do {
        system("cls");
        std::cout << "************************************Probabilidades Matematicas**********************************************************\n";
        std::cout << "*\t Selecione una opcion\n";
        std::cout << "*\t1:Probabilidad Simple\n";
        std::cout << "*\t2:Probabilidad Experimental\n";
        std::cout << "*\t3:Regla de multiplicacion (interseccion)\n";
        std::cout << "*\t4:Regla de la suma (Union)\n";
        std::cout << "*\t5:dependencia e independencia\n";
        std::cout << "*\t6:Variables Aleatorias\n";
        std::cout << "*\t7:Salir\n\t";
        std::cin >> opcion;
        std::cout << "************************************************************************************************************************\n";

        switch (opcion) {
        case 1: {
            double casosFavorables, casosPosibles;
            std::cout << "Ingrese el numero de casos favorables: ";
            std::cin >> casosFavorables;
            std::cout << "Ingrese el numero de casos posibles: ";
            std::cin >> casosPosibles;
            double probabilidad = casosFavorables / casosPosibles;
            std::cout << "La probabilidad simple es: " << probabilidad << std::endl;
            break;
        }
        case 2: {
            double vecesEvento, vecesTotal;
            std::cout << "Ingrese el numero de veces que ocurrio el evento: ";
            std::cin >> vecesEvento;
            std::cout << "Ingrese el numero total de veces: ";
            std::cin >> vecesTotal;
            double probabilidad = vecesEvento / vecesTotal;
            std::cout << "La probabilidad experimental es: " << probabilidad << std::endl;
            break;
        }
        case 3: {
            double probabilidadA, probabilidadB;
            std::cout << "Recuerda Que Es En Un Rango de (1-0)\nIngrese la probabilidad de A: ";
            std::cin >> probabilidadA;
            std::cout << "Ingrese la probabilidad de B: ";
            std::cin >> probabilidadB;
            double probabilidadInterseccion = probabilidadA * probabilidadB;
            std::cout << "La probabilidad de la interseccion es: " << probabilidadInterseccion << std::endl;
            break;
        }
        case 4: {
            double probabilidadA, probabilidadB, probabilidadInterseccion;
            std::cout << "Ingrese la probabilidad de A: ";
            std::cin >> probabilidadA;
            std::cout << "Ingrese la probabilidad de B: ";
            std::cin >> probabilidadB;
            std::cout << "Ingrese la probabilidad de la interseccion de A y B: ";
            std::cin >> probabilidadInterseccion;
            double probabilidadUnion = probabilidadA + probabilidadB - probabilidadInterseccion;
            std::cout << "La probabilidad de la union es: " << probabilidadUnion << std::endl;
            break;
        }
        case 5: {
            double probabilidadA, probabilidadB, probabilidadInterseccion;
            std::cout << "Ingrese la probabilidad de A: ";
            std::cin >> probabilidadA;
            std::cout << "Ingrese la probabilidad de B: ";
            std::cin >> probabilidadB;
            std::cout << "Ingrese la probabilidad de la interseccion de A y B: ";
            std::cin >> probabilidadInterseccion;
            if (std::abs(probabilidadInterseccion - probabilidadA * probabilidadB) < std::numeric_limits<double>::epsilon()) {
                std::cout << "Los eventos A y B son independientes." << std::endl;
            }
            else {
                std::cout << "Los eventos A y B son dependientes." << std::endl;
            }
            break;
        }
        case 6: {
            double valorEsperado = 0, varianza = 0, desviacionEstandar;
            int n;
            std::cout << "Ingrese el numero de valores: ";
            std::cin >> n;
            std::vector<double> valores(n), probabilidades(n);
            for (int i = 0; i < n; i++) {
                std::cout << "Ingrese el valor " << i + 1 << ": ";
                std::cin >> valores[i];
                std::cout << "Ingrese la probabilidad de " << valores[i] << ": ";
                std::cin >> probabilidades[i];
            }
            for (int i = 0; i < n; i++) {
                valorEsperado += valores[i] * probabilidades[i];
            }
            for (int i = 0; i < n; i++) {
                double diferencia = valores[i] - valorEsperado;
                varianza += std::pow(static_cast<double>(diferencia), 2) * probabilidades[i];
            }
            desviacionEstandar = std::sqrt(varianza);
            std::cout << "El valor esperado es: " << valorEsperado << std::endl;
            std::cout << "La varianza es: " << varianza << std::endl;
            std::cout << "La desviacion estándar es: " << desviacionEstandar << std::endl;
            break;
        }

        case 7:
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        default:
            std::cout << "Opcion no válida." << std::endl;
            break;
        }

        if (opcion != 7) {
            std::cout << "¿Desea realizar otra operacion? (s/n): ";
            std::cin >> continuar;
        }
        else {
            continuar = 'n';
        }

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
