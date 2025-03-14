#include <iostream>

using namespace std;

///1) ENUNCIADO: Hacer un programa para ingresar una lista de 10 n£meros y luego informar
///cu ntos de los n£meros ingresados son perfectos. Se informa 1 resultado al final.

int main()
{
    int con=0, num, i;

    for(i=0; i<10; i++){

        int j, acu2=0;

        cout << "Ingrese numero: ";
        cin >> num;

        for(j=1; j<=num; j++){
            if(num%j==0){
                acu2+=j;
            }
        }

        if(acu2==num){
            con++;
        }

    }

    cout << "Se ingresaron " << con << " numeros perfectos.";

    return 0;
}
