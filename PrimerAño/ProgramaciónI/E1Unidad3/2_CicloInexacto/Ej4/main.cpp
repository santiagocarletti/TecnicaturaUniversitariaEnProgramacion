#include <iostream>

using namespace std;

///4) ENUNCIADO: Hacer un programa para que el usuario ingrese un n£mero positivo y que luego
///se muestre por pantalla los n£meros entre el 1 y el n£mero ingresado por el
///usuario. Ejemplo. Si el usuario ingresa 15, se mostrar n los n£meros entre el 1 y el 15.

int main()
{
    int num, con=1;

    cout << "Ingrese numero: " << endl;
    cin >> num;

    while(con<=num)
    {
        cout << con << endl;
        con++;
    }

    return 0;
}
