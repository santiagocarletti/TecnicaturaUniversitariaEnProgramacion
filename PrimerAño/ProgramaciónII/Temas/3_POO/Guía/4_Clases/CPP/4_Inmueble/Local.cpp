#include <iostream>
using namespace std;

#include "Local.h"

Local::Local(){}

void Local::setLocal(){

    Inmueble::setInmueble();

    cout << "Antiguedad de construccion: ";
    cin >> antiguedadConstruccion;
    cin.ignore();

    cout << "Superficie estacionamiento (M2): ";
    cin >> superficieEstacionamientoM2;
    cin.ignore();

    cout << "Zona comercial (0/1): ";
    cin >> zonaComercial;
    cin.ignore();

}

void Local::mostrarLocal(){

    Inmueble::mostrarInmueble();

    cout << endl << "Antiguedad de construccion: " << antiguedadConstruccion << endl << "Superficie estacionamiento (M2): " << superficieEstacionamientoM2 << endl <<
    "Zona comercial: " << zonaComercial << endl;

}
