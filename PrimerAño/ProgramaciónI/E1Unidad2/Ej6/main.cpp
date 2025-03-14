#include <iostream>

using namespace std;

///6) ENUNCIADO: Hacer un programa para ingresar por teclado tres n£meros y luego determinar e
///informar con una leyenda aclaratoria si los tres son iguales entre s¡, caso
///contrario no emitir nada.
///Tener en cuenta: Si A es igual a B y B es igual a C, entonces A y C son iguales.

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c;

    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;
    cout << "Ingrese tercer numero: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Los tres son iguales";
    }

    return 0;
}
