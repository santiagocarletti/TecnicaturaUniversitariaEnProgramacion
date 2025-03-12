#include <cstdlib>
#include <ctime>
#include "Dado.h"

Dado::Dado(){

    srand(time(0));

    int randomNum = rand() % 6 + 1;

    _valor = randomNum;

}

int Dado::getValor(){

    return _valor;

}

bool Dado::esMinimo(){

    return (_valor==1);

}

bool Dado::esMaximo(){

    return (_valor==6);

}

void Dado::lanzar(){

    srand(time(0));

    int randomNum = rand() % 6 + 1;

    _valor = randomNum;

}
