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
                    : Emanuel.benjumea@correounivalle.edu.co
                    : gallego.cesar@correounivalle.edu.co
                    : cifuentes.sebastian@correounivalle.edu.co
*/

/*CRC
Clase: Contacto.h
Responsabilidad:
Colaboracion: Libreta.h
              
*/


#include <iostream>
#include <vector>
using namespace std;

class Contacto
{
private:
    string nombre;
    string apellido;
    string direccion;
    string correoElectronico;
    std::vector<std::string> telefonos;
    std::vector<std::string> PalabrasClave;


public:
    Contacto(string nombre,string apellido,string direccion,string correoElectronico);
    Contacto();
    ~Contacto();
    string darNombre();
    string darApellido();
    string darDireccion();
    string darCorreoElectronico();
    void modificarNombre(string nombre);
    void modificarApellido(string apellido);
    void modificarDireccion(string direccion);
    void modificarCorreoElectronico(string email);
    void agregarTelefono(string numero);
    void agregarPalabraClave(string palabra);
    string mostrarTelefonos();
    string mostrarPalabrasClave();
    string estaUnTelefono(string numero);
    void eliminarTelefono(string numero);
    string estaUnaPalabraClave(string palabra);
    void eliminarPalabraClave(string palabra);
    int darTamanoTelefonos();
    string darUnTelefono(int id);
    int darTamanoPalabrasClave();
    string darUnaPalabraClave(int id);
};
