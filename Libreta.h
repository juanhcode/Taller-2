#include <iostream>
#include <vector>
#include "Contacto.h"
using namespace std;

#ifndef __CLASSLIBRETA
#define __CLASSLIBRETA


class Libreta
{
    private:

    std::vector<Contacto>agenda;


    public:
    Libreta();
    ~Libreta();
    void agregarContacto(Contacto nuevoContacto);
    void eliminarContacto(std::string nombre, std::string apellido);
    //bool estaUnContacto(std::string nombre, std::string apellido);
    //int retornarIdDeContacto(std::string nombre, std::string apellido);
    int modificarInfoDeContacto(string nombre,string apellido,string direccion,string e_mail,int i);
    //void escribirListaDeContactos();
    void listaCompletaDeContactos();
    void listaCompletaDeContactos(int i);
    int busquedaPorPalabrasClave(std::string palabra);
    //Contacto busquedaPorId(int id);
    int darTamanio();
    void verInformacion();

};

#endif //__CLASSLIBRETA