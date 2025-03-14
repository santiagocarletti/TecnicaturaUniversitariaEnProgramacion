#include <iostream>

using namespace std;

///7) ENUNCIADO: Hacer un programa para ingresar por teclado tres n£meros e informar con una
///leyenda aclaratoria si los tres son todos distintos entre s¡, caso contrario no emitir nada.
///Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A
///y C sean distintos. Ejemplo: A=8, B=6 y C=8

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, c;

    cout << "Primero: ";
    cin >> a;
    cout << "Segundo: ";
    cin >> b;
    cout << "Tercero: ";
    cin >> c;

    if (a != b && a != c && b != c) {
        cout << "Todos distintos";
    }

    return 0;
}
