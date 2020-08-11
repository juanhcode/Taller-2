#include <iostream>
#include <vector>
#include "Contacto.h"
using namespace std;

class Libreta
{
    private:

    std::vector<Contacto>agenda;


    public:
    Libreta();
    ~Libreta();
    void agregarContacto(Contacto nuevoContacto);
    void eliminarContacto(std::string nombre, std::string apellido);
    bool estaUnContacto(std::string nombre, std::string apellido);
    int retornarIdDeContacto(std::string nombre, std::string apellido);
    void modificarInfoDeContacto(std::string nombre, std::string apellido, int parametro, std::string info);
    void escribirListaDeContactos();
    void listaCompletaDeContactos();
    int busquedaPorPalabrasClave(std::string palabra);
    Contacto busquedaPorId(int id);

};

