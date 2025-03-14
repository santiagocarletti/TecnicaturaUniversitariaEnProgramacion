#include <iostream>

using namespace std;

///6) ENUNCIADO: Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
///ingresa un cero, luego informar cu ntos son positivos y cu ntos son negativos.
///Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar  Positivos: 4 Negativos: 2.
///Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.

int main()
{
    int n, pos=0, neg=0;

    cout << "Numero: " << endl;
    cin >> n;

    while(n!=0){
        if(n<0){
            neg++;
        }else{
            pos++;
        }

        cout << "Numero: " << endl;
        cin >> n;
    }

        cout << pos << " Positivos" << endl;
        cout << neg << " Negativos" << endl;

    return 0;
}
