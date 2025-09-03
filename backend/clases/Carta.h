#include<iostream>
#include<string>
#include<vector>
class Carta{
private:
    int Id;
    std::string Nombre;
    std::vector<std::string>Tipos;
    int HpMax;
    int Hp;
    int Ataque;
    int AtaqueEspecial;
    int Defensa;
    int DefensaEspecial;
    std::string Habilidad;
    std::vector<std::string>Movimientos;
    std::string Miniatura;
    std::string Descripcion;


public:
    Carta(int id,
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
        const std::string& descripcion);


    // Getters
    int getId() const;
    std::string getNombre() const;
    std::vector<std::string> getTipos() const;
    int getHpMax() const;
    int getHp() const;
    int getAtaque() const;
    int getAtaqueEspecial() const;
    int getDefensa() const;
    int getDefensaEspecial() const;
    std::string getHabilidad() const;
    std::vector<std::string> getMovimientos() const;
    std::string getMiniatura() const;
    std::string getDescripcion() const;


    // Setters
    void setHp(int hp);
    void setAtaque(int ataque);
    void setDefensa(int defensa);
    void setAtaqueEspecial(int ataqueEspecial);
    void setDefensaEspecial(int defensaEspecial);
    void setHabilidad(const std::string& habilidad);
    void setMovimientos(const std::vector<std::string>& movimientos);
    void setMiniatura(const std::string& miniatura);
    void setDescripcion(const std::string& descripcion);
    
    
    // Otros métodos
    int tomarDanio(int danio);
    int curar(int cantidad);
    bool estaVivo() const;
    int critico() const;

    
};