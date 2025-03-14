#include <iostream>

using namespace std;

///4) ENUNCIADO: Hacer un programa para que el usuario ingrese un n£mero positivo y luego se
///muestren por pantalla los n£meros entre el 1 y el n£mero ingresado por el usuario.
///Ejemplo. Si el usuario ingresa 15, se mostrar n los n£meros entre el 1 y el 15.

int main()
{
    //cout << "Hello world!" << endl;

    int i;

    cout << "Ingrese un numero: " << endl;
    cin >> i;

    for(i; i>0; i--){
        cout << i << endl;
    }

    return 0;
}
