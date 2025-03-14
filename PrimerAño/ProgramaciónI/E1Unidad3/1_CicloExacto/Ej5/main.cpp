#include <iostream>

using namespace std;

///5) ENUNCIADO: Hacer un programa para que el usuario ingrese dos n£meros y luego el
///programa muestre por pantalla los n£meros entre el menor y el mayor de ambos.
///Ejemplo, si el usuario ingresa 3 y 15, se mostrar n los n£meros entre el 3 y el 15
///y si el usuario ingresa 25 y 8, se mostrar n los n£meros entre el 8 y el 25.

int main()
{
    //cout << "Hello world!" << endl;

    int a, b, i;

    cout << "Ingrese 1er numero: " << endl;
    cin >> a;

    cout << "Ingrese 2do numero: " << endl;
    cin >> b;

    if(a < b){
        i = a+1;
    }else{
        i = b+1;
    }

    for(i; i<b; i++){
        cout << i << endl;
    }

    return 0;
}
