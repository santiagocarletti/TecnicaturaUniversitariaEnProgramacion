#pragma once

#include "Inmueble.h"

class Terreno:public Inmueble{

private:

    float anchoMetros;
    float largoMetros;


public:

    Terreno();
    void setTerreno();
    void mostrarTerreno();

};
