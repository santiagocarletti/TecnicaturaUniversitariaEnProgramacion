#include <iostream>
using namespace std;

#include "Termometro.h"

Termometro::Termometro(float tempInicial, char unidadInicial){

    _temperatura = tempInicial;
    _unidad = unidadInicial;

}

float Termometro::getTemperatura(){

    return _temperatura;

}

void Termometro::setTemperatura(float temperatura){

    _temperatura = temperatura;

}

void Termometro::cambiarUnidad(char nuevaUnidad){

    if(nuevaUnidad != _unidad){
        _unidad = nuevaUnidad;

    if(nuevaUnidad=='c'){

        _temperatura = (_temperatura - 32) * 5/9;

    }else{

        _temperatura = (_temperatura * 9/5) + 32;

    }

    }

}

char Termometro::getUnidad(){

    return _unidad;

}
