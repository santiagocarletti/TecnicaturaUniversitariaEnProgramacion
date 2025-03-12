#include <iostream>
using namespace std;

#include "Alumno.h"

Alumno::Alumno(string nombre, int legajo){

    _nombre = nombre;
    _legajo = legajo;

}

Alumno::Alumno(){

    _nombre = "vacio";
    _legajo = 0;

}

void Alumno::setNombre(string nombre){

    _nombre = nombre;

}

string Alumno::getNombre(){

    return _nombre;

}

void Alumno::setLegajo(int legajo){

    _legajo = legajo;

}

int Alumno::getLegajo(){

    return _legajo;

}
