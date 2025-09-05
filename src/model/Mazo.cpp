#include "Mazo.h"
#include <algorithm>
#include <random>
Mazo::Mazo(std::vector<Carta> &cartas) 
    : Cartas(cartas) {}

// Getters
std::vector<Carta> Mazo::getCartas() const {
    return Cartas;
}

// Setters
void Mazo::setCartas(const std::vector<Carta>& cartas) {
    this->Cartas = cartas;
}

// Otros métodos

// revisa si el mazo esta vacio
bool Mazo::EstaVacio() const {
    return Cartas.empty();
}

// agrega una carta al mazo
void Mazo::AgregarCarta(const Carta& carta) {
    Cartas.push_back(carta);
}

// elimina una carta del mazo por su id
void Mazo::EliminarCarta(int id) {
    Cartas.erase(std::remove_if(Cartas.begin(), Cartas.end(),
                                [id](const Carta& carta) { return carta.getId() == id; }),
                 Cartas.end());
}

// baraja las cartas del mazo
void Mazo::Barajar() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(Cartas.begin(), Cartas.end(), g);
}

// devuelve el numero de cartas vivas
int Mazo::CartasVivas() const {
    int contador=0;
    for(Carta carta:Cartas){
        if(carta.estaVivo())contador++;
    }
    return contador;
}

void Mazo::PasarCarta(Mazo &destino){
    while(destino.CartasVivas()<3 && this->CartasVivas()>0){
        destino.AgregarCarta(this->Cartas.back());
        this->Cartas.pop_back();
    }
}

