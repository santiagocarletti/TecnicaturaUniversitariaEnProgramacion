#include <iostream>
using namespace std;

#include "Casa.h"

Casa::Casa(){}

void Casa::setCasa(){

    Inmueble::setInmueble();

    cout << "Antiguedad de construccion: ";
    cin >> antiguedadConstruccion;
    cin.ignore();

    cout << "Superficie cubierta (M2): ";
    cin >> superficieCubiertaM2;
    cin.ignore();

    cout << "Habitaciones: ";
    cin >> habitaciones;
    cin.ignore();

}

void Casa::mostrarCasa(){

    Inmueble::mostrarInmueble();

    cout << endl << "Antiguedad de construccion: " << antiguedadConstruccion << endl << "Superficie cubierta (M2): " << superficieCubiertaM2 << endl <<
    "Habitaciones: " << habitaciones << endl;

}
