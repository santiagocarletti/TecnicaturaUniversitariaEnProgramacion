#include <iostream>

using namespace std;

///14) ENUNCIADO: Hacer un programa para ingresar una lista de números que finaliza cuando se
///ingresa un cero, informar si todos están ordenados en forma creciente. En caso
///de haber dos números “empatados” considerarlos como crecientes.
///Por ejemplo si la lista fuera:
///Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
///Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto
///Ordenado”
///Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado"

int main()
{
    int num, ult=0;
    bool c=1;

    cout << "Numero: ";
    cin >> num;

    while(num!=0){

            if(ult==0){
                ult=num;
            }else if(num<ult){
                c=0;
            }else{
                ult=num;
            }


    cout << "Numero: ";
    cin >> num;

    //Sig. Cierra While
    }

    if(c){
        cout << "Conjunto ordenado" << endl;
    }else{
        cout << "Conjunto desordenado" << endl;
    }

    return 0;
}
