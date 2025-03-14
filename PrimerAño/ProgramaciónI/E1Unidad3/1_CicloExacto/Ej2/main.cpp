#include <iostream>

using namespace std;

///2) ENUNCIADO: Hacer un programa para mostrar por pantalla los n£meros del 1 al 20 salteando
///de a 3 valores. Es decir: 1, 4, 7, 10, 13, 16, 19.
///Importante: El programa no tiene ning£n ingreso de datos.

int main()
{
    //cout << "Hello world!" << endl;

    int i;

    for(i = 1; i<=20; i+=3){
        cout << i << endl;
    }

    return 0;
}
