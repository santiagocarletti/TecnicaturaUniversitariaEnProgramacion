#include <iostream>

using namespace std;

///9) ENUNCIADO: Hacer un programa para ingresar tres n£meros y listar el m ximo de ellos

int main()
{
    //EJERCICIO 9

    int a, b, c, m;

    cout << "Primero: ";
    cin >> a;
    cout << "Segundo: ";
    cin >> b;
    cout << "Tercero: ";
    cin >> c;

    if (a > b && a > c) {
        m = a;
    } else if (b > a && b > c) {
        m = b;
    } else {
            m = c;
    }

    cout << "El mayor es: " << m;

    return 0;
}
