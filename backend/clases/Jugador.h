#include "Usuario.h"
#include "Mazo.h"
class Jugador {
private:
    Usuario usuario;
    Mazo mazo;
    Mazo mano;

    
public:

    Jugador(const Usuario& usuario, const Mazo& mazo, const Mazo& mano);

    // Getters
    Usuario getUsuario() const;
    Mazo getMazo() const;
    Mazo getMano() const;

    // Setters
    void setUsuario(const Usuario& usuario);
    void setMazo(const Mazo& mazo);
    void setMano(const Mazo& mano);

    // Otros métodos

    bool continua() const;

    

};