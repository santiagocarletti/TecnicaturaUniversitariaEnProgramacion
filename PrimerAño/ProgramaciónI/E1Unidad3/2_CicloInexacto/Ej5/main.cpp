#include <iostream>

using namespace std;

///5) ENUNCIADO: Hacer un programa para que el usuario ingrese dos n£meros y luego el
///programa muestre por pantalla los n£meros entre el menor y el mayor de
///ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrar n los n£meros entre el
///3 y el 15; y si el usuario ingresa 25 y 8, se mostrar n los n£meros entre el 8 y el 25.

int main()
{
    int n1, n2, con=0, aux;

    cout << "Ingrese 1er numero: " << endl;
    cin >> n1;
    cout << "Ingrese 2do numero: " << endl;
    cin >> n2;

    if(n1>n2){
        aux=n2;
        n2=n1;
        n1=aux;
    }

    while(n1<=n2)
    {
        cout << n1 << endl;
        n1++;
    }

    return 0;
}
