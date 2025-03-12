#include <iostream>
using namespace std;

#include "Inmueble.h"

Inmueble::Inmueble(){}

void Inmueble::setInmueble(){

    cout << "Codigo de inmueble: ";
    cin >> codigoInmueble;
    cin.ignore();

    cout << "Calle: ";
    cin.getline(calle, 51);

    cout << "Numero civico: ";
    cin.getline(numero, 7);

    cout << "Localidad: ";
    cin.ignore();
    cin.getline(localidad, 51);

    cout << "Sup. en M2: ";
    cin >> superficieTotalM2;
    cin.ignore();

    cout << "Precio de venta: ";
    cin >> precioVenta;
    cin.ignore();

    cout << "Precio de Alquiler: ";
    cin >> precioAlquiler;
    cin.ignore();

    cout << "Apellido del due¤o: ";
    cin.getline(apellidoDuenio, 51);

    cout << "Nombre del due¤o: ";
    cin.getline(nombreDuenio, 51);

    cout << "DNI del due¤o: ";
    cin.getline(dniDuenio, 13);

    cout << "Celular del due¤o: ";
    cin.getline(celularDuenio, 16);

}

void Inmueble::mostrarInmueble(){

    cout << endl << "Cod. de inmueble: " << codigoInmueble << endl << "Calle: " << calle << endl << "Nro. Civico: " << numero << endl << "Localidad: " << localidad <<
    endl << "Sup. (M2); " << superficieTotalM2 << endl << "Precio vta.: $" << precioVenta << endl << "Precio Alq. $" << precioAlquiler << endl <<
    "Apellido del duenio: " << apellidoDuenio << endl << "Nombre del duenio: " << nombreDuenio << endl << "dni del duenio: " << dniDuenio << endl <<
    "Celular del duenio: " << celularDuenio << endl;

}
