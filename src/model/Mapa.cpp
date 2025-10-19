#include<Mapa.h>

Mapa::Mapa(int ancho,
    int alto)
    : Ancho(ancho), Alto(alto){}

Mapa::Mapa(std::vector<std::vector<std::shared_ptr<Celda>>>&campo,
    int alto,
    int ancho)
    : Campo(campo),Ancho(ancho),Alto(alto){}


//Getters
std::vector<std::vector<std::shared_ptr<Celda>>> Mapa::getCampo()const{
    return Campo;
}

int Mapa::getAncho()const{
    return Ancho;
}

int Mapa::getAlto()const{
    return Alto;
}

//Setters

void Mapa::setCampo(const std::vector<std::vector<std::shared_ptr<Celda>>>&campo){
    this->Campo=campo;
}

void Mapa::setAncho(int ancho){
    this->Ancho=ancho;
}

void Mapa::setAlto(int alto){
    this->Alto=alto;
}
// Otros metodos