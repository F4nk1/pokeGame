#include<iostream>
#include<string>

class Habilidad{
private:
    int IdHabilidad;
    std::string Nombre;
    std::string Descripcion;

public:
    Habilidad(int idHabilidad,
        const std::string&nombre,
        const std::string&descripcion);
    
    //Getters
    int getId() const;
    std::string getNombre()const;
    std::string getDescripcion()const;

    //Setters
    void setId(int id);
    void setNombre(const std::string& Nombre);
    void setDescripcion(const std::string& Descripcion);

    //Otros metodos


};