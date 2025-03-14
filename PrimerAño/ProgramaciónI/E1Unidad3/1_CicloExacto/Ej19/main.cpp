#include <iostream>

using namespace std;

///19) ENUNCIADO: Hacer un programa para ingresar un n£mero entero y luego informar la cantidad
///de divisores de ese n£mero.
///Ejemplo A. Si se ingresa 6 se listar : 4 divisores.
///Ejemplo B. Si se ingresa 9 se listar : 3 divisores.Ejemplo C. Si se ingresa 11 se listar : 2 divisores.

int main()
{
    //cout << "Hello world!" << endl;

    int num, i, con=0;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    for(i=1; i<=num; i++){

        if(num%i==0){
            con++;
        }

    }

    cout << "Cantidad de divisores: " << con << endl;

    return 0;
}
