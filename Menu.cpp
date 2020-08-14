#include "Menu.h"
#include <cstdlib>

Menu::Menu()
{
	opcion = 0;
	
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
				libreta.listaCompletaDeContactos();
				system("pause");
				break;

			case 6:

				break;
			}
			system("cls");
		}

	} while (opcion != 7);
}

void Menu::guardarContactos()
{
	string vNombre;
	string apellido;
	string direccion;
	string e_mail;
	string telefonoF;
	int telefono;
	string palabra;

	cout<<"Digite el nombre"<<endl;
	cin>>vNombre;

	cout<<"Digite el apellido"<<endl;
	cin>>apellido;

	cout<<"Digite la direccion"<<endl;
	cin>>direccion;
	fflush(stdin);

	cout<<"Digite el E-Mail"<<endl;
	cin>>e_mail;
	fflush(stdin);

	cout<<"Cuantos numeros telefonicos desea agregar"<<endl;
	cin>>telefono;

	Contacto con(vNombre,apellido,direccion,e_mail);

	for (int i = 0; i < telefono; i++)
	{
		cout<<"Digite el telefono  "<<(i+1)<<endl;
		cin>>telefonoF;
		con.agregarTelefono(telefonoF);
	}

	cout<<"Cuantos palabras claves tiene"<<endl;
	cin>>telefono;

	for (int i = 0; i < telefono; i++)
	{
		cout<<"Digite la palabra  "<<(i+1)<<endl;
		cin>>palabra;
		con.agregarPalabraClave(palabra);
	}

	libreta.agregarContacto(con);
	system("pause");
	
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
	string nuevoNombre;
	string nuevoApellido;
	string nuevaDireccion;
	string nuevoEmail;
	do
	{
		seleccionarInformacionModificar();
		{
			switch (opcion)
			{
			case 1:
				cout << "Digite el Nuevo Nombre" << endl;
				cin>>nuevoNombre;

				break;
			case 2:
				cout << "Digite el Nuevo Apellido" << endl;
				cin>>nuevoApellido;
				break;
			case 3:
				cout << "Digite la Nueva Direccion" << endl;
				break;
				cin>>nuevaDireccion;
			case 4:
				cout << "Digite el Nuevo E-Mail" << endl;
				cin>>nuevoEmail;
				break;

			default:
				cout << "Opcion Invalida" << endl;
				break;
			}
			system("cls");
		}
	} while (opcion != 5);
}
