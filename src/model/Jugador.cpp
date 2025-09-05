
#include "Jugador.h"

Jugador::Jugador(const Usuario& usuario_,
    const Mazo& mazo_, 
    const Mazo& mano_)
    : usuario(usuario_), mazo(mazo_), mano(mano_) {}

// Getters
Usuario Jugador::getUsuario() const {
    return usuario;
}

Mazo Jugador::getMazo() const {
    return mazo;
}
Mazo Jugador::getMano() const {
    return mano;
}
// Setters
void Jugador::setUsuario(const Usuario& usuario_) {
    this->usuario = usuario_;
}
void Jugador::setMazo(const Mazo& mazo_) {
    this->mazo = mazo_;
}
void Jugador::setMano(const Mazo& mano_) {
    this->mano = mano_;
}
// Otros métodos

bool Jugador::continua() const{
    return mazo.CartasVivas()>0;
}