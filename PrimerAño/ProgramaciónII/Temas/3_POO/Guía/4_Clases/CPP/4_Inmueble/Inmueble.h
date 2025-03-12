#pragma once

class Inmueble{

protected:

    int codigoInmueble;
    char calle[51];
    char numero[7];
    char localidad[51];
    float superficieTotalM2;
    float precioVenta=0;
    float precioAlquiler=0;
    char apellidoDuenio[51];
    char nombreDuenio[51];
    char dniDuenio[13];
    char celularDuenio[16];

public:

    Inmueble();
    void setInmueble();
    void mostrarInmueble();

};
