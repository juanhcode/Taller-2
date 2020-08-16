#include "Menu.h"
#include <cstdlib>

string nombre;
string apellido;
string direccion;
string e_mail;
string telefonoF;
int telefono;
string palabra;

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
	cout << "6 - Buscar contacto " << endl; //buscar contactos con palabras claves
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
				eliminarContactos();
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
				buscarContactos();

				break;
			}
			system("cls");
		}

	} while (opcion != 7);
}

void Menu::guardarContactos()
{

	cout << "Digite el nombre" << endl;
	cin >> nombre;

	cout << "Digite el apellido" << endl;
	cin >> apellido;

	cout << "Digite la direccion" << endl;
	cin >> direccion;

	fflush(stdin);

	cout << "Digite el E-Mail" << endl;
	cin >> e_mail;

	fflush(stdin);

	Contacto con(nombre, apellido, direccion, e_mail);

	cout << "Cuantos numeros telefonicos desea agregar" << endl;
	cin >> telefono;

	for (int i = 0; i < telefono; i++)
	{
		cout << "Digite el telefono  " << (i + 1) << endl;
		cin >> telefonoF;
		con.agregarTelefono(telefonoF);
	}

	cout << "Cuantos palabras claves tiene" << endl;
	cin >> telefono;

	for (int i = 0; i < telefono; i++)
	{
		cout << "Digite la palabra  " << (i + 1) << endl;
		cin >> palabra;
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

	do
	{
		seleccionarInformacionModificar();
		{
			/*system("cls");
        cout<<"< = = = = = F A B R I C A de F O R R O S para V E H I C U L O S = = = = = >";
        cout<<"\n\nOpcion 3: Modificar Datos de los Trabajadores";
        cout<<"\n\nIngrese el Numero de Cedula: ";
        cin>>modificar;

        for (i = 0 ; i < 3 ; i++)
        {
            if (modificar == cedula[i])
            {
                cout<<"\n\n------------------------------------";
                cout<<"\n\nNombre del Trabajador: "<<nombre[i];
                cout<<"\n\nCedula: "<<cedula[i];
                cout<<"\n\n------------------------------------";
            }       
        }*/

			break;
			switch (opcion)
			{
			case 1:
				cout << "Digite el Nuevo Nombre" << endl;
				cin >> nombre;

				break;
			case 2:
				cout << "Digite el Nuevo Apellido" << endl;
				cin >> apellido;
				break;
			case 3:
				cout << "Digite la Nueva Direccion" << endl;
				break;
				cin >> direccion;
			case 4:
				cout << "Digite el Nuevo E-Mail" << endl;
				cin >> e_mail;
				break;

			default:
				cout << "Opcion Invalida" << endl;
				break;
			}
		}
		system("cls");
	} while (opcion != 5);
}

///
void Menu::eliminarContactos()
{
	string vNombre;
	string apellido;
	string direccion;
	string e_mail;
	string telefonoF;
	int telefono;
	string persona;
	int contacto;

	cout << "1 - Ver lista de contactos" << endl;
	cout << "2 - Ir al menu" << endl;

	//Propiedad intelectual de el perro
	do
	{
		cout << "Introduzca Opcion" << endl;
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 2)));

	libreta.listaCompletaDeContactos();
	do
	{
		cout << "Elija el usuario que desea eliminar" << endl;
		cin >> contacto;
		libreta.eliminarContacto(nombre,apellido);

	} while (!((contacto >= 1) && (contacto <= 10)));
	system("Pause");
}

void Menu::buscarContactos()
{
	string busqueda;

	cout << "1 - Buscar Contactos" << endl;
	cout << "2 - Ir al menu" << endl;

	do
	{
		cout << "Introduzca Opcion" << endl;
		cin >> opcion;
	} while (!((opcion >= 1) && (opcion <= 2)));

	switch (opcion)
	{
	case 1:
		libreta.listaCompletaDeContactos();
		cout << "introduzca la pabra clave del contacto qe deseas buscar" << endl;
		cin >> busqueda;

		libreta.busquedaPorPalabrasClave(busqueda)   ;

		
		system("pause");
		break;
	default:
		break;
	}
}
