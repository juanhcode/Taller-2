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

string Contacto::colocarNombre(string vNombre){
    return vNombre;
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
    nombre = nombre;
}

void Contacto::modificarApellido(string apellido){
    apellido = apellido;
}

void Contacto::modificarDireccion(string direccion){
    direccion = direccion;
}

void Contacto::modificarCorreoElectronico(string email){
    correoElectronico = email;
}

void Contacto::agregarTelefono(string numero){
    numero; //Revisar
}

void Contacto::agregarPalabraClave(string palabra){
    palabra; //Revisar
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