#include <iostream>

using namespace std;

///3) ENUNCIADO: Hacer un programa para ingresar por teclado un n£mero y luego informar por
///pantalla con un cartel aclaratorio si el mismo es par o impar.

int main()
{
    //cout << "Hello world!" << endl;

    int n;

    cout << "Ingrese numero";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Par";
    } else {
        cout << "Impar";
    }


    return 0;
}
