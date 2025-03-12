#pragma once

#include "Inmueble.h"

class CasaQuinta:public Inmueble{

private:

    int antiguedadConstruccion;
    float superficieCubiertaM2;
    int habitaciones;


public:

    CasaQuinta();
    void setCasaQuinta();
    void mostrarCasaQuinta();

};
