#include <iostream>

using namespace std;

///11) ENUNCIADO: Hacer un programa para ingresar una lista de 10 números, luego informar el
///máximo y el mínimo.
///Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
///Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
///Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
///Observe que los tres ejemplos dejan en claro que la suposición de que el
///máximo “seguramente” es un positivo y el mínimo “seguramente” es un
///negativo, queda totalmente descartada.

int main()
{
    //cout << "Hello world!" << endl;

        int num, maxi, mini, i;

    for(i = 0; i<10; i++){
        cout << "ingrese numero: " << endl;
        cin >> num;

        if(i == 0){
            maxi = num;
            mini = num;
        }else{

                if(num > maxi){
                    maxi = num;
                }else if(num < mini){
                    mini = num;
                }
        }

    }
        cout << "El numero maximo es: " << maxi << " y el minimo es: " << mini << endl;

    return 0;
}
