#include<Carta.h>

Carta::Carta(int id,
    const std::string& nombre,
    const std::vector<Tipo>& tipos,
    int hpMax,
    int hp,
    int ataque,
    int ataqueEspecial,
    int defensa,
    int defensaEspecial,
    Habilidad& idHabilidad,
    const std::vector<Movimiento>& movimientos,
    const std::string& miniatura,
    const std::string& descripcion)
    : IdPokemon(id), Nombre(nombre), Tipos(tipos), HpMax(hpMax), Hp(hp),
      Ataque(ataque), AtaqueEspecial(ataqueEspecial), Defensa(defensa),
      DefensaEspecial(defensaEspecial), IdHabilidad(idHabilidad),
      Movimientos(movimientos), Miniatura(miniatura), Descripcion(descripcion) {}


//Getters
int Carta::getId()const{
    return IdPokemon;
}

std::string Carta::getNombre()const{
    return Nombre;
}

std::vector<Tipo> Carta::getTipos()const{
    return Tipos;
}

int Carta::getHpMax()const{
    return HpMax;
}

int Carta::getAtaque()const{
    return Ataque;
}

int Carta::getAtaqueEspecial()const{
    return AtaqueEspecial;
}

int Carta::getDefensa()const{
    return Defensa;
}

int Carta::getDefensaEspecial()const{
    return DefensaEspecial;
}

Habilidad Carta::getIdHabilidad()const{
    return IdHabilidad;
}

std::vector<Movimiento> Carta::getMovimientos()const{
    return Movimientos;
}

std::string Carta::getMiniatura()const{
    return Miniatura;
}

std::string Carta::getDescripcion()const{
    return Descripcion;
}

// Setters

void Carta::setHp(int hp){
    this->Hp=hp;
}

void Carta::setAtaque(int ataque){
    this->Ataque=ataque;
}

void Carta::setDefensa(int defensa){
    this->Defensa=defensa;
}

void Carta::setAtaqueEspecial(int ataqueEspecial){
    this->AtaqueEspecial=ataqueEspecial;
}

void Carta::setDefensaEspecial(int defensaEspecial){
    this->DefensaEspecial=defensaEspecial;
}

void Carta::setIdHabilidad(Habilidad& idHabilidad){
    this->IdHabilidad=idHabilidad;
}

void Carta::setMovimientos(const std::vector<Movimiento>&movimientos){
    this->Movimientos=movimientos;
}

void Carta::setMiniatura(const std::string& miniatura){
    this->Miniatura=miniatura;
}

void Carta::setDescripcion(const std::string& descripcion){
    this->Descripcion=descripcion;
}
// otros metodos
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
