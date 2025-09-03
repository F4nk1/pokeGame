#include<Tipo.h>


Tipo::Tipo(std::string nombre) 
: Nombre(nombre) {}

//Getters

std::string Tipo::getNombre() const {
    return Nombre;
}
int Tipo::getEfectividad(const std::string& tipo) const {
    auto it = efectividades.find(tipo);
    if (it != efectividades.end()) {
        return it->second;
    }
    return 1; 
}


std::unordered_map<std::string, int> Tipo::getEfectividades() const {
    return efectividades;
}

//Setters


void Tipo::setNombre(const std::string& nombre) {
    Nombre = nombre;
}
void Tipo::setEfectividades(const std::unordered_map<std::string, int>& efectividadesMap) {
    efectividades = efectividadesMap;
}


//otros métodos
