#include<Movimiento.h>
Movimiento::Movimiento(int idMovimiento,
    const std::string& nombre,
    const Tipo& tipo,
    bool esEstado,
    int poder,
    int precision,
    int probabilidadEstado)
    : IdMovimiento(idMovimiento), Nombre(nombre), tipo_(tipo), EsEstado(esEstado),
      Poder(poder), Precision(precision), probabilidadEstado(probabilidadEstado) {}


//Getters
int Movimiento::getIdMovimiento() const {
    return IdMovimiento;
}
std::string Movimiento::getNombre() const {
    return Nombre;
}
Tipo Movimiento::getTipo() const {
    return tipo_;
}
bool Movimiento::getEsEstado() const {
    return EsEstado;
}
int Movimiento::getPoder() const {
    return Poder;
}
int Movimiento::getPrecision() const {
    return Precision;
}
int Movimiento::getProbabilidadEstado() const {
    return probabilidadEstado;
}


//Setters
void Movimiento::setNombre(const std::string& nombre) {
    Nombre = nombre;
}
void Movimiento::setTipo(const Tipo& tipo) {
    tipo_ = tipo;
}
void Movimiento::setEsEstado(bool esEstado) {
    EsEstado = esEstado;
}
void Movimiento::setPoder(int poder) {
    Poder = poder;
}
void Movimiento::setPrecision(int precision) {
    Precision = precision;
}
void Movimiento::setProbabilidadEstado(int probabilidadEstado) {
    this->probabilidadEstado = probabilidadEstado;
}
// Otros métodos
