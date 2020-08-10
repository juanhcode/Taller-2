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
