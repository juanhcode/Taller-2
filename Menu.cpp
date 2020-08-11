#include "Menu.h"
#include <iostream>
using namespace std;


Menu::Menu()
{
    
}

Menu::~Menu()
{
	//Destructor
}

void Menu::seleccionarOpcion()
{
	cout<<endl;
	cout << "1 - Agregar contacto" << endl;
    cout << "2 - Ver informacion de contacto" << endl;
    cout << "3 - Modificar informacion" << endl;
    cout << "4 - Mostrar lista de contacto" << endl;
    cout << "5 - Buscar contactos" << endl; //buscar contactos con palabras claves
	cout << "6 - Salir" << endl;
	do
	{
		cout << "Introduza Opcion: ";
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 6)));
}

void Menu::visualizar()
{
	int nuevoContacto = 0;
	
	do
	{
		seleccionarOpcion();
		{
			switch (opcion)
			{
			case 1:	
				break;

			case 2:
				
				break;

			case 3:
				
				break;
            
            case 4:
				
				break;

            case 5:
				
				break;

            case 6:
				
				break;


			}
			system("cls");
		}

	} while (opcion != 6);
}