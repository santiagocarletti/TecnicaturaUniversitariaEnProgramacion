#pragma once

#include "Inmueble.h"

class Casa:public Inmueble{

private:

    int antiguedadConstruccion;
    float superficieCubiertaM2;
    int habitaciones;


public:

    Casa();
    void setCasa();
    void mostrarCasa();

};
