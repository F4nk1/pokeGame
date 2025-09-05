#include<Habilidad.h>

Habilidad::Habilidad(int id,
    const std::string& nombre,
    const std::string&descripcion)
    : IdHabilidad(id),Nombre(nombre),Descripcion(descripcion){}

//Getters

int Habilidad::getId()const{
    return IdHabilidad;
}

std::string Habilidad::getNombre()const{
    return Nombre;
}

std::string Habilidad::getDescripcion()const{
    return Descripcion;
}

//Setters

void Habilidad::setId(int id){
    this->IdHabilidad=id;
}

void Habilidad::setNombre(const std::string& nombre){
    this->Nombre=nombre;
}

void Habilidad::setDescripcion(const std::string& descripcion){
    this->Descripcion=descripcion;
}