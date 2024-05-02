// P006_Repaso_Entrada_y_Salida_de_datos_Estructuras_de_control.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lucio Acosta Montoya 

#include <iostream>
#include <string>

int main()
{
	char user[25];
	char pass[20];
	char email[40];
	int edad, cp, zap, carrera, steam;
	int c;
		c = 1;
		char s1[18] = "Mau12345";
		char s2[18] = "Amerike1";
	
		bool f = false;

	while (c<=3 and f==false)
	{
		std::cout << "\n\n\n**********************sistema de ingreso**********************************************\n\n";
		std::cout << "\n\t\t Ingrese USER\t\t";
		std::cin >> user;
		std::cout << "\n\t\t Ingrese PASSWORD\t";
		std::cin >> pass;
		std::cout << "\n\t\t Ingrese EMAIL\t\t";
		std::cin >> email;
		c++;
		std::system("cls");
		if (strlen(pass) >= 8)
		{
			if ((strcmp(pass, s2)==0)  && (strcmp(user, s1) == 0))
			{
				f = true;
					
			}
		}

		else
		{
			std::cout << "\n\n***************************ERROR_FATAL****************************************************";
			std::cout << "\n\t\t ingrese mas de 8 caracteres";
			std::cout << "\n******************************************************************************************";
			std::system("cls"); 
		}
		break; 
	}
	
	if (f==false)
	{
		std::cout << "\n\n***************************Usuario invalido****************************************************";
		std::cout << "\n\t\t ESTA NO ES TU CUENTA :\t\t";
		std::cout << "\n\t\t Se ENVIO una notificacion al correo:";
		std::cout << "\n************************************************************************************************";
	}
	

	if (f==true)
	{
		std::cout << "\n\n***************************SESION_INICIADA****************************************************";
		std::cout << "\n\t\t BIENVENIDO:\t\t"<< s1;
		std::cout << "\n\t\t Se ENVIO una notificacion al correo: " << email;
		std::cout << "\n************************************************************************************************";
		std::cout << "\n\t\t ingresa tu edad:\t\t";
		std::cin >> edad;
		std::cout << "\n\t\t ingresa tu cp:\t\t";
		std::cin >> cp;
		std::cout << "\n\t\t ingresa tu zap:\t\t";
		std::cin >> zap;
		std::cout << "\n\t\t cual es tu carrera:\t\t";
		std::cin >> carrera
		std::cout << "\n\t\t ingresa tu steam id:\t\t";
		std::cin >> steam;
		std::system("cls");
		std::cout << "\n\t\t hola" << s1<<"gracias por compartir tus datos";
		std::cout << "\n\t\t tu edad es:\t\t"<<edad;
		std::cout << "\n\t\t tu cp es:\t\t" << cp;
		std::cout << "\n\t\t tu zap es:\t\t" << zap;
		std::cout << "\n\t\t tu carrera es:\t\t" << carrera;
		std::cout << "\n\t\t tu steam es:\t\t" << steam;

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
