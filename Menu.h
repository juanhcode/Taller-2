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

E-mail:				: juan.manuel.hoyos@correounivalle.edu.co
    				: vargas.steven@correounivalle.edu.co
                    : Emanuel.benjumea@correounivalle.edu.co
                    : gallego.cesar@correounivalle.edu.co
                    : cifuentes.sebastian@correounivalle.edu.co
*/

/*CRC
Clase: Menu.h
Responsabilidad: seleccionar las opciones
Colaboracion: Contacto.h
              Libreta.h
              
*/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#ifndef __CLASSMENU
#define __CLASSMENU 

class Menu
{
	public:
		Menu();
		virtual ~Menu();
		void seleccionarOpcion();
		
		
		
	protected:
		//Lo utilizaremos cuando trabajemos con herencia.
		
	private:
		
};

#endif //__CLASSMENU