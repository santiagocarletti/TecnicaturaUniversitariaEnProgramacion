#include <iostream>
using namespace std;
#include <cmath>

#include "Punto.h"

Punto::Punto(float x, float y){

    _x = x;
    _y = y;

}

Punto::Punto(){

    _x = 0;
    _y = 0;

}

float Punto::getX(){

    return _x;

}

void Punto::setX(float x){

    _x = x;

}

float Punto::getY(){

    return _y;

}

void Punto::setY(float y){

    _y = y;

}

float Punto::calcularDistancia(Punto otroPunto){

    return sqrt(pow(otroPunto.getX() - _x, 2) + pow(otroPunto.getY() - _y, 2));

}

void Punto::mover(float deltaX, float deltaY){

    _x += deltaX;
    _y += deltaY;

}
