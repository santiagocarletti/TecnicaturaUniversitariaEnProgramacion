#include <iostream>
using namespace std;

#include "Terreno.h"

Terreno::Terreno(){}

void Terreno::setTerreno(){

    Inmueble::setInmueble();

    cout << "Ancho en mts.: ";
    cin >> anchoMetros;
    cin.ignore();

    cout << "Largo en mts.: ";
    cin >> largoMetros;
    cin.ignore();

}

void Terreno::mostrarTerreno(){

    Inmueble::mostrarInmueble();

    cout << endl << "Ancho en metros: " << anchoMetros << endl << "Largo en metros: " << largoMetros << endl;

}
