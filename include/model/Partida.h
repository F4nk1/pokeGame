#include "Jugador.h"

class Partida{
private:
    int IdPartida;
    Jugador Jugador_;
    Jugador Rival;


public:

    Partida(int IdPartida,
        const Jugador &jugador, 
        const Jugador &rival);

    //Getters
    int getIdPartida() const;
    Jugador getJugador() const;
    Jugador getRival() const;


    //Setters

    //void setIdPartida(const int& Id);
    void setJugador(const Jugador& jugador);
    void setRival(const Jugador& rival);


    //otros metodo
    void Iniciar() const;
    void TurnoJugador()const;
    void TurnoRival()const;
    void VerificarFin() const;
    void SiguienteTurno() const;

};