#include "./Libreta.h"
#include <math.h>
#include <iostream>

Libreta::Libreta(){

    
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

int Libreta::modificarInfoDeContacto(){



}

void Libreta::listaCompletaDeContactos(){
    for (int i = 0; i < agenda.size(); i++)
    {
        
        cout<<"Nombre: "<<agenda[i].darNombre()<<endl;
        cout<<"Apellido: "<<agenda[i].darApellido()<<endl;
        cout<<"Direccion: "<<agenda[i].darDireccion()<<endl;
        cout<<"E-Mail: "<<agenda[i].darCorreoElectronico()<<endl;

        for (int j = 0; j < agenda[i].darTelefonos().size(); j++)
        {
            cout<<"telefono  "<<(j+1)<<" : "<<agenda[i].darTelefonos()[j]<<endl;

        }

        for (int j = 0; j < agenda[i].darPalabrasClave().size(); j++)
        {
            cout<<"Palabra  "<<(j+1)<<" : "<<agenda[i].darPalabrasClave()[j]<<endl;

        }      
        cout<<"-----------------------------------------------------------------"<<endl;
    }

    
}

int Libreta::busquedaPorPalabrasClave(std::string palabra){

}

Contacto busquedaPorId(int id){

}