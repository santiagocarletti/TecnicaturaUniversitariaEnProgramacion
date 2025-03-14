#include <iostream>

using namespace std;

///8) ENUNCIADO: Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
///teclado la longitud de los tres lados de un tri ngulo y luego listar qu‚ tipo de
///tri ngulo es:
///- Equil tero: si los tres lados son iguales.
///- Is¢sceles: si dos de los tres lados son iguales.
///- Escaleno: si los tres lados son distintos entre s¡.

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c;

    cout << "Ingrese primer lado: ";
    cin >> a;
    cout << "Ingrese segundo lado: ";
    cin >> b;
    cout << "Ingrese tercer lado: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Equilatero (tres lados iguales)";
    } else
        if (a == b || a == c || b == c) {
            cout << "Isosceles (dos lados iguales)";
        } else {
        cout << "Escaleno (todos distintos)";
    }

    return 0;
}
