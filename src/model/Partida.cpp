#include <Partida.h>

Partida::Partida(int idPartida,
    const Jugador& jugador, 
    const Jugador& rival)
    : IdPartida(idPartida),Jugador_(jugador),Rival(rival){}


// Getters 
int Partida::getIdPartida()const{
    return IdPartida;
}

Jugador Partida::getJugador()const{
    return Jugador_;
}

Jugador Partida::getRival()const{
    return Rival;
}


//Setters

void Partida::setJugador(const Jugador&jugador){
    this->Jugador_=jugador;
}

void Partida::setRival(const Jugador&rival){
    this->Rival=rival;
}

// otros metodos


void Partida::Iniciar()const{
    Jugador_.getMazo().Barajar();
    Rival.getMazo().Barajar();
    
}

void Partida::TurnoJugador()const{

}

void Partida::TurnoRival()const{

}
void Partida::VerificarFin()const{

}
void Partida::SiguienteTurno()const{

}

