#include "./Libreta.h"
#include <math.h>
#include <iostream>
#include <vector>

Libreta::Libreta()
{
}

Libreta::~Libreta()
{
}

void Libreta::agregarContacto(Contacto nuevoContacto)
{
    agenda.push_back(nuevoContacto);
}

void Libreta::eliminarContacto(std::string nombre, std::string apellido)
{
    for (int i = 0; i < agenda.size(); i++)
    {
        if ((nombre == agenda[i].darNombre()) and (apellido == agenda[i].darApellido()));
        {
            agenda.erase(agenda.begin() + (i + 1));
        }
    }
}

/*bool Libreta::estaUnContacto(std::string nombre, std::string apellido)
{
}

int Libreta::retornarIdDeContacto(std::string nombre, std::string apellido)
{
}*/

int Libreta::modificarInfoDeContacto(string nombre, string apellido, string direccion, string e_mail, int i)
{

    agenda[i].modificarNombre(nombre);
    agenda[i].modificarApellido(apellido);
    agenda[i].modificarDireccion(direccion);
    agenda[i].modificarCorreoElectronico(e_mail);
}

void Libreta::listaCompletaDeContactos()
{
    for (int i = 0; i < agenda.size(); i++)
    {
        cout << " Contacto: # " << (i + 1) << endl;

        cout << "Nombre: " << agenda[i].darNombre() << endl;
        cout << "Apellido: " << agenda[i].darApellido() << endl;
        cout << "Direccion: " << agenda[i].darDireccion() << endl;
        cout << "E-Mail: " << agenda[i].darCorreoElectronico() << endl;

        for (int j = 0; j < agenda[i].darTelefonos().size(); j++)
        {
            cout << "telefono  " << (j + 1) << " : " << agenda[i].darTelefonos()[j] << endl;
        }

        for (int j = 0; j < agenda[i].darPalabrasClave().size(); j++)
        {
            cout << "Palabra  " << (j + 1) << " : " << agenda[i].darPalabrasClave()[j] << endl;
        }
        cout << "-----------------------------------------------------------------" << endl;
    }
}

int Libreta::busquedaPorPalabrasClave(std::string palabra)
{
    bool estado = false;
    int aux;
    for (int i = 0; i < agenda.size(); i++)
    {
        if (agenda[i].darBuscarPalabraClave(palabra) == true)
        {
            estado = true;
            aux = i;
        }
    }
    if (estado == false)
    {
        return -1;
    }
    else
    {
        return aux;
    }
}
/*Contacto busquedaPorId(int id)
{
}*/

void Libreta::listaCompletaDeContactos(int i)
{

    cout << "Nombre: " << agenda[i].darNombre() << endl;
    cout << "Apellido: " << agenda[i].darApellido() << endl;
    cout << "Direccion: " << agenda[i].darDireccion() << endl;
    cout << "E-Mail: " << agenda[i].darCorreoElectronico() << endl;

    for (int j = 0; j < agenda[i].darTelefonos().size(); j++)
    {
        cout << "telefono  " << (j + 1) << " : " << agenda[i].darTelefonos()[j] << endl;
    }

    for (int j = 0; j < agenda[i].darPalabrasClave().size(); j++)
    {
        cout << "Palabra  " << (j + 1) << " : " << agenda[i].darPalabrasClave()[j] << endl;
    }
    cout << "-----------------------------------------------------------------" << endl;
}
int Libreta::darTamanio()
{
    return agenda.size();
}
void Libreta::verInformacion()
{

    int n;
    for (int i = 0; i < agenda.size(); i++)
    {
        
        cout << "Contacto: # " << (i + 1) << endl;
        cout << "Nombre: " << agenda[i].darNombre() << endl;
        cout << "Apellido: " << agenda[i].darApellido() << endl;
    }

    cout<<"digite el numero a el cual quiera acceder"<<endl;
    cin>>n;

    listaCompletaDeContactos(n-1);
}
