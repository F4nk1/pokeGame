#include <iostream>
#include <string>
#include <Tipo.h>

class Movimiento {
private:
    int IdMovimiento;
    std::string Nombre;
    Tipo tipo_;
    bool EsEstado;
    int Poder;
    int Precision;
    int probabilidadEstado;
public:

    Movimiento(int idMovimiento,
        const std::string& nombre,
        const Tipo& tipo,
        bool esEstado,
        int poder,
        int precision,
        int probabilidadEstado);

    // Getters

    int getIdMovimiento() const;
    std::string getNombre() const;
    Tipo getTipo() const;
    bool getEsEstado() const;
    int getPoder() const;
    int getPrecision() const;
    int getProbabilidadEstado() const;


    // Setters
    void setNombre(const std::string& nombre);
    void setTipo(const Tipo& tipo);
    void setEsEstado(bool esEstado);
    void setPoder(int poder);
    void setPrecision(int precision);
    void setProbabilidadEstado(int probabilidadEstado);


    // Otros métodos

};