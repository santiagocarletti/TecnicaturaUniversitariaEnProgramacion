#include <iostream>
using namespace std;

#include "Herramienta.h"

Herramienta::Herramienta(float peso, float longitud, float precioDeCompra){

    setPeso(peso);
    setLongitud(longitud);
    setPrecioDeCompra(precioDeCompra);

}

void Herramienta::setPeso(float peso){

    _peso = peso;

}

float Herramienta::getPeso(){

    return _peso;

}

void Herramienta::setLongitud(float longitud){

    _longitud = longitud;

}

float Herramienta::getLongitud(){

    return _longitud;

}

void Herramienta::setPrecioDeCompra(float precioDeCompra){

    _precioDeCompra = precioDeCompra;

}

float Herramienta::getPrecioDeCompra(){

    return _precioDeCompra;

}

void Herramienta::mostrarInformacion(){

    cout << endl << "Nombre: " << _nombre << endl << "Peso: " << _peso << " kg." << endl << "Longitud: " << _longitud << " cm." << endl << "Precio de compra: $" << _precioDeCompra << endl;

}
