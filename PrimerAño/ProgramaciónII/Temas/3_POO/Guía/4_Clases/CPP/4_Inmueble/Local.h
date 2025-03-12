#pragma once

#include "Inmueble.h"

class Local:public Inmueble{

private:

    int antiguedadConstruccion;
    float superficieEstacionamientoM2;
    bool zonaComercial;


public:

    Local();
    void setLocal();
    void mostrarLocal();

};
