#include<iostream>
#include<string>
#include<unordered_map>
class Tipo {
private:
    std::string Nombre;
    std::unordered_map<std::string, int> efectividades;

public:
    Tipo(std::string nombre);

    //Getters
    std::string getNombre() const;
    int getEfectividad(const std::string& tipo) const;
    std::unordered_map<std::string, int> getEfectividades() const;
    //Setters
    void setNombre(const std::string& nombre);
    void setEfectividades(const std::unordered_map<std::string, int>& efectividadesMap);
    //otros métodos
    
    

};