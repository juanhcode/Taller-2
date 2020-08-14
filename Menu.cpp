#include "Menu.h"
#include <cstdlib>

Menu::Menu()
{
	opcion = 0;
	Contacto erg;
}

Menu::~Menu()
{
	//Destructor
}

void Menu::seleccionarOpcion()
{
	cout << endl;
	cout << "          AGENDA          " << endl;
	cout << "1 - Agregar contacto" << endl;
	cout << "2 - Eliminar Contacto" << endl;
	cout << "3 - Ver informacion de contacto" << endl;
	cout << "4 - Modificar informacion" << endl;
	cout << "5 - Mostrar lista de contacto" << endl;
	cout << "6 - Buscar contactos" << endl; //buscar contactos con palabras claves
	cout << "7 - Salir" << endl;
	do
	{
		cout << "Introduza Opcion: ";
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 7)));
}

void Menu::visualizar()
{

	do
	{
		seleccionarOpcion();
		{
			switch (opcion)
			{
			case 1:
				guardarContactos();
				break;
			case 2:

				break;

			case 3:

				break;

			case 4:
				modificarInformacion();
				break;

			case 5:
				Libreta();
				break;

			case 6:

				break;
			}
			system("cls");
		}

	} while (opcion != 7);
}

void Menu::seleccionarInformacionContacto()
{
	cout << "Datos para guardar Contactos" << endl;
	cout << "1-Nombre" << endl;
	cout << "2-Apellido" << endl;
	cout << "3-Direccion" << endl;
	cout << "4-E-Mail" << endl;
	cout << "5-Ir al Menu" << endl;
	do
	{
		cout << "Introduza Opcion: ";
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 5)));
}

void Menu::guardarContactos()
{

	string vNombre;
	string apellido;
	string direccion;
	string e_mail;
	do
	{
		seleccionarInformacionContacto();
		{
			switch (opcion)
			{
			case 1:
				cout << "Digite el Nombre" << endl;
				cin >> vNombre;
				//e1.colocarNombre(vNombre);
				system("pause");

				break;
			case 2:
				cout << "Digite el Apellido" << endl;
				cin >> apellido;
				break;
			case 3:
				cout << "Digite la Direccion" << endl;
				cin >> direccion;
				break;
			case 4:
				cout << "Digite el E-Mail" << endl;
				cin >> e_mail;
				break;

			default:
				cout << "Opcion Invalida" << endl;
				break;
			}
			system("cls");
		}
	} while (opcion != 5);
}

void Menu::seleccionarInformacionModificar()
{
	cout << "Introduzca la opcion que quiera modificar" << endl;
	cout << "1-Nombre" << endl;
	cout << "2-Apellido" << endl;
	cout << "3-Direccion" << endl;
	cout << "4-E-Mail" << endl;
	cout << "5-Ir al Menu" << endl;
	do
	{
		cout << "Introduza Opcion: ";
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 5)));
}

void Menu::modificarInformacion()
{

	do
	{
		seleccionarInformacionModificar();
		{
			switch (opcion)
			{
			case 1:
				cout << "Digite el Nuevo Nombre" << endl;
				break;
			case 2:
				cout << "Digite el Nuevo Apellido" << endl;
				break;
			case 3:
				cout << "Digite la Nueva Direccion" << endl;
				break;
			case 4:
				cout << "Digite el Nuevo E-Mail" << endl;
				break;

			default:
				cout << "Opcion Invalida" << endl;
				break;
			}
			system("cls");
		}
	} while (opcion != 5);
}
