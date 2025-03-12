#include <iostream>
using namespace std;

#include "Usuario.h"

Usuario::Usuario(string nombre, string clave, string rol){

    _nombre = nombre;
    _clave = clave;
    _rol = rol;

}

string Usuario::getNombre(){

    return _nombre;

}

void Usuario::setNombre(string nombre){

    _nombre = nombre;

}

string Usuario::getClave(){

    return _clave;

}

void Usuario::setClave(string clave){

    _clave = clave;

}

string Usuario::getRol(){

    return _rol;

}

void Usuario::setRol(string rol){

    _rol = rol;

}
