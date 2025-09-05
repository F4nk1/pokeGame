#include<iostream>
#include<string>
#include<vector>
#include<Tipo.h>
#include<Movimiento.h>
#include<Habilidad.h>
class Carta{
private:
    int IdPokemon;
    std::string Nombre;
    std::vector<Tipo>Tipos;
    int HpMax;
    int Hp;
    int Ataque;
    int AtaqueEspecial;
    int Defensa;
    int DefensaEspecial;
    Habilidad Habilidad_;
    std::vector<Movimiento>Movimientos;
    std::string Miniatura;
    std::string Descripcion;


public:
    Carta(int IdPokemon,
        const std::string& nombre,
        const std::vector<Tipo>& tipos,
        int hpMax,
        int hp,
        int ataque,
        int ataqueEspecial,
        int defensa,
        int defensaEspecial,
        Habilidad& habilidad,
        const std::vector<Movimiento>& movimientos,
        const std::string& miniatura,
        const std::string& descripcion);


    // Getters
    int getId() const;
    std::string getNombre() const;
    std::vector<Tipo> getTipos() const;
    int getHpMax() const;
    int getHp() const;
    int getAtaque() const;
    int getAtaqueEspecial() const;
    int getDefensa() const;
    int getDefensaEspecial() const;
    Habilidad getHabilidad() const;
    std::vector<Movimiento> getMovimientos() const;
    std::string getMiniatura() const;
    std::string getDescripcion() const;


    // Setters
    void setHp(int hp);
    void setAtaque(int ataque);
    void setDefensa(int defensa);
    void setAtaqueEspecial(int ataqueEspecial);
    void setDefensaEspecial(int defensaEspecial);
    void setHabilidad(Habilidad& habilidad);
    void setMovimientos(const std::vector<Movimiento>& movimientos);
    void setMiniatura(const std::string& miniatura);
    void setDescripcion(const std::string& descripcion);
    
    
    // Otros métodos
    int tomarDanio(int danio);
    int curar(int cantidad);
    bool estaVivo() const;
    int critico() const;

    
};