#include <iostream>

using namespace std;

///1) ENUNCIADO: Hacer un programa para ingresar por teclado un n£mero y luego emitir por
///pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
///Importante: Verifique que el programa emita UN SOLO CARTEL.

int main()
{
    //cout << "Hello world!" << endl;

    int n1;

    cout << "Ingrese un numero: ";
    cin >> n1;

    if (n1 == 0)
    {
        cout << "Cero";
    }
    else
    {
        if (n1 > 0)
        {
            cout << "Positivo";
        }
        else
        {
            cout << "Negativo";
        }
    }

    return 0;
}
