#include<iostream>


class Celda{
private:
    std::string Nombre;
    bool Transitable;
    bool Destructible;
public:
    //Constructor
    Celda(const std::string& nombre,
        bool transitable,
        bool destructible
    );


    //Getters
    std::string getNombre()const;
    bool getTransitable()const;
    bool getDestructible()const;


    //Setters
    void setNombre(const std::string& nombre);
    void setTransitable(bool transitable);
    void setDestructible(bool destructible);


    // Otros metodos
};