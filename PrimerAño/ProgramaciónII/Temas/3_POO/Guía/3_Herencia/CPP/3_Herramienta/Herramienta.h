#pragma once

class Herramienta{

protected:

    string _nombre;
    float _peso;
    float _longitud;
    float _precioDeCompra;

public:

    Herramienta(float peso, float logitud, float precioDeCompra=0);
    void setPeso(float peso);
    float getPeso();
    void setLongitud(float longitud);
    float getLongitud();
    void setPrecioDeCompra(float precioDeCompra);
    float getPrecioDeCompra();
    void mostrarInformacion();

};
