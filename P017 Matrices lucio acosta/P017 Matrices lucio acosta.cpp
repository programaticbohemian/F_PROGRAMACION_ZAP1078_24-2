// P017 Matrices lucio acosta.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lucio Alejandro Acosta Montoya 

#include <iostream>

#include <random>

int main()
{
    //Declaramos el semillero para el random
    srand(time(NULL));
    //Hacer 3 matrices
    int matriz[3][3];
    int matriz2[5][5];
    int matriz3[10][10];

    int tipoMatriz;
    std::cout << "Que tipo de matriz ocupas\n1: 3*3\n2: 5*5 \n3: 10*10 ";
    std::cin >> tipoMatriz;

    switch (tipoMatriz)
    {
    default:
        break;

                case 1 :
                    //Matriz 3*3 **********************************************************************************
                    //Rellenar matrices
                    for (int i = 0; i < 3; i++)//Recorrido de Columnas
                    {
                        for (int j = 0; j < 3; j++)//Recorrido de Filas
                        {
                            matriz[i][j] = rand() % 9;
                        }
                    }

                    //Mostrar matriz
                    for (int i = 0; i < 3; i++)//Recorrido de Columnas
                    {
                        for (int j = 0; j < 3; j++)//Recorrido de Filas
                        {
                            std::cout << "[" << matriz[i][j] << "] ";
                        }
                        std::cout << std::endl;
                        
                    }
                    break;

                    //Matriz 5*5 **********************************************************************************
                case 2:
                    //Rellenar matrices
                    for (int i = 0; i < 5; i++)//Recorrido de Columnas
                    {
                        for (int j = 0; j < 5; j++)//Recorrido de Filas
                        {
                            matriz2[i][j] = rand() % 9;
                        }
                    }

                    //Mostrar matriz
                    for (int i = 0; i < 5; i++)//Recorrido de Columnas
                    {
                        for (int j = 0; j < 5; j++)//Recorrido de Filas
                        {
                            std::cout << "[" << matriz2[i][j] << "] ";
                        }
                        std::cout << std::endl;
                        
                    }
                    break;

                    //Matriz 10*10 **********************************************************************************
                case 3:
                    //Rellenar matrices
                    for (int i = 0; i < 10; i++)//Recorrido de Columnas
                    {
                        for (int j = 0; j < 10; j++)//Recorrido de Filas
                        {
                            matriz3[i][j] = rand() % 9;
                        }
                    }

                    //Mostrar matriz
                    for (int i = 0; i < 10; i++)//Recorrido de Columnas
                    {
                        for (int j = 0; j < 10; j++)//Recorrido de Filas
                        {
                            std::cout << "[" << matriz3[i][j] << "] ";
                        }
                        std::cout << std::endl;
                        
                    }
                    break;
    }   
}


