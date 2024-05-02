// P005_Operadores_Aritmeticos_Bibliotecas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
int a, c, b,d,e;
int main()
{
	std::cout << "introduce tu operacion a realizar\n 1:suma\n 2:resta\n 3:multiplicacion\n 4:division\n 5:exponente\n";
	std::cin >> a;

	switch (a)
	{
	case 1:
		std::cout << "introduce tu primer numero para la suma\n";
		std::cin >> b;
		std::cout << "introduce tu segundo numero para la suma\n";
		std::cin >> c;
		d = b + c;
		std::cout << "el resultado es: "<< d;
		break;
	case 2:
		std::cout << "introduce tu primer numero para la resta\n";
		std::cin >> b;
		std::cout << "introduce tu segundo numero para la resta\n";
		std::cin >> c;
		d = b - c;
		std::cout << "el resultado es: " << d;
		break;
	case 3:
		std::cout << "introduce tu primer numero para la multiplicacion\n";
		std::cin >> b;
		std::cout << "introduce tu segundo numero para la multiplicacion\n";
		std::cin >> c;
		d = b * c;
		std::cout << "el resultado es: " << d;
		break;
	case 4:
		std::cout << "introduce tu primer numero para la divicion\n";
		std::cin >> b;
		std::cout << "introduce tu segundo numero para la divicion\n";
		std::cin >> c;
		d = b / c;
		std::cout << "el resultado es: " << d;
		break;
	case 5:
		std::cout << "introduce tu numero\n";
		std::cin >> b;
		std::cout << "introduce tu exponente\n";
		std::cin >> c;
		d = b ^ c;
		std::cout << "el resultado es: " << d;
		break;

	default:
		std::cout << "introducce una opcion valida ";
		break;
	}
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
