#include "Carta.h"

class Mazo {
private:
    std::vector<Carta> Cartas;
public:
    Mazo(std::vector<Carta> &cartas);
    

    // Getters
    std::vector<Carta> getCartas() const;


    // Setters
    void setCartas(const std::vector<Carta>& cartas);

    // Otros métodos
    bool EstaVacio() const;
    void AgregarCarta(const Carta& carta);
    void EliminarCarta(int id);
    void Barajar();
    int CartasVivas() const;
    void PasarCarta(Mazo &destino);
};