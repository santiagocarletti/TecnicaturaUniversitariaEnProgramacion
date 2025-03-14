#include <iostream>

using namespace std;

///2) ENUNCIADO: Hacer un programa que solicite por teclado que se ingresen dos n£meros y
///luego guardarlos en dos variables distintas. A continuaci¢n se deben
///intercambiar mutuamente los valores en ambas variables y mostrarlos por
///pantalla.
///Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
///usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

int main()
{
    //cout << "Hello world!" << endl;

    int n1, n2, pr;

    cout << "Primer numero: ";

    cin >> n1;

    cout << "Segundo numero: ";

    cin >> n2;

    pr = n2;

    n2 = n1;

    n1 = pr;

    cout << n1 << endl;

    cout << n2;

    return 0;
}
