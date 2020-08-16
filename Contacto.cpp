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
//Get
string Contacto::darNombre(){
    return nombre;
}

string Contacto::darApellido(){
    return apellido;
}

string Contacto::darDireccion(){
    return direccion;
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


string Contacto::darCorreoElectronico(){
    return correoElectronico;
}
//

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

string Contacto::estaUnTelefono(string numero){
    
}

void Contacto::eliminarTelefono(string numero){

}

string Contacto::estaUnaPalabraClave(string palabra){

}

void Contacto::eliminarPalabraClave(string palabra){

}

int Contacto::darTamanoTelefonos(){

}

string Contacto::darUnTelefono(int id){

}

int Contacto::darTamanoPalabrasClave(){

}

string Contacto::darUnaPalabraClave(int id){

}