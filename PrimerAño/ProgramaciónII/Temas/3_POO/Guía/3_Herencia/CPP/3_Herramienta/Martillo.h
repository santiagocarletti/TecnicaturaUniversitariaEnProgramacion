#pragma once
#include "Herramienta.h"

class Martillo:public Herramienta{

private:

    string _tipoDeCabeza;

public:

    Martillo(string tipoDeCabeza, float peso, float longitud);
    void setTipoDeCabeza(string tipoDeCabeza);
    string getTipoDeCabeza();
    void mostrarInformacion();

};
