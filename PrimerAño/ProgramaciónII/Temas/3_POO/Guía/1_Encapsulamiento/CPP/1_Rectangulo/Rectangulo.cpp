#include "Rectangulo.h"

Rectangulo::Rectangulo(int base, int altura){

    setBase(base);
    setAltura(altura);

}

void Rectangulo::setBase(int base){

    _base = base;

}

int Rectangulo::getBase(){

    return _base;

}

void Rectangulo::setAltura(int altura){

    _altura = altura;

}

int Rectangulo::getAltura(){

    return _altura;

}

int Rectangulo::calcularArea(){

    int area;

    area = _base * _altura;

    return area;

}

int Rectangulo::calcularPerimetro(){

    int perimetro;

    perimetro = (_base * 2) + (_altura * 2);

    return perimetro;

}
