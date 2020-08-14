#include "./Libreta.h"
#include <math.h>
#include <iostream>

Libreta::Libreta(){

    for (int i = 0; i != agenda.size(); i++)
    {
       
    }
    
}

Libreta::~Libreta(){

}

void Libreta::agregarContacto(Contacto nuevoContacto){
    agenda.push_back(nuevoContacto);
}

void Libreta::eliminarContacto(std::string nombre, std::string apellido){

}

bool Libreta::estaUnContacto(std::string nombre, std::string apellido){

}

int Libreta::retornarIdDeContacto(std::string nombre, std::string apellido){

}

void Libreta::modificarInfoDeContacto(std::string nombre, std::string apellido, int parametro, std::string info){

}

void Libreta::escribirListaDeContactos(){

}

void Libreta::listaCompletaDeContactos(){

}

int Libreta::busquedaPorPalabrasClave(std::string palabra){

}

Contacto busquedaPorId(int id){

}