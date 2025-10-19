#include<Celda.h>
#include<vector>
#include<memory>

class Mapa{
private:
    std::vector<std::vector<std::shared_ptr<Celda>>>Campo;
    int Ancho;
    int Alto;    

public:
    //Constructor
    Mapa(int ancho,
        int alto);
    

    Mapa(std::vector<std::vector<std::shared_ptr<Celda>>>&campo,
        int ancho,
        int alto);
    
    //Getters
    std::vector<std::vector<std::shared_ptr<Celda>>> getCampo()const;
    int getAncho()const;
    int getAlto()const;

    //Setters
    void setCampo(const std::vector<std::vector<std::shared_ptr<Celda>>>& campo);
    void setAncho(int ancho);
    void setAlto(int alto);

    // Otros metodos


};