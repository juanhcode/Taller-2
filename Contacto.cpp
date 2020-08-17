#include "Contacto.h"
#include <math.h>
#include <iostream>

Contacto::Contacto(string dNombre,string dApellido,string dDireccion,string dCorreoElectronico){
    
    nombre = dNombre;
    apellido = dApellido;
    direccion = dDireccion;
    correoElectronico = dCorreoElectronico;
}

Contacto::Contacto(){

}

Contacto::~Contacto(){

}
string Contacto::darNombre(){
    return nombre;
}

string Contacto::darApellido(){
    return apellido;
}

string Contacto::darDireccion(){
    return direccion;
}

string Contacto::darCorreoElectronico(){
    return correoElectronico;
}

void Contacto::modificarNombre(string nombre){
    this->nombre = nombre;
}
void Contacto::modificarApellido(string apellido){
    this->apellido = apellido;
}

void Contacto::modificarDireccion(string direccion){
    this->direccion = direccion; 
}

void Contacto::modificarCorreoElectronico(string email){
    this->correoElectronico = email;
}

bool Contacto::darBuscarPalabraClave(string palabraM){
    for (int i = 0; i < PalabrasClave.size(); i++)
    {
        if (palabraM == PalabrasClave[i])
        {
            return true;
        }
        
    }
    return false;
}

void Contacto::agregarTelefono(string numero){
    telefonos.push_back(numero);
}

void Contacto::agregarPalabraClave(string palabra){
    PalabrasClave.push_back(palabra);
}

vector<string> Contacto::darTelefonos(){
    return telefonos;
}

vector<string> Contacto::darPalabrasClave(){
    return PalabrasClave;
}