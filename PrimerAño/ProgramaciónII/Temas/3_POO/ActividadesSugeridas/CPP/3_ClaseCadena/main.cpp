#include <iostream>
using namespace std;

#include "Cadena.h"

///CONSIGNA: Hacer una clase de nombre cadena para almacenar palabras que ajuste su
///tama¤o a la cantidad de caracteres estrictamente necesarios

int main()
{
    Cadena palabra("HOLA");

    palabra.Mostrar();
    cout<<endl;
    cout << "TAMANIO " << palabra.getTamanio() << endl << endl;

    palabra.~Cadena();

	system("pause");

    return 0;
}
