#include <iostream>

using namespace std;

///10) ENUNCIADO: Hacer un programa para ingresar una lista de números que finaliza cuando se
///ingresa un cero, luego informar el máximo y el mínimo.
///Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
///Se listará Máximo 42 Mínimo -15.
///Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
///Se listará Máximo 42 Mínimo 5.
///Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
///Se listará Máximo -5 Mínimo -42.
///Observe que los ejemplos B y C dejan en claro que la suposición de que el
///máximo “seguramente” es un positivo y el mínimo “seguramente” es un negativo, es incorrecta.

int main()
{
    int n, ma=0, mi=0, aux;

    cout << "Numero: ";
    cin >> n;

    while(n!=0){

        if(mi==0){
            mi=n;
        }else if(ma==0){
            ma=n;
        }else if(mi>ma){
            aux=ma;
            ma=mi;
            mi=aux;
        }

        if(n<mi){
            mi=n;
        }else if(n>ma){
            ma=n;
        }

        cout << "Numero: ";
        cin >> n;
    }

    cout << "Maximo: " << ma << endl;
    cout << "Minimo: " << mi << endl;

    return 0;
}
