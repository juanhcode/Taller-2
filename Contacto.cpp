#include "Contacto.h"

Contacto::Contacto(string nombre,string apellido,string direccion,string correoElectronico){
    
    nombre = nombre;
    apellido = apellido;
    direccion = direccion;
    correoElectronico = correoElectronico;
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
    
}

void Contacto::modificarApellido(string apellido){
    
}

void Contacto::modificarDireccion(string direccion){
    
}

void Contacto::modificarCorreoElectronico(string email){
    
}

void Contacto::agregarTelefono(string numero){
    
}

void Contacto::agregarPalabraClave(string palabra){
    
}

string Contacto::mostrarTelefonos(){

}

string Contacto::mostrarPalabrasClave(){
    
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
