#include <iostream>
using namespace std;

#include "Rectangulo.h"

///1) CONSIGNA: Crea una clase llamada Rectangulo que represente un rect ngulo. La
///clase debe tener dos atributos correspondientes a la base y altura.
///Implementa las siguientes metodos:
///-Getters y Setter de cada atributo.
///-calcularArea(): Devuelve el  rea del rect ngulo.
///-calcularPerimetro(): Devuelve el per¡metro del rect ngulo.

int main()
{
    Rectangulo objRectangulo(2, 4);

    cout << "Area: " << objRectangulo.calcularArea() << endl << endl;

    cout << "Perimetro: " << objRectangulo.calcularPerimetro() << endl << endl;

    return 0;
}
