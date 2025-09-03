#include "Mazo.h"
#include <algorithm>
#include <random>
Mazo::Mazo(std::vector<Carta> &cartas) : cartas(cartas) {}

// Getters
std::vector<Carta> Mazo::getCartas() const {
    return cartas;
}

// Setters
void Mazo::setCartas(const std::vector<Carta>& cartas) {
    this->cartas = cartas;
}

// Otros métodos
bool Mazo::EstaVacio() const {
    return cartas.empty();
}

void Mazo::AgregarCarta(const Carta& carta) {
    cartas.push_back(carta);
}
void Mazo::EliminarCarta(int id) {
    cartas.erase(std::remove_if(cartas.begin(), cartas.end(),
                                [id](const Carta& carta) { return carta.getId() == id; }),
                 cartas.end());
}
void Mazo::Barajar() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cartas.begin(), cartas.end(), g);
}

