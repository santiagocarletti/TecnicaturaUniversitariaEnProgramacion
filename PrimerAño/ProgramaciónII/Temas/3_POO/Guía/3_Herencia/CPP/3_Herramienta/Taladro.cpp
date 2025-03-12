#include <iostream>
using namespace std;

#include "Taladro.h"
#include "Herramienta.h"

Taladro::Taladro(float potencia, float peso, float longitud) : Herramienta(peso, longitud){

    setPotencia(potencia);
    _nombre = "Taladro";

}

void Taladro::setPotencia(float potencia){

    _potencia = potencia;

}

float Taladro::getPotencia(){

    return _potencia;

}

void Taladro::mostrarInformacion(){

    cout << endl << "Nombre: " << _nombre << endl << "Peso: " << _peso << " kg." << endl << "Longitud: " << _longitud << " cm." << endl << "Potencia: " << _potencia << " watts." << endl;


}
