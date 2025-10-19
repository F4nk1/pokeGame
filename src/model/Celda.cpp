#include<Celda.h>

Celda::Celda(const std::string& nombre,
    bool transitable,
    bool destructible)
    :Nombre(nombre),Transitable(transitable),Destructible(destructible){}


//Getters

std::string Celda::getNombre()const{
    return Nombre;
}

bool Celda::getTransitable()const{
    return Transitable;
}

bool Celda::getDestructible()const{
    return Destructible;
}


//Setters

void Celda::setNombre(const std::string& nombre){
    this->Nombre=nombre;
}

void Celda::setTransitable(bool transitable){
    this->Transitable=transitable;
}

void Celda::setDestructible(bool destructible){
    this->Destructible=destructible;
}

//Otros metodos