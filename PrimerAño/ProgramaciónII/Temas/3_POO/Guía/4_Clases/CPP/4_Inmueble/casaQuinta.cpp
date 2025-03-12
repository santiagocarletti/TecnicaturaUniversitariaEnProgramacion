#include <iostream>
using namespace std;

#include "CasaQuinta.h"

CasaQuinta::CasaQuinta(){}

void CasaQuinta::setCasaQuinta(){

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

void CasaQuinta::mostrarCasaQuinta(){

    Inmueble::mostrarInmueble();

    cout << endl << "Antiguedad de construccion: " << antiguedadConstruccion << endl << "Superficie cubierta (M2): " << superficieCubiertaM2 << endl <<
    "Habitaciones: " << habitaciones << endl;

}
