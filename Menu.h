/*
Nombre de archivo: Menu.h
Version: 0.1
Fecha de creacion: 10/8/2020
Fecha de ultima modificacion: 
Autor: Juan Manuel Hoyos Contreras - 201958950-2711
     : Emanuel benjumea bejarano - 201958941-2711
     : cesar augusto gallego niño - 1958553-2711
     : Steven Vargas Gonzalez - 1958675-2711
     : sebastian cifuentes florez - 201959077-2711

E-mail:			: juan.manuel.hoyos@correounivalle.edu.co
    				: vargas.steven@correounivalle.edu.co
                    : gallego.cesar@correounivalle.edu.co
                    : cifuentes.sebastian@correounivalle.edu.co
                    : Emanuel.benjumea@correounivalle.edu.co
*/

/*CRC
Clase: Menu.h
Responsabilidad: seleccionar las opciones,  agregar un nuevo contacto, eliminar un contacto ya existente,
ver la información detallada de un contacto, modificar la información del contacto, mostrar
la lista completa de contactos y buscar contactos por las palabras claves.
Colaboracion: Contacto.h
              Libreta.h
              
*/

#include <stdlib.h>
#include "Libreta.h"
#include "Contacto.h"
#include <iostream>
#include <string>

using namespace std;

#ifndef __CLASSMENU
#define __CLASSMENU 

class Menu
{
	public:
		Menu();
		virtual ~Menu();
		void seleccionarOpcion();
          void visualizar();
          void guardarContactos();
          void seleccionarInformacionModificar();
          void modificarInformacion();
          void eliminarContactos();
          void buscarContactos();

	private:
          int opcion;
          Libreta libreta;
		
};

#endif //__CLASSMENU