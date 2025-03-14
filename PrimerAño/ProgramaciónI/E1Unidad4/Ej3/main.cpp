#include <iostream>

using namespace std;

///3) ENUNCIADO: Hacer un programa para ingresar una lista de n£meros que finaliza cuando se
///ingresa un cero y luego informar el porcentaje de n£meros primos y el
///porcentaje de n£meros no primos. Se informan 2 resultados al final.

int main()
{
    int num, con=0, conpri=0, i;

    cout << "Ingresar numero: ";
    cin >> num;

    while(num!=0){

            int condos=0;

        con++;

        for(i=1; i<=num; i++){

            if(num%i==0){

                condos++;

            }

        }

        if(condos==2){
            conpri++;
        }

            cout << "Ingresar numero: ";
            cin >> num;
    }

    cout << "Porc. nros. primos: " << conpri * 100 / con << " %" << endl;
    cout << "Porc. nros. no primos: " << 100 - (conpri * 100 / con) << " %" << endl;

    return 0;
}
