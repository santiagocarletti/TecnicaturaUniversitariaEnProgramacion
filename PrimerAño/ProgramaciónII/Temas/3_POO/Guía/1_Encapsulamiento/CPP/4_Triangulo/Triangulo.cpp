#include <iostream>
using namespace std;

#include "Triangulo.h"

void Triangulo::setLado(int numero, float valor){

    _vectorLongitudes[numero-1] = valor;

}


float Triangulo::getLado(int numero){

    if(numero >0 || numero <4){

        return _vectorLongitudes[numero-1];

    }else{

        return 0;

    }

}

int Triangulo::getTipo(){

    int cont=0;

    for(int a=0; a<3; a++){

        for(int b=0; b<3; b++){

            if(_vectorLongitudes[a]==_vectorLongitudes[b] && a!=b){cont++; }

        }


    }

    if(cont==6){

        return 1;

    }

    if(cont==2){

        return 2;

    }

    if(cont==0){

        return 3;

    }

}

bool Triangulo::isEscaleno(){

    if(Triangulo::getTipo()==3){

        return true;

    }else{

        return false;

    }

}

bool Triangulo::isIsosceles(){

    if(Triangulo::getTipo()==2){

        return true;

    }else{

        return false;

    }

}

bool Triangulo::isEquilatero(){

    if(Triangulo::getTipo()==1){

        return true;

    }else{

        return false;

    }

}
