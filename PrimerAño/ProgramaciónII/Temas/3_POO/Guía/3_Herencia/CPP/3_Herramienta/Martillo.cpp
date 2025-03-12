#include <iostream>
using namespace std;

#include "Martillo.h"

Martillo::Martillo(string tipoDeCabeza, float peso, float longitud) : Herramienta(peso, longitud){

    setTipoDeCabeza(tipoDeCabeza);
    _nombre = "Martillo";

}

void Martillo::setTipoDeCabeza(string tipoDeCabeza){

    _tipoDeCabeza = tipoDeCabeza;

}

string Martillo::getTipoDeCabeza(){

    return _tipoDeCabeza;

}

void Martillo::mostrarInformacion(){

    cout << endl << "Nombre: " << _nombre << endl << "Peso: " << _peso << " kg." << endl << "Longitud: " << _longitud << " cm." << endl << "Tipo de cabeza: " << _tipoDeCabeza << endl;


}
