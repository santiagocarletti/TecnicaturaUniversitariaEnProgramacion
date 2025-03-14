#include <iostream>

using namespace std;

///7) ENUNCIADO: Hacer un programa para ingresar una lista de 10 n£meros, luego informar
///cu ntos son positivos, cu ntos son negativos, y cu ntos iguales a cero.
///Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.

int main()
{
    //cout << "Hello world!" << endl;

    int n = 0, c = 0, p = 0, num, i;


    for(i = 0; i<10; i++){

        cout << "Ingrese numero: " << endl;
        cin >> num;

        if(num < 0){
            n++;
        }else if(num > 0){
            p++;
        }else{
            c++;
        }
    }

    cout << "Neg.: " << n << ". Pos.: " << p << "Cero: " << c << endl;

    return 0;
}
