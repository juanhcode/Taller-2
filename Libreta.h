/*
Nombre de archivo: Contacto.h
Version: 0.1
Fecha de creacion: 10/8/2020
Fecha de ultima modificacion: 
Autor: Juan Manuel Hoyos Contreras - 201958950-2711
     : Emanuel benjumea bejarano - 201958941-2711
     : cesar augusto gallego niño - 1958553-2711
     : Steven Vargas Gonzalez - 1958675-2711
     : sebastian cifuentes florez - 201959077-2711

E-mail:				: juan.manuel.hoyos@correounivalle.edu.co
    				: vargas.steven@correounivalle.edu.co
                    : gallego.cesar@correounivalle.edu.co
                    : cifuentes.sebastian@correounivalle.edu.co
                    : Emanuel.benjumea@correounivalle.edu.co
*/

/*CRC
Clase: Libreta.h
Responsabilidad:
    agregar,modificar,eliminar contactos a la agenda
    hacer lista completa de contactos
    buscar palabras claves.
Colaboracion: Contacto.h        
*/
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
    int modificarInfoDeContacto(string nombre,string apellido,string direccion,string e_mail,int i);
    void listaCompletaDeContactos();
    void listaCompletaDeContactos(int i);
    int busquedaPorPalabrasClave(std::string palabra);
    int darTamanio();
    void verInformacion();

};

#endif //__CLASSLIBRETA