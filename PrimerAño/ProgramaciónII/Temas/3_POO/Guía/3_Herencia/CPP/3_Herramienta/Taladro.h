#pragma once

#include "Herramienta.h"

class Taladro:public Herramienta{

protected:

    float _potencia;

public:

    Taladro(float potencia, float peso, float longitud);
    void setPotencia(float potencia);
    float getPotencia();
    void mostrarInformacion();

};
