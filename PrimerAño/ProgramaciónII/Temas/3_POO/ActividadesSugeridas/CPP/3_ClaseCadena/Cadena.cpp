#include <iostream>
using namespace std;
# include<cstring>

#include "Cadena.h"

Cadena::Cadena(const char *texto){
    tam=strlen(texto)+1;
    p=new char[tam];
    if(p==nullptr)exit(1);
    strcpy(p, texto);
    p[tam-1]='\0';
}

void Cadena::Mostrar(){

    cout << p << endl;

}

int Cadena::getTamanio(){

    return tam;

}

Cadena::~Cadena(){
    cout << "SE MURIO EL OBJETO :-(" << endl << endl;
    delete []p;
}
