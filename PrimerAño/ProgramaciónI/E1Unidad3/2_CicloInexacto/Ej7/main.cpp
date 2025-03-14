#include <iostream>

using namespace std;

///7) ENUNCIADO: Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
///ingresa un cero, luego informar el m ximo.Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar  M ximo 35.
///Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar  M ximo 55.
///Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar  M ximo -5.

int main()
{
    int num, maxi=0;

    cout << "Numero: ";
    cin >> num;

    while(num!=0){
        if(maxi==0){
            maxi=num;
        }else if(num>maxi){
            maxi=num;
        }

            cout << "Numero: " << endl;
            cin >> num;
    }

    cout << "Maximo: " << maxi;

    return 0;
}
