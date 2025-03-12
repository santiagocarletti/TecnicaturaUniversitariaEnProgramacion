#pragma once

#include "Inmueble.h"

class Departamento:public Inmueble{

private:

    int antiguedadConstruccion;
    float superficieCubiertaM2;
    int habitaciones;


public:

    Departamento();
    void setDepartamento();
    void mostrarDepartamento();

};
