#pragma once

class Termometro{

private:

    float _temperatura;
    char _unidad;

public:

    Termometro(float tempInicial, char unidadInicial);
    float getTemperatura();
    void setTemperatura(float temperatura);
    void cambiarUnidad(char nuevaUnidad);
    char getUnidad();

};
