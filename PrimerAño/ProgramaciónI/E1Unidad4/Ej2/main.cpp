#include <iostream>

using namespace std;

///2) ENUNCIADO: Hacer un programa para ingresar una lista de 10 n£meros y luego informar
///cu ntos de los n£meros ingresados son primos. Se informa 1 resultado al final

int main()
{
    int num, i, con=0;

    for(i=0; i<10; i++){

        cout << "Ingrese numero: ";
        cin >> num;

        int j, con2=0;

        for(j=1; j<=num; j++){

            if(num%j==0){
                con2++;
            }
        }

        if(con2==2){
            con++;
        }
    }

    cout << con << " numeros primos";
    return 0;
}
