#include<Carta.h>

Carta::Carta(int id,
    const std::string& nombre,
    const std::vector<std::string>& tipos,
    int hpMax,
    int hp,
    int ataque,
    int ataqueEspecial,
    int defensa,
    int defensaEspecial,
    const std::string& habilidad,
    const std::vector<std::string>& movimientos,
    const std::string& miniatura,
    const std::string& descripcion)
    : Id(id), Nombre(nombre), Tipos(tipos), HpMax(hpMax), Hp(hp),
      Ataque(ataque), AtaqueEspecial(ataqueEspecial), Defensa(defensa),
      DefensaEspecial(defensaEspecial), Habilidad(habilidad),
      Movimientos(movimientos), Miniatura(miniatura), Descripcion(descripcion) {}


// Metodos
// recibir danio y restarlo al hp actual

int Carta::tomarDanio(int danio) {
    Hp -= danio;
    if (Hp < 0) {
        Hp = 0;
    }
    return Hp;
}
//curar la carta hasta su hp maximo

int Carta::curar(int cantidad) {
    Hp += cantidad;
    if (Hp > HpMax) {
        Hp = HpMax;
    }
    return Hp;
}
//retorna si la carta esta viva o no

bool Carta::estaVivo() const {
    return Hp > 0;
}

//probalidad del 1/24 de que sea critico

int Carta::critico() const {
    return (rand() % 24) ==1; 
}
