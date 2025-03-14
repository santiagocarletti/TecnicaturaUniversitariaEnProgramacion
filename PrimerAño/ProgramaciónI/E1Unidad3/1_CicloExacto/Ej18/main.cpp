#include <iostream>

using namespace std;

///18) ENUNCIADO: Hacer un programa para ingresar un n£mero entero y luego informar todos los
///divisores pares de ese n£mero.
///Ejemplo A. Si se ingresa 6 se listar : 2 y 6. Ejemplo B. Si se ingresa 8 se listar :
///2, 4 y 8. Ejemplo C. Si se ingresa 11 no se listar  nada.

int main()
{
    //cout << "Hello world!" << endl;

    int num, i;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    for(i=2; i<=num; i+=2){
        if(num%i==0){

                if(i%2==0){
                    cout << i << endl;
                }

        }
    }

    return 0;
}
