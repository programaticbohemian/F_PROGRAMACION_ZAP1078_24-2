// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    bool c = true;
    bool a = true;
    bool b = true;

    c = a + b;
        std::cout << "La suma de booleanos da " << c << "\n";

        bool a1 = true; 
       
     a1 = b - a;
        std::cout << "La resta de booleanos da " << a1 << "\n";

        bool a2 = true;

        a2 = b * a;
        std::cout << "La resta de booleanos da " << a2 << "\n";

        bool a3 = true;

        a3 = b / a;
        std::cout << "La resta de booleanos da " << a3 << "\n";

        bool a4 = true;

        a4 = b ^ a;
        std::cout << "La resta de booleanos da " << a4 << "\n";

        int n1, n2, n3,n4,n5,n6,n7,n8;
        std::cout << "introduce el primer numero " << "\n";
        std::cin >> n1;
        std::cout << "intoduce el segundo numero " << "\n";
        std::cin >> n2;
        std::cout << "introduce el tercer numero " << "\n";
        std::cin >> n8;

        n3 = n2 + n1;
        n4 = n2 - n1;
        n5 = n2 * n1;
        n6 = n2 / n1;
        n7 = n2 ^ n1;
        n8 = sqrt(n8);
            std::cout << "La suma de enteros da " << n3 << "\n";
            std::cout << "La resta de enteros da " << n4 << "\n";
            std::cout << "La multiplicacion de enteros da " << n5 << "\n";
            std::cout << "La division de enteros da " << n6 << "\n";
            std::cout << "La potencia de enteros da " << n7 << "\n";
            std::cout << "La raiz de enteros da " << n8 << "\n";

            char c1, c2;
            c2 = '0';
            c1 = '0';

            std::cout << "introduce el primer cARACTER " << "\n";
            std::cin >> c1;
            std::cout << "intoduce el segundo numero " << "\n";
            std::cin >> c2;

            std::cout << c2 << c1 << "\n";
        
            double x1 = 0, x2 = 0, x3=0, x4=0, x5=0, x6=0, x7=0, x8 = 0;
           
            std::cout << "introduce el primer numero con punto decimal " << "\n";
            std::cin >> x1;
            std::cout << "intoduce el segundo numero con punto decimal " << "\n";
            std::cin >> x2;
            std::cout << "intoduce el segundo numero con punto decimal " << "\n";
            std::cin >> x8;

            x3 = x2 + x1;
            x4 = x2 - x1;
            x5 = x2 / x1;
            x6 = x2 * x1;
            x8 = sqrt(x8);

            std::cout << "La suma de double da " << x3 << "\n";
            std::cout << "La resta de double da " << x4 << "\n";
            std::cout << "La multiplicacion de double da " << x5 << "\n";
            std::cout << "La division de double da " << x6 << "\n";
            std::cout << "La raiz de double da " << x8 << "\n";

            float j1 = 0, j2 = 0, j3 = 0, j4, j5, j6, j7;

            std::cout << "introduce el primer numero mayor a 3 digitos" << "\n";
            std::cin >> j1;
            std::cout << "intoduce el segundo numero mayor a 3 digitos" << "\n";
            std::cin >> j2;
            std::cout << "intoduce el segundo numero mayor a 3 digitos" << "\n";
            std::cin >> j3;

            j4 = j2 + j1;
            j5 = j2 - j1;
            j6 = j2 / j1;
            j7 = j2 * j1;
            j3 = sqrt(j3);

            std::cout << "La suma de float da " << j4 << "\n";
            std::cout << "La resta de float da " << j5 << "\n";
            std::cout << "La multiplicacion de float da " << j7 << "\n";
            std::cout << "La division de float da " << j6 << "\n";
            std::cout << "La raiz de float da " << j3 << "\n";

            std::string z1 = " ", z2 = " ", z4 = " ";

            std::cout << "introduce la primer palabra " << "\n";
            std::cin >> z1;
            std::cout << "intoduce la segunda palabra " << "\n";
            std::cin >> z2;

            z4 = z2 + z1;

            std::cout << "La suma de string da " << z4 << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
