#include <iostream>
using namespace std;

#include "Departamento.h"

Departamento::Departamento(){}

void Departamento::setDepartamento(){

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

void Departamento::mostrarDepartamento(){

    Inmueble::mostrarInmueble();

    cout << endl << "Antiguedad de construccion: " << antiguedadConstruccion << endl << "Superficie cubierta (M2): " << superficieCubiertaM2 << endl <<
    "Habitaciones: " << habitaciones << endl;

}
