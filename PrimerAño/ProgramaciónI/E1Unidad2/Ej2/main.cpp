#include <iostream>

using namespace std;

///2) ENUNCIADO: Hacer un programa para ingresar por teclado dos n£meros y luego informar por
///pantalla con un cartel aclaratorio si el primer n£mero es m£ltiplo del segundo.

int main()
{
    //cout << "Hello world!" << endl;

    int a, b;

    cout << "Ingrese 1º numero: ";
    cin >> a;

    cout << "Ingrese 2º numero: ";
    cin >> b;

    if (b % a == 0) {
        cout << "Multiplo";
    } else {
        cout << "No multiplo";
    }

    return 0;
}
